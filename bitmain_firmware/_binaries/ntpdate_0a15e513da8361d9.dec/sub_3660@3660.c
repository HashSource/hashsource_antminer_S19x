void __noreturn sub_3660()
{
  int *v0; // r0

  v0 = _errno_location();
  sub_ABF8(3, "read system clock failed: %m (%d)", *v0);
  exit(1);
}
