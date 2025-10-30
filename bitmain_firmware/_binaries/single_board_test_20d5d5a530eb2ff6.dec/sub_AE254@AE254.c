int __fastcall sub_AE254(int result)
{
  size_t *v1; // r4
  int v2; // r0

  if ( result )
  {
    v1 = (size_t *)result;
    v2 = *(_DWORD *)(result + 8);
    if ( v2 && (v1[3] & 0x10) == 0 )
    {
      sub_E07F8(v2, *v1);
      return ASN1_STRING_free((int)v1);
    }
    else
    {
      return ASN1_STRING_free((int)v1);
    }
  }
  return result;
}
