void __noreturn sub_258A20()
{
  _BYTE v0[20]; // [sp+0h] [bp-14h] BYREF

  memset(v0, 255, 16);
  setrlimit64(4, v0);
  abort();
}
