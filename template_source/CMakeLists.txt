##################################
# templateSource Makefile       #
# Developer: Gelson G Rodrigues  #
# Email: geoldery@gmail.com      #
##################################
cmake_minimum_required(VERSION 3.20)
project(templateSource)
set (CMAKE_CONFIGURATION_TYPES "Debug;Release" CACHE STRING "" FORCE)
set(CMAKE_CXX_FLAGS "")
set(CMAKE_CXX_FLAGS_RELEASE " -std=c++20 -O2 -g")
set(CMAKE_CXX_FLAGS_DEBUG " -std=c++20 -g")

if (CMAKE_BUILD_TYPE STREQUAL "Debug") 
	MESSAGE("Debug Configuration")
	SET(INSTALLATION_PATH ${CMAKE_BINARY_DIR}/Debug)
elseif(CMAKE_BUILD_TYPE STREQUAL "Release")
	MESSAGE("Release Configuration")
	SET(INSTALLATION_PATH ${CMAKE_BINARY_DIR}/Release)
endif()

MESSAGE("Installation path:" ${INSTALLATION_PATH})

#################### Libraries used ######################

#for linux/mac change path to where gtest was installed    
set(LIBRARIES_INCLUDE_PATH "G:/tutor/libraries/include")
set(LIBRARIES_PATH "G:/tutor/libraries/lib")
  
#gtest
set(GTEST_INCLUDEDIR ${LIBRARIES_INCLUDE_PATH})
include_directories(${GTEST_INCLUDEDIR})
#set(GTEST_LIBRARY gtest) for Linux/Mac
set(GTEST_LIBRARY ${LIBRARIES_PATH}/libgtest.a ${LIBRARIES_PATH}/libgtest_main.a) 

add_subdirectory(src)
add_subdirectory(test) 
