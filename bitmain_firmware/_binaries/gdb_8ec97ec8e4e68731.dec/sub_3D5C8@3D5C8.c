void __fastcall __noreturn sub_3D5C8(const char *a1)
{
  int *v2; // r0
  const char *v3; // r0

  v2 = _errno_location();
  v3 = (const char *)sub_6FF98(*v2);
  sub_3D590((int)"%s: %s", a1, v3);
}
