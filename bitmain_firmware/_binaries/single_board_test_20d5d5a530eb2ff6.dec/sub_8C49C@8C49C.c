int __fastcall sub_8C49C(int a1)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 1480);
  if ( result )
    return *(_DWORD *)(result + 4);
  return result;
}
