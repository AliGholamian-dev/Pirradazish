#pragma once

#include "Neshan/Config.h"
#include "Neshan/Tokenization/Token.h"
#include "Neshan/Linker/Section.h"
#include "Common/NameManglingGuard.h"

Common_NameManglingGuard_Begin

/// TODO: Maybe put whole info or token in a specific section, containing format, domain, ..... (Like Pigweed)
/// TODO: Find a way to get rid of GCC statement extension
#define NS_TokenizeStringLiteral(Token, StringToTokenize)                                                                       \
        do                                                                                                                      \
        {                                                                                                                       \
                NS_LinkerSection_Attribute(NS_StringsLinkerSection) static const Char8 stringStorage [] = "" StringToTokenize;  \
                (Token)->private_stringAddress = stringStorage;                                                                 \
        } while(false)

void NS_TokenizeString(NS_Token* token, const Char8* stringToTokenize, const SizeType stringToTokenizeLength);

Common_NameManglingGuard_End
