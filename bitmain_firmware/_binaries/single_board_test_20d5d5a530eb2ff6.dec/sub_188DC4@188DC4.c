int __fastcall sub_188DC4(unsigned int a1, const char *a2, size_t a3, const void *a4, int a5, int a6, size_t *a7)
{
  int v11; // r0
  int v12; // r4
  char *v13; // r0
  _DWORD *v14; // r0
  char ***v15; // r5
  int v16; // r3
  int *v17; // r0
  int v18; // r5
  _DWORD *v19; // r0

  v11 = sub_EF414();
  v12 = v11;
  if ( v11 )
  {
    if ( sub_F1060(v11, 0x1Au) )
    {
      v13 = sub_EAAB4(a1);
      v14 = (_DWORD *)sub_D99BC((int)v13);
      if ( v14 )
        v15 = sub_173680(v14, a6, a4, a5);
      else
        v15 = (char ***)sub_1732AC(a1, a6, a4, a5);
      if ( v15 )
      {
        X509_ALGOR_free(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v12 + 20) + 4) + 4));
        v16 = *(_DWORD *)(*(_DWORD *)(v12 + 20) + 4);
        *(_DWORD *)(v16 + 4) = v15;
        j_ASN1_STRING_free(*(_DWORD *)(v16 + 8));
        v17 = (int *)v15;
        v18 = *(_DWORD *)(*(_DWORD *)(v12 + 20) + 4);
        v19 = sub_162014(v17, PKCS12_SAFEBAGS_it, a2, a3, a7, 1);
        *(_DWORD *)(v18 + 8) = v19;
        if ( v19 )
          return v12;
        sub_D0048(35, 115, 103, (int)"crypto/pkcs12/p12_add.c", 119);
      }
      else
      {
        sub_D0048(35, 115, 65, (int)"crypto/pkcs12/p12_add.c", 110);
      }
    }
    else
    {
      sub_D0048(35, 115, 120, (int)"crypto/pkcs12/p12_add.c", 98);
    }
    PKCS7_free(v12);
    return 0;
  }
  else
  {
    sub_D0048(35, 115, 65, (int)"crypto/pkcs12/p12_add.c", 93);
    return 0;
  }
}
