unsigned __int64 __fastcall sub_11598(int a1, int a2, __int64 a3, __int64 a4)
{
  int v4; // r1
  unsigned __int64 v5; // r2

  v4 = (a1 ^ a3) * HIDWORD(a4) + (a2 ^ HIDWORD(a3)) * a4;
  v5 = (unsigned int)a4 * (unsigned __int64)(a1 ^ (unsigned int)a3);
  HIDWORD(v5) += v4;
  return a4
       * (((a3 ^ v5 ^ (HIDWORD(v5) >> 15)) * a4) ^ ((unsigned int)(((a3 ^ v5 ^ (HIDWORD(v5) >> 15)) * a4) >> 32) >> 15));
}
