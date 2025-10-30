int __fastcall sub_F2B04(int a1)
{
  int result; // r0
  size_t *v2; // r4
  void *v3; // r0

  result = sub_D9F64(a1);
  if ( result )
  {
    v2 = (size_t *)result;
    v3 = *(void **)(result + 8);
    if ( v3 )
      sub_E07F8(v3, *v2);
    return j_ASN1_STRING_free(v2);
  }
  return result;
}
