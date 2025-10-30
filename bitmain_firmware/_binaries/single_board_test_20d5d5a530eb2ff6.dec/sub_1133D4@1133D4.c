bool __fastcall sub_1133D4(void **a1, char *a2)
{
  char *v4; // r0

  CRYPTO_free(*a1);
  v4 = sub_E9E3C(a2);
  *a1 = v4;
  return v4 != 0;
}
