int sub_18A2C()
{
  int v0; // r4
  int v1; // r5
  int v2; // r0

  v0 = 0;
  v1 = 255;
  do
  {
    v2 = sub_189F8(v0);
    if ( v2 != 255 )
    {
      if ( v1 == 255 )
      {
        v1 = v2;
      }
      else
      {
        if ( v2 >= v1 )
          LOWORD(v1) = v2;
        v1 = (__int16)v1;
      }
    }
    ++v0;
  }
  while ( v0 != 4 );
  return v1;
}
