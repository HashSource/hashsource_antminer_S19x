int __fastcall sub_C2B74(int a1, int a2)
{
  int v2; // r4
  int v4; // r5
  int v5; // r0
  int v6; // r0
  int *v7; // r5
  int v8; // r0
  int v9; // r0
  int v10; // r6
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int v15; // r0
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int v19; // r8
  int v20; // r4
  int v21; // r0
  int v22; // r0
  int v23; // [sp+Ch] [bp-4h] BYREF

  v2 = *(_DWORD *)(a2 + 24);
  if ( !v2 || (v4 = sub_C59B8(*(_DWORD *)(a2 + 24))) == 0 )
  {
    sub_D0048(16, 223, 124, "crypto/ec/ec_ameth.c", 31);
    goto LABEL_13;
  }
  if ( sub_C628C() )
  {
    v5 = sub_C6284(v4);
    if ( v5 )
    {
      v7 = (int *)sub_EAA20(v5);
      if ( v7 && sub_EB278() )
      {
        v15 = sub_C4884(v2, 0);
        if ( v15 <= 0 )
        {
          v10 = 0;
          goto LABEL_20;
        }
        v10 = CRYPTO_malloc(v15, "crypto/ec/ec_ameth.c", 90);
        if ( !v10 )
          goto LABEL_20;
        v23 = v10;
        v19 = sub_C4884(v2, &v23);
        if ( v19 <= 0 )
          goto LABEL_20;
        v20 = 6;
        goto LABEL_26;
      }
      ASN1_OBJECT_free(v7, v12, v13, v14);
      sub_D0048(16, 223, 167, "crypto/ec/ec_ameth.c", 42);
LABEL_13:
      sub_D0048(16, 216, 16, "crypto/ec/ec_ameth.c", 84);
      return 0;
    }
  }
  v6 = sub_AE1D0();
  v7 = (int *)v6;
  if ( !v6 )
    goto LABEL_13;
  v8 = sub_C4728(v2, v6 + 8);
  *v7 = v8;
  if ( v8 <= 0 )
  {
    ASN1_STRING_free((int)v7);
    sub_D0048(16, 223, 16, "crypto/ec/ec_ameth.c", 66);
    goto LABEL_13;
  }
  v9 = sub_C4884(v2, 0);
  if ( v9 <= 0 )
  {
    v10 = 0;
LABEL_10:
    ASN1_STRING_free((int)v7);
LABEL_11:
    CRYPTO_free(v10, "crypto/ec/ec_ameth.c", 105);
    return 0;
  }
  v21 = CRYPTO_malloc(v9, "crypto/ec/ec_ameth.c", 90);
  v10 = v21;
  if ( !v21 )
    goto LABEL_10;
  v23 = v21;
  v19 = sub_C4884(v2, &v23);
  if ( v19 <= 0 )
    goto LABEL_10;
  v20 = 16;
LABEL_26:
  v22 = sub_EAA20(408);
  if ( !sub_116448(a1, v22, v20, v7, v10, v19) )
  {
    if ( v20 != 6 )
      goto LABEL_10;
LABEL_20:
    ASN1_OBJECT_free(v7, v16, v17, v18);
    goto LABEL_11;
  }
  return 1;
}
