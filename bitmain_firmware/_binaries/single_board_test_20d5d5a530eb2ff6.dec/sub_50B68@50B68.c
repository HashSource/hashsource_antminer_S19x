_DWORD *__fastcall sub_50B68(_DWORD *result, int a2)
{
  _DWORD *v2; // r4
  _DWORD *v3; // r7
  unsigned int v5; // r3
  int v6; // r3
  _DWORD *v7; // r6

  v2 = result + 0x10000;
  v3 = result + 65537;
  v5 = result[65539] + result[0x10000] - result[65537];
  if ( v5 > 0x40000000 )
  {
    v7 = result;
    memset(result, 0, 0x20000u);
    result = memset(v7 + 0x8000, 255, 0x20000u);
    v6 = 0x10000;
  }
  else
  {
    v6 = v5 + 0x10000;
  }
  v2[5] = v6;
  *v3 = a2;
  *v2 = a2;
  v2[2] = a2;
  v2[3] = v6;
  v2[4] = v6;
  return result;
}
