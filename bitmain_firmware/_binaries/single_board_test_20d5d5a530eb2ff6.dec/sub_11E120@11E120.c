int __fastcall sub_11E120(int **a1, unsigned int a2, size_t *a3, int a4, char a5)
{
  int v9; // r5
  int v10; // r0
  unsigned int v11; // r10
  __int16 v12; // r2
  char ***v14; // r4
  void **v15; // r5
  char ***v16; // r4
  int v17; // r0
  int v18; // r0

  v9 = a5 & 0xF;
  if ( v9 == 1 )
    goto LABEL_11;
  v10 = sub_11027C(*a1, a2, -1);
  v11 = v10;
  if ( v10 < 0 )
  {
    if ( ((v9 - 3) & 0xFFFFFFFD) == 0 )
    {
      v12 = 102;
      goto LABEL_6;
    }
LABEL_11:
    v14 = sub_11B8E8(a2, a4, a3);
    if ( v14 )
    {
      v15 = (void **)*a1;
      if ( !*a1 && (v15 = sub_10BFCC()) == 0 || !sub_10BD3C((int *)v15, (int)v14) )
      {
        if ( v15 != (void **)*a1 )
          sub_10BDB4(v15);
        X509_EXTENSION_free((int)v14);
        return -1;
      }
      *a1 = (int *)v15;
      return 1;
    }
LABEL_20:
    sub_D0048(34, 140, 144, (int)"crypto/x509v3/v3_lib.c", 271);
    return 0;
  }
  if ( v9 == 4 )
    return 1;
  if ( (a5 & 0xF) != 0 )
  {
    if ( v9 == 5 )
    {
      v18 = sub_10BC04(*a1, v10);
      if ( v18 )
      {
        X509_EXTENSION_free(v18);
        return 1;
      }
      return -1;
    }
    v16 = sub_11B8E8(a2, a4, a3);
    if ( v16 )
    {
      v17 = sub_10C01C(*a1, v11);
      X509_EXTENSION_free(v17);
      if ( !sub_10C040(*a1, v11, (int)v16) )
        return -1;
      return 1;
    }
    goto LABEL_20;
  }
  v12 = 145;
LABEL_6:
  if ( (a5 & 0x10) == 0 )
    sub_D0048(34, 140, v12, (int)"crypto/x509v3/v3_lib.c", 303);
  return 0;
}
