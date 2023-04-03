cmake_minimum_required(VERSION 3.8)

include_directories(
    ${CMAKE_ROOT_DIR}/external/googletest/googletest/include
    ${CMAKE_ROOT_DIR}/external/googletest/googlemock/include
    ${CMAKE_ROOT_DIR}/src/MyProject/src
)

add_executable(${TEST_EXEC_NAME}
    UnitTests/MyClassTest.cpp
)

target_link_libraries(${TEST_EXEC_NAME} ${CUSTOM_LIBRARY} gtest gtest_main)
include(GoogleTest)
gtest_discover_tests(${TEST_EXEC_NAME})