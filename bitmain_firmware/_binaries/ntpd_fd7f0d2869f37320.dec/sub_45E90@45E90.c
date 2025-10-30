unsigned int sub_45E90(void **a1, int a2, ...)
{
  void *v3; // r0
  size_t v4; // r4
  unsigned int result; // r0
  void *v6; // r0
  va_list varg_r2; // [sp+28h] [bp+1Ch] BYREF

  va_start(varg_r2, a2);
  v3 = 0;
  v4 = 32;
  for ( *a1 = 0; ; v3 = *a1 )
  {
    v4 *= 2;
    free(v3);
    v6 = malloc(v4);
    *a1 = v6;
    if ( !v6 )
      break;
    result = sub_6C654(v6, v4, "%s%u", (char *)varg_r2);
    if ( v4 > result )
      return result;
  }
  return -1;
}
