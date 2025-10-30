int __fastcall sub_16C9DC(int a1, int a2, int a3, int a4, int a5, int a6)
{
  _DWORD *v10; // r0
  int v11; // r4
  int *v12; // r0
  int v13; // r0
  int v14; // r5
  int v16; // r5

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
  v10 = CRYPTO_malloc((void *)0x24);
  v11 = (int)v10;
  if ( !v10 )
    return -1;
  v10[1] = a2;
  v10[3] = a4;
  v12 = *(int **)(a1 + 4);
  *(_DWORD *)(v11 + 8) = a3;
  *(_DWORD *)(v11 + 32) = 0;
  *(_DWORD *)v11 = 1;
  if ( !v12 )
  {
    v12 = (int *)sub_10BFCC();
    *(_DWORD *)(a1 + 4) = v12;
    if ( !v12 )
    {
      if ( (*(_DWORD *)(v11 + 32) & 1) != 0 )
      {
        CRYPTO_free(*(void **)(v11 + 4));
        if ( *(_DWORD *)v11 == 3 )
        {
          CRYPTO_free(*(void **)(v11 + 20));
          CRYPTO_free(*(void **)(v11 + 24));
          CRYPTO_free(*(void **)(v11 + 28));
        }
      }
      v14 = -1;
      CRYPTO_free((void *)v11);
      return v14;
    }
  }
  *(_DWORD *)(v11 + 28) = 0;
  *(_DWORD *)(v11 + 20) = a5;
  *(_DWORD *)(v11 + 24) = a6;
  v13 = sub_10BD3C(v12, v11);
  v14 = v13;
  if ( v13 > 0 )
    return v14;
  v16 = v13 - 1;
  if ( (*(_DWORD *)(v11 + 32) & 1) != 0 )
  {
    CRYPTO_free(*(void **)(v11 + 4));
    if ( *(_DWORD *)v11 == 3 )
    {
      CRYPTO_free(*(void **)(v11 + 20));
      CRYPTO_free(*(void **)(v11 + 24));
      CRYPTO_free(*(void **)(v11 + 28));
    }
  }
  CRYPTO_free((void *)v11);
  return v16;
}
