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
	tcmime
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
	tcmime
	STATIC
		$<BUILD_INTERFACE:${tcmime_SOURCE_DIR}/src/mime/mime.cpp>
)
add_library(tcmime::tcmime ALIAS tcmime)

target_include_directories(
	tcmime
	PUBLIC
		$<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>
		$<BUILD_INTERFACE:${PROJECT_BINARY_DIR}/include>
		$<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
)

target_compile_features(tcmime PUBLIC cxx_std_17)

if (TCM_INCLUDE_HEADERS)
	target_sources(
		tcmime
		STATIC
			$<BUILD_INTERFACE:${tcmime_SOURCE_DIR}/src/mime/mime.cpp>
	)
endif()

#
# Install tcmime
#

include(CMakePackageConfigHelpers)

install(
	TARGETS tcmime
	EXPORT tcmimeTargets
		ARCHIVE DESTINATION "${CMAKE_INSTALL_LIBDIR}"
		LIBRARY DESTINATION "${CMAKE_INSTALL_LIBDIR}"
		RUNTIME DESTINATION "${CMAKE_INSTALL_BINDIR}"
)

install(
	DIRECTORY include/tcmime src/tcmime ${PROJECT_BINARY_DIR}/include/tcmime
	DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}"
	FILES_MATCHING
		PATTERN "*.h"
		PATTERN "*.hpp"
		PATTERN "*.inl"
)

write_basic_package_version_file(
	tcmimeConfigVersion.cmake
	VERSION ${PROJECT_VERSION}
	COMPATIBILITY SameMajorVersion
)

configure_package_config_file(
	${tcmime_SOURCE_DIR}/cmake/in/tcmimeConfig.cmake.in
    tcmimeConfig.cmake
    INSTALL_DESTINATION ${CMAKE_INSTALL_LIBDIR}/mime/cmake
)

export(
	EXPORT tcmimeTargets
	FILE ${CMAKE_CURRENT_BINARY_DIR}/tcmimeTargets.cmake
	NAMESPACE tcmime::
)

install(
    EXPORT tcmimeTargets
    FILE tcmimeTargets.cmake
    DESTINATION ${CMAKE_INSTALL_LIBDIR}/mime/cmake
    NAMESPACE tcmime::
)

install(
    FILES
        ${PROJECT_BINARY_DIR}/tcmimeConfig.cmake
        ${PROJECT_BINARY_DIR}/tcmimeConfigVersion.cmake
    DESTINATION ${CMAKE_INSTALL_LIBDIR}/mime/cmake
)

install(DIRECTORY src/ DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})

export(PACKAGE tcmime)

#
# Compiler versions
#
message("[tcmime] ${CMAKE_CXX_COMPILER_ID}")
message("[tcmime] ${CMAKE_CXX_COMPILER_VERSION}")
message("[tcmime] ${CMAKE_CXX_STANDARD}")

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