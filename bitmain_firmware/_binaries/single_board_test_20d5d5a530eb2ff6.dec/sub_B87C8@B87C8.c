int *__fastcall sub_B87C8(int *result)
{
  int *v1; // r4
  int v2; // r0
  int v3; // r1

  if ( result )
  {
    v1 = result;
    if ( *result && !sub_B87C0((int)result, 2) )
    {
      v2 = sub_B87C0((int)v1, 8);
      v3 = v1[2];
      if ( v2 )
        ((void (__fastcall *)(int, int, const char *, int))loc_E18E0)(*v1, 4 * v3, "crypto/bn/bn_lib.c", 204);
      else
        sub_E0758(*v1, 4 * v3, (size_t)"crypto/bn/bn_lib.c");
    }
    result = (int *)sub_B87C0((int)v1, 1);
    if ( result )
    {
      sub_E07F8((int)v1, 0x14u);
      return (int *)CRYPTO_free(v1, "crypto/bn/bn_lib.c", 220);
    }
  }
  return result;
}
