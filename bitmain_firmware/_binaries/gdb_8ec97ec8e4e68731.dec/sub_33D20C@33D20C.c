void __noreturn sub_33D20C(const char *a1, ...)
{
  size_t v2; // r0
  char *v3; // r4
  char *v4; // r0
  char v5[4]; // [sp+0h] [bp+0h] BYREF
  va_list v6; // [sp+4h] [bp+4h]
  va_list varg_r1; // [sp+24h] [bp+24h] BYREF

  va_start(varg_r1, a1);
  v2 = strlen(a1);
  va_copy(v6, varg_r1);
  sub_347204(v5, v2 + 512, a1, (int *)varg_r1);
  v3 = sub_33AB64(8);
  v4 = gettext(v5);
  sub_3467B8(v3, v4);
  sub_33A780((int)v3, (int)&`typeinfo for'std::out_of_range, (int)std::out_of_range::~out_of_range);
}
