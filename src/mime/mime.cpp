#include <mime/mime.hpp>

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
	}    // namespace details

	mime_result from_type(const char *type, int32 index, const char **dst) {
		const mime_ext* exts = nullptr;
		auto result = from_type(type, &exts);
		if (result == MIME_SUCCESS) {
			if (index < exts->size) {
				auto ext_id = exts->extensions[index];
				*dst = details::extensions[ext_id];
				return MIME_SUCCESS;
			}

			*dst = nullptr;
			return MIME_OUT_OF_RANGE;
		}

		*dst = nullptr;
		return MIME_NO_MATCH;
	}

	mime_result from_type(const char *type, const mime_ext **dst) {
		int32 id;
		if (details::bin_search(type, details::types, details::types_size, &id)) {
			*dst = details::types_to_ext + id;
			return MIME_SUCCESS;
		}

		*dst = nullptr;
		return MIME_NO_MATCH;
	}

	mime_result from_ext(const char *extensions, const char **dst) {
		int32 id;
		if (details::bin_search(extensions, details::extensions, details::extensions_size, &id)) {
			auto &mime_type = details::ext_to_mime_types[id];
			*dst = details::types[mime_type];
			return MIME_SUCCESS;
		}

		*dst = nullptr;
		return MIME_NO_MATCH;
	}
}    // namespace mime
