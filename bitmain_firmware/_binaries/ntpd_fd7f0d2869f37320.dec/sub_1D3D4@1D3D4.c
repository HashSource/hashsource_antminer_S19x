void __fastcall __noreturn sub_1D3D4(const char *a1, int a2, int a3, const char *a4)
{
  const char *v8; // r0

  sub_6FC94(0);
  v8 = (const char *)sub_6FD10(a3);
  sub_65D40(3, "%s:%d: %s(%s) failed", a1, a2, v8, a4);
  sub_65D40(3, "exiting (due to assertion failure)");
  abort();
}
