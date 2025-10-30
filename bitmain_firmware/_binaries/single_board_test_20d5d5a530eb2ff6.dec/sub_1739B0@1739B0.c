int __fastcall sub_1739B0(int *a1, const char *a2, size_t a3, _DWORD *a4, int a5, int a6, int a7)
{
  int **v11; // r4
  int v12; // r0
  unsigned int *v13; // r1
  size_t v14; // r5
  int v15; // r6
  unsigned __int64 v17; // [sp+30h] [bp-5Ch] BYREF
  unsigned __int64 v18; // [sp+38h] [bp-54h] BYREF
  unsigned __int64 v19; // [sp+40h] [bp-4Ch] BYREF
  unsigned __int64 v20[8]; // [sp+48h] [bp-44h] BYREF

  if ( !sub_D8920((int)a1) )
  {
    sub_D0048(6, 180, 131, (int)"crypto/asn1/p5_scrypt.c", 224);
LABEL_18:
    sub_1736DC(0);
    return 0;
  }
  v11 = (int **)sub_AD8B0((int)SCRYPT_PARAMS_it, a4);
  if ( !v11 )
  {
    sub_D0048(6, 180, 114, (int)"crypto/asn1/p5_scrypt.c", 233);
    goto LABEL_18;
  }
  v12 = sub_D8AD4((int)a1);
  v13 = (unsigned int *)v11[4];
  v14 = v12;
  if ( !v13 || sub_126D44(v20, v13) && v14 == v20[0] )
  {
    if ( sub_126D44(&v19, (unsigned int *)v11[1])
      && sub_126D44(&v18, (unsigned int *)v11[2])
      && sub_126D44(&v17, (unsigned int *)v11[3])
      && sub_15F534(0, 0, 0, 0, v19, v18, v17, 0, 0, 0) )
    {
      if ( sub_15F534(a2, a3, (*v11)[2], **v11, v19, v18, v17, 0, v20, v14) )
        v15 = sub_D8440(a1, 0, 0, (int)v20, 0, a7);
      else
        v15 = 0;
    }
    else
    {
      v15 = 0;
      sub_D0048(6, 180, 171, (int)"crypto/asn1/p5_scrypt.c", 256);
    }
  }
  else
  {
    v15 = 0;
    sub_D0048(6, 180, 123, (int)"crypto/asn1/p5_scrypt.c", 246);
  }
  if ( v14 )
    sub_E07F8(v20, v14);
  sub_1736DC((int)v11);
  return v15;
}
