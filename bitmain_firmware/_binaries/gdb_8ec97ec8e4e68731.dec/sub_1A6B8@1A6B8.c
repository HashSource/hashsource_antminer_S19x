_DWORD *__fastcall sub_1A6B8(int a1)
{
  int v2; // r0
  int v3; // r7
  _DWORD *v4; // r5
  int v5; // r0
  int *v6; // r3
  _DWORD v8[3]; // [sp+0h] [bp-Ch] BYREF

  v2 = sub_15ECB4();
  v3 = ((int (__fastcall *)(int))loc_165BB8)(v2);
  v4 = (_DWORD *)sub_15D27C(16);
  v4[3] = sub_250C50(a1);
  v5 = sub_15ECAC(a1, 13);
  v6 = (int *)v4[3];
  v6[4] = v5 + 4;
  v6[8] = v5 + 8;
  v6[12] = v5 + 12;
  v6[48] = v5 + 16;
  *v6 = v5;
  v6[100] = v5 + 28;
  v6[56] = v5 + 20;
  v6[60] = v5 + 24;
  v6[1] = 0;
  v6[5] = 0;
  v6[9] = 0;
  v6[13] = 0;
  v6[49] = 0;
  v6[57] = 0;
  v6[61] = 0;
  v6[101] = 0;
  *v4 = v5 + 32;
  if ( sub_FA880(v5 + 28, 4, v3, v8) && (v8[0] & 0x200) != 0 )
    *v4 += 4;
  return v4;
}
