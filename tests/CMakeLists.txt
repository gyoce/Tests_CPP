cmake_minimum_required(VERSION 3.8)

set(TestExecName ${PROJECT_NAME}_Tests)

include_directories(
    ../external/googletest/googletest/include
    ../external/googletest/googlemock/include
    ../src/MyProject/src
)

add_executable(${TestExecName}
    UnitTests/MyClassTest.cpp
)

target_link_libraries(${TestExecName} MyLibrary gtest gtest_main)