#   CMake para el proyecto Matrices
#   Vesión
cmake_minimum_required(VERSION 3.10)

#   Nombre del proyecto
project(Matrices)

#   Versiones de compilador
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#   Donde se guardara los documento que genere CMake
include_directories(include)

#   Docs que compilara y construira
file(GLOB SOURCE_FILES src/*.cpp tests/*.cpp)

#   Nombre del ejecutable y los docs que se compilaran
add_executable(Matrices ${SOURCE_FILES})