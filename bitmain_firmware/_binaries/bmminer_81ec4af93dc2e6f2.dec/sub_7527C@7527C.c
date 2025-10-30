int __fastcall sub_7527C(
        int a1,
        int a2,
        int a3,
        unsigned int a4,
        char a5,
        unsigned __int8 a6,
        unsigned __int8 a7,
        unsigned __int16 a8,
        _DWORD *a9)
{
  int v9; // r3
  float v10; // s15
  int v12; // [sp+14h] [bp+14h]

  if ( a4 <= 1 )
  {
    v9 = (unsigned __int8)asc_9B514[a4];
    v10 = (float)(25.0 / (float)a7) * (float)a8;
    if ( v10 >= 1600.0 && v10 < 2400.0 )
    {
      *a9 = (a6 - 1) & 7
          | 0x40000000
          | (unsigned __int8)(16 * ((a5 - 1) & 7))
          | ((a7 & 0x3F) << 8)
          | ((a8 & 0xFFF) << 16) & 0xEFFFFFFF;
      v12 = (a6 - 1) & 7
          | 0x40000000
          | (unsigned __int8)(16 * ((a5 - 1) & 7))
          | ((a7 & 0x3F) << 8)
          | ((a8 & 0xFFF) << 16) & 0xEFFFFFFF;
      return sub_751F0(a1, a2, a3, v9, v12);
    }
    if ( v10 >= 2400.0 && v10 <= 3200.0 )
    {
      *a9 = (a6 - 1) & 7
          | 0x40000000
          | (unsigned __int8)(16 * ((a5 - 1) & 7))
          | ((a7 & 0x3F) << 8)
          | ((a8 & 0xFFF) << 16)
          | 0x10000000;
      v12 = (a6 - 1) & 7
          | 0x40000000
          | (unsigned __int8)(16 * ((a5 - 1) & 7))
          | ((a7 & 0x3F) << 8)
          | ((a8 & 0xFFF) << 16)
          | 0x10000000;
      return sub_751F0(a1, a2, a3, v9, v12);
    }
  }
  return -1;
}
