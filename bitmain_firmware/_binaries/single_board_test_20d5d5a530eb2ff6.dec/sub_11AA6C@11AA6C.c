bool __fastcall sub_11AA6C(int a1)
{
  _DWORD *v2; // r5
  _DWORD *v4; // r4

  if ( !a1 )
    return 1;
  v2 = *(_DWORD **)a1;
  if ( *(_DWORD *)a1 && *v2 && (*v2 != 1 || !sub_10C010(v2[1]) || !sub_11A494((int)v2)) )
    return 0;
  v4 = *(_DWORD **)(a1 + 4);
  if ( v4 && *v4 )
  {
    if ( *v4 == 1 && sub_10C010(v4[1]) )
      return sub_11A494((int)v4) != 0;
    return 0;
  }
  return 1;
}
