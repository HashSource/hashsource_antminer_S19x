FILE *__fastcall sub_244348(FILE *result)
{
  int v1; // r4
  int v2; // r6
  int v3; // r5

  v1 = dword_487668;
  v2 = *(_DWORD *)(dword_487668 + 48);
  v3 = dword_487668 + 48;
  *(_DWORD *)(dword_487668 + 48) = result;
  while ( result )
  {
    result = (FILE *)feof(result);
    if ( result )
      break;
    result = (FILE *)sub_243ED8(0, 0, 0);
    if ( !result )
      break;
    sub_15421C((unsigned __int8 *)result);
    result = *(FILE **)(v1 + 48);
  }
  if ( v3 )
    *(_DWORD *)(v1 + 48) = v2;
  return result;
}
