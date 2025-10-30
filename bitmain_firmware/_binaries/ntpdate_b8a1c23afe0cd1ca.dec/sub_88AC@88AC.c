unsigned int *sub_88AC(unsigned int *result, int a2, ...)
{
  unsigned int v2; // r3
  va_list varg_r2; // [sp+18h] [bp+Ch] BYREF

  va_start(varg_r2, a2);
  if ( !result )
    return (unsigned int *)sub_A8B0(3, a2, (char *)varg_r2);
  v2 = *result + 1;
  *result = v2;
  if ( v2 <= 5 )
    return (unsigned int *)sub_A8B0(3, a2, (char *)varg_r2);
  return result;
}
