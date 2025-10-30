int __fastcall sub_70E58(int a1)
{
  char v1; // r4
  int v3; // [sp+4h] [bp-8h] BYREF

  v1 = sub_6F570(a1);
  v3 = 0;
  sub_6688C(15, &v3);
  sub_66908(
    15,
    v3 & 0xC0C0C0C0 | v1 & 0x3F | ((v1 & 0x3F) << 8) | ((v1 & 0x3F) << 16) & 0xC0FFFFFF | ((v1 & 0x3F) << 24));
  return 0;
}
