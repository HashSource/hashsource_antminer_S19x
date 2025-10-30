int __fastcall sub_30CC8(
        int a1,
        int a2,
        int a3,
        int a4,
        double a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        char a14)
{
  time_t v14; // r0
  int v15; // r3

  if ( dword_B6EB0 == 1 )
  {
    dword_B6EB0 = 0;
    dword_B4140 = 0;
    dword_B4144 = 0;
    dword_B4148 = 0;
    dword_B414C = 0;
    dword_B4150 = 0;
    dword_B4154 = 0;
    dword_B4158 = 0;
    dword_B415C = 0;
  }
  v14 = sub_309B4();
  v15 = dword_B4160;
  dword_B4160 = v14;
  return sub_30D40(
           (unsigned __int64)(2290649225LL * (v14 - v15)) >> 32,
           (v14 - v15) >> 31,
           -2004318071 * (v14 - v15),
           (unsigned __int64)(-2004318071LL * (v14 - v15)) >> 32,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14);
}
