int __fastcall sub_D37BC(int a1)
{
  int v2; // r4
  int v3; // r0
  int v4; // r5

  v2 = sub_D8934(a1);
  v3 = a1;
  v4 = *(_DWORD *)(v2 + 712);
  if ( v4 != sub_D8AC0(v3) )
    CRYPTO_free(*(_DWORD *)(v2 + 712), "crypto/evp/e_aria.c", 498);
  return 1;
}
