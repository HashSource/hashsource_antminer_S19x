int __fastcall sub_132B0(int a1)
{
  const char *v2; // r0
  void *v3; // r0
  int v4; // r0
  int v5; // r0
  _BYTE v7[128]; // [sp+4h] [bp-88h] BYREF

  v2 = (const char *)sub_6C2E8(a1);
  sub_6C054(v7, 128, "remote config from %s", v2);
  sub_1C148(v7, 0);
  v3 = memset(&cfgt, 0, 0xB8u);
  dword_1074D8 = 5;
  v4 = sub_1973C(v3);
  sub_1C1CC(v4);
  dword_107434 = 1;
  dword_107448 = time(0);
  v5 = sub_6C2E8(a1);
  dword_107440 = sub_63D08(v5);
  return sub_FD04(0);
}
