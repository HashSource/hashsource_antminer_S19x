int __fastcall sub_8A800(int a1)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 1028);
  if ( result )
    return *(_DWORD *)(*(_DWORD *)result + 4);
  return result;
}
