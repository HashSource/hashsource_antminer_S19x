int __fastcall sub_250C4(int a1, int a2)
{
  int v4; // r6
  int result; // r0
  int v6; // r3
  int v7; // r1
  int v8; // r5
  int v9; // r2
  _DWORD v10[2]; // [sp+0h] [bp-8h] BYREF

  v4 = sub_1DD58C(a1);
  result = ((int (__fastcall *)(int, int, int, _DWORD))loc_1DFC20)(a1, 15, a2, 0);
  if ( dword_469618 )
  {
    ((void (__fastcall *)(int, int, _DWORD *))loc_1DFAFC)(a1, 25, v10);
    v6 = *(_DWORD *)(sub_163E78(v4) + 32);
    v7 = a2;
    if ( v6 )
      v8 = 0x1000000;
    else
      v8 = 32;
    if ( sub_2484C(v4, v7) )
      v9 = v8 | v10[0];
    else
      v9 = v10[0] & ~v8;
    return ((int (__fastcall *)(int, int, int, _DWORD))loc_1DFC20)(a1, 25, v9, v10[1]);
  }
  return result;
}
