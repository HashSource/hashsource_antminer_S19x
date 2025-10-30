_DWORD *__fastcall sub_19E1B4(int a1)
{
  _DWORD *v2; // r5
  int v3; // r0
  int v4; // r0
  int v5; // r6
  int v6; // r0
  int v7; // r0

  v2 = sub_163938(a1, 0x14u);
  v3 = ((int (__fastcall *)(int))loc_165E68)(a1);
  v2[1] = sub_1773C4(a1, v3, 0);
  v4 = ((int (__fastcall *)(int))loc_165E68)(a1);
  v2[2] = sub_1773C4(a1, v4, 1);
  v5 = ((int (__fastcall *)(int))loc_166138)(a1);
  v6 = ((int (__fastcall *)(int))loc_1661B0)(a1);
  v2[3] = sub_177448(a1, v5, (int)"REAL", v6);
  *v2 = sub_1773F0(a1, 8, 1);
  v7 = ((int (__fastcall *)(int))loc_165E68)(a1);
  v2[4] = sub_17741C(a1, v7, 1);
  return v2;
}
