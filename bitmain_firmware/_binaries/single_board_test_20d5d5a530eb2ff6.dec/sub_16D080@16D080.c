int __fastcall sub_16D080(int a1, int a2)
{
  _DWORD *v4; // r0
  int v5; // r4
  int *v6; // r0
  int v7; // r0
  int v8; // r5
  int v10; // r5

  if ( !a2 )
  {
    sub_D0048(40, 109, 67, (int)"crypto/ui/ui_lib.c", 105);
    return -1;
  }
  v4 = CRYPTO_malloc((void *)0x24);
  v5 = (int)v4;
  if ( !v4 )
    return -1;
  v4[1] = a2;
  v4[3] = 0;
  v6 = *(int **)(a1 + 4);
  *(_DWORD *)(v5 + 32) = 0;
  *(_DWORD *)(v5 + 8) = 0;
  *(_DWORD *)v5 = 4;
  if ( !v6 )
  {
    v6 = (int *)sub_10BFCC();
    *(_DWORD *)(a1 + 4) = v6;
    if ( !v6 )
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
      v8 = -1;
      CRYPTO_free((void *)v5);
      return v8;
    }
  }
  *(_DWORD *)(v5 + 20) = 0;
  *(_DWORD *)(v5 + 24) = 0;
  *(_DWORD *)(v5 + 28) = 0;
  v7 = sub_10BD3C(v6, v5);
  v8 = v7;
  if ( v7 > 0 )
    return v8;
  v10 = v7 - 1;
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
  return v10;
}
