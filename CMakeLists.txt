cmake_minimum_required(VERSION 3.10)
project(MiProyecto)

set(CMAKE_CXX_STANDARD 17)

add_executable(mi_programa main.cpp)
add_executable(test_runner
    test/runner.cpp
    test/pruebas.cpp
)