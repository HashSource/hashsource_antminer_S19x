int sub_30A6C()
{
  int v0; // r4
  int v1; // r5
  int result; // r0
  double v3; // d16
  int v4; // r1
  double *v5; // r3
  double v6; // d17

  v0 = dword_BBE5C;
  if ( dword_BBE5C )
  {
    v1 = dword_BBE78;
    result = sub_8D0EC(dword_BBE60 + 1, dword_BBE78);
    v3 = 1000000000.0;
    dbl_BBE68 = 1000000000.0;
    dword_BBE60 = v4;
    *(_QWORD *)(v0 + 8 * v4) = 0x41CDCD6500000000LL;
    if ( v1 > 0 )
    {
      v5 = (double *)v0;
      do
      {
        v6 = *v5++;
        if ( v6 < v3 )
          v3 = v6;
      }
      while ( v5 != (double *)(v0 + 8 * v1) );
      dbl_BBE68 = v3;
    }
  }
  return result;
}
