int __fastcall sub_120E24(int a1)
{
  int result; // r0

  if ( sub_120C28(a1, -1, -1) != 1 )
    return 0;
  result = *(_DWORD *)(a1 + 148);
  if ( result )
    return *(_DWORD *)(result + 4);
  return result;
}
