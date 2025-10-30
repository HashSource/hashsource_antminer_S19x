int __fastcall sub_62740(int a1, int a2)
{
  double v2; // d0
  int v4; // r0
  int i; // [sp+24h] [bp-8h]

  if ( a2 <= 1 )
    return 0;
  v4 = sub_630A0();
  sub_63118(v4);
  if ( v2 < 0.0 )
    return 0;
  for ( i = 0; i < a2; ++i )
    *(double *)(a1 + 8 * i) = v2 - (double)i * ((v2 - v2) / (double)(a2 - 1));
  return 1;
}
