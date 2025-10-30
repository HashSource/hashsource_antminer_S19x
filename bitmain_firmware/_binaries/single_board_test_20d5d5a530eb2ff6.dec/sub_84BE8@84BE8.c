int __fastcall sub_84BE8(int a1, int a2)
{
  int result; // r0

  result = sub_10BFDC(*(_DWORD *)(a1 + 164), X509_NAME_free);
  *(_DWORD *)(a1 + 164) = a2;
  return result;
}
