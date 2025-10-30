char ***__fastcall sub_1736F0(
        _DWORD *a1,
        int a2,
        int a3,
        int *a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7)
{
  unsigned int v11; // r8
  int v12; // r0
  int *v13; // r4
  char ***v14; // r9
  int v15; // r0
  size_t v16; // r0
  int *v17; // r0
  char ***v18; // r11
  int v19; // r6
  size_t **v20; // r0
  int v21; // r5
  size_t *v23; // r0
  int v24; // r0
  __int16 v25; // r2
  int src; // [sp+0h] [bp-44h]
  _BYTE dest[20]; // [sp+30h] [bp-14h] BYREF

  if ( !a1 )
  {
    v13 = 0;
    src = 52;
    v25 = 67;
    goto LABEL_41;
  }
  if ( !sub_15F534(0, 0, 0, 0, a5, a6, a7, 0, 0, 0) )
  {
    v13 = 0;
    src = 58;
    v25 = 227;
LABEL_41:
    a4 = 0;
    v18 = 0;
    sub_D0048(13, 231, v25, (int)"crypto/asn1/p5_scrypt.c", src);
    goto LABEL_35;
  }
  v11 = sub_D8ADC((int)a1);
  if ( !v11 )
  {
    v13 = 0;
    src = 65;
    v25 = 108;
    goto LABEL_41;
  }
  v12 = sub_173330();
  v13 = (int *)v12;
  if ( !v12 )
    goto LABEL_39;
  v14 = *(char ****)(v12 + 4);
  *v14 = sub_EAA20(v11);
  v15 = sub_B2408();
  v14[1] = (char **)v15;
  if ( !v15 )
    goto LABEL_39;
  if ( sub_D8940((int)a1) )
  {
    if ( a4 )
    {
      v16 = sub_D8940((int)a1);
      memcpy(dest, a4, v16);
    }
    else
    {
      v24 = sub_D8940((int)a1);
      if ( sub_F497C((int)dest, v24) <= 0 )
      {
        v18 = 0;
        goto LABEL_35;
      }
    }
  }
  v17 = (int *)sub_D7A5C();
  a4 = v17;
  if ( !v17 )
  {
LABEL_39:
    v18 = 0;
    goto LABEL_34;
  }
  v18 = 0;
  if ( !sub_D8440(v17, a1, 0, 0, dest, 0) )
  {
    v18 = 0;
    goto LABEL_35;
  }
  if ( sub_D8BA8(a4, v14[1]) <= 0 )
  {
    sub_D0048(13, 231, 114, (int)"crypto/asn1/p5_scrypt.c", 98);
    goto LABEL_35;
  }
  sub_D7A6C(a4);
  if ( v11 == 37 )
    v19 = sub_D8AD0((int)a1);
  else
    v19 = 0;
  X509_ALGOR_free(*v13);
  v20 = (size_t **)sub_1736C8();
  v21 = (int)v20;
  if ( !v20 )
    goto LABEL_31;
  if ( !a3 )
    a3 = 8;
  if ( !sub_AE088(*v20, (char *)a2, a3) )
    goto LABEL_31;
  if ( !a2 && sub_F497C(*(_DWORD *)(*(_DWORD *)v21 + 8), a3) <= 0 )
    goto LABEL_33;
  if ( sub_126EC8(*(size_t **)(v21 + 4), a5)
    && sub_126EC8(*(size_t **)(v21 + 8), a6)
    && sub_126EC8(*(size_t **)(v21 + 12), a7)
    && (!v19 || (v23 = (size_t *)sub_B20A4(), (*(_DWORD *)(v21 + 16) = v23) != 0) && sub_126CCC(v23, (unsigned int)v19))
    && (a2 = sub_B2888()) != 0 )
  {
    *(_DWORD *)a2 = sub_EAA20(0x3CDu);
    if ( sub_AD868((int)SCRYPT_PARAMS_it, v21, (int *)(a2 + 4)) )
    {
      sub_1736DC(v21);
      *v13 = a2;
      v18 = (char ***)sub_B2888();
      if ( v18 )
      {
        *v18 = sub_EAA20(0xA1u);
        if ( sub_AD868((int)PBE2PARAM_it, (int)v13, (int *)v18 + 1) )
        {
          sub_173344((int)v13);
          return v18;
        }
        goto LABEL_34;
      }
      goto LABEL_39;
    }
  }
  else
  {
LABEL_31:
    a2 = 0;
  }
  sub_D0048(13, 232, 65, (int)"crypto/asn1/p5_scrypt.c", 205);
LABEL_33:
  sub_1736DC(v21);
  X509_ALGOR_free(a2);
  v18 = 0;
  *v13 = 0;
LABEL_34:
  a4 = 0;
  sub_D0048(13, 231, 65, (int)"crypto/asn1/p5_scrypt.c", 138);
LABEL_35:
  sub_173344((int)v13);
  X509_ALGOR_free((int)v18);
  sub_D7A6C(a4);
  return 0;
}
