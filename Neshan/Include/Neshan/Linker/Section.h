#pragma once

#include "Common/CompilerDetection.h"
#include "Common/NameManglingGuard.h"

Common_NameManglingGuard_Begin

#if defined(Common_Compiler_GCC) || defined(Common_Compiler_CLang)
    /// TODO: maybe needed fr MSVC
    // #define NS_LinkerSection_Start(SectionName)
    // #define NS_LinkerSection_End(SectionName)
    #define NS_LinkerSection_Attribute(SectionName) __attribute__((section(SectionName), used))
#else
    /// TODO: maybe needed fr MSVC
    // #define NS_LinkerSection_Start(SectionName)
    // #define NS_LinkerSection_End(SectionName)
    #define NS_LinkerSection_Attribute(SectionName)
    #error "[ Linker Section ]: Linker Sectioning not supported or unknown compiler"
#endif

Common_NameManglingGuard_End
