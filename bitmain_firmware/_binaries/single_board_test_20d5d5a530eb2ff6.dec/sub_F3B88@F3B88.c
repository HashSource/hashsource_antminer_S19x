int __fastcall sub_F3B88(int a1, unsigned int a2)
{
  double v2; // d0
  double v5; // d8
  int *v6; // r0
  int v7; // r3
  int *v9; // r5
  unsigned int v10; // r0
  int v11; // r4

  v5 = v2;
  v6 = (int *)sub_F3B3C();
  v7 = a2 >> 31;
  if ( !v6 )
    v7 = 1;
  if ( v7 )
    return 0;
  if ( v2 < 0.0 )
    return 0;
  v9 = v6;
  sub_F370C(v6);
  v10 = sub_F3B10(v9);
  if ( v10 > a2 )
  {
    v5 = 0.0;
  }
  else if ( v2 < (double)(int)v10 )
  {
    v5 = 0.0;
  }
  if ( v5 > (double)v10 )
    v5 = (double)v10;
  v11 = sub_F3328(v9, a1, a2, (unsigned int)(v5 * 8.0));
  sub_F3718(v9);
  return v11;
}
