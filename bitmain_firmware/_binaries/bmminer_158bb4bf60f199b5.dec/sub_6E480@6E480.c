double *sub_6E480()
{
  double v0; // d0
  double *result; // r0

  if ( fabs(v0) > 1.79769313e308 )
    return 0;
  result = (double *)sub_6D500((void *)0x10);
  if ( result )
  {
    result[1] = v0;
    *(_QWORD *)result = 0x100000004LL;
  }
  return result;
}
