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

	extern TCM_API mime_result from_type(const char *type, int32 index, const char **dst);
	extern TCM_API mime_result from_type(const char *type, const mime_ext **dst);
	extern TCM_API mime_result from_ext(const char *extensions, const char **dst);
}    // namespace mime

#endif    // TCM_MIME_HPP__