int __fastcall sub_8A80C(int a1)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 192);
  if ( result )
    return **(_DWORD **)result;
  return result;
}
