int __fastcall sub_162D30(int *a1, unsigned int a2, int a3)
{
  int *v6; // r0
  _DWORD *v7; // r4
  int v8; // r0
  size_t *v9; // r0
  int v10; // r6
  _DWORD *v11; // r3

  v6 = (int *)sub_B2888();
  v7 = v6;
  if ( v6 )
  {
    ASN1_OBJECT_free(*v6);
    *v7 = sub_EAA20(a2);
    if ( a3 > 0 )
    {
      v8 = sub_B2408();
      v7[1] = v8;
      if ( !v8 )
        goto LABEL_8;
      v9 = (size_t *)sub_B20A4();
      v10 = (int)v9;
      if ( !v9 )
        goto LABEL_8;
      if ( !sub_126EFC(v9, a3) )
      {
LABEL_9:
        sub_D0048(33, 119, 65, (int)"crypto/pkcs7/pk7_attr.c", 80);
        ASN1_INTEGER_free(v10);
        X509_ALGOR_free((int)v7);
        return 0;
      }
      v11 = (_DWORD *)v7[1];
      *v11 = 2;
      v11[1] = v10;
    }
    if ( !sub_10BD3C(a1, (int)v7) )
    {
LABEL_8:
      v10 = 0;
      goto LABEL_9;
    }
    return 1;
  }
  else
  {
    sub_D0048(33, 119, 65, (int)"crypto/pkcs7/pk7_attr.c", 56);
    return 0;
  }
}
