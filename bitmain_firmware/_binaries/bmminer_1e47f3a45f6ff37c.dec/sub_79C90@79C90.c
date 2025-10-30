int __fastcall sub_79C90(int a1, int a2, char a3)
{
  unsigned int v3; // r4

  v3 = a3 & 3 | 0x80008F04;
  sub_7864C(a1, 0, a2, 60, v3);
  usleep(0x2710u);
  return sub_7864C(a1, 0, a2, 60, v3 & 0xFFFF60FF | 0x1000);
}
