int __fastcall sub_10B9F0(int a1, int a2)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 16) = a2;
  if ( result != a2 )
    *(_DWORD *)(a1 + 8) = 0;
  return result;
}
