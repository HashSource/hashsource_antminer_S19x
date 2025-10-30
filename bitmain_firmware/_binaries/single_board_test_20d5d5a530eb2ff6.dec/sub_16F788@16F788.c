int __fastcall sub_16F788(int a1, int a2)
{
  int result; // r0

  result = j_ASN1_STRING_free(*(_DWORD *)(a1 + 16));
  *(_DWORD *)(a1 + 16) = a2;
  return result;
}
