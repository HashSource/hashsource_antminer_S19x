int __fastcall sub_172140(_DWORD *a1, int a2, int a3, int a4, int a5, int a6)
{
  int v7; // r3
  _DWORD *v10; // r1
  _DWORD *v11; // r0
  int v13[4]; // [sp+8h] [bp-20h] BYREF
  _DWORD v14[4]; // [sp+18h] [bp-10h] BYREF

  v7 = a1[6];
  if ( (*(_BYTE *)(v7 + 2) & 0x10) != 0 )
    sub_1B7250(*(_DWORD *)(v7 + 16));
  v10 = *(_DWORD **)(((int (*)(void))loc_16EC88)() + 12);
  v13[0] = 1;
  v14[0] = 1;
  v13[2] = a3;
  v13[3] = a4;
  v14[2] = a5;
  v14[3] = a6;
  v11 = (_DWORD *)sub_1717A0(0, v10, v13, v14);
  return sub_171DD4(0, a1, v11, 0, 0);
}
