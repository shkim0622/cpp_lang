cmake_minimum_required(VERSION 3.0.0)
project(myapp VERSION 0.1.0)

add_executable(myapp main.cpp myapp.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})

