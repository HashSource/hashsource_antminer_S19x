// positive sp value has been detected, the output may be wrong!
void __noreturn start(void (*a1)(), int a2, int a3, int a4, ...)
{
  int v4; // [sp-4h] [bp-4h]
  va_list va; // [sp+0h] [bp+0h] BYREF

  va_start(va, a4);
  _libc_start_main(
    (int (*)(int, char **, char **))*(&off_C6E8 + 173632),
    v4,
    (char **)va,
    (void (*)())*(&off_C6E8 + 173484),
    (void (*)())*(&off_C6E8 + 173309),
    a1,
    va);
  abort();
}
