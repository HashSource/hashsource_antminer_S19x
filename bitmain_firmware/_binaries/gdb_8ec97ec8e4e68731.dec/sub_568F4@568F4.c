bool __fastcall sub_568F4(int a1, int a2)
{
  int v4; // r0
  _BOOL4 result; // r0
  _DWORD v6[4]; // [sp+4h] [bp-10h] BYREF

  sub_CF020(v6, *(_DWORD *)(a2 + 136));
  result = 1;
  if ( v6[0] != 6 )
  {
    v4 = *(_DWORD *)(a2 + 204);
    if ( v4 )
    {
      if ( *(_DWORD *)(v4 + 8) != a1 && sub_242280() )
        return 0;
    }
  }
  return result;
}
