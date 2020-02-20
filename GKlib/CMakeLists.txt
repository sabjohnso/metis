cmake_minimum_required(VERSION 3.12)
project(GKlib VERSION 0.0.0)

option(GKlib_BUILD_TESTING "Build the GKLib tests" ON)

include(GNUInstallDirs)
set(GKlib_INSTALL_CONFDIR ${CMAKE_INSTALL_LIBDIR}/cmake/gklib)

set(GKlib_SOURCE_FILES
  b64.c
  blas.c
  csr.c
  error.c
  evaluate.c
  fkvkselect.c
  fs.c
  getopt.c
  gkregex.c
  graph.c
  htable.c
  io.c
  itemsets.c
  mcore.c
  memory.c
  omp.c
  pdb.c
  pqueue.c
  random.c
  rw.c
  seq.c
  sort.c
  string.c
  test
  timers.c
  tokenizer.c
  util.c)

set(GKlib_HEADER_FILES
  gk_arch.h
  gk_defs.h
  gk_externs.h
  gk_getopt.h
  GKlib.h
  gk_macros.h
  gk_mkblas.h
  gk_mkmemory.h
  gk_mkpqueue2.h
  gk_mkpqueue.h
  gk_mkrandom.h
  gk_mksort.h
  gk_mkutils.h
  gk_proto.h
  gkregex.h
  gk_struct.h
  gk_types.h
  ms_inttypes.h
  ms_stat.h
  ms_stdint.h)


add_library(GKlib ${GKlib_SOURCE_FILES})
target_link_libraries(GKlib PRIVATE m)
target_include_directories(GKlib PUBLIC
  $<BUILD_INTERFACE:${GKlib_SOURCE_DIR}>
  $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>)
target_compile_definitions(GKlib PRIVATE _XOPEN_SOURCE=600)

add_library(GKlib::GKlib ALIAS GKlib)

install(TARGETS GKlib
  EXPORT GKlib_EXPORTS
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
  
install(FILES ${GKlib_HEADER_FILES}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})

install(EXPORT GKlib_EXPORTS
  NAMESPACE GKlib::
  FILE gklib-exports.cmake
  DESTINATION ${GKlib_INSTALL_CONFDIR})

configure_file(gklib-config.cmake.in gklib-config.cmake @ONLY)
install(FILES ${GKlib_BINARY_DIR}/gklib-config.cmake
  DESTINATION ${GKlib_INSTALL_CONFDIR})
  
  
