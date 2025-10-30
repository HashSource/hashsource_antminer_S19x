int __fastcall sub_93338(int a1, unsigned __int8 **a2)
{
  _DWORD *v2; // lr
  unsigned int v3; // r3
  unsigned int v5; // r3
  unsigned int v6; // r6
  int v7; // r3
  int v9; // r7
  unsigned int v10; // r4
  unsigned __int8 *v11; // r2
  unsigned int v12; // r3
  unsigned int v13; // r4
  bool v14; // cc
  int v15; // r8
  int v16; // r0

  v2 = *(_DWORD **)(a1 + 124);
  if ( v2[96] && v2[129] )
    return 1;
  v3 = (unsigned int)a2[1];
  if ( v3 > 1
    && (v5 = v3 - 2, v6 = (*a2)[1] | (**a2 << 8), v6 <= v5)
    && (v9 = (int)(*a2 + 2), v6 == v5)
    && (*a2 = (unsigned __int8 *)(v9 + v6), a2[1] = 0, v6 > 1) )
  {
    v10 = v6;
    v11 = (unsigned __int8 *)v9;
    do
    {
      v12 = *v11;
      v13 = v10 - 1;
      v14 = v12 > v13;
      v10 = v13 - v12;
      v11 += v12 + 1;
      if ( v14 || !v12 )
      {
        v7 = 485;
        goto LABEL_6;
      }
    }
    while ( v10 );
    CRYPTO_free(v2[210], "ssl/statem/extensions_srvr.c", 490);
    v15 = *(_DWORD *)(a1 + 124);
    *(_DWORD *)(v15 + 840) = 0;
    *(_DWORD *)(v15 + 844) = 0;
    CRYPTO_free(0, "ssl/statem/../packet_local.h", 453);
    *(_DWORD *)(v15 + 840) = 0;
    *(_DWORD *)(v15 + 844) = 0;
    v16 = sub_E9E68(v9, v6, "ssl/statem/../packet_local.h", 462);
    *(_DWORD *)(v15 + 840) = v16;
    if ( v16 )
    {
      *(_DWORD *)(v15 + 844) = v6;
      return 1;
    }
    else
    {
      sub_95494(a1, 80, 567, 68, "ssl/statem/extensions_srvr.c", 496);
      return 0;
    }
  }
  else
  {
    v7 = 475;
LABEL_6:
    sub_95494(a1, 50, 567, 110, "ssl/statem/extensions_srvr.c", v7);
    return 0;
  }
}
