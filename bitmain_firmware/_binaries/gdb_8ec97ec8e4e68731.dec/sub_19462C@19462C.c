int __fastcall sub_19462C(int a1, int a2)
{
  int v3; // r0
  int v4; // r3
  int v5; // r4
  int v6; // r0
  int v7; // r1
  int result; // r0
  _DWORD v9[3]; // [sp+8h] [bp-Ch] BYREF

  v3 = ((int (__fastcall *)(int, int))loc_16EC88)(a2, dword_487A0C);
  v4 = *(_DWORD *)(a1 + 8);
  v5 = v3;
  v6 = 4 * v4;
  v7 = *(_DWORD *)(v5 + 20 * v4 + 12);
  if ( !v7 )
    return *(_DWORD *)(v5 + 4 * (v6 + v4) + 16);
  sub_21D6B0(v9, v7, 0, 1, 0);
  if ( !v9[0] || (result = *(_DWORD *)(v9[0] + 24)) == 0 || **(_BYTE **)(result + 24) != 21 )
  {
    v4 = *(_DWORD *)(a1 + 8);
    v6 = 4 * v4;
    return *(_DWORD *)(v5 + 4 * (v6 + v4) + 16);
  }
  return result;
}
