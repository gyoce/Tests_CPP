cmake_minimum_required(VERSION 3.8)

add_subdirectory(MyProject)

include_directories(
    ${CMAKE_ROOT_DIR}/src/MyProject/src
)

add_executable(${PROJECT_NAME} Main.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE ${CUSTOM_LIBRARY})