int __fastcall ASN1_STRING_free(int result)
{
  if ( result )
    return sub_AE1D8(result, *(_DWORD *)(result + 12) & 0x80);
  return result;
}
