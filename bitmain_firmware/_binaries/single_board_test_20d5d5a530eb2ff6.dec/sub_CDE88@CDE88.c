int __fastcall sub_CDE88(void (**a1)(void))
{
  (*a1)();
  return CRYPTO_free(a1, "crypto/engine/eng_lib.c", 165);
}
