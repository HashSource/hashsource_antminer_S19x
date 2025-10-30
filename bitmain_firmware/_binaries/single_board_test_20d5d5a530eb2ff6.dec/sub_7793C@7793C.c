int __fastcall sub_7793C(int a1, unsigned int a2, int a3)
{
  return sub_771FC(
           a1,
           0,
           a3,
           20,
           (unsigned __int8)asc_1A60AC[(unsigned __int8)a2 + 4]
         | (unsigned __int16)((unsigned __int8)asc_1A60AC[BYTE1(a2) + 4] << 8)
         | ((unsigned __int8)asc_1A60AC[BYTE2(a2) + 4] << 16) & 0xFFFFFF
         | ((unsigned __int8)asc_1A60AC[HIBYTE(a2) + 4] << 24));
}
