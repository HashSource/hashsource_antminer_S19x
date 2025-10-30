int __fastcall sub_BD1DC(_DWORD *a1, int a2, int a3)
{
  int result; // r0

  result = CRYPTO_free(a1[8], "crypto/ct/ct_sct.c", 145);
  a1[8] = a2;
  a1[9] = a3;
  a1[15] = 0;
  return result;
}
