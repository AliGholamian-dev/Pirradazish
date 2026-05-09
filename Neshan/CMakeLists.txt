cmake_minimum_required(VERSION 3.10)
project(Neshan LANGUAGES C)

add_library(
        Neshan
        STATIC
        Include/Neshan/Config.h
        Include/Neshan/Linker/Section.h
        Include/Neshan/Tokenization/Token.h
        Include/Neshan/Tokenization/Tokenizer.h
        Source/Tokenization/Tokenizer.c)

target_link_libraries(Neshan PUBLIC Common)
target_include_directories(Neshan PUBLIC ${CMAKE_CURRENT_LIST_DIR}/Include)
#set(NS_LINKER_SCRIPT ${CMAKE_CURRENT_LIST_DIR}/Include/Neshan/Linker/StringsLinkerSection.ld)
#target_link_options(Neshan INTERFACE "-T${NS_LINKER_SCRIPT}")
#
## Store the script path so consumers can find it
#set_target_properties(Neshan PROPERTIES NS_LINKER_SCRIPT "${NS_LINKER_SCRIPT}")
#
## Helper function for consumers
#function(ns_lib_apply_link_script_to_target target)
#    get_target_property(script Neshan NS_LINKER_SCRIPT)
#    set_property(TARGET ${target} APPEND PROPERTY LINK_DEPENDS "${script}")
#endfunction()