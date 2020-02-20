cmake_minimum_required(VERSION 3.12)
project(METIS VERSION 6.0.0)

option(METIS_BUILD_SHARED "Build shared libraries" ON)
option(METIS_BUILD_TESTING "Build the metis tests" ON)

list(APPEND CMAKE_MODULE_PATH ${METIS_SOURCE_DIR}/cmake)
find_package(GKlib REQUIRED)

include(GNUInstallDirs)
set(METIS_INSTALL_CONFDIR ${CMAKE_INSTALL_LIBDIR}/cmake/metis)

add_subdirectory(include)
add_subdirectory(libmetis)
add_subdirectory(programs)

install(EXPORT metis_exports
  FILE metis-exports.cmake
  DESTINATION ${METIS_INSTALL_CONFDIR})

configure_file(metis-config.cmake.in metis-config.cmake @ONLY)
install(FILES ${METIS_BINARY_DIR}/metis-config.cmake
  DESTINATION ${METIS_INSTALL_CONFDIR})




