int __fastcall sub_BB754(int result)
{
  int v1; // r4
  void (*v2)(void); // r3

  if ( result )
  {
    v1 = result;
    v2 = *(void (**)(void))(*(_DWORD *)result + 12);
    if ( v2 )
      v2();
    return CRYPTO_free(v1, "crypto/comp/comp_lib.c", 56);
  }
  return result;
}
