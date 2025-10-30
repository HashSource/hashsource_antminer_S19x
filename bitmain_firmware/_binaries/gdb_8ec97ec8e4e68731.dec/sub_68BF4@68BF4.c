int __fastcall sub_68BF4(int a1, int a2, int a3, int a4, const char *a5, int a6)
{
  int v6; // r4

  v6 = *(_DWORD *)(*(_DWORD *)(a1 + 36) - 4);
  if ( *(_BYTE *)(a1 + 24) )
    *(_BYTE *)(a1 + 24) = 0;
  else
    sub_68BE4(a1);
  if ( a5 )
    sub_2594B0(v6, "%s=", a5);
  sub_2594B0(v6, "\"");
  if ( a6 )
    sub_258F78(a6, 34, v6);
  return sub_2594B0(v6, "\"");
}
