int sub_18C30()
{
  int v0; // r5
  int v1; // r4
  int v2; // r0
  int v3; // r0

  v0 = 0;
  v1 = 255;
  do
  {
    v2 = v0++;
    v3 = sub_18BFC(v2);
    if ( v3 < v1 )
      LOWORD(v1) = v3;
    v1 = (__int16)v1;
  }
  while ( v0 != 4 );
  return (__int16)v1;
}
