cmake_minimum_required(VERSION 3.6)
project(design-patterns)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
#add_definitions(-std=c++11)

set(SOURCE_FILES main.cpp)
add_executable(patterns_run ${SOURCE_FILES})

include_directories(src)

add_subdirectory(src)
add_subdirectory(tests)

target_link_libraries(patterns_run patterns)