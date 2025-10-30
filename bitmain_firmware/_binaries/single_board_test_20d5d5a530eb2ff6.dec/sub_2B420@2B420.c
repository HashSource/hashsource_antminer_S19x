void __fastcall __noreturn sub_2B420(const char *a1)
{
  int v2; // r0
  int v3; // r0
  char v4[52]; // [sp+0h] [bp-34h] BYREF

  sub_1E938(v4, 0x30u);
  printf("%s ", v4);
  printf("%s : warning:force exit test...\n", "err_exit");
  strcpy(byte_611CD4, "warning:force exit test...");
  sub_3CC5C(byte_611CD4, v4);
  sub_1E938(v4, 0x30u);
  printf("%s ", v4);
  printf("%s : exit info:%s\n", "err_exit", a1);
  snprintf(byte_611DD4, 0x100u, "exit info:%s", a1);
  sub_3CC5C(byte_611DD4, v4);
  byte_5FE775 = 0;
  sub_2146C("Board Protect", "Force exit", a1);
  sub_6E9D8(dword_21B3B0, 100);
  sub_71AF4(dword_21B3A4);
  v2 = usleep((__useconds_t)&loc_30D40);
  sub_6F490(v2);
  v3 = usleep((__useconds_t)&loc_30D40);
  sub_6F490(v3);
  exit(1);
}
