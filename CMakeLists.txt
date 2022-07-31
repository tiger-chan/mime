#
# Mime
#

cmake_minimum_required(VERSION 3.12.4)

#
# Project version
#

## TODO: Pull from cpp file
set (TCM_VERSION "0.1.0")

project(
	mime
	VERSION ${TCM_VERSION}
	DESCRIPTION "Small C++ lib for mime-type retrieval"
	HOMEPAGE_URL "https://github.com/tiger-chan/mime"
	LANGUAGES CXX
)

if (NOT CMAKE_BUILD_TYPE)
	set(CMAKE_BUILD_TYPE Debug)
endif()

#
# Add Targets
#

option(TCM_INCLUDE_HEADERS "Add all Mime headers to the Mime target." OFF)

include(GNUInstallDirs)

add_library(
	mime
	STATIC
		$<BUILD_INTERFACE:${mime_SOURCE_DIR}/src/mime/charset.cpp>
		$<BUILD_INTERFACE:${mime_SOURCE_DIR}/src/mime/mime_extensions_to_type.cpp>
		$<BUILD_INTERFACE:${mime_SOURCE_DIR}/src/mime/mime_extensions.cpp>
		$<BUILD_INTERFACE:${mime_SOURCE_DIR}/src/mime/mime_type_to_extensions.cpp>
		$<BUILD_INTERFACE:${mime_SOURCE_DIR}/src/mime/mime_types.cpp>
		$<BUILD_INTERFACE:${mime_SOURCE_DIR}/src/mime/mime.cpp>
)
add_library(mime::mime ALIAS mime)

target_include_directories(
	mime
	PUBLIC
		$<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>
		$<BUILD_INTERFACE:${PROJECT_BINARY_DIR}/include>
		$<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
)

target_compile_features(mime PUBLIC cxx_std_17)

if (TCM_INCLUDE_HEADERS)
	target_sources(
		mime
		STATIC
			$<BUILD_INTERFACE:${mime_SOURCE_DIR}/src/mime/mime_details.hpp>
			$<BUILD_INTERFACE:${mime_SOURCE_DIR}/src/mime/charset.cpp>
			$<BUILD_INTERFACE:${mime_SOURCE_DIR}/src/mime/mime_extensions_to_type.cpp>
			$<BUILD_INTERFACE:${mime_SOURCE_DIR}/src/mime/mime_extensions.cpp>
			$<BUILD_INTERFACE:${mime_SOURCE_DIR}/src/mime/mime_type_to_extensions.cpp>
			$<BUILD_INTERFACE:${mime_SOURCE_DIR}/src/mime/mime_types.cpp>
			$<BUILD_INTERFACE:${mime_SOURCE_DIR}/src/mime/mime.cpp>
	)
endif()

#
# Install mime
#

include(CMakePackageConfigHelpers)

install(
	TARGETS mime
	EXPORT mimeTargets
		ARCHIVE DESTINATION "${CMAKE_INSTALL_LIBDIR}"
		LIBRARY DESTINATION "${CMAKE_INSTALL_LIBDIR}"
		RUNTIME DESTINATION "${CMAKE_INSTALL_BINDIR}"
)

install(
	DIRECTORY include/mime src/mime ${PROJECT_BINARY_DIR}/include/mime
	DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}"
	FILES_MATCHING
		PATTERN "*.h"
		PATTERN "*.hpp"
		PATTERN "*.inl"
)

write_basic_package_version_file(
	mimeConfigVersion.cmake
	VERSION ${PROJECT_VERSION}
	COMPATIBILITY SameMajorVersion
)

configure_package_config_file(
	${mime_SOURCE_DIR}/cmake/in/mimeConfig.cmake.in
    mimeConfig.cmake
    INSTALL_DESTINATION ${CMAKE_INSTALL_LIBDIR}/mime/cmake
)

export(
	EXPORT mimeTargets
	FILE ${CMAKE_CURRENT_BINARY_DIR}/mimeTargets.cmake
	NAMESPACE mime::
)

install(
    EXPORT mimeTargets
    FILE mimeTargets.cmake
    DESTINATION ${CMAKE_INSTALL_LIBDIR}/mime/cmake
    NAMESPACE mime::
)

install(
    FILES
        ${PROJECT_BINARY_DIR}/mimeConfig.cmake
        ${PROJECT_BINARY_DIR}/mimeConfigVersion.cmake
    DESTINATION ${CMAKE_INSTALL_LIBDIR}/mime/cmake
)

install(DIRECTORY src/ DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})

export(PACKAGE mime)

#
# Tests
#

option(TCM_BUILD_TESTING "Enable building tests." OFF)

if(TCM_BUILD_TESTING)
	option(TCM_FIND_GTEST_PACKAGE "Enable finding gtest package." OFF)

	set(TCM_CXX_STD cxx_std_17 CACHE STRING "C++ standard revision to use for the tests")

	include(CTest)
	enable_testing()
	add_subdirectory(test)
endif()
