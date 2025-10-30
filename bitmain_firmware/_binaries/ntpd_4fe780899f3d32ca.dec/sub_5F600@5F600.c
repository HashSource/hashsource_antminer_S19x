int __fastcall sub_5F600(double a1)
{
  double v1; // d0
  double v2; // r0

  sys_fuzz = v1;
  if ( v1 < 0.0 )
    sub_6ECC0("systime.c", 117, 2, "sys_fuzz >= 0");
  if ( v1 > 1.0 )
    sub_6ECC0("systime.c", 118, 2, "sys_fuzz <= 1.0");
  v2 = ceil(a1);
  LODWORD(sys_fuzz_nsec) = (int)(v1 * 1000000000.0);
  return LODWORD(v2);
}
