project(Soundex)
cmake_minimum_required(VERSION 2.6)

include_directories($ENV{GMOCK_ROOT}/include $ENV{GMOCK_ROOT}/gtest/include)
link_directories($ENV{GMOCK_ROOT}/build $ENV{GMOCK_ROOT}/build/gtest)

add_definitions(-std=c++0x)
set(CMAKE_CXX_FLAGS "${CMAXE_CXX_FLAGS} -Wall")

set(sources main.cpp SoundexTest.cpp)

add_executable(test ${sources})
target_link_libraries(test gmock)
target_link_libraries(test gtest)
target_link_libraries(test pthread)
