int __fastcall sub_C6490(int result)
{
  int v1; // r4
  void (*v2)(void); // r3

  if ( result )
  {
    v1 = result;
    v2 = *(void (**)(void))(*(_DWORD *)result + 48);
    if ( v2 )
      v2();
    return CRYPTO_free(v1, "crypto/ec/ec_lib.c", 687);
  }
  return result;
}
