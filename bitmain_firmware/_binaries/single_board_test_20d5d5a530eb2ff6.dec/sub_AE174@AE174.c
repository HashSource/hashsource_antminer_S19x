int __fastcall sub_AE174(_DWORD *a1, int a2, int a3)
{
  int result; // r0

  result = CRYPTO_free(a1[2], "crypto/asn1/asn1_lib.c", 327);
  a1[2] = a2;
  *a1 = a3;
  return result;
}
