char ***__fastcall sub_11B3A8(char *a1, const char *a2, int a3, int a4, int a5)
{
  char **v9; // r7
  char ***v10; // r5
  int *v11; // r4
  _BYTE *v12; // r6
  int v13; // r1
  int v14; // r2
  int v15; // r3
  int *v17; // r0
  int v18; // r5
  size_t *v19; // r0
  int v20; // r4
  char *v21; // r2
  int v22; // [sp+8h] [bp-Ch] BYREF
  _BYTE *v23; // [sp+Ch] [bp-8h] BYREF

  v22 = 0;
  v9 = sub_EB03C(a1, 0);
  if ( !v9 )
  {
    v10 = 0;
    sub_D0048(34, 116, 115, (int)"crypto/x509v3/v3_conf.c", 234);
    v21 = a1;
    v11 = 0;
    v12 = 0;
    sub_D1240(2, "name=", v21);
    goto LABEL_5;
  }
  if ( a4 == 1 )
  {
    v12 = sub_E9FB4(a2, &v22);
  }
  else
  {
    if ( a4 != 2 )
      goto LABEL_4;
    v23 = 0;
    v19 = (size_t *)sub_12C954(a2, a5);
    v20 = (int)v19;
    if ( !v19 )
      goto LABEL_4;
    v22 = sub_B23F4(v19, &v23);
    ASN1_TYPE_free(v20);
    v12 = v23;
  }
  if ( !v12 )
  {
LABEL_4:
    v10 = 0;
    v11 = 0;
    v12 = 0;
    sub_D0048(34, 116, 116, (int)"crypto/x509v3/v3_conf.c", 246);
    sub_D1240(2, "value=", a2);
    goto LABEL_5;
  }
  v17 = (int *)sub_B2068();
  v11 = v17;
  if ( v17 )
  {
    v18 = v22;
    v17[2] = (int)v12;
    *v17 = v18;
    v12 = 0;
    v10 = sub_11045C(0, v9, a3, (int)v17);
  }
  else
  {
    v10 = 0;
    sub_D0048(34, 116, 65, (int)"crypto/x509v3/v3_conf.c", 252);
  }
LABEL_5:
  ASN1_OBJECT_free(v9, v13, v14, v15);
  j_ASN1_STRING_free(v11);
  CRYPTO_free(v12);
  return v10;
}
