void __noreturn sub_1DFDDC(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, ...)
{
  int v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r3
  va_list va; // [sp+10h] [bp+10h] BYREF

  va_start(va, a8);
  v8 = sub_1DFE3C((char *)va, a2);
  sub_1DFDD0(v8, v9, v10, v11);
}
