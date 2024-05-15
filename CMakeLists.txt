cmake_minimum_required(VERSION 3.1...3.4)
project(build1)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_executable(build1 Builder.cpp)
target_link_libraries(build1)
enable_testing()
add_test(NAME build1 COMMAND build1)

