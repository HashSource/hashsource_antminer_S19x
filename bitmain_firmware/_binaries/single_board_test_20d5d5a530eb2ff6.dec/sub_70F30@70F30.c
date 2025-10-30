int __fastcall sub_70F30(char a1)
{
  int v3; // [sp+4h] [bp-8h] BYREF

  v3 = 0;
  sub_6E060(35, &v3);
  sub_6E0BC(35, v3 & 0xFFFFF0FF | ((a1 & 0xF) << 8));
  return 0;
}
