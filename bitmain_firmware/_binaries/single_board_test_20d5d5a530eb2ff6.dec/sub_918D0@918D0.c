int __fastcall sub_918D0(_DWORD *a1, unsigned __int8 **a2)
{
  int v2; // r3
  int v3; // r5
  int v5; // r0
  int (__fastcall *v6)(_DWORD *, _BYTE *, _BYTE *, unsigned __int8 *, unsigned __int8 *, _DWORD); // r7
  unsigned __int8 *v7; // r3
  unsigned __int8 *v8; // lr
  unsigned int v9; // r4
  unsigned __int8 *v10; // r1
  unsigned int v11; // r5
  unsigned int v12; // r2
  void *v14; // r0
  int v15; // r2
  _BYTE n[9]; // [sp+Bh] [bp-9h] BYREF

  v2 = a1[31];
  if ( *(_DWORD *)(v2 + 384) )
  {
    v3 = 1;
    if ( *(_DWORD *)(v2 + 516) )
      return v3;
  }
  v5 = a1[308];
  v6 = *(int (__fastcall **)(_DWORD *, _BYTE *, _BYTE *, unsigned __int8 *, unsigned __int8 *, _DWORD))(v5 + 392);
  if ( !v6 )
  {
    v3 = 0;
    sub_95494(a1, 110, 582, 110, "ssl/statem/extensions_clnt.c", 1588);
    return v3;
  }
  v7 = *a2;
  v8 = a2[1];
  v9 = (unsigned int)v8;
  v10 = *a2;
  v11 = (unsigned int)(v8 - 1);
  if ( v8 )
  {
    while ( 1 )
    {
      v12 = *v10;
      v10 += v12 + 1;
      v9 = v11 - v12;
      if ( v12 > v11 || !v12 )
        break;
      v11 = v9 - 1;
      if ( !v9 )
        goto LABEL_10;
    }
    v3 = 0;
    sub_95494(a1, 50, 565, 110, "ssl/statem/extensions_clnt.c", 1566);
    return v3;
  }
LABEL_10:
  v3 = v6(a1, &n[1], n, v7, v8, *(_DWORD *)(v5 + 396));
  if ( !v3 )
  {
    CRYPTO_free(a1[359], "ssl/statem/extensions_clnt.c", 1612);
    v14 = (void *)CRYPTO_malloc(n[0], "ssl/statem/extensions_clnt.c", 1613);
    a1[359] = v14;
    if ( v14 )
    {
      memcpy(v14, *(const void **)&n[1], n[0]);
      v15 = a1[31];
      a1[360] = n[0];
      *(_DWORD *)(v15 + 828) = 1;
      return 1;
    }
    a1[360] = v9;
    sub_95494(a1, 80, 582, 68, "ssl/statem/extensions_clnt.c", 1617);
    return v3;
  }
  sub_95494(a1, 40, 582, 110, "ssl/statem/extensions_clnt.c", 1604);
  return v9;
}
