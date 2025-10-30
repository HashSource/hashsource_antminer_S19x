int __fastcall sub_7581C(int a1, int a2, int a3)
{
  const char *v4; // r3

  v4 = (&off_361CAC)[a2];
  if ( a2 <= 88 )
  {
    sub_1C4D40(a1, "%s %s (", "token", v4);
    if ( a3 )
      sub_75540(
        a1,
        word_361ED8[a2],
        *(_DWORD *)a3,
        *(const void **)(a3 + 4),
        *(_DWORD *)(a3 + 8),
        *(_DWORD *)(a3 + 12),
        *(_DWORD *)(a3 + 16));
  }
  else
  {
    sub_1C4D40(a1, "%s %s (", "nterm", v4);
  }
  return sub_1C4D40(a1, ")");
}
