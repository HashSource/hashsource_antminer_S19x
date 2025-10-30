void sub_1FE004(int a1, char *a2, ...)
{
  char *v3; // r4
  size_t v4; // r0
  va_list varg_r2; // [sp+18h] [bp+10h] BYREF

  va_start(varg_r2, a2);
  v3 = sub_930E0(a2, varg_r2);
  v4 = strlen(v3);
  sub_1FDF04(a1, (int)v3, v4);
  free(v3);
}
