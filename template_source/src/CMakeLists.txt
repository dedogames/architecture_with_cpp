file(GLOB_RECURSE templateSource_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")
file(GLOB_RECURSE templateSource_HEADERS "${CMAKE_CURRENT_SOURCE_DIR}/*.hpp")

set (templateSource_INCLUDE_DIRS "")
foreach (_headerFile ${templateSource_HEADERS})
    get_filename_component(_dir ${_headerFile} PATH)
    list (APPEND templateSource_INCLUDE_DIRS ${_dir})
endforeach()
list(REMOVE_DUPLICATES templateSource_INCLUDE_DIRS)

add_executable(template-source ${templateSource_SOURCES} ${templateSource_HEADERS})
target_include_directories(template-source PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/")
set_target_properties(template-source PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${INSTALLATION_PATH}/)
install(TARGETS template-source DESTINATION bin)

#create lib for tests
add_library(templateSource_static STATIC ${templateSource_SOURCES} ${templateSource_HEADERS} )