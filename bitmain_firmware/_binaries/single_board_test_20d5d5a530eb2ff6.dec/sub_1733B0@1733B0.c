char ***__fastcall sub_1733B0(int a1, const void *a2, int a3, signed int a4, int a5)
{
  int v9; // r4
  int v10; // r0
  int *v11; // r5
  _DWORD *v12; // r3
  size_t v13; // r7
  void *v14; // r0
  int v15; // r1
  size_t *v16; // r0
  bool v17; // cc
  char ***v18; // r5
  int v20; // r0
  _DWORD *v21; // r5
  char **v22; // r0

  v9 = sub_173388();
  if ( !v9 )
    goto LABEL_25;
  v10 = sub_B2068();
  v11 = (int *)v10;
  if ( !v10 )
    goto LABEL_25;
  v12 = *(_DWORD **)v9;
  v13 = a3;
  *v12 = 4;
  v12[1] = v10;
  if ( !a3 )
  {
    v13 = 8;
    a3 = 8;
  }
  v14 = CRYPTO_malloc((void *)v13);
  v11[2] = (int)v14;
  if ( !v14 )
    goto LABEL_25;
  *v11 = a3;
  if ( a2 )
  {
    memcpy(v14, a2, v13);
  }
  else if ( sub_F497C((int)v14, a3) <= 0 )
  {
    goto LABEL_25;
  }
  if ( a1 <= 0 )
    v15 = 2048;
  else
    v15 = a1;
  if ( !sub_126EFC(*(size_t **)(v9 + 4), v15) )
    goto LABEL_25;
  if ( a5 > 0 )
  {
    v16 = (size_t *)sub_B20A4();
    *(_DWORD *)(v9 + 8) = v16;
    if ( !v16 || !sub_126EFC(v16, a5) )
      goto LABEL_25;
  }
  v17 = a4 <= 163;
  if ( a4 != 163 )
    v17 = a4 <= 0;
  if ( !v17 )
  {
    v20 = sub_B2888();
    v21 = (_DWORD *)v20;
    *(_DWORD *)(v9 + 12) = v20;
    if ( !v20 )
      goto LABEL_25;
    v22 = sub_EAA20(a4);
    sub_B28F8(v21, (int)v22, 5, 0);
  }
  v18 = (char ***)sub_B2888();
  if ( !v18 )
  {
LABEL_25:
    v18 = 0;
    goto LABEL_26;
  }
  *v18 = sub_EAA20(0x45u);
  if ( sub_AD868((int)PBKDF2PARAM_it, v9, (int *)v18 + 1) )
  {
    sub_17339C(v9);
    return v18;
  }
LABEL_26:
  sub_D0048(13, 219, 65, (int)"crypto/asn1/p5_pbev2.c", 217);
  sub_17339C(v9);
  X509_ALGOR_free((int)v18);
  return 0;
}
