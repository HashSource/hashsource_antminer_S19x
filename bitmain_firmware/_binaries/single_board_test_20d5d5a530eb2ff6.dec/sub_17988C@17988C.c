void **__fastcall sub_17988C(int a1, const char *a2)
{
  void **v4; // r5
  void **v5; // r4
  void *v6; // r8
  void *v7; // r0

  v4 = sub_10BFCC();
  if ( !v4 || (v5 = (void **)CRYPTO_malloc((void *)0xC)) == 0 )
  {
    v5 = 0;
    sub_10BDB4(v4);
    goto LABEL_6;
  }
  v6 = (void *)(strlen(a2) + 1);
  v7 = CRYPTO_malloc(v6);
  *v5 = v7;
  if ( !v7
    || (memcpy(v7, a2, (size_t)v6), v5[2] = v4, v5[1] = 0, sub_DF7A0(*(int **)(a1 + 8), v5))
    || sub_DFC3C(*(_DWORD *)(a1 + 8)) > 0 )
  {
    sub_10BDB4(v4);
    CRYPTO_free(*v5);
LABEL_6:
    CRYPTO_free(v5);
    return 0;
  }
  return v5;
}
