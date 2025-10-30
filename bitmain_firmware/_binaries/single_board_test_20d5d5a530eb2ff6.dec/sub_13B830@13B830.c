_DWORD *__fastcall sub_13B830(
        int a1,
        const char *a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        const char *a6,
        const char *a7)
{
  _DWORD *v10; // r0
  _DWORD *v11; // r4
  signed int v12; // r2
  signed int v13; // r2
  signed int v14; // r2
  int v16; // r2
  void *v17; // [sp+8h] [bp-8h] BYREF
  _BYTE *v18; // [sp+Ch] [bp-4h] BYREF

  v10 = sub_BCFD8();
  v17 = 0;
  v11 = v10;
  v18 = 0;
  if ( !v10 )
  {
    sub_D0048(50, 127, 65, (int)"crypto/ct/ct_b64.c", 74);
    return 0;
  }
  if ( !sub_BD028(v10, a1) )
  {
    sub_D0048(50, 127, 115, (int)"crypto/ct/ct_b64.c", 83);
    goto LABEL_13;
  }
  v12 = sub_13B78C(a2, &v17);
  if ( v12 < 0 )
  {
    v16 = 89;
LABEL_12:
    sub_D0048(50, 127, 118, (int)"crypto/ct/ct_b64.c", v16);
    goto LABEL_13;
  }
  if ( !sub_BD08C(v11, (int)v17, v12) )
  {
LABEL_13:
    CRYPTO_free(v17);
    SCT_free((int)v11);
    return 0;
  }
  v17 = 0;
  v13 = sub_13B78C(a6, &v17);
  if ( v13 < 0 )
  {
    v16 = 98;
    goto LABEL_12;
  }
  sub_BD1DC(v11, (int)v17, v13);
  v17 = 0;
  v14 = sub_13B78C(a7, &v17);
  if ( v14 < 0 )
  {
    v16 = 106;
    goto LABEL_12;
  }
  v18 = v17;
  if ( sub_BC710((int)v11, &v18, v14) <= 0 )
    goto LABEL_13;
  CRYPTO_free(v17);
  v17 = 0;
  sub_BD178((int)v11, a5);
  if ( !sub_BD058((int)v11, a3) )
    goto LABEL_13;
  return v11;
}
