_DWORD *__fastcall sub_8440C(int a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r7
  int *v4; // r4
  int v5; // r6
  int v6; // r0
  int v7; // r5
  _DWORD *v8; // r9
  int v9; // r3
  int *v10; // r6
  int v11; // r0
  int v12; // r3
  int v13; // r3
  int v14; // r0
  void *v15; // r0
  const void *v16; // r1
  void *v17; // r0
  int v18; // r3
  void *v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r2
  int v24; // r3
  int v25; // r2
  int v26; // r3
  int v27; // r0
  int v28; // r0
  int v30; // r2

  v2 = (_DWORD *)sub_E0740(272, "ssl/ssl_cert.c", 76);
  v3 = v2;
  if ( !v2 )
  {
    sub_D0048(20, 221, 65, "ssl/ssl_cert.c", 80);
    return 0;
  }
  __dmb(0xBu);
  v2[66] = 1;
  __dmb(0xBu);
  v4 = (int *)(a1 + 20);
  *v2 = (char *)v2 + ((*(_DWORD *)a1 - (a1 + 20)) & 0xFFFFFFFC) + 20;
  v5 = sub_10C510();
  v3[67] = v5;
  if ( !v5 )
  {
    sub_D0048(20, 221, 65, "ssl/ssl_cert.c", 88);
    CRYPTO_free(v3, "ssl/ssl_cert.c", 89);
    return 0;
  }
  v6 = *(_DWORD *)(a1 + 4);
  if ( v6 )
  {
    v3[1] = v6;
    ((void (*)(void))sub_D9C08)();
  }
  v7 = a1;
  v8 = v3;
  v9 = *(_DWORD *)(a1 + 12);
  v10 = v3 + 5;
  v3[2] = *(_DWORD *)(a1 + 8);
  v3[3] = v9;
  do
  {
    v11 = *v4;
    if ( *v4 )
    {
      *v10 = *v4;
      sub_10FD18(v11);
    }
    v12 = v4[1];
    if ( v12 )
    {
      v10[1] = v12;
      sub_D9C08(v4[1]);
    }
    v13 = v4[2];
    v4 += 5;
    if ( v13 )
    {
      v14 = sub_10EBC4(v13);
      v10[2] = v14;
      if ( !v14 )
      {
        v30 = 117;
LABEL_35:
        sub_D0048(20, 221, 65, "ssl/ssl_cert.c", v30);
        goto LABEL_36;
      }
    }
    v10 += 5;
    if ( !*(_DWORD *)(v7 + 32) )
      goto LABEL_15;
    v15 = (void *)CRYPTO_malloc(*(_DWORD *)(v7 + 36), "ssl/ssl_cert.c", 124);
    v8[8] = v15;
    if ( !v15 )
    {
      v30 = 126;
      goto LABEL_35;
    }
    v16 = *(const void **)(v7 + 32);
    v8[9] = *(_DWORD *)(v7 + 36);
    memcpy(v15, v16, *(_DWORD *)(v7 + 36));
LABEL_15:
    v7 += 20;
    v8 += 5;
  }
  while ( v4 != (int *)(a1 + 200) );
  if ( *(_DWORD *)(a1 + 208) )
  {
    v17 = (void *)CRYPTO_malloc(2 * *(_DWORD *)(a1 + 212), "ssl/ssl_cert.c", 138);
    v3[52] = v17;
    if ( !v17 )
      goto LABEL_36;
    memcpy(v17, *(const void **)(a1 + 208), 2 * *(_DWORD *)(a1 + 212));
    v3[53] = *(_DWORD *)(a1 + 212);
    v18 = *(_DWORD *)(a1 + 216);
    if ( v18 )
    {
LABEL_19:
      v19 = (void *)CRYPTO_malloc(2 * *(_DWORD *)(a1 + 220), "ssl/ssl_cert.c", 149);
      v3[54] = v19;
      if ( !v19 )
        goto LABEL_36;
      memcpy(v19, *(const void **)(a1 + 216), 2 * *(_DWORD *)(a1 + 220));
      v3[55] = *(_DWORD *)(a1 + 220);
      goto LABEL_21;
    }
  }
  else
  {
    v3[52] = 0;
    v18 = *(_DWORD *)(a1 + 216);
    if ( v18 )
      goto LABEL_19;
  }
  v3[54] = v18;
LABEL_21:
  v20 = *(_DWORD *)(a1 + 200);
  if ( v20 )
  {
    v21 = sub_E9E68(v20, *(_DWORD *)(a1 + 204), "ssl/ssl_cert.c", 159);
    v3[50] = v21;
    if ( !v21 )
      goto LABEL_36;
    v3[51] = *(_DWORD *)(a1 + 204);
  }
  v22 = *(_DWORD *)(a1 + 236);
  v23 = *(_DWORD *)(a1 + 224);
  v24 = *(_DWORD *)(a1 + 228);
  v3[4] = *(_DWORD *)(a1 + 16);
  v3[56] = v23;
  v3[57] = v24;
  if ( v22 )
  {
    sub_10F198();
    v3[59] = *(_DWORD *)(a1 + 236);
  }
  if ( *(_DWORD *)(a1 + 232) )
  {
    sub_10F198();
    v3[58] = *(_DWORD *)(a1 + 232);
  }
  v25 = *(_DWORD *)(a1 + 252);
  v26 = *(_DWORD *)(a1 + 256);
  v3[62] = *(_DWORD *)(a1 + 248);
  v3[63] = v25;
  v3[64] = v26;
  if ( sub_92650(v3 + 60, a1 + 240) )
  {
    v27 = *(_DWORD *)(a1 + 260);
    if ( !v27 )
      return v3;
    v28 = sub_E9E3C(v27, "ssl/ssl_cert.c", 188);
    v3[65] = v28;
    if ( v28 )
      return v3;
  }
LABEL_36:
  sub_84370((int)v3);
  return 0;
}
