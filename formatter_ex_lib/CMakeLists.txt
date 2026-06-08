cmake_minimum_required(VERSION 3.10)
project(formatter_ex_lib)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(NOT TARGET formatter_lib)
    add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/../formatter_lib ${CMAKE_CURRENT_BINARY_DIR}/../formatter_lib)
endif()

add_library(formatter_ex STATIC formatter_ex.cpp)
target_include_directories(formatter_ex PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(formatter_ex PUBLIC formatter_lib)
