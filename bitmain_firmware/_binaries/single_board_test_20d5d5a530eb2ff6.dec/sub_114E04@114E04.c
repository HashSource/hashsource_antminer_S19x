int __fastcall sub_114E04(unsigned int a1, int a2, int a3)
{
  char **v5; // r0
  char **v6; // r5
  char ***v7; // r0
  int v8; // r4
  int v9; // r0
  _DWORD *v10; // r5

  v5 = sub_EAA20(a1);
  if ( v5 )
  {
    v6 = v5;
    v7 = (char ***)sub_114DC4();
    v8 = (int)v7;
    if ( v7 )
    {
      *v7 = v6;
      v9 = sub_B2408();
      v10 = (_DWORD *)v9;
      if ( v9 && sub_10BD3C(*(int **)(v8 + 4), v9) )
      {
        sub_AD794(v10, a2, a3);
        return v8;
      }
      X509_ATTRIBUTE_free(v8);
      ASN1_TYPE_free((int)v10);
    }
  }
  return 0;
}
