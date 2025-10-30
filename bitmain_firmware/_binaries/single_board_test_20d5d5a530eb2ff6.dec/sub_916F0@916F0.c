int __fastcall sub_916F0(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  int v5; // r2
  int *v7; // r0
  int v8; // r0
  _BOOL4 v9; // r5
  _BOOL4 v10; // r5

  if ( a3 == 0x4000 )
    return 1;
  v5 = a1[335];
  if ( v5 != 1 )
  {
    sub_95494(a1, 110, 585, 110, "ssl/statem/extensions_clnt.c", 1457);
    return 0;
  }
  v7 = (int *)a1[1];
  if ( (*(_DWORD *)(v7[25] + 48) & 8) != 0 )
  {
    if ( *(_DWORD *)(a2 + 4) )
    {
LABEL_17:
      sub_95494(a1, 50, 585, 110, "ssl/statem/extensions_clnt.c", 1462);
      return 0;
    }
  }
  else
  {
    v8 = *v7;
    v9 = v8 == 0x10000;
    if ( v8 < 772 )
      v9 = 1;
    if ( v9 && *(_DWORD *)(a2 + 4) )
      goto LABEL_17;
    v10 = v8 >= 772;
    if ( v8 == 0x10000 )
      v10 = 0;
    if ( v10 )
    {
      if ( !a5 )
        return sub_98E40(a1);
      return v5;
    }
  }
  a1[338] = 1;
  return 1;
}
