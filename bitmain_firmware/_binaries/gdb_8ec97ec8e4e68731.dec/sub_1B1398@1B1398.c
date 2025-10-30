int __fastcall sub_1B1398(_DWORD *a1, const char *a2, int a3, int a4)
{
  unsigned int v5; // r12
  int result; // r0

  v5 = *(_BYTE *)(a4 + 32) & 0xF;
  if ( v5 != 7 )
  {
    if ( v5 < 7 || v5 > 0xA )
    {
      *a1 = a4;
      a1[1] = a3;
      return 1;
    }
    if ( !a2 || !j_strcmp(*(const char **)(a4 + 28), a2) )
    {
      a1[2] = a4;
      a1[3] = a3;
      return 0;
    }
    return 0;
  }
  result = a1[4];
  if ( result )
    return 0;
  a1[4] = a4;
  a1[5] = a3;
  return result;
}
