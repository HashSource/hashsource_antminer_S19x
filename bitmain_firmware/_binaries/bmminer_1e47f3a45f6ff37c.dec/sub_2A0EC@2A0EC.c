int __fastcall sub_2A0EC(int a1)
{
  int result; // r0

  result = a1 << 31 >> 31;
  LOBYTE(dword_B401C) = dword_B401C & 0xFB | (4 * (result & 1));
  return result;
}
