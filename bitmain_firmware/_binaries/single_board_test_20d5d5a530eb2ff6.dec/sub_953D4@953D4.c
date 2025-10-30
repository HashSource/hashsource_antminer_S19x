int __fastcall sub_953D4(int a1, int a2)
{
  int v5; // r1

  if ( !*(_DWORD *)(a1 + 140) )
    return 2;
  if ( sub_A8450(a2, a2, 41, 0, 2)
    && sub_A8398(a2, 2)
    && sub_A8450(a2, v5, *(_DWORD *)(a1 + 1476), *(int *)(a1 + 1476) >> 31, 2)
    && sub_A7EDC(a2) )
  {
    return 1;
  }
  sub_95494(a1, 80, 504, 68, "ssl/statem/extensions_srvr.c", 1975);
  return 0;
}
