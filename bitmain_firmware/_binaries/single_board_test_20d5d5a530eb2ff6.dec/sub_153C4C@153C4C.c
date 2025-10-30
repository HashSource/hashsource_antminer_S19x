void *__fastcall sub_153C4C(int a1, const void *a2)
{
  int v2; // r4
  _BYTE v4[256]; // [sp+0h] [bp-290h] BYREF
  _DWORD v5[16]; // [sp+100h] [bp-190h] BYREF
  _BYTE v6[64]; // [sp+140h] [bp-150h] BYREF
  _BYTE v7[64]; // [sp+180h] [bp-110h] BYREF
  _DWORD v8[16]; // [sp+1C0h] [bp-D0h] BYREF
  _BYTE v9[64]; // [sp+200h] [bp-90h] BYREF
  _BYTE v10[84]; // [sp+240h] [bp-50h] BYREF
  int v11; // [sp+294h] [bp+4h]

  v11 = a1;
  memcpy(v4, a2, sizeof(v4));
  sub_17BE0C(v10);
  sub_17BE0C(v7);
  sub_155E5C(v5, v10, v7);
  sub_155E5C(v8, &v4[64], v4);
  sub_17BE0C(v9);
  sub_155C98(v9, v9, v5);
  sub_155C98(v8, v7, v10);
  sub_17BE0C(v10);
  sub_155E5C(v7, v10, v10);
  sub_155C98(v7, v7, v8);
  sub_17B628(v10, v7, v9);
  sub_17B628(v9, v8, v5);
  sub_17B628(v8, v5, v7);
  sub_E07F8(v5, 0x40u);
  sub_17BE0C(v6);
  sub_1561BC(v5, v6);
  sub_17BE0C(v6);
  sub_17B628(v5, v6, v8);
  v8[0] = v5[0];
  v8[1] = v5[1];
  v8[2] = v5[2];
  v8[3] = v5[3];
  v8[4] = v5[4];
  v8[5] = v5[5];
  v8[6] = v5[6];
  v8[7] = v5[7];
  v8[8] = v5[8];
  v8[9] = v5[9];
  v8[10] = v5[10];
  v8[11] = v5[11];
  v8[12] = v5[12];
  v8[13] = v5[13];
  v8[14] = v5[14];
  v8[15] = v5[15];
  sub_17B628(v7, v10, v8);
  sub_17B628(v10, v9, v8);
  v2 = v11;
  *(_BYTE *)(v11 + 56) = 0;
  sub_155BC4(v2, v10, 1);
  *(_BYTE *)(v2 + 56) |= sub_155C60(v7) & 0x80;
  sub_E07F8(v10, 0x40u);
  sub_E07F8(v9, 0x40u);
  sub_E07F8(v8, 0x40u);
  sub_E07F8(v7, 0x40u);
  return sub_153C44(v4);
}
