int __fastcall sub_16D3EC(int a1, char *a2)
{
  char *v3; // r5
  _DWORD *v4; // r0
  int v5; // r4
  int *v6; // r0
  int result; // r0
  int v8; // r5

  if ( !a2 )
  {
    sub_D0048(40, 109, 67, (int)"crypto/ui/ui_lib.c", 105);
    return -1;
  }
  v3 = sub_E9E3C(a2);
  if ( !v3 )
  {
    sub_D0048(40, 101, 65, (int)"crypto/ui/ui_lib.c", 349);
    return -1;
  }
  v4 = CRYPTO_malloc((void *)0x24);
  v5 = (int)v4;
  if ( !v4 )
    return -1;
  v4[1] = v3;
  v4[3] = 0;
  v6 = *(int **)(a1 + 4);
  *(_DWORD *)(v5 + 8) = 0;
  *(_DWORD *)(v5 + 32) = 1;
  *(_DWORD *)v5 = 5;
  if ( v6 || (v6 = (int *)sub_10BFCC(), (*(_DWORD *)(a1 + 4) = v6) != 0) )
  {
    *(_DWORD *)(v5 + 20) = 0;
    *(_DWORD *)(v5 + 24) = 0;
    *(_DWORD *)(v5 + 28) = 0;
    result = sub_10BD3C(v6, v5);
    if ( result <= 0 )
    {
      v8 = result - 1;
      if ( (*(_DWORD *)(v5 + 32) & 1) != 0 )
      {
        CRYPTO_free(*(void **)(v5 + 4));
        if ( *(_DWORD *)v5 == 3 )
        {
          CRYPTO_free(*(void **)(v5 + 20));
          CRYPTO_free(*(void **)(v5 + 24));
          CRYPTO_free(*(void **)(v5 + 28));
        }
      }
      CRYPTO_free((void *)v5);
      return v8;
    }
  }
  else
  {
    if ( (*(_DWORD *)(v5 + 32) & 1) != 0 )
    {
      CRYPTO_free(*(void **)(v5 + 4));
      if ( *(_DWORD *)v5 == 3 )
      {
        CRYPTO_free(*(void **)(v5 + 20));
        CRYPTO_free(*(void **)(v5 + 24));
        CRYPTO_free(*(void **)(v5 + 28));
      }
    }
    CRYPTO_free((void *)v5);
    return -1;
  }
  return result;
}
