void __noreturn sub_DC510(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, ...)
{
  va_list va; // [sp+14h] [bp+14h] BYREF

  va_start(va, a9);
  ((void (__fastcall *)(char *))loc_23FC8C)((char *)va);
  ((void (__fastcall *)(int))loc_1CD290)(a9);
  JUMPOUT(0xDC500);
}
