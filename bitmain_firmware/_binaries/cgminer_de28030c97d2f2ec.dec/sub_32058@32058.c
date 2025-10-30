int __fastcall sub_32058(double a1)
{
  double v1; // d0
  double v2; // d1
  double v3; // d2
  double *v5; // [sp+1Ch] [bp-18h]
  double v6; // [sp+28h] [bp-Ch]

  v5 = (double *)LODWORD(a1);
  if ( v2 > 0.0 )
  {
    a1 = exp(a1);
    v6 = 1.0 - 1.0 / (v2 / v3);
    *v5 = *v5 + v1 / v2 * v6;
    *v5 = *v5 / (v6 + 1.0);
  }
  return LODWORD(a1);
}
