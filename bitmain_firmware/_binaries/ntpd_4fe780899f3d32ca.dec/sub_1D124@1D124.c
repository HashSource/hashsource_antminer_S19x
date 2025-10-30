void __fastcall __noreturn sub_1D124(const char *a1, int a2, int a3, int a4)
{
  char v8[256]; // [sp+4h] [bp-104h] BYREF

  sub_6F4D8(0);
  sub_64E00(3, "%s:%d: fatal error:", a1, a2);
  sub_6B6F8(v8, 256, a3, a4);
  sub_64E00(3, "%s", v8);
  sub_64E00(3, "exiting (due to fatal error in library)");
  abort();
}
