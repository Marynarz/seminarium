message("--- WORKFLOW SEMINARIUM ---")
cmake_minimum_required(VERSION 3.22)

project(workflow_seminarium)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories("${CMAKE_CURRENT_SOURCE_DIR}/base")

add_executable(workflow_seminarium main.cpp)

add_subdirectory(base)

set_target_properties(base_lib PROPERTIES LINKER_LANGUAGE CXX)
target_link_libraries(workflow_seminarium PUBLIC base_lib)

add_subdirectory(states)

set_target_properties(states_lib PROPERTIES LINKER_LANGUAGE CXX)
target_link_libraries(workflow_seminarium PUBLIC states_lib)