void __noreturn sub_C6F0()
{
  int *v0; // r0

  v0 = _errno_location();
  sub_65D40(3, "read system clock failed: %m (%d)", *v0);
  exit(1);
}
