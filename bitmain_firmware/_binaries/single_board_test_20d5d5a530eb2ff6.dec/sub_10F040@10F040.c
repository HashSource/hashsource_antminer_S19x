void *sub_10F040()
{
  void *v0; // r4
  void **v1; // r0
  int v2; // r2
  void **v3; // r0
  int v4; // r0
  int v5; // r0
  pthread_rwlock_t *v6; // r0

  v0 = sub_E0740((void *)0x4C);
  if ( v0 )
  {
    v1 = sub_10BFD4(sub_10EE08);
    v2 = 169;
    *((_DWORD *)v0 + 1) = v1;
    if ( v1 )
    {
      *(_DWORD *)v0 = 1;
      v3 = sub_10BFCC();
      v2 = 174;
      *((_DWORD *)v0 + 2) = v3;
      if ( v3 )
      {
        v4 = sub_113394();
        v2 = 179;
        *((_DWORD *)v0 + 3) = v4;
        if ( v4 )
        {
          v5 = sub_DBE44(4u, (int)v0, (_DWORD *)v0 + 16);
          v2 = 183;
          if ( v5 )
          {
            v6 = sub_10C510();
            *((_DWORD *)v0 + 18) = v6;
            if ( v6 )
            {
              __dmb(0xBu);
              *((_DWORD *)v0 + 17) = 1;
              __dmb(0xBu);
              return v0;
            }
            v2 = 189;
          }
        }
      }
    }
    sub_D0048(11, 158, 65, (int)"crypto/x509/x509_lu.c", v2);
    X509_VERIFY_PARAM_free(*((_DWORD *)v0 + 3));
    sub_10BDB4(*((void ***)v0 + 1));
    sub_10BDB4(*((void ***)v0 + 2));
    CRYPTO_free(v0);
    return 0;
  }
  else
  {
    sub_D0048(11, 158, 65, (int)"crypto/x509/x509_lu.c", 165);
    return 0;
  }
}
