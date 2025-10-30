__int16 *__fastcall sub_5AB2C(int a1, int a2)
{
  __int16 *result; // r0
  _BYTE *v3; // lr
  int v4; // r12
  int v5; // r1
  int v6; // r1

  result = (__int16 *)a2;
  v3 = *(_BYTE **)(a2 + 84);
  v4 = *(_DWORD *)v3;
  v5 = *(_DWORD *)(*(_DWORD *)v3 + 8);
  if ( !v5 )
  {
    if ( (v3[768] & 1) == 0 )
      return result;
    v3[768] &= ~1u;
    return sub_5A7D8(result, v5);
  }
  v6 = v5 - 1;
  *(_DWORD *)(v4 + 8) = v6;
  if ( !v6 )
  {
    v5 = *(_DWORD *)(v4 + 4);
    return sub_5A7D8(result, v5);
  }
  return result;
}
