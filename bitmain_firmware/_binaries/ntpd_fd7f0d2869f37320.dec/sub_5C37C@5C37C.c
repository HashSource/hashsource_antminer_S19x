int __fastcall sub_5C37C(int a1, int a2)
{
  const char *v3; // r4
  int v4; // r0

  v3 = *(const char **)(a2 + 84);
  v4 = *(_DWORD *)v3;
  ++*((_DWORD *)v3 + 194);
  *(_DWORD *)(v4 + 8) = 0;
  if ( write(*((_DWORD *)v3 + 7), "TQ", 2u) != 2 )
    sub_39C88(a2, 3);
  if ( *((_DWORD *)v3 + 54) == *((_DWORD *)v3 + 55) )
    return sub_39C88(a2, 1);
  sub_3A534(a2);
  return sub_42D0C(a2 + 16, v3 + 56);
}
