int __fastcall sub_778F0(int a1, unsigned int a2)
{
  return sub_771FC(
           a1,
           1,
           0,
           20,
           (unsigned __int8)asc_1A60AC[(unsigned __int8)a2 + 4]
         | (unsigned __int16)((unsigned __int8)asc_1A60AC[BYTE1(a2) + 4] << 8)
         | ((unsigned __int8)asc_1A60AC[BYTE2(a2) + 4] << 16) & 0xFFFFFF
         | ((unsigned __int8)asc_1A60AC[HIBYTE(a2) + 4] << 24));
}
