unsigned __int64 __fastcall sub_115C4(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v4; // r2
  int v5; // r1
  unsigned __int64 v6; // r2
  unsigned __int64 v7; // r2
  int v8; // r1
  unsigned __int64 v9; // r2
  int v10; // r1
  unsigned __int64 v11; // r2

  v4 = a1 ^ a2;
  v5 = HIDWORD(v4) * a3 + v4 * a4;
  v6 = a3 * (unsigned __int64)(unsigned int)v4;
  HIDWORD(v6) += v5;
  LODWORD(v6) = v6 ^ (HIDWORD(v6) >> 15);
  v7 = a2 ^ v6;
  v8 = HIDWORD(v7) * a3 + v7 * a4;
  v9 = a3 * (unsigned __int64)(unsigned int)v7;
  HIDWORD(v9) += v8;
  LODWORD(v9) = v9 ^ (HIDWORD(v9) >> 15);
  v10 = a3 * HIDWORD(v9) + v9 * a4;
  v11 = (unsigned int)v9 * (unsigned __int64)a3;
  HIDWORD(v11) += v10;
  return v11;
}
