aux_source_directory(utils sub_src_lists)
aux_source_directory(. src_lists)
add_library(Location_test ${src_lists} ${sub_src_lists})
target_link_libraries(Location_test Location_location)
target_link_libraries(Location_test Location_utils)