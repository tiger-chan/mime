#if !defined(TCM_MIME_DETAILS_HPP__)
#	define TCM_MIME_DETAILS_HPP__

#	include "fwd.hpp"

namespace mime {
	struct mime_ext {
		const int *extensions;
		int32 size;
	};

	namespace details {
		static const int32 UNSET_CHARSET = -1;
		extern const int32 default_ext_to_types_size;
		extern const int default_ext_to_types[];

		extern const int32 default_charsets_size;
		extern const char *default_charsets[];

		extern const int32 default_extensions_size;
		extern const char *default_extensions[];

		extern const int32 default_types_size;
		extern const char *default_types[];

		extern const int32 default_types_to_ext_size;
		extern const mime_ext default_types_to_ext[];

		extern const int32 default_types_to_charset_size;
		extern const int default_types_to_charset[];
	}    // namespace details
}    // namespace mime

#endif    // TCM_MIME_DETAILS_HPP__