#include <mime/mime.hpp>
#include <cctype>

namespace {
	static const mime::source *primary_src{ nullptr };

	static const mime::source *default_source() {
		static const mime::source src{
			mime::details::default_types_size,
			mime::details::default_types,
			mime::details::default_extensions_size,
			mime::details::default_extensions,
			mime::details::default_charsets_size,
			mime::details::default_charsets,
			mime::details::default_ext_to_types_size,
			mime::details::default_ext_to_types,
			mime::details::default_types_to_ext_size,
			mime::details::default_types_to_ext,
			mime::details::default_types_to_charset_size,
			mime::details::default_types_to_charset,
		};

		return &src;
	}

	static const mime::source *primary_source() {
		return primary_src;
	}
}    // namespace

namespace mime {
	namespace details {
		namespace str {
			constexpr int32 case_sensitive_comp(uint8 l, uint8 r) {
				return l == r ? 0 : (l < r ? -1 : 1);
			}

			constexpr int32 case_insensitive_comp(uint8 lhs, uint8 rhs) {
				return lhs == rhs ? 0 : ((lhs | 32) < (rhs | 32) ? -1 : 1);
			}

			using str_comparer = int32 (*)(uint8, uint8);
			constexpr int32 strcmp(const char *lhs, const char *rhs, str_comparer cmp) {
				if (lhs == rhs) {
					return 0;
				}

				for (; *lhs && *rhs && cmp(*lhs, *rhs) == 0; ++lhs, ++rhs) {
					// just loop until either string ends or they aren't equal
				}

				return cmp(*lhs, *rhs);
			}

			constexpr const char *strrchr(const char *str, char ch) {
				const char *end = str;
				const char *f = nullptr;
				for (; *end != '\0'; ++end) {
					if (*end == ch) {
						f = end;
					}
				}

				return f;
			}
		}    // namespace str

		bool bin_search(const char *key, const char *const *items, uint32 size, int32 *out) {
			using ptr_t = const char *const *;

			ptr_t pivot = items + size / 2;
			ptr_t min = items;
			ptr_t max = items + (size - 1);

			int32 cmp = str::strcmp(key, *pivot, str::case_insensitive_comp);
			while (cmp != 0 && min < max) {
				if (cmp < 0) {
					max = pivot;
				}
				else {
					min = pivot;
				}
				pivot = min + (max - min) / 2;
				cmp = str::strcmp(key, *pivot, str::case_insensitive_comp);
				if (pivot == min || pivot == max) {
					break;
				}
			}

			if (cmp == 0) {
				*out = int32(pivot - items);
				return true;
			}

			*out = -1;
			return false;
		}

		mime_result charset(const char *type, const source *src, const char **dst) {
			int32 id;
			if (src->types && bin_search(type, src->types, src->types_size, &id)) {
				int32 charset = src->types_to_charset[id];
				if (charset != UNSET_CHARSET) {
					*dst = src->charsets[charset];
					return MIME_SUCCESS;
				}
			}

			*dst = nullptr;
			return MIME_NO_MATCH;
		}

		mime_result extension(const char *type, const source *src, const mime_ext **dst) {
			int32 id;
			if (src->types && bin_search(type, src->types, src->types_size, &id)) {
				*dst = src->types_to_ext + id;
				return MIME_SUCCESS;
			}

			*dst = nullptr;
			return MIME_NO_MATCH;
		}

		mime_result extension(const char *type, int32 index, const source *src, const char **dst) {
			const mime_ext *exts = nullptr;
			auto result = extension(type, src, &exts);
			if (result == MIME_SUCCESS) {
				if (index < exts->size) {
					auto ext_id = exts->extensions[index];
					*dst = src->extensions[ext_id];
					return MIME_SUCCESS;
				}

				*dst = nullptr;
				return MIME_OUT_OF_RANGE;
			}

			*dst = nullptr;
			return MIME_NO_MATCH;
		}

		mime_result type(const char *extensions, const source *src, const char **dst) {
			int32 id;
			if (src->extensions && bin_search(extensions, src->extensions, src->extensions_size, &id)) {
				auto &mime_type = src->ext_to_types[id];
				*dst = src->types[mime_type];
				return MIME_SUCCESS;
			}

			*dst = nullptr;
			return MIME_NO_MATCH;
		}

		constexpr const char *find_extension(const char *str) {
			const char *sub_str = str::strrchr(str, '/');
			if (sub_str) {
				str = sub_str + 1;
			}
			else {
				sub_str = str::strrchr(str, '\\');
				if (sub_str) {
					str = sub_str + 1;
				}
			}

			sub_str = str::strrchr(str, '.');
			if (str == sub_str) {
				// prevent hidden files from being considered an extension e.g., folder/.filename
				return nullptr;
			}

			return sub_str ? sub_str + 1 : nullptr;
		}

		mime_result type_index(const char *type, const source *src, int32 *dst) {
			if (src->types && bin_search(type, src->types, src->types_size, dst)) {
				return MIME_SUCCESS;
			}
			return MIME_NO_MATCH;
		}
	}    // namespace details

	void set_source(const source *type) {
		primary_src = type;
	}

	mime_result charset(const char *type, const char **dst) {
		if (auto src = ::primary_source()) {
			auto result = details::charset(type, src, dst);
			if (result == MIME_SUCCESS) {
				return MIME_SUCCESS;
			}
		}

		return details::charset(type, ::default_source(), dst);
	}

	mime_result extension(const char *type, int32 index, const char **dst) {
		if (auto src = ::primary_source()) {
			auto result = details::extension(type, index, src, dst);
			if (result == MIME_SUCCESS) {
				return MIME_SUCCESS;
			}
		}

		return details::extension(type, index, ::default_source(), dst);
	}

	mime_result type(const char *extensions, const char **dst) {
		if (auto src = ::primary_source()) {
			auto result = details::type(extensions, src, dst);
			if (result == MIME_SUCCESS) {
				return MIME_SUCCESS;
			}
		}

		return details::type(extensions, ::default_source(), dst);
	}

	mime_result typef(const char *file, const char **dst) {
		if (auto ext = details::find_extension(file)) {
			return type(ext, dst);
		}

		return MIME_NO_FILE_EXT;
	}

	mime_result content_type(const char *type, char *write_to, int32 *written_size) {
		// find index of type
		// using index get type string
		// using index get charset string
		const char *set;
		charset(type, &set);

		// format as defined by
		// https://datatracker.ietf.org/doc/html/rfc2045#section-5.1
		// https://datatracker.ietf.org/doc/html/rfc2046#section-4.1.2
		// e.g. if charset is present "Content-Type:{type}; charset={char_set}" otherwise "Content-Type:{type}"
		const char *cursor = "Content-Type: ";
		int32 count = 0;
		for (; *cursor != '\0'; ++cursor, ++write_to, ++count) {
			*write_to = *cursor;
		}

		cursor = type;
		for (; *cursor != '\0'; ++cursor, ++write_to, ++count) {
			*write_to = *cursor;
		}

		if (set) {
			cursor = "; charset=";
			for (; *cursor != '\0'; ++cursor, ++write_to, ++count) {
				*write_to = *cursor;
			}

			cursor = set;
			for (; *cursor != '\0'; ++cursor, ++write_to, ++count) {
				*write_to = char(tolower(*cursor));
			}
			*write_to = '\0';
		}
		else {
			*write_to = '\0';
		}

		if (written_size != nullptr) {
			*written_size = count;
		}

		return MIME_SUCCESS;
	}
}    // namespace mime
