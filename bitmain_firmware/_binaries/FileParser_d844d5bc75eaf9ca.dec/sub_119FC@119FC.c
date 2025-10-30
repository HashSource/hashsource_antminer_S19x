unsigned __int64 __fastcall sub_119FC(int a1, int a2)
{
  __int64 v2; // r0
  __int64 v3; // r2
  __int64 v4; // r0
  __int64 v5; // r2
  unsigned __int64 v6; // r0
  __int64 v7; // r4
  unsigned __int64 v8; // r0
  __int64 v12; // [sp+10h] [bp-34h]
  unsigned __int64 v13; // [sp+18h] [bp-2Ch]
  __int64 v14; // [sp+20h] [bp-24h]
  __int64 v15; // [sp+28h] [bp-1Ch]
  __int64 v16; // [sp+30h] [bp-14h]

  v16 = (unsigned int)(2 * a2) - 0x651E95C4D06FBFB1LL;
  v2 = sub_114DC((const void *)a1);
  v3 = 3197694579LL * (unsigned int)v2;
  HIDWORD(v3) += -1097272717 * HIDWORD(v2) - 1265453457 * v2;
  v15 = v3;
  v14 = sub_114DC((const void *)(a1 + 8));
  v13 = v16 * sub_114DC((const void *)(a1 + a2 - 8));
  v4 = sub_114DC((const void *)(a1 + a2 - 16));
  v5 = 797982799LL * (unsigned int)v4;
  HIDWORD(v5) += 797982799 * HIDWORD(v4) - 1696503237 * v4;
  v12 = v5;
  v6 = sub_11558(v15 + v14, 43);
  v7 = v6 + sub_11558(v13, 30) + v12;
  v8 = sub_11558(v14 - 0x651E95C4D06FBFB1LL, 18);
  return sub_115C4(v7, v8 + v15 + v13, v16, SHIDWORD(v16));
}
