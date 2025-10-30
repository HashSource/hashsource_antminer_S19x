unsigned int __fastcall sub_B9A8(int a1)
{
  return ((a1 ^ (unsigned int)(a1 >> 31)) / 0x190
        + ((a1 ^ (unsigned int)(a1 >> 31)) >> 2)
        - (a1 ^ (unsigned int)(a1 >> 31)) / 0x64)
       ^ (a1 >> 31);
}
