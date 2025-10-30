int sub_19160()
{
  int v0; // r4
  int v1; // r6
  __int16 v2; // r5
  __int16 v3; // r0
  int v4; // r0

  v0 = 0;
  v1 = 0;
  do
  {
    v2 = sub_18F4C(v0, 3u);
    v3 = sub_18D1C(v0++, 3u);
    v4 = v3 - v2;
    if ( v4 < 0 )
      v4 = -v4;
    if ( v4 > v1 )
      v1 = (__int16)v4;
  }
  while ( v0 != 4 );
  return v1;
}
