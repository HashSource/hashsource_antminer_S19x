int __fastcall sub_903D8(int a1, int a2)
{
  int v2; // r3
  int v6; // r1

  if ( !*(_DWORD *)(*(_DWORD *)(a1 + 1232) + 392) )
    return 2;
  v2 = *(_DWORD *)(a1 + 124);
  if ( *(_DWORD *)(v2 + 384) )
  {
    if ( *(_DWORD *)(v2 + 516) )
      return 2;
  }
  if ( sub_A8450(a2, a2, 13172, 0, 2) && sub_A8450(a2, v6, 0, 0, 2) )
    return 1;
  sub_95494(a1, 80, 471, 68, "ssl/statem/extensions_clnt.c", 393);
  return 0;
}
