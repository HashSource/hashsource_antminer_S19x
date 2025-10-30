int sub_10270C(FILE **a1, const char *a2, ...)
{
  int result; // r0
  int *v3; // r0
  char *v4; // r0
  va_list varg_r2; // [sp+10h] [bp+8h] BYREF

  va_start(varg_r2, a2);
  result = vfprintf(*a1, a2, varg_r2);
  if ( result < 0 )
  {
    v3 = _errno_location();
    v4 = sub_6FF98(*v3);
    sub_946E0("Unable to write metadata file (%s)", v4);
  }
  return result;
}
