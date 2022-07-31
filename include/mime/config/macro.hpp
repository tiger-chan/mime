#if !defined(TCM_MACRO_HPP__)
#	define TCM_MACRO_HPP__

#	define TCM_STR(str) #str

#ifndef TCM_EXPORT
#	if defined _WIN32 || defined __CYGWIN__ || defined _MSC_VER
#		define TCM_EXPORT __declspec(dllexport)
#		define TCM_IMPORT __declspec(dllimport)
#		define TCM_HIDDEN
#	elif defined __GNUC__ && __GNUC__ >= 4
#		define TCM_EXPORT __attribute__((visibility("default")))
#		define TCM_IMPORT __attribute__((visibility("default")))
#		define TCM_HIDDEN __attribute__((visibility("hidden")))
#	else /* Unsupported compiler */
#		define TCM_EXPORT
#		define TCM_IMPORT
#		define TCM_HIDDEN
#	endif
#endif

#ifndef TCM_API
#	if defined mime_EXPORT
#		define TCM_API TCM_EXPORT
#	elif defined mime_IMPORT
#		define TCM_API TCM_IMPORT
#	else /* No API */
#		define TCM_API
#	endif
#endif

#endif    // TCM_MACRO_HPP__
