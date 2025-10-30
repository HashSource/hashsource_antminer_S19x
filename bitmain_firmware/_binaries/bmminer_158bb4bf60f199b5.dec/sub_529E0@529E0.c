double __fastcall sub_529E0(double a1)
{
  double v1; // d0
  double v2; // d1
  double v3; // d2
  double *v4; // r4
  double result; // r0

  v4 = (double *)LODWORD(a1);
  result = exp(a1);
  *v4 = (*v4 + v1 / v2 * (1.0 - 1.0 / (v2 / v3))) / (1.0 - 1.0 / (v2 / v3) + 1.0);
  return result;
}
