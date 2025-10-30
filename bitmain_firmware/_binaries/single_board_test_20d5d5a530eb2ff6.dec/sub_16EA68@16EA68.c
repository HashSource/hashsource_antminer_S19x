int __fastcall sub_16EA68(int a1, int a2)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 36);
  if ( result )
    result = j_ASN1_STRING_free_0(result);
  *(_DWORD *)(a1 + 36) = a2;
  return result;
}
