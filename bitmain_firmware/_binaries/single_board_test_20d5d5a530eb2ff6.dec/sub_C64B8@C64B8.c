int __fastcall sub_C64B8(int result)
{
  int v1; // r4
  void (*v2)(void); // r3

  if ( result )
  {
    v1 = result;
    v2 = *(void (**)(void))(*(_DWORD *)result + 12);
    if ( v2 )
      v2();
    sub_C61F4(v1);
    sub_B94B4(*(int **)(v1 + 92));
    sub_C6490(*(_DWORD *)(v1 + 4));
    sub_B895C(*(_DWORD *)(v1 + 8));
    sub_B895C(*(_DWORD *)(v1 + 12));
    CRYPTO_free(*(_DWORD *)(v1 + 32), "crypto/ec/ec_lib.c", 107);
    return CRYPTO_free(v1, "crypto/ec/ec_lib.c", 108);
  }
  return result;
}
