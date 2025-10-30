int __fastcall sub_C6508(int result)
{
  int v1; // r4
  void (*v2)(void); // r3

  if ( result )
  {
    v1 = result;
    v2 = *(void (**)(void))(*(_DWORD *)result + 52);
    if ( v2 || (v2 = *(void (**)(void))(*(_DWORD *)result + 48)) != 0 )
      v2();
    return sub_E0758(v1, 24, (size_t)"crypto/ec/ec_lib.c");
  }
  return result;
}
