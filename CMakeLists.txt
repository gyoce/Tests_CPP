cmake_minimum_required(VERSION 3.8)
project(CPP VERSION 1.0)

enable_testing()

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED true)

set(CMAKE_ROOT_DIR ${CMAKE_CURRENT_LIST_DIR})
set(TEST_EXEC_NAME ${PROJECT_NAME}Tests)
set(CUSTOM_LIBRARY MyLibrary)

add_subdirectory(external)
add_subdirectory(tests)
add_subdirectory(src)