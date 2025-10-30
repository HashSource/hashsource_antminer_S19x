int __fastcall sub_94660(_DWORD *a1, int a2)
{
  int *v3; // r3
  int v4; // r2
  int v5; // r3
  int v8; // r1

  if ( a1[371] != 1 )
    return 2;
  if ( a1[35] )
  {
    v3 = (int *)a1[1];
    if ( (*(_DWORD *)(v3[25] + 48) & 8) != 0 )
      return 2;
    v4 = *v3;
    v5 = *v3 == 0x10000;
    if ( v4 < 772 )
      v5 |= 1u;
    if ( v5 )
      return 2;
  }
  if ( sub_A8450(a2, a2, 0, 0, 2) && sub_A8450(a2, v8, 0, 0, 2) )
    return 1;
  sub_95494(a1, 80, 459, 68, "ssl/statem/extensions_srvr.c", 1350);
  return 0;
}
