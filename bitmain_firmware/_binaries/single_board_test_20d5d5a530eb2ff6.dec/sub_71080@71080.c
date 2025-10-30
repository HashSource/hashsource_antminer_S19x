int sub_71080()
{
  int v1; // [sp+0h] [bp-8h] BYREF
  int v2; // [sp+4h] [bp-4h] BYREF

  v1 = 0;
  sub_6E060(27, &v1);
  v1 &= ~0x400000u;
  sub_6E0BC(27, v1);
  v2 = 0;
  sub_6E060(35, &v2);
  return sub_6E0BC(35, v2 & 0xFFFFFFBF);
}
