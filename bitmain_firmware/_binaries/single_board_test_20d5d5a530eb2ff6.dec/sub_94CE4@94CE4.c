int __fastcall sub_94CE4(_DWORD *a1, int a2)
{
  int *v2; // r3
  int v4; // r3
  _BOOL4 v5; // r2
  int v7; // r3
  int v9; // r1

  v2 = (int *)a1[1];
  if ( (*(_DWORD *)(v2[25] + 48) & 8) != 0 )
    goto LABEL_8;
  v4 = *v2;
  v5 = v4 != 0x10000;
  if ( v4 < 772 )
    v5 = 0;
  if ( !v5 )
  {
LABEL_8:
    v7 = 1663;
    goto LABEL_7;
  }
  if ( !sub_A8450(a2, a2, 43, 0, 2) || !sub_A8398(a2, 2) || !sub_A8450(a2, v9, *a1, (int)*a1 >> 31, 2) || !sub_A7EDC(a2) )
  {
    v7 = 1673;
LABEL_7:
    sub_95494(a1, 80, 611, 68, "ssl/statem/extensions_srvr.c", v7);
    return 0;
  }
  return 1;
}
