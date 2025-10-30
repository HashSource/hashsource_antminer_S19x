int __fastcall sub_C273C(int a1, int a2)
{
  int *v3; // r5
  int v4; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r3
  int v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int v15; // r0
  int v16; // r4
  int v17; // r0
  int *v18; // r5
  int v19; // r0
  int v20; // r11
  int v21; // r0
  int v22; // r0
  int v23; // r10
  int v24; // r7
  int v25; // r0
  int v27; // r0
  int v28; // r1
  int v29; // r2
  int v30; // r3
  _DWORD v31[12]; // [sp+18h] [bp-34h] BYREF

  v3 = *(int **)(a2 + 24);
  v4 = *v3;
  v5 = v3[1];
  v6 = v3[2];
  v7 = v3[3];
  v3 += 4;
  v31[0] = v4;
  v31[1] = v5;
  v31[2] = v6;
  v31[3] = v7;
  v8 = *v3;
  v9 = v3[1];
  v10 = v3[2];
  v11 = v3[3];
  v3 += 4;
  v31[4] = v8;
  v31[5] = v9;
  v31[6] = v10;
  v31[7] = v11;
  v12 = v3[1];
  v13 = v3[2];
  v14 = v3[3];
  v31[8] = *v3;
  v31[9] = v12;
  v31[10] = v13;
  v31[11] = v14;
  v15 = sub_C59B8(v31);
  if ( !v15 )
  {
    sub_D0048(16, 223, 124, "crypto/ec/ec_ameth.c", 31);
    goto LABEL_16;
  }
  v16 = v15;
  if ( !sub_C628C() || (v27 = sub_C6284(v16)) == 0 )
  {
    v17 = sub_AE1D0();
    v18 = (int *)v17;
    if ( v17 )
    {
      v19 = sub_C4728(v31, v17 + 8);
      *v18 = v19;
      if ( v19 > 0 )
      {
        v20 = 16;
        goto LABEL_7;
      }
      ASN1_STRING_free((int)v18);
      sub_D0048(16, 223, 16, "crypto/ec/ec_ameth.c", 66);
    }
LABEL_16:
    sub_D0048(16, 214, 142, "crypto/ec/ec_ameth.c", 244);
    return 0;
  }
  v18 = (int *)sub_EAA20(v27);
  if ( !v18 || (v20 = 6, !sub_EB278()) )
  {
    ASN1_OBJECT_free(v18, v28, v29, v30);
    sub_D0048(16, 223, 167, "crypto/ec/ec_ameth.c", 42);
    goto LABEL_16;
  }
LABEL_7:
  v21 = sub_C5BA0(v31);
  sub_C5BA4(v31, v21 | 1);
  v22 = i2d_ECPrivateKey(v31);
  v23 = v22;
  if ( !v22 )
  {
    sub_D0048(16, 214, 16, "crypto/ec/ec_ameth.c", 259);
    return 0;
  }
  v24 = CRYPTO_malloc(v22, "crypto/ec/ec_ameth.c", 262);
  if ( !v24 )
  {
    sub_D0048(16, 214, 65, "crypto/ec/ec_ameth.c", 264);
    return 0;
  }
  if ( i2d_ECPrivateKey(v31) )
  {
    v25 = sub_EAA20(408);
    if ( sub_AE610(a1, v25, 0, v20, (int)v18, v24, v23) )
      return 1;
    CRYPTO_free(v24, "crypto/ec/ec_ameth.c", 276);
    return 0;
  }
  CRYPTO_free(v24, "crypto/ec/ec_ameth.c", 269);
  sub_D0048(16, 214, 16, "crypto/ec/ec_ameth.c", 270);
  return 0;
}
