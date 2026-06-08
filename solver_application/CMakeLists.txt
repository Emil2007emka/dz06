cmake_minimum_required(VERSION 3.10)
project(DZ06)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(NOT TARGET formatter_ex)
    add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/../formatter_ex_lib ${CMAKE_CURRENT_BINARY_DIR}/../formatter_ex_lib)
endif()

if(NOT TARGET solver_lib)
    add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/../solver_lib ${CMAKE_CURRENT_BINARY_DIR}/../solver_lib)
endif()

add_executable(equation equation.cpp)
target_link_libraries(equation PRIVATE formatter_ex solver_lib)

install(TARGETS equation DESTINATION bin)

set(CPACK_PACKAGE_NAME "solver-equation")
set(CPACK_PACKAGE_VERSION "0.1.0")
set(CPACK_PACKAGE_CONTACT "Emil2007emka <emilrzaev28@gmail.com>")

include(CPack)
