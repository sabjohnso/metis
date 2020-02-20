set(METIS_SOURCE_FILES
  auxapi.c
  balance.c
  bucketsort.c
  checkgraph.c
  CMakeLists.txt
  coarsen.c
  compress.c
  contig.c
  debug.c
  defs.h
  fm.c
  fortran.c
  frename.c
  gklib.c
  gklib_defs.h
  gklib_rename.h
  graph.c
  initpart.c
  kmetis.c
  kwayfm.c
  kwayrefine.c
  macros.h
  mcutil.c
  mesh.c
  meshpart.c
  metislib.h
  minconn.c
  mincover.c
  mmd.c
  ometis.c
  options.c
  parmetis.c
  pmetis.c
  proto.h
  refine.c
  rename.h
  separator.c
  sfm.c
  srefine.c
  stat.c
  stdheaders.h
  struct.h
  timing.c
  util.c
  wspace.c)

add_library(metis ${METIS_LIBRARY_TYPE} ${METIS_SOURCE_FILES})
target_include_directories(metis
  PUBLIC
  $<BUILD_INTERFACE:${METIS_SOURCE_DIR}/include>
  $<BUILD_INTERFACE:${METIS_SOURCE_DIR}/libmetis>
  $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
)
target_link_libraries(metis PRIVATE GKlib::GKlib m)

add_library(METIS::metis ALIAS metis)

install(TARGETS metis
  EXPORT METIS_EXPORTS
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR})
