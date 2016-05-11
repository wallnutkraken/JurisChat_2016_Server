cmake_minimum_required(VERSION 3.5)
project(JurisChat_2016_Server)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
find_package(Boost 1.60.0 COMPONENTS system regex REQUIRED)
include_directories(${Boost_INCLUDE_DIRS})

set(SOURCE_FILES main.cpp User.cpp Server.cpp)
add_executable(JurisChat_2016_Server ${SOURCE_FILES})
target_link_libraries(JurisChat_2016_Server ${Boost_LIBRARIES})