_DWORD *__fastcall sub_10C634(_DWORD *a1, int a2)
{
  size_t *v4; // r0
  int v5; // r4
  _DWORD *v7; // r0
  _DWORD *v8; // r5
  void **v9; // r0
  void *v10; // r0
  void *v11; // r0
  int v12; // r3
  unsigned int v13; // r6
  int v14; // r5
  const char *v15; // r11
  const char *v16; // r0
  _DWORD *v17; // r0
  _DWORD *v18; // r10
  int v19; // r11
  _BOOL4 v20; // lr
  _BYTE *v21; // r2
  unsigned __int8 *v22; // r1
  _BYTE *v23; // r0
  int v24; // r3
  int v25; // t1
  _BYTE *v26; // r5
  _BYTE *v27; // r2
  _BYTE *v28; // r2
  int v29; // [sp+4h] [bp-10h]
  _DWORD *v30; // [sp+8h] [bp-Ch]

  v4 = (size_t *)sub_BADF8();
  v5 = (int)v4;
  if ( !v4 || !sub_BAE84(v4, 0x200u) || (v7 = CRYPTO_malloc((void *)0x20), (v8 = v7) == 0) )
  {
    sub_BAE3C(v5);
    return 0;
  }
  *v7 = a2;
  v7[2] = 0;
  v7[3] = 0;
  v9 = sub_10BFCC();
  v8[1] = v9;
  if ( !v9 )
    goto LABEL_32;
  v10 = CRYPTO_malloc((void *)(4 * a2));
  v8[2] = v10;
  if ( !v10 )
    goto LABEL_32;
  v11 = CRYPTO_malloc((void *)(4 * a2));
  v8[3] = v11;
  if ( !v11 )
    goto LABEL_32;
  if ( a2 > 0 )
  {
    v12 = 0;
    do
    {
      *(_DWORD *)(v8[2] + 4 * v12) = 0;
      *(_DWORD *)(v8[3] + 4 * v12++) = 0;
    }
    while ( a2 != v12 );
  }
  v30 = v8;
  *(_BYTE *)(*(_DWORD *)(v5 + 4) + 511) = 0;
  v13 = 512;
  v14 = 0;
  v29 = 4 * a2 + 4;
  do
  {
    if ( !v14 )
      goto LABEL_28;
    v13 += 512;
    if ( !sub_BAF60((unsigned int *)v5, v13) )
      goto LABEL_37;
    *(_BYTE *)(*(_DWORD *)(v5 + 4) + v14) = 0;
    sub_B6D58(a1, *(_DWORD *)(v5 + 4) + v14, v13 - v14);
    v15 = *(const char **)(v5 + 4);
    v16 = &v15[v14];
    if ( !v15[v14] )
      goto LABEL_36;
LABEL_16:
    v14 += strlen(v16);
  }
  while ( v15[v14 - 1] != 10 );
  v15[v14 - 1] = 0;
  v17 = CRYPTO_malloc((void *)(v29 + v14));
  v18 = v17;
  if ( !v17 )
  {
LABEL_37:
    v8 = v30;
    goto LABEL_32;
  }
  v19 = 1;
  v20 = 0;
  v21 = (char *)v17 + v29;
  *v17 = (char *)v17 + v29;
  v22 = *(unsigned __int8 **)(v5 + 4);
  while ( 1 )
  {
    v23 = v22;
    v25 = *v22++;
    v24 = v25;
    if ( !v25 )
      break;
    if ( v24 != 9 )
      goto LABEL_19;
    v26 = v21 + 1;
    v23 = v22;
    if ( v20 )
    {
      --v21;
LABEL_19:
      *v21++ = v24;
      v20 = v24 == 92;
    }
    else
    {
      *v21++ = 0;
      if ( v19 >= a2 )
        goto LABEL_25;
      v18[v19++] = v26;
    }
  }
  v26 = v21;
LABEL_25:
  *v26 = 0;
  v27 = v26 + 1;
  if ( v19 != a2 || (v14 = (unsigned __int8)*v23, *v23) )
  {
    v8 = v30;
    CRYPTO_free(v18);
    v30[4] = 6;
LABEL_32:
    sub_BAE3C(v5);
    sub_10BDB4((void **)v8[1]);
    CRYPTO_free((void *)v8[2]);
    CRYPTO_free((void *)v8[3]);
    CRYPTO_free(v8);
    return 0;
  }
  v18[v19] = v27;
  if ( !sub_10BD3C((int *)v30[1], (int)v18) )
  {
    v8 = v30;
    CRYPTO_free(v18);
    goto LABEL_32;
  }
LABEL_28:
  while ( 1 )
  {
    **(_BYTE **)(v5 + 4) = v14;
    sub_B6D58(a1, *(_DWORD *)(v5 + 4), v13);
    v28 = *(_BYTE **)(v5 + 4);
    if ( !*v28 )
      break;
    if ( *v28 != 35 )
    {
      v15 = *(const char **)(v5 + 4);
      v16 = v15;
      goto LABEL_16;
    }
  }
LABEL_36:
  sub_BAE3C(v5);
  return v30;
}
