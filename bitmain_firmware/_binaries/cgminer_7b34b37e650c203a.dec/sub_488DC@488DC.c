double *sub_488DC()
{
  double v0; // d0
  double *result; // r0

  if ( fabs(v0) > 1.79769313e308 )
    return 0;
  result = (double *)sub_4774C((void *)0x10);
  if ( result )
  {
    result[1] = v0;
    *(_DWORD *)result = 4;
    *((_DWORD *)result + 1) = 1;
  }
  return result;
}
