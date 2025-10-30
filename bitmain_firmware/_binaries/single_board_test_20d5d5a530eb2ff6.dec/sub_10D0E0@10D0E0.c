int __fastcall sub_10D0E0(int a1)
{
  int *v2; // r4
  int v3; // r0
  int v4; // r2
  pthread_rwlock_t *v5; // r0

  v2 = (int *)CRYPTO_malloc((void *)0xC);
  if ( v2 )
  {
    v3 = sub_BADF8();
    v4 = 103;
    *v2 = v3;
    if ( v3 )
    {
      v2[1] = 0;
      v5 = sub_10C510();
      v2[2] = (int)v5;
      if ( v5 )
      {
        *(_DWORD *)(a1 + 12) = v2;
        return 1;
      }
      sub_BAE3C(*v2);
      v4 = 110;
    }
    sub_D0048(11, 153, 65, (int)"crypto/x509/by_dir.c", v4);
    CRYPTO_free(v2);
    return 0;
  }
  else
  {
    sub_D0048(11, 153, 65, (int)"crypto/x509/by_dir.c", 98);
    return 0;
  }
}
