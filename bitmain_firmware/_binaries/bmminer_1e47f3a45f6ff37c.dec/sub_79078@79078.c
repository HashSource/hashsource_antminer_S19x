int __fastcall sub_79078(int a1, unsigned int a2)
{
  return sub_7864C(
           a1,
           1,
           0,
           20,
           (unsigned __int16)((unsigned __int8)asc_9ED18[(unsigned __int8)a2 + 4]
                            | ((unsigned __int8)asc_9ED18[BYTE1(a2) + 4] << 8))
         | ((unsigned __int8)asc_9ED18[BYTE2(a2) + 4] << 16) & 0xFFFFFF
         | ((unsigned __int8)asc_9ED18[HIBYTE(a2) + 4] << 24));
}
