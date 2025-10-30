int __fastcall sub_DB4BC(int result)
{
  int *v1; // r4
  void (*v2)(void); // r3

  if ( result )
  {
    v1 = (int *)result;
    if ( *(_DWORD *)result )
    {
      v2 = *(void (**)(void))(*(_DWORD *)result + 16);
      if ( v2 )
        v2();
    }
    sub_DA240(v1[2]);
    sub_DA240(v1[3]);
    sub_CDDF8(v1[1]);
    return CRYPTO_free(v1, "crypto/evp/pmeth_lib.c", 363);
  }
  return result;
}
