unsigned __int64 __fastcall sub_116C8(unsigned __int8 *a1, unsigned int a2)
{
  unsigned __int64 v2; // r0
  __int64 v3; // r2
  int v4; // r0
  unsigned __int64 v5; // r0
  int v6; // r0
  int v7; // r1
  __int64 v9; // [sp+28h] [bp-74h]
  unsigned __int64 v12; // [sp+40h] [bp-5Ch]
  unsigned __int64 v13; // [sp+48h] [bp-54h]
  unsigned __int64 v14; // [sp+50h] [bp-4Ch]
  __int64 v15; // [sp+58h] [bp-44h]
  unsigned int v16; // [sp+74h] [bp-28h]

  if ( a2 <= 7 )
  {
    if ( a2 <= 3 )
    {
      if ( a2 )
      {
        v16 = a2 + 4 * a1[a2 - 1];
        v5 = 0x9AE16A3B2F90404FLL * (*a1 + (a1[a2 >> 1] << 8));
        v6 = sub_114C8(
               v5 ^ (-1748291289 * v16),
               HIDWORD(v5) ^ (-1012545444 * v16 + ((2546676007u * (unsigned __int64)v16) >> 32)));
        v3 = 797982799LL * (unsigned int)v6;
        HIDWORD(v3) += 797982799 * v7 - 1696503237 * v6;
      }
      else
      {
        return 0x9AE16A3B2F90404FLL;
      }
    }
    else
    {
      v9 = a2 + 8LL * (unsigned int)sub_11460((int)a1);
      v4 = sub_11460((int)&a1[a2 - 4]);
      return sub_11598(v9, SHIDWORD(v9), (unsigned int)v4, 2 * a2 - 0x651E95C4D06FBFB1LL);
    }
  }
  else
  {
    v15 = 2 * a2 - 0x651E95C4D06FBFB1LL;
    v14 = sub_11490(a1) - 0x651E95C4D06FBFB1LL;
    v13 = sub_11490(&a1[a2 - 8]);
    v12 = v14 + v15 * sub_11514(v13, 37);
    v2 = sub_11514(v14, 25);
    return sub_11598(v12, SHIDWORD(v12), (v2 + v13) * v15, v15);
  }
  return v3;
}
