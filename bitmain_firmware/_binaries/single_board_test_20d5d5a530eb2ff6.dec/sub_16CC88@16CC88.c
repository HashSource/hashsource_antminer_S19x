int __fastcall sub_16CC88(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  _DWORD *v11; // r0
  int v12; // r4
  int *v13; // r0
  int v14; // r0
  int v15; // r5
  int v17; // r5

  if ( !a2 )
  {
    sub_D0048(40, 109, 67, (int)"crypto/ui/ui_lib.c", 105);
    return -1;
  }
  if ( !a4 )
  {
    sub_D0048(40, 109, 105, (int)"crypto/ui/ui_lib.c", 108);
    return -1;
  }
  v11 = CRYPTO_malloc((void *)0x24);
  v12 = (int)v11;
  if ( !v11 )
    return -1;
  v11[1] = a2;
  v11[3] = a4;
  v13 = *(int **)(a1 + 4);
  *(_DWORD *)(v12 + 8) = a3;
  *(_DWORD *)(v12 + 32) = 0;
  *(_DWORD *)v12 = 2;
  if ( !v13 )
  {
    v13 = (int *)sub_10BFCC();
    *(_DWORD *)(a1 + 4) = v13;
    if ( !v13 )
    {
      if ( (*(_DWORD *)(v12 + 32) & 1) != 0 )
      {
        CRYPTO_free(*(void **)(v12 + 4));
        if ( *(_DWORD *)v12 == 3 )
        {
          CRYPTO_free(*(void **)(v12 + 20));
          CRYPTO_free(*(void **)(v12 + 24));
          CRYPTO_free(*(void **)(v12 + 28));
        }
      }
      v15 = -1;
      CRYPTO_free((void *)v12);
      return v15;
    }
  }
  *(_DWORD *)(v12 + 20) = a5;
  *(_DWORD *)(v12 + 24) = a6;
  *(_DWORD *)(v12 + 28) = a7;
  v14 = sub_10BD3C(v13, v12);
  v15 = v14;
  if ( v14 > 0 )
    return v15;
  v17 = v14 - 1;
  if ( (*(_DWORD *)(v12 + 32) & 1) != 0 )
  {
    CRYPTO_free(*(void **)(v12 + 4));
    if ( *(_DWORD *)v12 == 3 )
    {
      CRYPTO_free(*(void **)(v12 + 20));
      CRYPTO_free(*(void **)(v12 + 24));
      CRYPTO_free(*(void **)(v12 + 28));
    }
  }
  CRYPTO_free((void *)v12);
  return v17;
}
