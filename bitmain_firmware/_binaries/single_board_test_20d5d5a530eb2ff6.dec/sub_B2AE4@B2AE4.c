int __fastcall sub_B2AE4(_DWORD *a1)
{
  int result; // r0

  result = CRYPTO_free(*a1, "crypto/asn1/x_int64.c", 40);
  *a1 = 0;
  return result;
}
