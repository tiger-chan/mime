#if !defined(TCM_MIME_HPP__)
#	define TCM_MIME_HPP__

#	include "fwd.hpp"
#	include <mime/mime_details.hpp>

namespace mime {
	enum mime_result {
		MIME_SUCCESS = 0,
		MIME_NO_MATCH = 1,
		MIME_OUT_OF_RANGE = 2,
	};

	struct source {
		const int32 types_size{ 0 };
		const char **types{ nullptr };

		const int32 extensions_size{ 0 };
		const char **extensions{ nullptr };

		const int32 charsets_size{ 0 };
		const char **charsets{ nullptr };

		const int32 ext_to_types_size{ 0 };
		const int *ext_to_types{ nullptr };

		const int32 types_to_ext_size{ 0 };
		const mime_ext *types_to_ext{ nullptr };
	};

	extern TCM_API void set_source(const source *type);


	extern TCM_API mime_result charset(const char *type, const char **dst);

	extern TCM_API mime_result from_type(const char *type, int32 index, const char **dst);
	extern TCM_API mime_result from_type(const char *type, const mime_ext **dst);

	extern TCM_API mime_result from_ext(const char *extensions, const char **dst);

	extern TCM_API mime_result from_file(const char *file, const char **dst);

	//https://datatracker.ietf.org/doc/html/rfc2046#section-4.1.2
	extern TCM_API int32 format(const char *type, const char **dst);

}    // namespace mime

#endif    // TCM_MIME_HPP__