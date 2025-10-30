void *__fastcall sub_10EF00(int a1)
{
  void *v2; // r0
  void *v3; // r4
  int (*v4)(void); // r3

  v2 = sub_E0740((void *)0x14);
  v3 = v2;
  if ( v2 )
  {
    v4 = *(int (**)(void))(a1 + 4);
    *((_DWORD *)v2 + 2) = a1;
    if ( v4 && !v4() )
    {
      CRYPTO_free(v3);
      return 0;
    }
    else
    {
      return v3;
    }
  }
  else
  {
    sub_D0048(11, 155, 65, (int)"crypto/x509/x509_lu.c", 23);
    return 0;
  }
}
