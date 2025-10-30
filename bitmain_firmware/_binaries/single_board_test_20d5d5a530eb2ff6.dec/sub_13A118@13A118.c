int __fastcall sub_13A118(int a1, int a2)
{
  int result; // r0

  if ( a2 )
  {
    sub_10FD18(a2);
    sub_DA240(*(_DWORD *)(a1 + 32));
    *(_DWORD *)(a1 + 32) = sub_10E8A8(a2);
  }
  result = X509_free(*(_DWORD *)(a1 + 28));
  *(_DWORD *)(a1 + 28) = a2;
  return result;
}
