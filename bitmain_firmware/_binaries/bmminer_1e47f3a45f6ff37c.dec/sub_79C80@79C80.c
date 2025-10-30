int __fastcall sub_79C80(int a1, char a2)
{
  unsigned int v2; // r4

  v2 = a2 & 3 | 0x80008F04;
  sub_7864C(a1, 1, 0, 60, v2);
  usleep(0x2710u);
  return sub_7864C(a1, 1, 0, 60, v2 & 0xFFFF60FF | 0x1000);
}
