int __fastcall sub_16F6F0(int a1, int a2)
{
  int result; // r0

  result = j_ASN1_STRING_free_5(*(_DWORD *)(a1 + 8));
  *(_DWORD *)(a1 + 8) = a2;
  return result;
}
