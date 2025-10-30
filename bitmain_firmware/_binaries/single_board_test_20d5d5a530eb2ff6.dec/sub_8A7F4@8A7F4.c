int __fastcall sub_8A7F4(int a1)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 1028);
  if ( result )
    return **(_DWORD **)result;
  return result;
}
