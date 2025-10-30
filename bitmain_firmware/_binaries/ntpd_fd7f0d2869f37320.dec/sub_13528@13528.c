int __fastcall sub_13528(int a1)
{
  const char *v2; // r0
  void *v3; // r0
  int v4; // r0
  int v5; // r0
  _BYTE v7[128]; // [sp+4h] [bp-88h] BYREF

  v2 = (const char *)sub_6D2C0(a1);
  sub_6D00C(v7, 128, "remote config from %s", v2);
  sub_1C38C(v7, 0);
  v3 = memset(&cfgt, 0, 0xB8u);
  dword_1084F8 = 5;
  v4 = sub_19988(v3);
  sub_1C40C(v4);
  dword_108454 = 1;
  dword_108468 = time(0);
  v5 = sub_6D2C0(a1);
  dword_108460 = sub_64C8C(v5);
  return sub_FE68(0);
}
