int __fastcall sub_774F8(int a1, int a2, int a3, char a4)
{
  unsigned int v5; // r4

  v5 = a4 & 3 | 0x80008F04;
  sub_771FC(a1, a2, a3, 60, v5);
  usleep(0x2710u);
  return sub_771FC(a1, a2, a3, 60, v5 & 0xFFFF60FF | 0x1000);
}
