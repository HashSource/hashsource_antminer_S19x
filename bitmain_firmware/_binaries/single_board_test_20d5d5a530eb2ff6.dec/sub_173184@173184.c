int __fastcall sub_173184(_DWORD *a1, unsigned int a2, int a3, const void *a4, int a5)
{
  int v9; // r0
  _DWORD **v10; // r5
  size_t *v11; // r0
  int v12; // r1
  int *v13; // r4
  int v14; // r3
  size_t v15; // r10
  int *v16; // r0
  char **v17; // r0
  int v19; // r2
  int *v20; // [sp+Ch] [bp-8h] BYREF

  v20 = 0;
  v9 = sub_17315C();
  v10 = (_DWORD **)v9;
  if ( !v9 )
  {
    v13 = 0;
    sub_D0048(13, 215, 65, (int)"crypto/asn1/p5_pbe.c", 36);
    goto LABEL_14;
  }
  v11 = *(size_t **)(v9 + 4);
  if ( a3 <= 0 )
    v12 = 2048;
  else
    v12 = a3;
  v13 = (int *)sub_126EFC(v11, v12);
  if ( !v13 )
  {
    v19 = 42;
LABEL_16:
    sub_D0048(13, 215, 65, (int)"crypto/asn1/p5_pbe.c", v19);
    goto LABEL_14;
  }
  v14 = a5;
  if ( !a5 )
  {
    v14 = 8;
    a5 = 8;
  }
  v15 = v14;
  v16 = (int *)CRYPTO_malloc((void *)v14);
  v13 = v16;
  if ( !v16 )
  {
    v19 = 50;
    goto LABEL_16;
  }
  if ( a4 )
  {
    memcpy(v16, a4, v15);
  }
  else if ( sub_F497C((int)v16, a5) <= 0 )
  {
    goto LABEL_14;
  }
  sub_AE174(*v10, (int)v13, a5);
  v13 = sub_AE2BC((int)v10, (int)PBEPARAM_it, &v20);
  if ( !v13 )
  {
    v19 = 62;
    goto LABEL_16;
  }
  sub_173170((int)v10);
  v17 = sub_EAA20(a2);
  if ( !sub_B28F8(a1, (int)v17, 16, (int)v20) )
  {
    v13 = 0;
    v10 = 0;
LABEL_14:
    CRYPTO_free(v13);
    sub_173170((int)v10);
    ASN1_STRING_free((int)v20);
    return 0;
  }
  return 1;
}
