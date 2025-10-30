const char *sub_28AB5C()
{
  const char *result; // r0

  if ( dword_46DED4 == 1 )
    return "emacs";
  result = "none";
  if ( !dword_46DED4 )
    return "vi";
  return result;
}
