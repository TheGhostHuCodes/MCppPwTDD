cmake_minimum_required(VERSION 2.8.12)
project(soundex)

add_definitions("-std=c++14")

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

set(sources Soundex.h CharUtil.cpp StringUtil.cpp)
set(test_sources SoundexTest.cpp CharUtil.cpp StringUtilTest.cpp)

add_executable(test ${sources} ${test_sources})
target_link_libraries(test ${CONAN_LIBS})
