cmake_minimum_required(VERSION 3.0)

# Set the project name
project(Fundamentos)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the executable
add_executable(test_ej1 ej1/ej1.cpp ej1/test_ej1.cpp)
add_executable(test_ej2 ej2/ej2.cpp ej2/test_ej2.cpp)

