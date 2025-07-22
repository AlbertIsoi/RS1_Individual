cmake_minimum_required(VERSION 3.10)
project(BorunteRobotControl)

set(CMAKE_CXX_STANDARD 17)

find_package(PkgConfig REQUIRED)
pkg_check_modules(LIBMODBUS REQUIRED libmodbus)

include_directories(${LIBMODBUS_INCLUDE_DIRS})
link_directories(${LIBMODBUS_LIBRARY_DIRS})

add_executable(borunte main.cpp)
target_link_libraries(borunte ${LIBMODBUS_LIBRARIES})
