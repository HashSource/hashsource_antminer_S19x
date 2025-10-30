int __fastcall sub_DF634(int a1)
{
  int v2; // r4

  v2 = sub_E0740(1040, "crypto/kdf/tls1_prf.c", 40);
  if ( v2 )
  {
    *(_DWORD *)(a1 + 20) = v2;
    return 1;
  }
  else
  {
    sub_D0048(52, 110, 65, (int)"crypto/kdf/tls1_prf.c", 41);
    return 0;
  }
}
