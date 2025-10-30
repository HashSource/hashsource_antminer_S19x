int __fastcall sub_16C730(int a1, int a2, int a3, _BYTE *a4, char *s, int a6, int a7, int a8)
{
  int v9; // r1
  _BYTE *v13; // r4
  int v14; // t1
  int v15; // t1
  _DWORD *v16; // r0
  int v17; // r4
  int *v18; // r0
  int v19; // r0
  int v20; // r5
  int v22; // r5
  int v23; // r2

  if ( !a4 )
  {
    v23 = 160;
    goto LABEL_17;
  }
  if ( !s )
  {
    v23 = 162;
LABEL_17:
    sub_D0048(40, 108, 67, (int)"crypto/ui/ui_lib.c", v23);
    return -1;
  }
  v9 = (unsigned __int8)*a4;
  if ( *a4 )
  {
    v13 = a4;
    do
    {
      while ( !strchr(s, v9) )
      {
        v14 = (unsigned __int8)*++v13;
        v9 = v14;
        if ( !v14 )
          goto LABEL_8;
      }
      sub_D0048(40, 108, 104, (int)"crypto/ui/ui_lib.c", 167);
      v15 = (unsigned __int8)*++v13;
      v9 = v15;
    }
    while ( v15 );
  }
LABEL_8:
  if ( !a2 )
  {
    sub_D0048(40, 109, 67, (int)"crypto/ui/ui_lib.c", 105);
    return -1;
  }
  if ( !a8 )
  {
    sub_D0048(40, 109, 105, (int)"crypto/ui/ui_lib.c", 108);
    return -1;
  }
  v16 = CRYPTO_malloc((void *)0x24);
  v17 = (int)v16;
  if ( !v16 )
    return -1;
  v16[1] = a2;
  v16[3] = a8;
  v18 = *(int **)(a1 + 4);
  *(_DWORD *)(v17 + 32) = a6 != 0;
  *(_DWORD *)v17 = 3;
  *(_DWORD *)(v17 + 8) = a7;
  if ( !v18 )
  {
    v18 = (int *)sub_10BFCC();
    *(_DWORD *)(a1 + 4) = v18;
    if ( !v18 )
    {
      if ( (*(_DWORD *)(v17 + 32) & 1) != 0 )
      {
        CRYPTO_free(*(void **)(v17 + 4));
        if ( *(_DWORD *)v17 == 3 )
        {
          CRYPTO_free(*(void **)(v17 + 20));
          CRYPTO_free(*(void **)(v17 + 24));
          CRYPTO_free(*(void **)(v17 + 28));
        }
      }
      v20 = -1;
      CRYPTO_free((void *)v17);
      return v20;
    }
  }
  *(_DWORD *)(v17 + 28) = s;
  *(_DWORD *)(v17 + 20) = a3;
  *(_DWORD *)(v17 + 24) = a4;
  v19 = sub_10BD3C(v18, v17);
  v20 = v19;
  if ( v19 > 0 )
    return v20;
  v22 = v19 - 1;
  if ( (*(_DWORD *)(v17 + 32) & 1) != 0 )
  {
    CRYPTO_free(*(void **)(v17 + 4));
    if ( *(_DWORD *)v17 == 3 )
    {
      CRYPTO_free(*(void **)(v17 + 20));
      CRYPTO_free(*(void **)(v17 + 24));
      CRYPTO_free(*(void **)(v17 + 28));
    }
  }
  CRYPTO_free((void *)v17);
  return v22;
}
