unsigned int sub_45034(void **a1, int a2, ...)
{
  size_t v3; // r4
  void *i; // r0
  unsigned int result; // r0
  void *v6; // r0
  va_list varg_r2; // [sp+28h] [bp+1Ch] BYREF

  va_start(varg_r2, a2);
  v3 = 32;
  for ( i = 0; ; i = *a1 )
  {
    v3 *= 2;
    free(i);
    v6 = malloc(v3);
    *a1 = v6;
    if ( !v6 )
      break;
    result = sub_6B6F8(v6, v3, "%s%u", (char *)varg_r2);
    if ( v3 > result )
      return result;
  }
  return -1;
}
