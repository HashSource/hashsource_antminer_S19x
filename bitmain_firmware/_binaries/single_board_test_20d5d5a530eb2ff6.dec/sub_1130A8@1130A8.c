int __fastcall sub_1130A8(int a1, int a2)
{
  int result; // r0

  result = X509_VERIFY_PARAM_free(*(_DWORD *)(a1 + 16));
  *(_DWORD *)(a1 + 16) = a2;
  return result;
}
