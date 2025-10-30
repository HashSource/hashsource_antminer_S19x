const char *__fastcall sub_3E49C(int a1, int a2)
{
  const char *result; // r0
  int v3; // r3

  result = *(const char **)(a2 + 248);
  if ( result )
  {
    v3 = *((unsigned __int8 *)result + 4);
    result = "Exiting";
    if ( !v3 )
      return 0;
  }
  return result;
}
