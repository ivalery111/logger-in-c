cmake_minimum_required(VERSION 3.15)

project(logger C)
set(PROJECT_SOURCE_DIR ${${PROJECT_NAME}_SOURCE_DIR})

enable_testing()
add_subdirectory(test)
