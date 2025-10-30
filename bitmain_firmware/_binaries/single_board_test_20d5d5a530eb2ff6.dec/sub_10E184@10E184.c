void **__fastcall sub_10E184(void ***a1, int a2)
{
  void **v3; // r4
  int v4; // r0
  int v5; // r6
  void **result; // r0
  void **v7; // r0
  int v8; // [sp+Ch] [bp-4h]

  if ( !a1 )
  {
    v3 = 0;
    v5 = 0;
    sub_D0048(11, 135, 67, (int)"crypto/x509/x509_att.c", 80);
    goto LABEL_11;
  }
  v3 = *a1;
  if ( !*a1 )
  {
    v8 = a2;
    v7 = sub_10BFCC();
    a2 = v8;
    v3 = v7;
    if ( !v7 )
    {
      v5 = 0;
      goto LABEL_10;
    }
  }
  v4 = sub_114DEC(a2, a2);
  v5 = v4;
  if ( !v4 )
  {
LABEL_11:
    X509_ATTRIBUTE_free(v5);
    sub_10BDB4(v3);
    return 0;
  }
  if ( !sub_10BD3C((int *)v3, v4) )
  {
LABEL_10:
    sub_D0048(11, 135, 65, (int)"crypto/x509/x509_att.c", 98);
    goto LABEL_11;
  }
  result = v3;
  if ( !*a1 )
  {
    result = v3;
    *a1 = v3;
  }
  return result;
}
