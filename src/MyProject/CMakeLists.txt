cmake_minimum_required(VERSION 3.8)

include_directories(src)

add_library(${CUSTOM_LIBRARY})

target_sources(${CUSTOM_LIBRARY} PRIVATE
    src/MyClass.cpp
)