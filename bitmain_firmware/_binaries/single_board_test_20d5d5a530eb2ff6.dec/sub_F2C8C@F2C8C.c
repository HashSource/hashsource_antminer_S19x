int __fastcall sub_F2C8C(int a1)
{
  int result; // r0
  void *v3; // r4

  result = sub_DB984(a1);
  if ( result )
  {
    v3 = (void *)result;
    sub_E0758(*(void **)(result + 8), *(_DWORD *)result, (size_t)"crypto/poly1305/poly1305_pmeth.c");
    sub_E0758(v3, 0x100u, (size_t)"crypto/poly1305/poly1305_pmeth.c");
    return sub_DB980(a1, 0);
  }
  return result;
}
