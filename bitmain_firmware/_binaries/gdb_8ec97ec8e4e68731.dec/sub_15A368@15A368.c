int sub_15A368()
{
  return sub_53274(
           "find",
           1,
           (int)sub_15A3A4,
           (int)"Search memory for a sequence of bytes.\n"
                "Usage:\n"
                "find [/size-char] [/max-count] start-address, end-address, expr1 [, expr2 ...]\n"
                "find [/size-char] [/max-count] start-address, +length, expr1 [, expr2 ...]\n"
                "size-char is one of b,h,w,g for 8,16,32,64 bit values respectively,\n"
                "and if not specified the size is taken from the type of the expression\n"
                "in the current language.\n"
                "Note that this means for example that in the case of C-like languages\n"
                "a search for an untyped 0x42 will search for \"(int) 0x42\"\n"
                "which is typically four bytes, and a search for a string \"hello\" will\n"
                "include the trailing '\\0'.  The null terminator can be removed from\n"
                "searching by using casts, e.g.: {char[5]}\"hello\".\n"
                "\n"
                "The address of the last match is stored as the value of \"$_\".\n"
                "Convenience variable \"$numfound\" is set to the number of matches.",
           (int **)&dword_474744);
}
