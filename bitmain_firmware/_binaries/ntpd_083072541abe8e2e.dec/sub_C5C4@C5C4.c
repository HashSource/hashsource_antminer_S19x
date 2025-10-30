void __noreturn sub_C5C4()
{
  int *v0; // r0

  v0 = _errno_location();
  sub_64E00(3, "read system clock failed: %m (%d)", *v0);
  exit(1);
}
