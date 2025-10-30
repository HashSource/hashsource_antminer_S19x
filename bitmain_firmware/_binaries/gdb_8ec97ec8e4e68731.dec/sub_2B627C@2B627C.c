_DWORD *__fastcall sub_2B627C(_DWORD *result, int a2, int a3)
{
  int v3; // r1
  int v4; // r3
  int v5; // r3
  _DWORD *v8; // r4
  int v9; // r3

  if ( result[11] != 4 )
    __und(0);
  if ( result[12] )
  {
    v8 = result;
    if ( !a2 )
      result = (_DWORD *)sub_2A6BBC("elf32-arm.c", 9149);
    if ( v8[108] )
      v9 = 8;
    else
      v9 = 12;
    *(_DWORD *)(a2 + 36) += v9 * a3;
  }
  else
  {
    v3 = result[65];
    v4 = result[108];
    result = *(_DWORD **)(v3 + 36);
    if ( v4 )
      v5 = 8;
    else
      v5 = 12;
    *(_DWORD *)(v3 + 36) = (char *)result + a3 * v5;
  }
  return result;
}
