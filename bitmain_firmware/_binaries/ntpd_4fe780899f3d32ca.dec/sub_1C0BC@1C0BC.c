char *__fastcall sub_1C0BC(int a1)
{
  unsigned int v1; // r0
  char *result; // r0

  v1 = a1 - 258;
  if ( v1 > 0xC7 )
    return "(keyword not found)";
  result = (&keyword_text)[v1];
  if ( !result )
    return "(keyword not found)";
  return result;
}
