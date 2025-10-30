int __fastcall sub_905B4(int a1, int a2)
{
  int v5; // r1

  if ( (*(_DWORD *)(a1 + 1260) & 0x80000) != 0 )
    return 2;
  if ( sub_A8450(a2, a2, 22, 0, 2) && sub_A8450(a2, v5, 0, 0, 2) )
    return 1;
  sub_95494(a1, 80, 469, 68, "ssl/statem/extensions_clnt.c", 479);
  return 0;
}
