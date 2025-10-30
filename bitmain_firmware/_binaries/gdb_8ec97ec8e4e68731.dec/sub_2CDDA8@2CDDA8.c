char *__fastcall sub_2CDDA8(int a1, int a2, int a3, int a4)
{
  unsigned int v4; // r12
  unsigned int v6; // r1
  char *result; // r0
  _DWORD *v8; // r3
  unsigned int v9; // r2

  v4 = *(_DWORD *)(a3 + 8);
  v6 = *(_DWORD *)(a2 + 28);
  if ( !v4 )
  {
    if ( (*(_BYTE *)(a3 + 12) & 0xF) != 3
      || (v8 = *(_DWORD **)(a1 + 160), v9 = *(_DWORD *)(a3 + 16), v9 >= v8[133])
      || (v6 = v8[15], (v4 = **(_DWORD **)(v8[16] + 4 * v9)) == 0) )
    {
      if ( !a4 )
        return "";
      return *(char **)a4;
    }
  }
  result = (char *)sub_2CD85C(a1, v6, v4);
  if ( !result )
    return "(null)";
  if ( a4 && !*result )
    return *(char **)a4;
  return result;
}
