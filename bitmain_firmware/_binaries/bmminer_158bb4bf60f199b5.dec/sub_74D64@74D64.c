int __fastcall sub_74D64(int a1, unsigned int a2)
{
  return sub_748C4(
           a1,
           1,
           0,
           20,
           (unsigned __int8)aDh[(unsigned __int8)a2 + 4]
         | (unsigned __int16)((unsigned __int8)aDh[BYTE1(a2) + 4] << 8)
         | ((unsigned __int8)aDh[BYTE2(a2) + 4] << 16) & 0xFFFFFF
         | ((unsigned __int8)aDh[HIBYTE(a2) + 4] << 24));
}
