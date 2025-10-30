int __fastcall sub_59E10(int a1, int a2)
{
  const char *v3; // r4
  bool v4; // zf
  int v5; // r2
  int v6; // r3

  v3 = *(const char **)(a2 + 84);
  v4 = (v3[768] & 8) == 0;
  v5 = *(_DWORD *)v3;
  ++*((_DWORD *)v3 + 194);
  v6 = *((_DWORD *)v3 + 49);
  if ( !v4 && v6 < *(unsigned __int8 *)(v5 + 12) )
  {
    *(_BYTE *)(v5 + 13) = 15;
    v6 = *((_DWORD *)v3 + 49);
  }
  *(_BYTE *)(v5 + 12) = v6;
  if ( *((_DWORD *)v3 + 54) == *((_DWORD *)v3 + 55) )
    return sub_39C88(a2, 1);
  sub_3A534(a2);
  return sub_42D0C(a2 + 16, v3 + 56);
}
