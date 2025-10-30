int __fastcall sub_82B40(int a1, int a2)
{
  int v3; // r6
  _DWORD *v6; // r3
  int v7; // r1
  int v8; // r2

  if ( !*(_DWORD *)(*(_DWORD *)(a1 + 124) + 240) )
    return 0;
  v3 = a1 + 1616;
  if ( sub_7D3C4(a1 + 1616) || sub_7D404(v3) || !a2 && sub_95448(a1) )
    return 0;
  sub_95488(a1);
  v6 = *(_DWORD **)(a1 + 124);
  v7 = v6[62];
  v8 = v6[61];
  v6[60] = 0;
  v6[62] = v7 + 1;
  v6[61] = v8 + 1;
  return 1;
}
