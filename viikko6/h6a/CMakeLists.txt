
cmake_minimum_required(VERSION 3.16)

project(h6a LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)

find_package(Qt6 REQUIRED COMPONENTS Core)

add_executable(h6a
    main.cpp
    myclass.h
    myclass.cpp
)

target_link_libraries(h6a
    Qt6::Core
)
