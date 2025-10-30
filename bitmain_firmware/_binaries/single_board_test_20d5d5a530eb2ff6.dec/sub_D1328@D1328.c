int sub_D1328()
{
  _DWORD *v0; // r0
  _DWORD *v1; // r1
  int v2; // r3
  int v3; // r0
  int v4; // r2

  v0 = sub_CFCDC();
  v1 = v0;
  if ( v0 )
  {
    v2 = v0[96];
    v3 = v0[97];
    while ( v2 != v3 )
    {
      v4 = v1[v2];
      if ( (v4 & 1) != 0 )
      {
        v1[v2] = v4 & 0xFFFFFFFE;
        return 1;
      }
      if ( v2 <= 0 )
        v2 = 15;
      else
        --v2;
    }
  }
  return 0;
}
