#include <stdio.h>
#include "Neshan/Tokenization/Tokenizer.h"

int main()
{
    NS_Token token1;
    NS_TokenizeStringLiteral(&token1, "Hello1");
    printf("%p\n", token1.private_stringAddress);
    return 0;
}