int __fastcall sub_67214(int a1)
{
  double v1; // d0

  if ( !a1 || *(_DWORD *)a1 != 4 || fabs(v1) > 1.79769313e308 )
    return -1;
  *(double *)(a1 + 8) = v1;
  return 0;
}
