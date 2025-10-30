int sub_30520()
{
  int v0; // r4
  int v1; // r5
  int result; // r0
  double v3; // d6
  int v4; // r1
  double *v5; // r3
  int v6; // r2
  double v7; // d7

  v0 = dword_B9E58;
  if ( dword_B9E58 )
  {
    v1 = dword_B9E70;
    result = sub_8BB9C(dword_B9E5C + 1, dword_B9E70);
    v3 = 1000000000.0;
    dword_B9E5C = v4;
    *(_QWORD *)(v0 + 8 * v4) = 0x41CDCD6500000000LL;
    dbl_B9E60 = 1000000000.0;
    if ( v1 > 0 )
    {
      v5 = (double *)v0;
      v6 = 0;
      do
      {
        v7 = *v5++;
        if ( v7 < v3 )
        {
          v3 = v7;
          v6 = 1;
        }
      }
      while ( v5 != (double *)(v0 + 8 * v1) );
      if ( v6 )
        dbl_B9E60 = v3;
    }
  }
  return result;
}
