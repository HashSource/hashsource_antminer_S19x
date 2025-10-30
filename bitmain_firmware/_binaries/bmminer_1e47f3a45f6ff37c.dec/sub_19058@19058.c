int sub_19058()
{
  int v0; // r5
  __int16 v1; // r4
  int v2; // r0
  int v3; // r0
  __int16 v4; // r3

  v0 = 0;
  v1 = 255;
  do
  {
    v2 = v0++;
    v3 = sub_19020(v2);
    v4 = v1;
    if ( v1 >= v3 )
      v4 = v3;
    v1 = v4;
  }
  while ( v0 != 4 );
  return v4;
}
