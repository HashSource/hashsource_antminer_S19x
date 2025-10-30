bool __fastcall sub_B86D8(int a1)
{
  _BOOL4 result; // r0

  result = sub_B8590(a1, 1);
  if ( result )
    return *(_DWORD *)(a1 + 12) == 0;
  return result;
}
