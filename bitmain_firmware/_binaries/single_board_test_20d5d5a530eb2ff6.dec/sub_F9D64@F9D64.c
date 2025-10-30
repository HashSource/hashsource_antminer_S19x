int __fastcall sub_F9D64(void *a1, signed int a2, unsigned __int8 *a3, int a4, int a5)
{
  unsigned __int8 *v5; // r6
  int v6; // r3
  int v7; // r5
  unsigned __int8 *v8; // r2
  int v9; // r4
  int v10; // t1
  const void *v12; // r6
  signed int v13; // r4
  int v15; // r2

  if ( a5 <= 10 )
    return -1;
  if ( a5 == a4 )
  {
    if ( *a3++ )
    {
      sub_D0048(4, 112, 138, (int)"crypto/rsa/rsa_pk1.c", 67);
      return -1;
    }
    a4 = a5 - 1;
  }
  if ( a5 != a4 + 1 || (v5 = a3 + 1, *a3 != 1) )
  {
    sub_D0048(4, 112, 106, (int)"crypto/rsa/rsa_pk1.c", 75);
    return -1;
  }
  v6 = a4 - 1;
  if ( v6 <= 0 )
  {
    if ( !v6 )
    {
LABEL_11:
      sub_D0048(4, 112, 113, (int)"crypto/rsa/rsa_pk1.c", 97);
      return -1;
    }
    goto LABEL_20;
  }
  v7 = a3[1];
  if ( v7 == 255 )
  {
    v8 = a3 + 2;
    v9 = 0;
    while ( 1 )
    {
      ++v9;
      v5 = v8;
      if ( v9 == v6 )
        goto LABEL_11;
      v10 = *v8++;
      v7 = v10;
      if ( v10 != 255 )
        goto LABEL_12;
    }
  }
  v9 = 0;
LABEL_12:
  if ( !v7 )
  {
    v12 = v5 + 1;
    if ( v9 > 7 )
    {
      v13 = v6 - (v9 + 1);
      if ( v13 <= a2 )
      {
        memcpy(a1, v12, v13);
        return v13;
      }
      v15 = 109;
      goto LABEL_21;
    }
LABEL_20:
    v15 = 103;
LABEL_21:
    sub_D0048(4, 112, v15, (int)"crypto/rsa/rsa_pk1.c", v15);
    return -1;
  }
  sub_D0048(4, 112, 102, (int)"crypto/rsa/rsa_pk1.c", 88);
  return -1;
}
