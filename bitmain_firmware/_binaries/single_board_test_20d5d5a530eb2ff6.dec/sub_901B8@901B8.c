int __fastcall sub_901B8(int a1, int a2)
{
  int v2; // r2
  _BOOL4 v3; // r3
  __int64 v7; // r0
  int v8; // r7
  int v9; // [sp+Ch] [bp-8h]

  v2 = *(_DWORD *)(a1 + 1284);
  if ( (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 100) + 48) & 8) != 0 )
  {
    v3 = v2 > 65277;
    if ( v2 == 256 )
      v3 = 1;
    if ( v3 )
      return 2;
  }
  else if ( v2 <= 770 )
  {
    return 2;
  }
  v7 = sub_A2E74();
  v8 = v7;
  if ( sub_A8450(a2, HIDWORD(v7), 13, 0, 2)
    && sub_A8398(a2, 2)
    && sub_A8398(a2, 2)
    && sub_A3C90(a1, a2, v9, v8)
    && sub_A7EDC(a2)
    && sub_A7EDC(a2) )
  {
    return 1;
  }
  sub_95494(a1, 80, 477, 68, "ssl/statem/extensions_clnt.c", 298);
  return 0;
}
