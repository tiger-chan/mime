#if !defined(TCM_MIME_HPP__)
#	define TCM_MIME_HPP__

#	include "fwd.hpp"
#	include <mime/mime_details.hpp>

namespace mime {
	enum mime_result {
		MIME_SUCCESS = 0,
		MIME_NO_MATCH = 1,
		MIME_OUT_OF_RANGE = 2,
		MIME_NO_FILE_EXT = 3,
	};

	struct source {
		int32 types_size{ 0 };
		const char **types{ nullptr };

		int32 extensions_size{ 0 };
		const char **extensions{ nullptr };

		int32 charsets_size{ 0 };
		const char **charsets{ nullptr };

		int32 ext_to_types_size{ 0 };
		const int *ext_to_types{ nullptr };

		int32 types_to_ext_size{ 0 };
		const mime_ext *types_to_ext{ nullptr };

		int32 types_to_charset_size{ 0 };
		const int *types_to_charset{ nullptr };
	};

	extern TCM_API void set_source(const source *type);

	extern TCM_API mime_result charset(const char *type, const char **dst);

	extern TCM_API mime_result extension(const char *type, int32 index, const char **dst);

	extern TCM_API mime_result type(const char *extensions, const char **dst);

	extern TCM_API mime_result typef(const char *file, const char **dst);

	extern TCM_API mime_result content_type(const char *type, char *write_to, int32 *written_size = nullptr);

}    // namespace mime

#endif    // TCM_MIME_HPP__