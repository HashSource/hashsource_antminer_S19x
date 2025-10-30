char ***__fastcall sub_1734D8(_DWORD *a1, int a2, const void *a3, int a4, void *src, int a6)
{
  unsigned int v8; // r6
  int v9; // r0
  int *v10; // r4
  char ***v11; // r9
  int v12; // r0
  size_t v13; // r0
  int *v14; // r0
  int *v15; // r5
  char ***v16; // r8
  int v17; // r5
  char ***v18; // r0
  int v20; // r0
  _BYTE dest[20]; // [sp+10h] [bp-14h] BYREF

  v8 = sub_D8ADC((int)a1);
  if ( !v8 )
  {
    v10 = 0;
    v15 = 0;
    v16 = 0;
    sub_D0048(13, 167, 108, (int)"crypto/asn1/p5_pbev2.c", 53);
    goto LABEL_20;
  }
  v9 = sub_173330();
  v10 = (int *)v9;
  if ( !v9 )
    goto LABEL_18;
  v11 = *(char ****)(v9 + 4);
  *v11 = sub_EAA20(v8);
  v12 = sub_B2408();
  v11[1] = (char **)v12;
  if ( !v12 )
    goto LABEL_18;
  if ( sub_D8940((int)a1) )
  {
    if ( src )
    {
      v13 = sub_D8940((int)a1);
      memcpy(dest, src, v13);
    }
    else
    {
      v20 = sub_D8940((int)a1);
      if ( sub_F497C((int)dest, v20) <= 0 )
      {
        v15 = 0;
        v16 = 0;
        goto LABEL_20;
      }
    }
  }
  v14 = (int *)sub_D7A5C();
  v15 = v14;
  if ( !v14 )
    goto LABEL_18;
  v16 = 0;
  if ( !sub_D8440(v14, a1, 0, 0, dest, 0) )
  {
    v16 = 0;
    goto LABEL_20;
  }
  if ( sub_D8BA8(v15, v11[1]) <= 0 )
  {
    sub_D0048(13, 167, 114, (int)"crypto/asn1/p5_pbev2.c", 82);
    goto LABEL_20;
  }
  if ( a6 == -1 && sub_D83D4((int)v15) <= 0 )
  {
    sub_D00F0();
    a6 = 799;
  }
  sub_D7A6C(v15);
  v17 = v8 == 37 ? sub_D8AD0((int)a1) : -1;
  X509_ALGOR_free(*v10);
  v18 = sub_1733B0(a2, a3, a4, a6, v17);
  *v10 = (int)v18;
  if ( v18 && (v16 = (char ***)sub_B2888()) != 0 )
  {
    *v16 = sub_EAA20(0xA1u);
    if ( sub_AD868((int)PBE2PARAM_it, (int)v10, (int *)v16 + 1) )
    {
      sub_173344((int)v10);
      return v16;
    }
  }
  else
  {
LABEL_18:
    v16 = 0;
  }
  v15 = 0;
  sub_D0048(13, 167, 65, (int)"crypto/asn1/p5_pbev2.c", 132);
LABEL_20:
  sub_D7A6C(v15);
  sub_173344((int)v10);
  X509_ALGOR_free((int)v16);
  return 0;
}
