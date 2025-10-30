int __fastcall sub_F66DC(int a1, int a2)
{
  int v4; // r3
  int v5; // r0
  int v6; // r0
  int v7; // r7
  int v8; // r6
  char **v9; // r0
  int v11; // r0
  void *v12; // [sp+8h] [bp-Ch] BYREF
  int *v13; // [sp+Ch] [bp-8h] BYREF

  v4 = *(_DWORD *)(a2 + 24);
  v5 = **(_DWORD **)(a2 + 12);
  v12 = 0;
  v13 = 0;
  if ( v5 == 912 )
  {
    v11 = *(_DWORD *)(v4 + 52);
    if ( v11 )
    {
      if ( !sub_AE2BC(v11, (int)&RSA_PSS_PARAMS_it, &v13) )
        return 0;
      v6 = *(_DWORD *)(a2 + 24);
      v7 = 16;
    }
    else
    {
      v6 = v4;
      v7 = -1;
    }
  }
  else
  {
    v6 = v4;
    v7 = 5;
  }
  v8 = i2d_RSAPublicKey(v6, &v12);
  if ( v8 > 0 )
  {
    v9 = sub_EAA20(**(_DWORD **)(a2 + 12));
    if ( sub_116448(a1, v9, v7, v13, v12, v8) )
      return 1;
    CRYPTO_free(v12);
  }
  return 0;
}
