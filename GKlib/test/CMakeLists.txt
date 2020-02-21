
add_executable(strings strings.c)
target_link_libraries(strings PRIVATE GKlib::GKlib)
add_test(strings strings)

add_executable(gksort gksort.c)
target_link_libraries(gksort PRIVATE GKlib::GKlib)
add_test(gksort gksotrt)

add_executable(fis fis.c)
target_link_libraries(fis PRIVATE GKlib::GKlib)
add_test(fis_test fis)

add_executable(rw rw.c)
target_link_libraries(rw PRIVATE GKlib::GKlib)
add_test(rw rw)

add_executable(gkgraph gkgraph.c)
target_link_libraries(gkgraph PRIVATE GKlib::GKlib)
add_test(gkgraph gkgraph)



