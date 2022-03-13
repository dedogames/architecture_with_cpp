file(GLOB_RECURSE GreateDesignCPP-test_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")
file(GLOB_RECURSE GreateDesignCPP-test_HEADERS "${CMAKE_CURRENT_SOURCE_DIR}/*.hpp")

set (GreateDesignCPP-test_INCLUDE_DIRS "")
foreach (_headerFile ${GreateDesignCPP-test_HEADERS})
    get_filename_component(_dir ${_headerFile} PATH)
    list (APPEND GreateDesignCPP-test_INCLUDE_DIRS ${_dir})
endforeach()
list(REMOVE_DUPLICATES GreateDesignCPP-test_INCLUDE_DIRS)

add_executable(GreateDesignCPP-test ${GreateDesignCPP-test_SOURCES} ${GreateDesignCPP-test_HEADERS})
target_include_directories(GreateDesignCPP-test PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/")
set_target_properties(GreateDesignCPP-test PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${INSTALLATION_PATH}/)
install(TARGETS GreateDesignCPP-test DESTINATION bin)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}) 
set(GreateDesignCPP-test_TARGET_LIBRARIES
    ${GTEST_LIBRARY}     
) 
 
target_link_libraries(GreateDesignCPP-test GreateDesignCPP_static ${GreateDesignCPP-test_TARGET_LIBRARIES} )