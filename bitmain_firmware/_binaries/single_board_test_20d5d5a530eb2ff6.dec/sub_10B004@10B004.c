void **__fastcall sub_10B004(char *a1)
{
  void **v2; // r4
  int v3; // r8
  char *v4; // r0
  _DWORD *v5; // r0
  char v7[2500]; // [sp+4h] [bp-9C4h] BYREF

  v2 = (void **)CRYPTO_malloc((void *)8);
  if ( v2 )
  {
    v3 = sub_10AE80(v7, a1);
    if ( v3 >= 0 )
    {
      v4 = sub_E9E3C(a1);
      *v2 = v4;
      if ( v4 )
      {
        v5 = sub_B8AEC(v7, v3, 0);
        v2[1] = v5;
        if ( v5 )
          return v2;
        CRYPTO_free(*v2);
      }
    }
    CRYPTO_free(v2);
  }
  return 0;
}
