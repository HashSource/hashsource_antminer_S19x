bool __fastcall sub_A10F0(int a1, int a2)
{
  int v3; // r3
  int v4; // r2
  int v6; // r4
  int v7; // r5
  _BOOL4 result; // r0

  result = 1;
  if ( a2 )
  {
    if ( !a1 )
      return 0;
    v3 = *(_DWORD *)(a2 + 24);
    if ( *(_BYTE *)v3 != 10 )
    {
      v4 = *(_DWORD *)(a1 + 24);
      if ( *(_BYTE *)v4 == 10 )
        return 0;
      if ( (*(_DWORD *)(v3 + 8) || !*(_DWORD *)(v4 + 8)) && !sub_A0CFC(a1) && (!sub_A0C94(a1) || sub_A0C94(a2)) )
      {
        v6 = sub_170CC4(a1);
        v7 = sub_170CC4(a2);
        if ( !v6 || !sub_338BD4(v6, "___XR") || v7 && sub_338BD4(v7, "___XR") )
          return 0;
      }
    }
  }
  return result;
}
