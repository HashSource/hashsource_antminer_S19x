int __fastcall sub_5E5D4(const char *a1)
{
  size_t v2; // r5
  int result; // r0

  if ( !a1 )
    goto LABEL_13;
  v2 = strlen(a1);
  result = strncmp(a1, "natural", v2);
  if ( !result )
    return result;
  if ( !strncmp(a1, "binary", v2) )
    return 1;
  if ( !strncmp(a1, "decimal", v2) )
    return 2;
  if ( !strncmp(a1, "hexadecimal", v2) )
    return 3;
  if ( strncmp(a1, "octal", v2) )
  {
    if ( !strncmp(a1, "zero-hexadecimal", v2) )
      return 5;
LABEL_13:
    sub_946E0(
      "Must specify the format as: \"natural\", \"binary\", \"decimal\", \"hexadecimal\", \"octal\" or \"zero-hexadecimal\"");
  }
  return 4;
}
