int sub_18E88()
{
  int v0; // r4
  __int16 v1; // r5
  __int16 v2; // r0
  __int16 v3; // r3

  v0 = 0;
  v1 = 255;
  do
  {
    v2 = sub_18D1C(v0, 1u);
    v3 = v2;
    if ( v2 != 255 )
    {
      if ( v1 == 255 )
      {
        v1 = v2;
      }
      else
      {
        if ( v2 < v1 )
          v3 = v1;
        v1 = v3;
      }
    }
    ++v0;
  }
  while ( v0 != 4 );
  return v1;
}
