int __fastcall sub_94974(int a1, int a2, int a3, int a4, int a5)
{
  int result; // r0
  int *v6; // r3
  int v7; // r2
  bool v8; // r3
  int *v12; // r3
  int v13; // r3
  _BOOL4 v14; // r2
  int v15; // r4
  int v16; // r3

  if ( a3 == 0x4000 || !*(_DWORD *)(a1 + 1352) )
    return 2;
  v6 = *(int **)(a1 + 4);
  if ( (*(_DWORD *)(v6[25] + 48) & 8) == 0 )
  {
    v7 = *v6;
    v8 = *v6 >= 772;
    if ( v7 == 0x10000 )
      v8 = 0;
    if ( a5 && v8 )
      return 2;
  }
  if ( !sub_A8450(a2, a2, 5, 0, 2) || !sub_A8398(a2, 2) )
  {
    v16 = 1513;
    goto LABEL_23;
  }
  v12 = *(int **)(a1 + 4);
  if ( (*(_DWORD *)(v12[25] + 48) & 8) != 0 )
    goto LABEL_26;
  v13 = *v12;
  v14 = v13 != 0x10000;
  if ( v13 < 772 )
    v14 = 0;
  if ( !v14 || (result = sub_A2100(a1, a2)) != 0 )
  {
LABEL_26:
    v15 = sub_A7EDC(a2);
    result = 1;
    if ( !v15 )
    {
      v16 = 1528;
LABEL_23:
      sub_95494(a1, 80, 461, 68, "ssl/statem/extensions_srvr.c", v16);
      return 0;
    }
  }
  return result;
}
