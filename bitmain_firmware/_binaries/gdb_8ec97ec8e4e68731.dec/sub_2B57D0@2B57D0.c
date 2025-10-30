int __fastcall sub_2B57D0(unsigned int a1, char a2, char a3)
{
  return ((16 * (unsigned __int8)(a1 >> a3)) & 0x10 | (a1 >> a2) & 0xF) + 32;
}
