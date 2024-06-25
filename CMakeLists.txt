cmake_minimum_required(VERSION 3.0)
project(Fundamentos)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add executables
add_executable(test_ej1 ej1/ej1.cpp ej1/test_ej1.cpp)
add_executable(test_ej2 ej2/ej2.cpp ej2/test_ej2.cpp)

# Custom targets for individual tests
add_custom_target(build_test_ej1
        COMMAND ${CMAKE_COMMAND} --build . --target test_ej1
        DEPENDS test_ej1
        WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
        )

add_custom_target(build_test_ej2
        COMMAND ${CMAKE_COMMAND} --build . --target test_ej2
        DEPENDS test_ej2
        WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
        )

add_custom_target(run_test_ej1
        COMMAND ./test_ej1
        DEPENDS build_test_ej1
        WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
        )

add_custom_target(run_test_ej2
        COMMAND ./test_ej2
        DEPENDS build_test_ej2
        WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
        )
