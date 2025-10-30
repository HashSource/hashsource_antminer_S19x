unsigned __int64 __fastcall sub_116D8(unsigned __int8 *a1, unsigned int a2)
{
  unsigned __int64 v2; // r0
  __int64 v3; // r2
  __int64 v4; // r4
  int v5; // r0
  unsigned int v6; // r2
  int v7; // r12
  __int64 v8; // r2
  unsigned __int64 v9; // r0
  __int64 v13; // [sp+38h] [bp-2Ch]
  unsigned __int64 v14; // [sp+40h] [bp-24h]
  unsigned __int64 v15; // [sp+48h] [bp-1Ch]
  __int64 v16; // [sp+50h] [bp-14h]

  if ( a2 <= 7 )
  {
    if ( a2 <= 3 )
    {
      if ( a2 )
      {
        v6 = 4 * a1[a2 - 1] + a2;
        v7 = -1012545444 * v6;
        v8 = 2546676007LL * v6;
        HIDWORD(v8) += v7;
        v9 = sub_11514((0x9AE16A3B2F90404FLL * (*a1 + (a1[a2 >> 1] << 8))) ^ v8);
        v3 = 797982799LL * (unsigned int)v9;
        HIDWORD(v3) += 797982799 * HIDWORD(v9) - 1696503237 * v9;
      }
      else
      {
        return 0x9AE16A3B2F90404FLL;
      }
    }
    else
    {
      v4 = vshld_n_s64((unsigned int)sub_114A8(a1), 3u) + a2;
      v5 = sub_114A8(&a1[a2 - 4]);
      return sub_115C4(
               v4,
               (unsigned int)v5,
               2 * a2 + 797982799,
               ((unsigned __int64)(2 * a2) - 0x651E95C4D06FBFB1LL) >> 32);
    }
  }
  else
  {
    v16 = 2 * a2 - 0x651E95C4D06FBFB1LL;
    v15 = sub_114DC(a1) - 0x651E95C4D06FBFB1LL;
    v14 = sub_114DC(&a1[a2 - 8]);
    v13 = v16 * sub_11558(v14, 37) + v15;
    v2 = sub_11558(v15, 25);
    return sub_115C4(
             v13,
             (2 * a2 - 0x651E95C4D06FBFB1LL) * (v14 + v2),
             2 * a2 + 797982799,
             ((unsigned __int64)(2 * a2) - 0x651E95C4D06FBFB1LL) >> 32);
  }
  return v3;
}
