int __fastcall sub_F6058(int a1, int a2)
{
  int v4; // r3
  int v5; // r0
  int v6; // r0
  int v7; // r7
  int v8; // r6
  char **v9; // r0
  int v10; // r4
  int v12; // r0
  int *v13; // [sp+14h] [bp-8h] BYREF

  v4 = *(_DWORD *)(a2 + 24);
  v5 = **(_DWORD **)(a2 + 12);
  v13 = 0;
  if ( v5 != 912 )
  {
    v6 = v4;
    v7 = 5;
    goto LABEL_4;
  }
  v12 = *(_DWORD *)(v4 + 52);
  if ( !v12 )
  {
    v6 = v4;
    v7 = -1;
LABEL_4:
    v8 = i2d_RSAPrivateKey(v6);
    if ( v8 > 0 )
      goto LABEL_5;
LABEL_11:
    v10 = 0;
    sub_D0048(4, 138, 65, (int)"crypto/rsa/rsa_ameth.c", 166);
    ASN1_STRING_free((int)v13);
    return v10;
  }
  if ( !sub_AE2BC(v12, (int)&RSA_PSS_PARAMS_it, &v13) )
    return 0;
  v8 = i2d_RSAPrivateKey(*(_DWORD *)(a2 + 24));
  v7 = 16;
  if ( v8 <= 0 )
    goto LABEL_11;
LABEL_5:
  v9 = sub_EAA20(**(_DWORD **)(a2 + 12));
  if ( sub_AE610(a1, (int)v9, 0, v7, (int)v13, 0, v8) )
    return 1;
  sub_D0048(4, 138, 65, (int)"crypto/rsa/rsa_ameth.c", 173);
  ASN1_STRING_free((int)v13);
  return 0;
}
