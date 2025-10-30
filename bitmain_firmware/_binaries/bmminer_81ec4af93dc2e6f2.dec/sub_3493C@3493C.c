void __noreturn sub_3493C(const char *a1, ...)
{
  int v1; // r3
  int varg_r1; // [sp+14h] [bp+8h] BYREF
  va_list varg_r1a; // [sp+14h] [bp+8h]
  int varg_r2; // [sp+18h] [bp+Ch]
  int varg_r3; // [sp+1Ch] [bp+10h]
  va_list va1; // [sp+20h] [bp+14h] BYREF

  va_start(va1, a1);
  va_start(varg_r1a, a1);
  varg_r1 = va_arg(va1, _DWORD);
  varg_r2 = va_arg(va1, _DWORD);
  varg_r3 = va_arg(va1, _DWORD);
  vsnprintf(s, 0x200u, a1, varg_r1a);
  sub_3AF5C(3, s, 1, v1);
  exit(1);
}
