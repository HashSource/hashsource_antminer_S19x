bool __fastcall sub_B8590(int a1, int a2)
{
  int v2; // r3
  bool v3; // zf

  v2 = *(_DWORD *)(a1 + 4);
  if ( v2 != 1 || **(_DWORD **)a1 != a2 )
  {
    v3 = a2 == 0;
    if ( !a2 )
      return v2 == 0;
    return v3;
  }
  return v2;
}
