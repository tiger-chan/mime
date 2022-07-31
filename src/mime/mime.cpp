#include <mime/mime.hpp>

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
			mime::details::default_types_to_ext
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

		mime_result from_type(const char *type, const source *src, const mime_ext **dst) {
			int32 id;
			if (src->types && bin_search(type, src->types, src->types_size, &id)) {
				*dst = src->types_to_ext + id;
				return MIME_SUCCESS;
			}

			*dst = nullptr;
			return MIME_NO_MATCH;
		}

		mime_result from_type(const char *type, int32 index, const source *src, const char **dst) {
			const mime_ext *exts = nullptr;
			auto result = from_type(type, src, &exts);
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

		mime_result from_ext(const char *extensions, const source *src, const char **dst) {
			int32 id;
			if (src->extensions && bin_search(extensions, src->extensions, src->extensions_size, &id)) {
				auto &mime_type = src->ext_to_types[id];
				*dst = src->types[mime_type];
				return MIME_SUCCESS;
			}

			*dst = nullptr;
			return MIME_NO_MATCH;
		}
	}    // namespace details

	void set_source(const source *type) {
		primary_src = type;
	}

	mime_result from_type(const char *type, int32 index, const char **dst) {
		if (auto src = ::primary_source()) {
			auto result = details::from_type(type, index, src, dst);
			if (result == MIME_SUCCESS) {
				return MIME_SUCCESS;
			}
		}

		return details::from_type(type, index, ::default_source(), dst);
	}

	mime_result from_type(const char *type, const mime_ext **dst) {
		if (auto src = ::primary_source()) {
			auto result = details::from_type(type, src, dst);
			if (result == MIME_SUCCESS) {
				return MIME_SUCCESS;
			}
		}

		return details::from_type(type, ::default_source(), dst);
	}

	mime_result from_ext(const char *extensions, const char **dst) {
		if (auto src = ::primary_source()) {
			auto result = details::from_ext(extensions, src, dst);
			if (result == MIME_SUCCESS) {
				return MIME_SUCCESS;
			}
		}

		return details::from_ext(extensions, ::default_source(), dst);
	}
}    // namespace mime
