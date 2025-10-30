void __noreturn sub_3D590(int a1, ...)
{
  va_list varg_r1; // [sp+14h] [bp+8h] BYREF

  va_start(varg_r1, a1);
  sub_946B0("Could not trace the inferior process.\nError: ");
  sub_25BD6C(a1, (char *)varg_r1);
  sub_3D104();
  exit(127);
}
