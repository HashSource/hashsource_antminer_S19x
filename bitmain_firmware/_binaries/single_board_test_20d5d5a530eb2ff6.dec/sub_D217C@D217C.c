int __fastcall sub_D217C(int a1)
{
  int result; // r0
  int v3; // r4
  int v4; // r6

  result = sub_D8934(a1);
  v3 = result;
  if ( result )
  {
    sub_E07F8(result + 256, 0x1A8u);
    v4 = *(_DWORD *)(v3 + 680);
    if ( v4 != sub_D8AC0(a1) )
      CRYPTO_free(*(_DWORD *)(v3 + 680), "crypto/evp/e_aes.c", 2841);
    return 1;
  }
  return result;
}
