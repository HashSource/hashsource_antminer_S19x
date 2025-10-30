void __noreturn sub_6318C(int a1, int a2, int a3, int a4, int a5, ...)
{
  int v5; // r0
  va_list va; // [sp+4h] [bp+4h] BYREF

  va_start(va, a5);
  v5 = ((int (__fastcall *)(char *))loc_23FC8C)((char *)va);
  sub_338FFC(v5);
}
