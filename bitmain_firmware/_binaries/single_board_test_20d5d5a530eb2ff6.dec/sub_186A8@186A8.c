void __fastcall __noreturn sub_186A8(int a1)
{
  int v2; // r0
  _BYTE v3[48]; // [sp+0h] [bp-30h] BYREF

  sigaction(15, &stru_6E2F94, 0);
  sigaction(2, &stru_6E315C, 0);
  sigaction(6, &stru_6E31E8, 0);
  sigaction(11, &stru_6E31E8, 0);
  sigaction(4, &stru_6E31E8, 0);
  sigaction(8, &stru_6E31E8, 0);
  sub_1E938(v3, 48);
  printf("%s ", v3);
  printf("%s : sig:%d\n", "sighandler", a1);
  snprintf(byte_220278, 0x100u, "sig:%d", a1);
  sub_3CC5C(byte_220278, v3);
  sub_1E938(v3, 48);
  printf("%s ", v3);
  printf("%s : sighandler power off hashboard\n", "sighandler");
  strcpy(byte_220378, "sighandler power off hashboard");
  v2 = sub_3CC5C(byte_220378, v3);
  sub_6F490(v2);
  exit(0);
}
