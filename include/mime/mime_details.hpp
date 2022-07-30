#if !defined(TCM_MIME_DETAILS_HPP__)
#	define TCM_MIME_DETAILS_HPP__

#	include "fwd.hpp"

namespace mime {
	struct mime_ext {
		const int *extensions;
		int32 size;
	};

	namespace details {
		extern const int32 ext_to_types_size;
		extern const int ext_to_mime_types[];

		extern const int32 charsets_size;
		extern const char *charsets[];

		extern const int32 extensions_size;
		extern const char *extensions[];

		extern const int32 types_size;
		extern const char *types[];

		extern const int32 types_to_ext_size;
		extern const mime_ext types_to_ext[];
	}    // namespace details
}    // namespace mime

#endif    // TCM_MIME_DETAILS_HPP__