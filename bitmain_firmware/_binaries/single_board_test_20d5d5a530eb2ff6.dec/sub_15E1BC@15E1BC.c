int __fastcall sub_15E1BC(int a1, int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  unsigned int v7; // r0
  int result; // r0
  int v9; // r3
  _DWORD v10[5]; // [sp+Ch] [bp-14h] BYREF

  if ( !a2 )
    return 0;
  v10[0] = a1;
  v10[1] = a2;
  if ( dword_6E1D3C && (v7 = sub_10BC4C(dword_6E1D3C, (int)v10), (result = sub_10C01C((_DWORD *)dword_6E1D3C, v7)) != 0)
    || (result = sub_EAC70((int)v10, (int)&unk_219CAC, 29, 20, (int (__fastcall *)(int, int))sub_15E0AC)) != 0 )
  {
    if ( a3 )
      *a3 = *(_DWORD *)(result + 8);
    if ( a4 )
      *a4 = *(_DWORD *)(result + 12);
    if ( a5 )
    {
      v9 = *(_DWORD *)(result + 16);
      *a5 = v9;
      return 1;
    }
    else
    {
      return 1;
    }
  }
  return result;
}
