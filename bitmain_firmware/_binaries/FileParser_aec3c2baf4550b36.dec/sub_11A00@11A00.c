unsigned __int64 __fastcall sub_11A00(int a1, int a2)
{
  __int64 v2; // r0
  __int64 v3; // r2
  __int64 v4; // r0
  __int64 v5; // r2
  unsigned __int64 v6; // r0
  __int64 v8; // [sp+8h] [bp-6Ch]
  unsigned __int64 v9; // [sp+18h] [bp-5Ch]
  __int64 v12; // [sp+30h] [bp-44h]
  unsigned __int64 v13; // [sp+38h] [bp-3Ch]
  __int64 v14; // [sp+40h] [bp-34h]
  __int64 v15; // [sp+48h] [bp-2Ch]
  __int64 v16; // [sp+50h] [bp-24h]

  v16 = (unsigned int)(2 * a2) - 0x651E95C4D06FBFB1LL;
  v2 = sub_11490((const void *)a1);
  v3 = 3197694579LL * (unsigned int)v2;
  HIDWORD(v3) += -1097272717 * HIDWORD(v2) - 1265453457 * v2;
  v15 = v3;
  v14 = sub_11490((const void *)(a1 + 8));
  v13 = sub_11490((const void *)(a1 + a2 - 8)) * v16;
  v4 = sub_11490((const void *)(a1 + a2 - 16));
  v5 = 797982799LL * (unsigned int)v4;
  HIDWORD(v5) += 797982799 * HIDWORD(v4) - 1696503237 * v4;
  v12 = v5;
  v6 = sub_11514(v15 + v14, 43);
  v9 = v6 + sub_11514(v13, 30) + v12;
  v8 = sub_11514(v14 - 0x651E95C4D06FBFB1LL, 18) + v15 + v13;
  return sub_11598(v9, SHIDWORD(v9), v8, v16);
}
