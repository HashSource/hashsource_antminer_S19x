char *__fastcall sub_10354(int a1)
{
  const char *v1; // r0
  char v3[76]; // [sp+0h] [bp-54h] BYREF

  v1 = sub_FF00(a1);
  sub_F5F4((int)v3, 0x4Cu, "%.64s Password: ", v1);
  return getpass(v3);
}
