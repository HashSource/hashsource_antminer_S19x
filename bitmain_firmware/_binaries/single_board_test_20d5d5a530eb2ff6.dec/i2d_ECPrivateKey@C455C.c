int __fastcall i2d_ECPrivateKey(_DWORD *a1, _BYTE **a2)
{
  int v4; // r5
  int v5; // r0
  int v6; // r6
  int v8; // r3
  int v9; // r0
  int v10; // r0
  int v11; // r2
  int v12; // r1
  _DWORD *v13; // r0
  int v14; // r4
  _DWORD *v15; // r0
  int v16; // [sp+8h] [bp-8h] BYREF
  int v17; // [sp+Ch] [bp-4h] BYREF

  v16 = 0;
  v17 = 0;
  if ( !a1 || !a1[3] || (a1[6] & 2) == 0 && !a1[4] )
  {
    v4 = 0;
    sub_D0048(16, 192, 67, "crypto/ec/ec_asn1.c", 1096);
    v6 = 0;
    goto LABEL_8;
  }
  v4 = sub_C345C();
  if ( !v4 )
  {
    v6 = 0;
    sub_D0048(16, 192, 65, "crypto/ec/ec_asn1.c", 1101);
    goto LABEL_8;
  }
  *(_DWORD *)v4 = a1[2];
  v5 = sub_C5DC0(a1, &v16);
  v6 = v5;
  if ( !v5 )
  {
    sub_D0048(16, 192, 16, "crypto/ec/ec_asn1.c", 1110);
LABEL_8:
    sub_E0758(v16, v6, (size_t)"crypto/ec/ec_asn1.c");
    CRYPTO_free(v17, "crypto/ec/ec_asn1.c", 1153);
    sub_C346C(v4);
    return 0;
  }
  sub_AE174(*(_DWORD **)(v4 + 4), v16, v5);
  v8 = a1[6];
  v16 = 0;
  if ( (v8 & 1) == 0 )
  {
    v15 = sub_C3A7C((_DWORD *)a1[3], *(_DWORD **)(v4 + 8), v8 << 31);
    *(_DWORD *)(v4 + 8) = v15;
    if ( !v15 )
    {
      sub_D0048(16, 192, 16, "crypto/ec/ec_asn1.c", 1121);
      goto LABEL_8;
    }
    v8 = a1[6];
  }
  if ( (v8 & 2) == 0 )
  {
    v9 = sub_B211C();
    *(_DWORD *)(v4 + 12) = v9;
    if ( !v9 )
    {
      sub_D0048(16, 192, 65, "crypto/ec/ec_asn1.c", 1129);
      goto LABEL_8;
    }
    v10 = sub_C5BFC(a1, a1[7], &v17, 0);
    if ( !v10 )
    {
      sub_D0048(16, 192, 16, "crypto/ec/ec_asn1.c", 1136);
      goto LABEL_8;
    }
    v11 = v10;
    v12 = v17;
    v13 = *(_DWORD **)(v4 + 12);
    v13[3] = v13[3] & 0xFFFFFFF0 | 8;
    sub_AE174(v13, v12, v11);
    v17 = 0;
  }
  v14 = sub_C344C((size_t *)v4, a2);
  if ( !v14 )
  {
    sub_D0048(16, 192, 16, "crypto/ec/ec_asn1.c", 1147);
    goto LABEL_8;
  }
  sub_E0758(v16, v6, (size_t)"crypto/ec/ec_asn1.c");
  CRYPTO_free(v17, "crypto/ec/ec_asn1.c", 1153);
  sub_C346C(v4);
  return v14;
}
