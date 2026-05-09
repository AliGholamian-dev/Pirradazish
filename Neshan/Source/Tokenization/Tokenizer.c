#include "Neshan/Tokenization/Tokenizer.h"
#include "Common/BasicDataTypes.h"
#include "Common/Keywords.h"

void NS_TokenizeString(NS_Token* token, const Char8* stringToTokenize, const SizeType stringToTokenizeLength)
{
    unused(stringToTokenizeLength);
    token->private_stringAddress = stringToTokenize;
}