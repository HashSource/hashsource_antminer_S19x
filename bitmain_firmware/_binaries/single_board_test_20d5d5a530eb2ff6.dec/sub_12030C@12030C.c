int __fastcall sub_12030C(int a1, int a2, int a3, int a4, char *a5, char *a6, int a7)
{
  unsigned int v7; // r5
  int v11; // r0
  char *v12; // r0
  char *v13; // r4
  char *v14; // r0
  int v15; // r3
  bool v16; // zf
  int v17; // r3
  _DWORD *v19; // r0
  int v20; // r4
  char *v21; // r0
  int v22; // r3
  bool v23; // zf
  int v24; // r3
  int *v25; // r0
  int v26; // r2

  v7 = a3 & 0xFFFFFFFE;
  v11 = sub_120294(a1);
  if ( v11 == -1 )
  {
    v19 = CRYPTO_malloc((void *)0x1C);
    v20 = (int)v19;
    if ( v19 )
    {
      v19[2] = 1;
      v19[4] = sub_E9E3C(a5);
      v21 = sub_E9E3C(a6);
      v22 = *(_DWORD *)(v20 + 16);
      *(_DWORD *)(v20 + 20) = v21;
      v23 = v21 == 0;
      if ( v21 )
        v23 = v22 == 0;
      if ( v23 )
      {
        v26 = 185;
      }
      else
      {
        v24 = *(_DWORD *)(v20 + 8);
        *(_DWORD *)v20 = a1;
        v25 = (int *)dword_6E1C5C;
        *(_DWORD *)(v20 + 4) = a2;
        *(_DWORD *)(v20 + 12) = a4;
        *(_DWORD *)(v20 + 24) = a7;
        *(_DWORD *)(v20 + 8) = v24 & 1 | 2 | v7;
        if ( v25 || (v25 = (int *)sub_10BFD4(sub_11FDA0), v26 = 202, (dword_6E1C5C = (int)v25) != 0) )
        {
          if ( sub_10BD3C(v25, v20) )
            return 1;
          v26 = 206;
        }
      }
      sub_D0048(34, 137, 65, (int)"crypto/x509v3/v3_purp.c", v26);
      CRYPTO_free(*(void **)(v20 + 16));
      CRYPTO_free(*(void **)(v20 + 20));
      CRYPTO_free((void *)v20);
      return 0;
    }
    else
    {
      sub_D0048(34, 137, 65, (int)"crypto/x509v3/v3_purp.c", 169);
      return 0;
    }
  }
  else
  {
    v12 = sub_120238(v11);
    v13 = v12;
    if ( (*((_DWORD *)v12 + 2) & 2) != 0 )
    {
      CRYPTO_free(*((void **)v12 + 4));
      CRYPTO_free(*((void **)v13 + 5));
    }
    *((_DWORD *)v13 + 4) = sub_E9E3C(a5);
    v14 = sub_E9E3C(a6);
    v15 = *((_DWORD *)v13 + 4);
    *((_DWORD *)v13 + 5) = v14;
    v16 = v14 == 0;
    if ( v14 )
      v16 = v15 == 0;
    if ( !v16 )
    {
      v17 = *((_DWORD *)v13 + 2);
      *(_DWORD *)v13 = a1;
      *((_DWORD *)v13 + 1) = a2;
      *((_DWORD *)v13 + 3) = a4;
      *((_DWORD *)v13 + 6) = a7;
      *((_DWORD *)v13 + 2) = v17 & 1 | 2 | v7;
      return 1;
    }
    sub_D0048(34, 137, 65, (int)"crypto/x509v3/v3_purp.c", 185);
    return 0;
  }
}
