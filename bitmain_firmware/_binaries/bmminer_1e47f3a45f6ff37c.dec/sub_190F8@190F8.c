int sub_190F8()
{
  int v0; // r5
  __int16 v1; // r4
  __int16 v2; // r0
  __int16 v3; // r3

  v0 = 0;
  v1 = 255;
  do
  {
    v2 = sub_18F4C(v0, 2u);
    v3 = v1;
    ++v0;
    if ( v1 >= v2 )
      v3 = v2;
    v1 = v3;
  }
  while ( v0 != 4 );
  return v3;
}
