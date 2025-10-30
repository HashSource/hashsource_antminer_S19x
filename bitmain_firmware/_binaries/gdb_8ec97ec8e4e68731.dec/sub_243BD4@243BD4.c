void __noreturn sub_243BD4(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, ...)
{
  int v10; // r9
  int v11; // r0
  va_list va; // [sp+18h] [bp+18h] BYREF

  va_start(va, a10);
  if ( v10 != -36 )
    *(_DWORD *)(v10 + 36) = a10;
  v11 = sub_25923C((char *)va);
  sub_338FFC(v11);
}
