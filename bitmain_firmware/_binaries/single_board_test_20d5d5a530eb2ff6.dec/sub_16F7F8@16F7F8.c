int __fastcall sub_16F7F8(int a1, int a2)
{
  int result; // r0

  result = j_ASN1_STRING_free_3(*(_DWORD *)(a1 + 12));
  *(_DWORD *)(a1 + 12) = a2;
  return result;
}
