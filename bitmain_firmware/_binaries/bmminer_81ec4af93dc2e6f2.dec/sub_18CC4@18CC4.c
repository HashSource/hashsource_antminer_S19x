int sub_18CC4()
{
  int v0; // r4
  int v1; // r5
  __int16 v2; // r0

  v0 = 0;
  v1 = 255;
  do
  {
    v2 = sub_18B34(v0++, 2u);
    if ( v2 < v1 )
      v1 = v2;
  }
  while ( v0 != 4 );
  return v1;
}
