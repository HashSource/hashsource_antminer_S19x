unsigned int __fastcall sub_67088(int a1)
{
  return (((unsigned int)((1374389535 * (unsigned __int64)((a1 ^ (unsigned int)(a1 >> 31)) >> 2)) >> 32) >> 5)
        - ((unsigned int)((1374389535 * (unsigned __int64)((a1 ^ (unsigned int)(a1 >> 31)) >> 2)) >> 32) >> 3)
        + ((a1 ^ (unsigned int)(a1 >> 31)) >> 2))
       ^ (a1 >> 31);
}
