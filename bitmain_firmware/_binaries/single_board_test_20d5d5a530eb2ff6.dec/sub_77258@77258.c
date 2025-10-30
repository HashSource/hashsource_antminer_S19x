int __fastcall sub_77258(
        int a1,
        int a2,
        int a3,
        unsigned int a4,
        char a5,
        char a6,
        unsigned __int8 a7,
        unsigned __int16 a8)
{
  int v8; // r3
  double v9; // d7
  int v11; // [sp+14h] [bp+14h]

  if ( a4 <= 1 )
  {
    v8 = (unsigned __int8)asc_1A60AC[a4];
    v9 = (float)((float)(25.0 / (float)a7) * (float)a8);
    if ( v9 >= 1600.0 && v9 < 2400.0 )
    {
      v11 = (a6 - 1) & 7
          | 0x40000000
          | (unsigned __int8)(16 * ((a5 - 1) & 7))
          | ((a7 & 0x3F) << 8)
          | ((a8 & 0xFFF) << 16) & 0xEFFFFFFF;
      return sub_771FC(a1, a2, a3, v8, v11);
    }
    if ( v9 >= 2400.0 && v9 <= 3200.0 )
    {
      v11 = (a6 - 1) & 7
          | 0x40000000
          | (unsigned __int8)(16 * ((a5 - 1) & 7))
          | ((a7 & 0x3F) << 8)
          | ((a8 & 0xFFF) << 16)
          | 0x10000000;
      return sub_771FC(a1, a2, a3, v8, v11);
    }
  }
  return -1;
}
