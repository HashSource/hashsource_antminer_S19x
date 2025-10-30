int __fastcall sub_900B8(_DWORD *a1, int a2)
{
  int v4; // r1
  _DWORD *v6; // r5
  unsigned __int16 *v7; // r3
  size_t v8; // r7
  int v9; // r0
  int v10; // r3
  void *v11; // r5
  int v12; // r3

  if ( !sub_A3748() )
    return 2;
  v6 = (_DWORD *)a1[285];
  if ( a1[8] )
  {
    if ( !v6 )
    {
LABEL_10:
      v12 = a1[352];
      if ( !v12 || *(_DWORD *)(v12 + 4) )
        goto LABEL_12;
      return 2;
    }
  }
  else
  {
    if ( !v6 )
      goto LABEL_10;
    if ( v6[116] && *v6 != 772 )
    {
      v8 = v6[117];
      goto LABEL_9;
    }
  }
  v7 = (unsigned __int16 *)a1[352];
  if ( !v7 )
  {
LABEL_12:
    v8 = 0;
    goto LABEL_13;
  }
  if ( !*((_DWORD *)v7 + 1) )
    return 2;
  v8 = *v7;
  v9 = CRYPTO_malloc(v8, "ssl/statem/extensions_clnt.c", 250);
  v10 = a1[285];
  v6[116] = v9;
  v11 = *(void **)(v10 + 464);
  if ( !v11 )
  {
    sub_95494(a1, 80, 476, 68, "ssl/statem/extensions_clnt.c", 254);
    return 0;
  }
  memcpy(v11, *(const void **)(a1[352] + 4), v8);
  *(_DWORD *)(a1[285] + 468) = v8;
LABEL_9:
  if ( !v8 )
    goto LABEL_10;
LABEL_13:
  if ( sub_A8450(a2, v4, 35, 0, 2) && sub_A8544(a2, *(_DWORD *)(a1[285] + 464), v8, 2) )
    return 1;
  sub_95494(a1, 80, 476, 68, "ssl/statem/extensions_clnt.c", 271);
  return 0;
}
