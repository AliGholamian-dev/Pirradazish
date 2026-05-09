#pragma once

/// TODO: Maybe consider introducing an embedded allocator not to leak these into header
#include "Common/BasicDataTypes.h"
#include "Common/NameManglingGuard.h"

Common_NameManglingGuard_Begin

typedef struct NS_Token
{
    /// TODO: Maybe consider introducing an embedded allocator not to leak these into header
    /// Private
    const Char8* private_stringAddress;
} NS_Token;

Common_NameManglingGuard_End
