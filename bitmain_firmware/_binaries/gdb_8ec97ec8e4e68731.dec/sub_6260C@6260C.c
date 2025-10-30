void __noreturn sub_6260C(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, ...)
{
  _DWORD *v9; // r6
  int v10; // r8
  int v11; // r0
  va_list va; // [sp+14h] [bp+14h] BYREF

  va_start(va, a9);
  sub_62B7C((char *)va);
  v11 = sub_2573D8(v10, 0);
  *v9 = a7;
  sub_338FFC(v11);
}
