bool __fastcall sub_B86F0(int a1, int a2)
{
  _BOOL4 result; // r0

  result = sub_B8590(a1, a2);
  if ( result )
    return !a2 || *(_DWORD *)(a1 + 12) == 0;
  return result;
}
