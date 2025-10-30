__int64 sub_94700(int a1, int a2, const char *a3, ...)
{
  int v3; // r0
  int v4; // r1
  const char *v5; // r2
  va_list varg_r3; // [sp+14h] [bp+8h] BYREF

  va_start(varg_r3, a3);
  v3 = ((int (__fastcall *)(int, int, const char *, char *))loc_25C394)(a1, a2, a3, (char *)varg_r3);
  return sub_94720(v3, v4, v5);
}
