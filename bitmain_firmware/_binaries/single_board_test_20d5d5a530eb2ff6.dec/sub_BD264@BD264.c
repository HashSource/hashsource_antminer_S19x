int __fastcall sub_BD264(_DWORD *a1, int a2, int a3)
{
  int result; // r0

  result = CRYPTO_free(a1[11], "crypto/ct/ct_sct.c", 171);
  a1[11] = a2;
  a1[12] = a3;
  a1[15] = 0;
  return result;
}
