/* StringsLinkerSection.ld
 *
 * Places .ns_tok as a non-loaded section after all
 * loaded sections. The section contains string literals tokenized by
 * NS_TokenizeStringLiteral(); these are needed only by the offline
 * extraction tool, never at runtime.
 *
 */

SECTIONS
{
    .ns_tok 0 (INFO) :
    {
        KEEP(*(.ns_tok))
        KEEP(*(.ns_tok.*))
    }
}
/*TODO: Should be per platform*/
/*INSERT AFTER .comment;*/