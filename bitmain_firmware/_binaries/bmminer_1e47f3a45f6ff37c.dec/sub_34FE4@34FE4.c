void __noreturn sub_34FE4(const char *a1, ...)
{
  int v1; // r3
  int varg_r1; // [sp+14h] [bp+Ch] BYREF
  va_list varg_r1a; // [sp+14h] [bp+Ch]
  int varg_r2; // [sp+18h] [bp+10h]
  int varg_r3; // [sp+1Ch] [bp+14h]
  va_list va1; // [sp+20h] [bp+18h] BYREF

  va_start(va1, a1);
  va_start(varg_r1a, a1);
  varg_r1 = va_arg(va1, _DWORD);
  varg_r2 = va_arg(va1, _DWORD);
  varg_r3 = va_arg(va1, _DWORD);
  vsnprintf(s, 0x200u, a1, varg_r1a);
  sub_3B6AC(3, s, 1, v1);
  exit(1);
}
