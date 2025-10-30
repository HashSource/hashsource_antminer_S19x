int __fastcall sub_CCD84(int a1, int a2)
{
  int v2; // r4
  int v5; // r1
  bool v6; // zf
  int v7; // r1
  int v8; // r6
  int v9; // r1
  int v10; // r3
  bool v11; // zf
  int v12; // r3

  v2 = *(_DWORD *)(a2 + 24);
  if ( !v2 )
  {
    sub_D0048(16, 268, 116, "crypto/ec/ecx_meth.c", 131);
    return v2;
  }
  v5 = **(_DWORD **)(a2 + 12);
  v6 = v5 == 1034;
  if ( v5 != 1034 )
    v6 = v5 == 1087;
  if ( v6 )
  {
    v7 = 32;
  }
  else if ( v5 == 1035 )
  {
    v7 = 56;
  }
  else
  {
    v7 = 57;
  }
  v8 = sub_E9E68(v2, v7, "crypto/ec/ecx_meth.c", 135);
  if ( !v8 )
  {
    v2 = 0;
    sub_D0048(16, 268, 65, "crypto/ec/ecx_meth.c", 137);
    return v2;
  }
  v9 = sub_EAA20(**(_DWORD **)(a2 + 12));
  v10 = **(_DWORD **)(a2 + 12);
  v11 = v10 == 1034;
  if ( v10 != 1034 )
    v11 = v10 == 1087;
  if ( v11 )
  {
    v12 = 32;
  }
  else if ( v10 == 1035 )
  {
    v12 = 56;
  }
  else
  {
    v12 = 57;
  }
  if ( sub_116448(a1, v9, -1, 0, v8, v12) )
    return 1;
  CRYPTO_free(v8, "crypto/ec/ecx_meth.c", 143);
  sub_D0048(16, 268, 65, "crypto/ec/ecx_meth.c", 144);
  return 0;
}
