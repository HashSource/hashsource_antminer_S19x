int __fastcall sub_93F24(_DWORD *a1, unsigned __int8 **a2)
{
  unsigned int v2; // r3
  unsigned int v4; // r2
  unsigned int v5; // r3
  int v6; // r0
  int *v7; // r3
  int v8; // r3
  _BOOL4 v9; // r2
  _DWORD v11[2]; // [sp+8h] [bp-8h] BYREF

  v2 = (unsigned int)a2[1];
  if ( v2 > 1
    && (v4 = v2 - 2, v5 = (*a2)[1] | (**a2 << 8), v5 <= v4)
    && (v6 = (int)(*a2 + 2), v5 == v4)
    && (*a2 = (unsigned __int8 *)(v6 + v5), v11[0] = v6, v11[1] = v5, a2[1] = 0, v5)
    && (v5 & 1) == 0 )
  {
    if ( a1[35] )
    {
      v7 = (int *)a1[1];
      if ( (*(_DWORD *)(v7[25] + 48) & 8) != 0 )
        return 1;
      v8 = *v7;
      v9 = v8 >= 772;
      if ( v8 == 0x10000 )
        v9 = 0;
      if ( !v9 )
        return 1;
    }
    CRYPTO_free(a1[351], "ssl/statem/extensions_srvr.c", 970);
    a1[351] = 0;
    a1[350] = 0;
    if ( sub_A3F08(v11, a1 + 351, a1 + 350) )
      return 1;
    sub_95494(a1, 80, 578, 68, "ssl/statem/extensions_srvr.c", 978);
  }
  else
  {
    sub_95494(a1, 50, 578, 110, "ssl/statem/extensions_srvr.c", 965);
  }
  return 0;
}
