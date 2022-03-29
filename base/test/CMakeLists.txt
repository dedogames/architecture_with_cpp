file(GLOB_RECURSE templateSource-test_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")
file(GLOB_RECURSE templateSource-test_HEADERS "${CMAKE_CURRENT_SOURCE_DIR}/*.hpp")

set (templateSource-test_INCLUDE_DIRS "")
foreach (_headerFile ${templateSource-test_HEADERS})
    get_filename_component(_dir ${_headerFile} PATH)
    list (APPEND templateSource-test_INCLUDE_DIRS ${_dir})
endforeach()
list(REMOVE_DUPLICATES templateSource-test_INCLUDE_DIRS)

add_executable(templateSource-test ${templateSource-test_SOURCES} ${templateSource-test_HEADERS})
target_include_directories(templateSource-test PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/")
set_target_properties(templateSource-test PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${INSTALLATION_PATH}/)
install(TARGETS templateSource-test DESTINATION bin)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}) 
set(templateSource-test_TARGET_LIBRARIES
    ${GTEST_LIBRARY}     
) 
 
target_link_libraries(templateSource-test templateSource_static ${templateSource-test_TARGET_LIBRARIES} )