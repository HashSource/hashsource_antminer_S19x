int __fastcall sub_A7978(int a1, int a2, int a3, int a4)
{
  int v7; // r0
  int v8; // r12
  int v9; // r1
  unsigned int v10; // r2
  int v12; // r4
  int v13; // r8
  int v14; // r7
  int v15; // r1
  int v16; // r3

  v7 = sub_A0870(a4);
  v8 = *(_DWORD *)(*(_DWORD *)(v7 + 24) + 24);
  v9 = v8 + 24 * a3;
  v10 = *(_DWORD *)(v9 + 8);
  if ( (v10 & 0xFFFFFFF0) == 0 )
    return ((int (__fastcall *)(int, int, int, int, int, int))loc_26F358)(a1, v9, a2, a2 >> 31, a3, v7);
  v12 = *(_DWORD *)(v8 + 24 * a3);
  v13 = *(_DWORD *)(v9 + 12);
  v14 = v10 >> 4;
  v15 = sub_26E978(a1);
  v16 = v12 & 7;
  if ( v12 <= 0 )
    v16 = -(-v12 & 7);
  return sub_A75F8(a1, v15, a2 + v12 / 8, v16, v14, v13);
}
