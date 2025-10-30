int __fastcall sub_B300C(_DWORD *a1, int a2, _DWORD *a3, int a4, void *src, size_t n)
{
  int v10; // r4
  int v12; // r6
  _DWORD *v13; // r5
  int v14; // r9
  int *v15; // r10
  int v16; // r0
  _DWORD *v17; // r8
  _DWORD *v18; // r8
  _DWORD *v19; // r0
  _DWORD *v20; // r5
  int v21; // r0
  int v22; // r3
  int v23; // r8
  int *v24; // r9
  int v25; // r0
  int v26; // r0
  unsigned int v27; // r3
  int v28; // r0
  int v29; // r4
  int v30; // r7
  _DWORD *v31; // r9

  if ( !sub_DE05C(256, 0, 0) )
    return 0;
  v12 = sub_B2DB0();
  if ( !v12 )
  {
    if ( sub_DE414(1, 0) )
    {
      v26 = CRYPTO_malloc(12, "crypto/async/async.c", 40);
      v12 = v26;
      if ( v26 )
      {
        *(_DWORD *)(v26 + 4) = 0;
        *(_DWORD *)(v26 + 8) = 0;
        if ( sub_10C5BC(&unk_6DF3A8, v26) )
          goto LABEL_5;
      }
      else
      {
        sub_D0048(51, 100, 65, "crypto/async/async.c", 42);
      }
      CRYPTO_free(v12, "crypto/async/async.c", 54);
    }
    return 0;
  }
LABEL_5:
  v13 = (_DWORD *)*a1;
  if ( *a1 )
  {
    *(_DWORD *)(v12 + 4) = v13;
    goto LABEL_7;
  }
  v13 = *(_DWORD **)(v12 + 4);
  if ( !v13 )
  {
    v18 = (_DWORD *)sub_10C5B4(&unk_6DF3AC);
    if ( !v18 )
    {
      if ( !sub_B2E84(0, 0) )
        goto LABEL_31;
      v18 = (_DWORD *)sub_10C5B4(&unk_6DF3AC);
    }
    v19 = (_DWORD *)sub_10BD80(*v18);
    v20 = v19;
    if ( v19 )
    {
      *(_DWORD *)(v12 + 4) = v19;
      if ( src )
      {
        v21 = CRYPTO_malloc(n, "crypto/async/async.c", 227);
        v22 = *(_DWORD *)(v12 + 4);
        v20[2] = v21;
        if ( !*(_DWORD *)(v22 + 8) )
        {
          sub_D0048(51, 105, 65, "crypto/async/async.c", 229);
          v10 = 0;
          v30 = *(_DWORD *)(v12 + 4);
          v31 = (_DWORD *)sub_10C5B4(&unk_6DF3AC);
          CRYPTO_free(*(_DWORD *)(v30 + 8), "crypto/async/async.c", 139);
          *(_DWORD *)(v30 + 8) = 0;
          sub_10BD3C(*v31, v30);
          *(_DWORD *)(v12 + 4) = 0;
          return v10;
        }
        memcpy(*(void **)(v22 + 8), src, n);
        v20 = *(_DWORD **)(v12 + 4);
      }
      else
      {
        v19[2] = 0;
      }
      v20[1] = a4;
      v20[5] = a2;
      sub_D0048(51, 105, 102, "crypto/async/async.c", 243);
      goto LABEL_21;
    }
    v27 = v18[2];
    if ( !v27 || v27 > v18[1] )
    {
      v28 = sub_E0740(24, "crypto/async/async.c", 82);
      v29 = v28;
      if ( v28 )
      {
        *(_DWORD *)(v28 + 16) = 0;
        CRYPTO_free(*(_DWORD *)(v28 + 8), "crypto/async/async.c", 96);
        CRYPTO_free(v29, "crypto/async/async.c", 98);
      }
      else
      {
        sub_D0048(51, 102, 65, "crypto/async/async.c", 84);
      }
    }
LABEL_31:
    v10 = 1;
    *(_DWORD *)(v12 + 4) = 0;
    return v10;
  }
LABEL_7:
  v10 = v13[4];
  if ( v10 == 3 )
  {
    *a3 = v13[3];
    v13[5] = 0;
    v17 = (_DWORD *)sub_10C5B4(&unk_6DF3AC);
    CRYPTO_free(v13[2], "crypto/async/async.c", 139);
    v13[2] = 0;
    sub_10BD3C(*v17, v13);
    *(_DWORD *)(v12 + 4) = 0;
    *a1 = 0;
    return v10;
  }
  if ( v10 != 1 )
  {
    if ( v10 != 2 )
    {
      v10 = 0;
      sub_D0048(51, 105, 68, "crypto/async/async.c", 215);
      v14 = *(_DWORD *)(v12 + 4);
      v15 = (int *)sub_10C5B4(&unk_6DF3AC);
      CRYPTO_free(*(_DWORD *)(v14 + 8), "crypto/async/async.c", 139);
      v16 = *v15;
      *(_DWORD *)(v14 + 8) = 0;
      sub_10BD3C(v16, v14);
      *(_DWORD *)(v12 + 4) = 0;
      *a1 = 0;
      return v10;
    }
    *(_DWORD *)(v12 + 4) = *a1;
    sub_D0048(51, 105, 102, "crypto/async/async.c", 208);
LABEL_21:
    v23 = *(_DWORD *)(v12 + 4);
    v10 = 0;
    v24 = (int *)sub_10C5B4(&unk_6DF3AC);
    CRYPTO_free(*(_DWORD *)(v23 + 8), "crypto/async/async.c", 139);
    v25 = *v24;
    *(_DWORD *)(v23 + 8) = 0;
    sub_10BD3C(v25, v23);
    *(_DWORD *)(v12 + 4) = 0;
    *a1 = 0;
    return v10;
  }
  *a1 = v13;
  *(_DWORD *)(*(_DWORD *)(v12 + 4) + 16) = 2;
  *(_DWORD *)(v12 + 4) = 0;
  return 2;
}
