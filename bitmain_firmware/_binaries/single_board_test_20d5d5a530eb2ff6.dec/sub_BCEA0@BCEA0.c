int __fastcall sub_BCEA0(int a1, _BYTE **a2, int a3)
{
  int result; // r0
  int v5; // r4
  size_t v6[2]; // [sp+0h] [bp-10h] BYREF
  int v7; // [sp+8h] [bp-8h] BYREF

  v7 = 0;
  result = sub_BCD08(a1, &v7, a3);
  v6[0] = result;
  if ( result != -1 )
  {
    v5 = sub_B2054(v6, a2);
    CRYPTO_free(v7, "crypto/ct/ct_oct.c", 405);
    return v5;
  }
  return result;
}
