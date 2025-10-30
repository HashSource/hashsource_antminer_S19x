unsigned int __fastcall sub_C324(int a1)
{
  unsigned int v1; // r3

  v1 = (a1 >> 31) ^ ((a1 ^ (unsigned int)(a1 >> 31)) / 0x64);
  return ((a1 >> 31) ^ (((3 * v1 + 1) ^ (a1 >> 31)) >> 2))
       + 5217 * v1
       + ((*(unsigned __int16 *)&a171005Jan14202[2 * ((3 * v1 + 1) & 3) + 144] + 53431 * (a1 - 100 * v1)) >> 10);
}
