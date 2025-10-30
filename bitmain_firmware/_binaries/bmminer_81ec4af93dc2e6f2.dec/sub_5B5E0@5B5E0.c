int __fastcall sub_5B5E0(__int16 a1)
{
  int v1; // r0

  v1 = sub_5B4E4();
  sub_5B518(v1 & 0xFFFFE0FF | (a1 << 8) & 0x1F00);
  return 0;
}
