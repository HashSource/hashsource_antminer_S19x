int __fastcall sub_16F6DC(int a1, int a2)
{
  int result; // r0

  result = j_ASN1_STRING_free_5(*(_DWORD *)(a1 + 4));
  *(_DWORD *)(a1 + 4) = a2;
  return result;
}
