void __fastcall __noreturn sub_1D32C(const char *a1, int a2, int a3, int a4)
{
  char v8[256]; // [sp+4h] [bp-108h] BYREF

  sub_70468(0);
  sub_65D40(3, "%s:%d: fatal error:", a1, a2);
  sub_6C654(v8, 256, a3, a4);
  sub_65D40(3, "%s", v8);
  sub_65D40(3, "exiting (due to fatal error in library)");
  abort();
}
