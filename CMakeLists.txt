cmake_minimum_required(VERSION 3.10)
project(Pirradazish LANGUAGES C)

#TODO: Encapsulate this
# --------------------------------------------------
if(CMAKE_SOURCE_DIR STREQUAL PROJECT_SOURCE_DIR)
    set(Pirradazish_Is_Top_Level_Project ON)
else()
    set(Pirradazish_Is_Top_Level_Project OFF)
endif()

if (Pirradazish_Is_Top_Level_Project)
    set(CMAKE_C_STANDARD 11)
endif ()
# --------------------------------------------------

add_subdirectory(Vendor)
add_subdirectory(Neshan)

# TODO: move this to its own lib after first implementation
add_executable(Pirradazish main.c)
target_link_libraries(Pirradazish PUBLIC Neshan)
target_include_directories(Pirradazish PUBLIC ${CMAKE_CURRENT_LIST_DIR})
#ns_lib_apply_link_script_to_target(Pirradazish)