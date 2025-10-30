const char *__fastcall sub_35F08(int a1, _DWORD *a2, int a3, int a4)
{
  const char *result; // r0
  _BOOL4 v8; // r4
  int v9; // r2

  result = (const char *)sub_50584();
  if ( !result )
  {
    result = "Value out of range";
    v8 = *a2 > a4;
    if ( *a2 < a3 )
      v9 = v8 | 1;
    else
      v9 = v8;
    if ( !v9 )
      return 0;
  }
  return result;
}
