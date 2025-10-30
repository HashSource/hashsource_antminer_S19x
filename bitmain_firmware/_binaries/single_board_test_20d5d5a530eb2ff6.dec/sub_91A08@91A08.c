int __fastcall sub_91A08(_DWORD *a1, const void **a2)
{
  int v2; // r7
  unsigned int v4; // r0
  unsigned __int8 *v6; // r1
  int v7; // lr
  int v8; // r3
  int v9; // r4
  size_t v10; // r8
  unsigned int v11; // r0
  int v13; // r7
  int v14; // r0
  int v15; // r3
  void *v16; // r7
  int v17; // r7
  int v18; // lr
  const void *v19; // r0
  size_t v20; // r3
  size_t v21; // r2
  int v22; // r3
  int v23; // r0
  int v24; // r3

  v2 = a1[31];
  if ( *(_DWORD *)(v2 + 848) )
  {
    v4 = (unsigned int)a2[1];
    if ( v4 <= 1 )
      goto LABEL_7;
    v6 = (unsigned __int8 *)*a2;
    v7 = *v6;
    v8 = v6[1];
    a2[1] = (const void *)(v4 - 2);
    *a2 = v6 + 2;
    v9 = (v8 | (v7 << 8)) != v4 - 2;
    if ( v4 == 2 )
      v9 = 1;
    if ( v9 || (v10 = v6[2], v11 = v4 - 3, a2[1] = (const void *)v11, *a2 = v6 + 3, v10 != v11) )
    {
LABEL_7:
      v9 = 0;
      sub_95494(a1, 50, 579, 110, "ssl/statem/extensions_clnt.c", 1650);
      return v9;
    }
    CRYPTO_free(*(_DWORD *)(v2 + 832), "ssl/statem/extensions_clnt.c", 1653);
    v13 = a1[31];
    v14 = CRYPTO_malloc(v10, "ssl/statem/extensions_clnt.c", 1654);
    v15 = a1[31];
    *(_DWORD *)(v13 + 832) = v14;
    v16 = *(void **)(v15 + 832);
    if ( !v16 )
    {
      *(_DWORD *)(v15 + 836) = 0;
      v9 = 0;
      sub_95494(a1, 80, 579, 68, "ssl/statem/extensions_clnt.c", 1658);
      return v9;
    }
    if ( v10 > (unsigned int)a2[1] )
    {
      sub_95494(a1, 50, 579, 110, "ssl/statem/extensions_clnt.c", 1663);
      return v9;
    }
    memcpy(v16, *a2, v10);
    v17 = a1[285];
    v18 = a1[31];
    v19 = *(const void **)(v17 + 484);
    v20 = (size_t)a2[1] - v10;
    *a2 = (char *)*a2 + v10;
    a2[1] = (const void *)v20;
    *(_DWORD *)(v18 + 836) = v10;
    if ( !v19 )
    {
      v9 = a1[35];
      a1[364] = 0;
      if ( !v9 )
      {
        v23 = sub_E9E68(*(_DWORD *)(v18 + 832), v10, "ssl/statem/extensions_clnt.c", 1686);
        v24 = a1[285];
        *(_DWORD *)(v17 + 484) = v23;
        if ( *(_DWORD *)(v24 + 484) )
        {
          v9 = 1;
          *(_DWORD *)(v24 + 488) = *(_DWORD *)(a1[31] + 836);
        }
        else
        {
          *(_DWORD *)(v24 + 488) = 0;
          sub_95494(a1, 80, 579, 68, "ssl/statem/extensions_clnt.c", 1690);
        }
        return v9;
      }
      return 1;
    }
    v21 = *(_DWORD *)(v17 + 488);
    if ( v21 == v10 && !memcmp(v19, *(const void **)(v18 + 832), v21) )
    {
      if ( a1[35] )
        return 1;
    }
    else
    {
      v22 = a1[35];
      a1[364] = 0;
      if ( v22 )
        return 1;
    }
    v9 = 0;
    sub_95494(a1, 80, 579, 68, "ssl/statem/extensions_clnt.c", 1682);
    return v9;
  }
  sub_95494(a1, 110, 579, 110, "ssl/statem/extensions_clnt.c", 1637);
  return 0;
}
