_DWORD *__fastcall sub_116F1C(char ***a1, char **a2, int a3)
{
  bool v3; // zf
  char **v6; // r4
  _DWORD *v7; // r6
  void **v8; // r7
  _DWORD *result; // r0
  int v10; // r1
  int v11; // r2
  int v12; // r3
  int v13; // r1
  int v14; // r2
  int v15; // r3

  v3 = a1 == 0;
  if ( !a1 )
    v3 = a2 == 0;
  if ( v3 )
    return 0;
  if ( a2 )
  {
    v6 = sub_EB288(a2);
    if ( !v6 )
      return 0;
  }
  else
  {
    v6 = 0;
  }
  v7 = sub_E0740((void *)0x10);
  if ( !v7 )
  {
    sub_D0048(34, 171, 65, (int)"crypto/x509v3/pcy_data.c", 54);
    ASN1_OBJECT_free(v6, v10, v11, v12);
    return 0;
  }
  v8 = sub_10BFCC();
  v7[3] = v8;
  if ( !v8 )
  {
    CRYPTO_free(v7);
    ASN1_OBJECT_free(v6, v13, v14, v15);
    sub_D0048(34, 171, 65, (int)"crypto/x509v3/pcy_data.c", 62);
    return 0;
  }
  if ( a3 )
  {
    *v7 = 16;
    if ( v6 )
    {
LABEL_10:
      v7[1] = v6;
      result = v7;
      if ( !a1 )
        return result;
      goto LABEL_11;
    }
  }
  else if ( v6 )
  {
    goto LABEL_10;
  }
  v7[1] = *a1;
  *a1 = v6;
LABEL_11:
  result = v7;
  v7[2] = a1[1];
  a1[1] = 0;
  return result;
}
