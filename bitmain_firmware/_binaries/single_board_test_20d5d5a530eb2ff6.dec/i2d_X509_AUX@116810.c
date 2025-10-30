int __fastcall i2d_X509_AUX(size_t *a1, void **a2)
{
  void *v4; // r7
  int v5; // r0
  bool v6; // cc
  char *v7; // r4
  int v9; // r0
  _BOOL4 v11; // r8
  char *v12; // r0
  int v13; // r1
  _BYTE *v14; // r7
  int v15; // r0
  int v16; // r3
  int v17; // r0
  _BYTE *v18; // [sp+Ch] [bp-8h] BYREF

  if ( a2 )
  {
    v4 = *a2;
    if ( !*a2 )
    {
      v11 = a1 == 0;
      v12 = (char *)i2d_X509(a1, 0);
      if ( (int)v12 <= 0 )
        v13 = v11 | 1;
      else
        v13 = v11;
      v7 = v12;
      if ( v13 )
      {
        if ( (int)v12 <= 0 )
          return (int)v7;
      }
      else
      {
        v9 = sub_11694C(a1[49]);
        if ( v9 < 0 )
          return v9;
        v12 = &v7[v9];
      }
      v14 = CRYPTO_malloc(v12);
      v18 = v14;
      *a2 = v14;
      if ( !v14 )
      {
        sub_D0048(11, 151, 65, (int)"crypto/x509/x_x509.c", 216);
        return -1;
      }
      v15 = i2d_X509(a1, &v18);
      if ( v15 <= 0 )
        v16 = v11 | 1;
      else
        v16 = v11;
      v7 = (char *)v15;
      if ( v16 )
      {
        if ( v15 > 0 )
          return (int)v7;
      }
      else
      {
        v17 = sub_11694C(a1[49]);
        if ( v17 >= 0 )
          return (int)&v7[v17];
        v18 = v14;
        v7 = (char *)v17;
      }
      CRYPTO_free(*a2);
      *a2 = 0;
      return (int)v7;
    }
  }
  else
  {
    v4 = 0;
  }
  v5 = i2d_X509(a1, (_BYTE **)a2);
  v6 = (int)a1 <= 0;
  if ( a1 )
    v6 = v5 <= 0;
  v7 = (char *)v5;
  if ( v6 )
    return (int)v7;
  v9 = sub_11694C(a1[49]);
  if ( v9 < 0 )
  {
    if ( v4 )
    {
      *a2 = v4;
      return v9;
    }
    return v9;
  }
  return (int)&v7[v9];
}
