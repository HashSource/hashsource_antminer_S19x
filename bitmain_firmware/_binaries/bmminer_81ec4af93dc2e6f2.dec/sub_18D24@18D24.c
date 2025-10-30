int sub_18D24()
{
  int v0; // r4
  int v1; // r6
  __int16 v2; // r5
  int v3; // r0
  int v4; // r0

  v0 = 0;
  v1 = 0;
  do
  {
    v2 = sub_18B34(v0, 3u);
    v3 = v0++;
    v4 = (__int16)sub_18930(v3, 3u) - v2;
    if ( v4 < 0 )
      v4 = -v4;
    if ( v1 < v4 )
      v1 = (__int16)v4;
  }
  while ( v0 != 4 );
  return v1;
}
