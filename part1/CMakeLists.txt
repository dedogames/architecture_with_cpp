##################################
# GreateDesignCPP Makefile       #
# Developer: Gelson G Rodrigues  #
# Email: geoldery@gmail.com      #
##################################
cmake_minimum_required(VERSION 3.20)
project(GreateDesignCPP)
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

set(LIBRARIES_INCLUDE_PATH "usr/include")
set(LIBRARIES_PATH "/usr/lib64")

add_subdirectory(src)