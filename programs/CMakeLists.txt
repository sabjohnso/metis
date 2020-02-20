
add_executable(gpmetis gpmetis.c cmdline_gpmetis.c io.c stat.c)
target_link_libraries(gpmetis PRIVATE METIS::metis)

add_executable(ndmetis ndmetis.c cmdline_ndmetis.c io.c smbfactor.c)
target_link_libraries(ndmetis PRIVATE METIS::metis)

add_executable(mpmetis mpmetis.c cmdline_mpmetis.c io.c stat.c)
target_link_libraries(mpmetis PRIVATE METIS::metis)

add_executable(m2gmetis m2gmetis.c cmdline_m2gmetis.c io.c)
target_link_libraries(m2gmetis PRIVATE METIS::metis)

add_executable(graphchk graphchk.c io.c)
target_link_libraries(graphchk PRIVATE METIS::metis)

add_executable(cmpfillin cmpfillin.c io.c smbfactor.c)
target_link_libraries(cmpfillin PRIVATE METIS::metis)

install(TARGETS gpmetis ndmetis mpmetis m2gmetis graphchk cmpfillin
  EXPORT metis-exports
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})



