int __fastcall sub_126238(unsigned __int8 *a1, int a2, size_t *a3)
{
  int v3; // r5
  int v5; // r0
  _BYTE *v6; // r6
  int v7; // r4
  int v8; // r0
  bool v9; // zf
  int v10; // r6
  _BYTE *v12; // [sp+Ch] [bp-8h] BYREF

  v3 = 0;
  v12 = 0;
  v5 = sub_B0FDC(a3, &v12, a1);
  v6 = v12;
  v7 = v5;
  if ( v12 )
  {
    while ( 1 )
    {
      v8 = sub_B69CC(a2, (int)&v6[v3], v7);
      v9 = v7 == v8;
      v3 += v8;
      v7 -= v8;
      if ( v9 )
      {
        v10 = 1;
        goto LABEL_8;
      }
      if ( v8 <= 0 )
        break;
      v6 = v12;
    }
    v10 = 0;
LABEL_8:
    CRYPTO_free(v12);
    return v10;
  }
  else
  {
    sub_D0048(13, 192, 65, (int)"crypto/asn1/a_i2d_fp.c", 94);
    return 0;
  }
}
