file(GLOB_RECURSE GreateDesignCPP_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")
file(GLOB_RECURSE GreateDesignCPP_HEADERS "${CMAKE_CURRENT_SOURCE_DIR}/*.hpp")

set (GreateDesignCPP_INCLUDE_DIRS "")
foreach (_headerFile ${GreateDesignCPP_HEADERS})
    get_filename_component(_dir ${_headerFile} PATH)
    list (APPEND GreateDesignCPP_INCLUDE_DIRS ${_dir})
endforeach()
list(REMOVE_DUPLICATES GreateDesignCPP_INCLUDE_DIRS)

add_executable(great-design-cpp ${GreateDesignCPP_SOURCES} ${GreateDesignCPP_HEADERS})
target_include_directories(great-design-cpp PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/")
set_target_properties(great-design-cpp PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${INSTALLATION_PATH}/)
install(TARGETS great-design-cpp DESTINATION bin)

#set(GreateDesignCPP_TARGET_LIBRARIES)
#target_link_libraries(great-design-cpp ${GreateDesignCPP_TARGET_LIBRARIES})