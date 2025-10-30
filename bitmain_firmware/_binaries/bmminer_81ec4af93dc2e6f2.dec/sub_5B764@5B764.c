int sub_5B764()
{
  int v0; // r0
  int v2; // [sp+4h] [bp-8h] BYREF

  v2 = 0;
  sub_52E24(27, &v2);
  v2 &= ~0x400000u;
  sub_52EA0(27, v2);
  v0 = sub_5B4E4();
  return sub_5B518(v0 & 0xFFFFFFBF);
}
