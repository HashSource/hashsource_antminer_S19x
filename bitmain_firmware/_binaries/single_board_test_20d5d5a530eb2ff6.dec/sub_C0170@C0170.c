int __fastcall sub_C0170(int a1, int a2)
{
  int v2; // r3
  int *v5; // r4
  int v6; // r0
  size_t *v7; // r0
  int v8; // r5
  int v9; // r9
  int v10; // r0
  int v12; // r2
  _BYTE *v13; // [sp+14h] [bp-8h] BYREF

  v2 = *(_DWORD *)(a2 + 24);
  v13 = 0;
  if ( !v2 || !*(_DWORD *)(v2 + 24) )
  {
    v5 = 0;
    sub_D0048(10, 116, 101, "crypto/dsa/dsa_ameth.c", 211);
    goto LABEL_7;
  }
  v5 = (int *)sub_AE1D0();
  if ( !v5 )
  {
    v12 = 218;
    goto LABEL_10;
  }
  v6 = i2d_DSAparams(*(_DWORD *)(a2 + 24));
  *v5 = v6;
  if ( v6 <= 0 )
  {
    v12 = 224;
LABEL_10:
    sub_D0048(10, 116, 65, "crypto/dsa/dsa_ameth.c", v12);
    goto LABEL_7;
  }
  v5[1] = 16;
  v7 = (size_t *)sub_126F3C(*(_DWORD *)(*(_DWORD *)(a2 + 24) + 24), 0);
  v8 = (int)v7;
  if ( !v7 )
  {
    sub_D0048(10, 116, 109, "crypto/dsa/dsa_ameth.c", 233);
    goto LABEL_7;
  }
  v9 = sub_B2090(v7, &v13);
  sub_AE254(v8);
  v10 = sub_EAA20(116);
  if ( !sub_AE610(a1, v10, 0, 16, (int)v5, (int)v13, v9) )
  {
LABEL_7:
    CRYPTO_free(v13, "crypto/dsa/dsa_ameth.c", 249);
    ASN1_STRING_free((int)v5);
    sub_AE254(0);
    return 0;
  }
  return 1;
}
