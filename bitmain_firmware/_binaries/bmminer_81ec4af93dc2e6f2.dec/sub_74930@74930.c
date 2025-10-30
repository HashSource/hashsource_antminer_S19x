double *sub_74930()
{
  double v0; // d0
  double *v3; // [sp+Ch] [bp-8h]

  if ( fabs(v0) > 1.79769313e308 )
    return 0;
  v3 = (double *)sub_7188C(0x10u);
  if ( !v3 )
    return 0;
  sub_729B8(v3, 4);
  v3[1] = v0;
  return v3;
}
