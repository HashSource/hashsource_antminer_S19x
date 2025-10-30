void __fastcall sub_130BC0(int a1)
{
  int v1; // r3
  int v2; // r3
  int v4; // r5
  _DWORD *v5; // r2
  int v6; // r0
  unsigned int v7; // r8
  _DWORD *v8; // r0
  _DWORD *v9; // r7
  int v10; // r2

  v1 = *(_DWORD *)(a1 + 36);
  if ( v1 || *(_DWORD *)(a1 + 40) )
  {
    *(_DWORD *)(a1 + 36) = v1 + 1;
    return;
  }
  v2 = *(_DWORD *)(a1 + 24);
  v4 = *(_DWORD *)(a1 + 32);
  if ( v2 != *(_DWORD *)(a1 + 28) )
  {
    v5 = *(_DWORD **)(a1 + 20);
LABEL_6:
    *(_DWORD *)(a1 + 24) = v2 + 1;
    v5[v2] = v4;
    return;
  }
  v6 = 128;
  v7 = 32;
  if ( v2 )
  {
    v7 = (unsigned int)(3 * v2) >> 1;
    v6 = 4 * v7;
  }
  v8 = CRYPTO_malloc((void *)v6);
  v9 = v8;
  if ( v8 )
  {
    v10 = *(_DWORD *)(a1 + 24);
    if ( v10 )
      memcpy(v8, *(const void **)(a1 + 20), 4 * v10);
    CRYPTO_free(*(void **)(a1 + 20));
    v2 = *(_DWORD *)(a1 + 24);
    v5 = v9;
    *(_DWORD *)(a1 + 20) = v9;
    *(_DWORD *)(a1 + 28) = v7;
    goto LABEL_6;
  }
  sub_D0048(3, 148, 65, (int)"crypto/bn/bn_ctx.c", 265);
  sub_D0048(3, 129, 109, (int)"crypto/bn/bn_ctx.c", 189);
  ++*(_DWORD *)(a1 + 36);
}
