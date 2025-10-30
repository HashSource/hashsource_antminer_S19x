int __fastcall sub_16CB28(int a1, char *a2, int a3, int a4, int a5, int a6)
{
  char *v9; // r5
  _DWORD *v10; // r0
  int v11; // r4
  int *v12; // r0
  int result; // r0
  int v14; // r5

  if ( !a2 )
  {
    sub_D0048(40, 109, 67, (int)"crypto/ui/ui_lib.c", 105);
    return -1;
  }
  v9 = sub_E9E3C(a2);
  if ( !v9 )
  {
    sub_D0048(40, 103, 65, (int)"crypto/ui/ui_lib.c", 215);
    return 0;
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
  v10[1] = v9;
  v10[3] = a4;
  v12 = *(int **)(a1 + 4);
  *(_DWORD *)(v11 + 8) = a3;
  *(_DWORD *)(v11 + 32) = 1;
  *(_DWORD *)v11 = 1;
  if ( v12 || (v12 = (int *)sub_10BFCC(), (*(_DWORD *)(a1 + 4) = v12) != 0) )
  {
    *(_DWORD *)(v11 + 28) = 0;
    *(_DWORD *)(v11 + 20) = a5;
    *(_DWORD *)(v11 + 24) = a6;
    result = sub_10BD3C(v12, v11);
    if ( result <= 0 )
    {
      v14 = result - 1;
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
      return v14;
    }
  }
  else
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
    CRYPTO_free((void *)v11);
    return -1;
  }
  return result;
}
