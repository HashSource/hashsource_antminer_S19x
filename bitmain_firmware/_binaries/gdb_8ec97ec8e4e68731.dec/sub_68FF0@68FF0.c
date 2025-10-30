int __fastcall sub_68FF0(int a1)
{
  int v1; // r2
  int result; // r0
  int v3; // r1
  int v4; // r2
  int v5; // r2
  _BYTE *v6; // r1
  int v7; // r0

  v1 = *(_DWORD *)(a1 + 36);
  if ( v1 - *(_DWORD *)(a1 + 32) == 4 )
    return *(_DWORD *)(v1 - 4);
  result = ((int (__fastcall *)(int))loc_15A5C)(a1);
  v4 = *(_DWORD *)(result + 36);
  if ( v4 - *(_DWORD *)(result + 32) == 4 )
  {
    v5 = *(_DWORD *)(v4 - 4);
    v6 = *(_BYTE **)(v5 + 4);
    *(_DWORD *)(v5 + 8) = 0;
    *v6 = 0;
  }
  else
  {
    v7 = ((int (__fastcall *)(int, int))loc_15A5C)(result, v3);
    return sub_69048(v7);
  }
  return result;
}
