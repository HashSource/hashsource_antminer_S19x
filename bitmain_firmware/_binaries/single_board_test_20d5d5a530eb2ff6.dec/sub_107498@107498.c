int __fastcall sub_107498(int a1, int a2)
{
  int *v4; // r0
  int *v5; // r4
  int v6; // r5
  int v7; // r6
  void *v8; // r0
  int result; // r0
  int v10; // r2
  int v11; // r3
  int v12; // r4

  v4 = (int *)sub_E0740((void *)0x14);
  v5 = v4;
  if ( !v4 )
  {
    sub_D0048(53, 111, 65, (int)"crypto/sm2/sm2_pmeth.c", 37);
    return 0;
  }
  *(_DWORD *)(a1 + 20) = v4;
  v6 = *(_DWORD *)(a2 + 20);
  if ( !*(_DWORD *)v6 || (v7 = sub_C6784(*(int ***)v6), (*v5 = v7) != 0) )
  {
    if ( !*(_DWORD *)(v6 + 8) )
    {
LABEL_7:
      result = 1;
      v10 = *(_DWORD *)(v6 + 16);
      v11 = *(_DWORD *)(v6 + 4);
      v5[3] = *(_DWORD *)(v6 + 12);
      v5[4] = v10;
      v5[1] = v11;
      return result;
    }
    v8 = CRYPTO_malloc(*(void **)(v6 + 12));
    v7 = (int)v8;
    v5[2] = (int)v8;
    if ( v8 )
    {
      memcpy(v8, *(const void **)(v6 + 8), *(_DWORD *)(v6 + 12));
      goto LABEL_7;
    }
    sub_D0048(53, 115, 65, (int)"crypto/sm2/sm2_pmeth.c", 75);
  }
  v12 = *(_DWORD *)(a1 + 20);
  result = 0;
  if ( v12 )
  {
    sub_C64B8(*(_DWORD *)v12);
    CRYPTO_free(*(void **)(v12 + 8));
    CRYPTO_free((void *)v12);
    *(_DWORD *)(a1 + 20) = v7;
    return v7;
  }
  return result;
}
