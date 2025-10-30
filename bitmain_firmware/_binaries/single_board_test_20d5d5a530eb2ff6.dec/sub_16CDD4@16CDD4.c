int __fastcall sub_16CDD4(int a1, char *a2, int a3, int a4, int a5, int a6, int a7)
{
  char *v10; // r7
  _DWORD *v11; // r0
  int v12; // r4
  int *v13; // r0
  int result; // r0
  int v15; // r5

  if ( !a2 )
  {
    sub_D0048(40, 109, 67, (int)"crypto/ui/ui_lib.c", 105);
    return -1;
  }
  v10 = sub_E9E3C(a2);
  if ( !v10 )
  {
    sub_D0048(40, 106, 65, (int)"crypto/ui/ui_lib.c", 243);
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
  v11[1] = v10;
  v11[3] = a4;
  v13 = *(int **)(a1 + 4);
  *(_DWORD *)(v12 + 8) = a3;
  *(_DWORD *)(v12 + 32) = 1;
  *(_DWORD *)v12 = 2;
  if ( v13 || (v13 = (int *)sub_10BFCC(), (*(_DWORD *)(a1 + 4) = v13) != 0) )
  {
    *(_DWORD *)(v12 + 20) = a5;
    *(_DWORD *)(v12 + 24) = a6;
    *(_DWORD *)(v12 + 28) = a7;
    result = sub_10BD3C(v13, v12);
    if ( result <= 0 )
    {
      v15 = result - 1;
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
      return v15;
    }
  }
  else
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
    CRYPTO_free((void *)v12);
    return -1;
  }
  return result;
}
