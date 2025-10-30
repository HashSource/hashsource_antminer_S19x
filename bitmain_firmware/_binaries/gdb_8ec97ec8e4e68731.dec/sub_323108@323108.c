int __fastcall sub_323108(int *a1, int a2, double *a3)
{
  int v4; // r9
  int v7; // r5
  double v8; // r0
  int v9; // r2
  int v10; // r4
  int v11; // r8
  int v12; // r7
  int v13; // r7
  double v14; // d8
  int v15; // r2
  unsigned int v16; // r5
  double v17; // d0
  double v18; // r0
  int v19; // r2
  int result; // r0
  double v21; // d7

  v4 = *a1;
  v7 = a1[1];
  LODWORD(v8) = sub_322D08(a2, *a1, v7, a1[3], a1[4]);
  if ( LODWORD(v8) == a1[6] )
  {
    v21 = INFINITY;
    if ( sub_322E18(a1, a2) )
      v21 = NAN;
    result = sub_322D08(a2, v4, v7, a1[2], 1u);
    if ( result )
      v21 = -v21;
    *a3 = v21;
  }
  else
  {
    v10 = a1[8];
    v11 = a1[7];
    v12 = a1[5];
    if ( LODWORD(v8) )
    {
      v13 = LODWORD(v8) - v12;
      if ( a1[9] == 1 )
      {
        LODWORD(v8) = v13;
        ldexp(v8, v9);
        v4 = *a1;
        v14 = 1.0;
        v7 = a1[1];
      }
      else
      {
        v14 = 0.0;
        ++v13;
      }
    }
    else
    {
      v13 = 1 - v12;
      v14 = 0.0;
    }
    for ( ; v10 > 0; v7 = a1[1] )
    {
      v15 = v7;
      if ( v10 >= 32 )
        v16 = 32;
      else
        v16 = v10;
      v13 -= v16;
      v10 -= v16;
      v17 = (double)(unsigned int)sub_322D08(a2, v4, v15, v11, v16);
      LODWORD(v18) = v13;
      v11 += v16;
      ldexp(v18, v19);
      v14 = v14 + v17;
      v4 = *a1;
    }
    result = sub_322D08(a2, v4, v7, a1[2], 1u);
    if ( result )
      v14 = -v14;
    *a3 = v14;
  }
  return result;
}
