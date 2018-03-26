# @@@LICENSE
#
#      Copyright (c) 2017 LG Electronics, Inc.
#
# Confidential computer software. Valid license from LG required for
# possession, use or copying. Consistent with FAR 12.211 and 12.212,
# Commercial Computer Software, Computer Software Documentation, and
# Technical Data for Commercial Items are licensed to the U.S. Government
# under vendor's standard commercial license.
#
# LICENSE@@@

cmake_minimum_required(VERSION 2.8.7)
project(avoutput-adaptation-layer-mock)

include(webOS/webOS)
webos_modules_init(1 0 0 QUALIFIER RC7)
webos_component(1 0 0)

webos_add_compiler_flags(ALL -std=c++11 -Wall -Wextra -fno-permissive)
#disable specific warnings
webos_add_compiler_flags(ALL -Wno-unused-parameter -Wno-type-limits -Wno-comment)
#promote specific warnings to errors
webos_add_compiler_flags(ALL -Werror=return-type  -Werror=reorder -Werror=uninitialized)
# Require that all undefined symbols are satisfied by the libraries from target_link_libraries()
webos_add_linker_options(ALL --no-undefined)
webos_add_linker_options(ALL --hash-style=gnu --as-needed --as-needed)


include(FindPkgConfig)

pkg_check_modules(AVALAPI REQUIRED avoutput-adaptation-layer-api)
include_directories(${AVALAPI_INCLUDE_DIRS})
webos_add_compiler_flags(ALL ${AVALAPI})

pkg_check_modules(PMLOG REQUIRED PmLogLib)
include_directories(${PMLOG_INCLUDE_DIRS})
webos_add_compiler_flags(ALL ${PMLOG_CFLAGS_OTHER})

include_directories(${PROJECT_SOURCE_DIR}/src ${PROJECT_SOURCE_DIR}/src/aval)
file(GLOB SOURCES src/*.cpp src/aval/*.cpp)

file(MAKE_DIRECTORY "include/public")

#add local include directories, accessible only by double quotes include.
webos_add_compiler_flags(ALL -iquote ${CMAKE_CURRENT_BINARY_DIR}/Configured/files/conf)
webos_add_compiler_flags(ALL -iquote ${CMAKE_CURRENT_SOURCE_DIR}/src)

set(CMAKE_SHARED_LINKER_FLAGS "-Wl,--export-dynamic")
set(CMAKE_SHARED_LINKER_FLAGS "-Wl,--no-undefined")

set(CMAKE_SHARED_MODULE_PREFIX "")
set(NO_SONAME)

add_library(aval-mock SHARED ${SOURCES})
target_link_libraries(aval-mock
        ${PMLOG_LDFLAGS}
        pthread)

webos_build_library(TARGET aval-mock)

install(TARGETS aval-mock DESTINATION ${WEBOS_INSTALL_LIBDIR})

webos_build_pkgconfig(files/pkgconfig/aval-impl)

