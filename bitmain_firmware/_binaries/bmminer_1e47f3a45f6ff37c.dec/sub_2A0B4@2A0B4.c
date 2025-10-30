int __fastcall sub_2A0B4(int a1)
{
  int result; // r0

  result = a1 << 31 >> 31;
  LOBYTE(dword_B401C) = dword_B401C & 0xFE | result & 1;
  return result;
}
