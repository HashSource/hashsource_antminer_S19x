void **__fastcall sub_110358(void ***a1, int a2, unsigned int a3)
{
  void ***v3; // r4
  void **v6; // r6
  int v7; // r3
  int v8; // r0
  int v9; // r7

  v3 = a1;
  if ( a1 )
  {
    v6 = *a1;
    if ( !*a1 )
    {
      v6 = sub_10BFCC();
      if ( !v6 )
      {
        v9 = 0;
        goto LABEL_11;
      }
    }
    v7 = sub_10C010((int)v6);
    if ( (v7 < (int)a3) | (a3 >> 31) )
      a3 = v7;
    v8 = sub_115648(a2);
    v9 = v8;
    if ( !v8 )
      goto LABEL_12;
    if ( !sub_10BA90((int *)v6, v8, a3) )
    {
LABEL_11:
      sub_D0048(11, 104, 65, (int)"crypto/x509/x509_v3.c", 128);
LABEL_12:
      X509_EXTENSION_free(v9);
      v3 = (void ***)*v3;
      if ( v3 )
        return 0;
      sub_10BDB4(v6);
      return (void **)v3;
    }
    if ( *v3 )
      return v6;
    *v3 = v6;
    return v6;
  }
  else
  {
    sub_D0048(11, 104, 67, (int)"crypto/x509/x509_v3.c", 104);
    X509_EXTENSION_free(0);
  }
  return (void **)v3;
}
