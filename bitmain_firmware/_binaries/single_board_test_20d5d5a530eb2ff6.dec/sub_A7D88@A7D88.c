int __fastcall sub_A7D88(int a1, int a2)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 20);
  if ( result )
  {
    *(_DWORD *)(result + 16) = a2;
    return 1;
  }
  return result;
}
