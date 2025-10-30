int __fastcall sub_BE058(int a1, int a2)
{
  int v4; // r7
  int v5; // r0
  int *v6; // r4
  int v7; // r1
  int v8; // r0
  size_t *v9; // r0
  int v10; // r7
  int v11; // r6
  int v12; // r0
  int v14; // r2
  _BYTE *v15; // [sp+Ch] [bp-4h] BYREF

  v4 = *(_DWORD *)(a2 + 24);
  v15 = 0;
  v5 = sub_AE1D0();
  v6 = (int *)v5;
  if ( !v5 )
  {
    v14 = 110;
    goto LABEL_10;
  }
  v7 = v5 + 8;
  if ( *(_UNKNOWN **)(a2 + 12) == &dhx_asn1_meth )
    v8 = i2d_DHxparams(v4, v7);
  else
    v8 = i2d_DHparams(v4, v7);
  *v6 = v8;
  if ( v8 <= 0 )
  {
    v14 = 115;
LABEL_10:
    sub_D0048(5, 109, 65, "crypto/dh/dh_ameth.c", v14);
    goto LABEL_8;
  }
  v9 = (size_t *)sub_126F3C(*(_DWORD *)(v4 + 20), 0);
  v10 = (int)v9;
  if ( !v9 )
  {
LABEL_8:
    CRYPTO_free(v15, "crypto/dh/dh_ameth.c", 138);
    ASN1_STRING_free((int)v6);
    return 0;
  }
  v11 = sub_B2090(v9, &v15);
  ASN1_INTEGER_free(v10);
  if ( v11 <= 0 )
  {
    v14 = 129;
    goto LABEL_10;
  }
  v12 = sub_EAA20(**(_DWORD **)(a2 + 12));
  if ( !sub_116448(a1, v12, 16, v6, v15, v11) )
    goto LABEL_8;
  return 1;
}
