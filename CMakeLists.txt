cmake_minimum_required(VERSION 3.0.0)
project(hello_cmake LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(modules)
add_executable(hello_cmake main.cpp)

add_executable(exec_module1 examples/exec_module1.cpp)
target_link_libraries(exec_module1 PRIVATE
    module1)

add_executable(exec_module1_module2 examples/exec_module1_module2.cpp)
target_link_libraries(exec_module1_module2 PRIVATE
    module1
    module2
    )