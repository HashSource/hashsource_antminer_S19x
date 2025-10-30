int sub_18A88()
{
  int v0; // r4
  int v1; // r5
  __int16 v2; // r0

  v0 = 0;
  v1 = 255;
  do
  {
    v2 = sub_18930(v0, 1u);
    if ( v2 != 255 )
    {
      if ( v1 == 255 )
      {
        v1 = v2;
      }
      else if ( v2 >= v1 )
      {
        v1 = v2;
      }
    }
    ++v0;
  }
  while ( v0 != 4 );
  return v1;
}
