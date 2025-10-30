int __fastcall sub_F3C38(int a1, unsigned int a2)
{
  int *v4; // r0
  int v5; // r3
  double v6; // d8
  int *v8; // r5
  unsigned int v9; // r0
  int v10; // r4

  v4 = (int *)sub_F3B3C();
  v5 = a2 >> 31;
  if ( !v4 )
    v5 = 1;
  if ( v5 )
    return 0;
  v6 = (double)(int)a2;
  if ( (double)(int)a2 < 0.0 )
    return 0;
  v8 = v4;
  sub_F370C(v4);
  v9 = sub_F3B10(v8);
  if ( v9 > a2 )
  {
    v6 = 0.0;
  }
  else if ( v6 < (double)(int)v9 )
  {
    v6 = 0.0;
  }
  if ( (double)v9 < v6 )
    v6 = (double)v9;
  v10 = sub_F3328(v8, a1, a2, (unsigned int)(v6 * 8.0));
  sub_F3718(v8);
  return v10;
}
