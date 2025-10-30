int __fastcall sub_BDE54(int a1, int a2)
{
  int v4; // r0
  int *v5; // r4
  int v6; // r1
  int v7; // r0
  int v8; // r0
  size_t *v9; // r0
  int v10; // r8
  int v11; // r9
  int v12; // r0
  int v14; // r2
  _BYTE *v15; // [sp+14h] [bp-8h] BYREF

  v15 = 0;
  v4 = sub_AE1D0();
  v5 = (int *)v4;
  if ( !v4 )
  {
    v14 = 212;
    goto LABEL_10;
  }
  v6 = v4 + 8;
  v7 = *(_DWORD *)(a2 + 24);
  if ( *(_UNKNOWN **)(a2 + 12) == &dhx_asn1_meth )
    v8 = i2d_DHxparams(v7, v6);
  else
    v8 = i2d_DHparams(v7, v6);
  *v5 = v8;
  if ( v8 <= 0 )
  {
    v14 = 218;
LABEL_10:
    sub_D0048(5, 111, 65, "crypto/dh/dh_ameth.c", v14);
    goto LABEL_7;
  }
  v5[1] = 16;
  v9 = (size_t *)sub_126F3C(*(_DWORD *)(*(_DWORD *)(a2 + 24) + 24), 0);
  v10 = (int)v9;
  if ( !v9 )
  {
    sub_D0048(5, 111, 106, "crypto/dh/dh_ameth.c", 227);
    goto LABEL_7;
  }
  v11 = sub_B2090(v9, &v15);
  sub_AE254(v10);
  v12 = sub_EAA20(**(_DWORD **)(a2 + 12));
  if ( !sub_AE610(a1, v12, 0, 16, (int)v5, (int)v15, v11) )
  {
LABEL_7:
    CRYPTO_free(v15, "crypto/dh/dh_ameth.c", 243);
    ASN1_STRING_free((int)v5);
    sub_AE254(0);
    return 0;
  }
  return 1;
}
