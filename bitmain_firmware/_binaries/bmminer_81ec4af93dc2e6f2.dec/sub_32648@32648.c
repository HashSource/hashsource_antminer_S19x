int sub_32648()
{
  int v0; // r4
  int v1; // r5
  signed int v3; // r0

  v0 = 0;
  v1 = -1;
  do
  {
    if ( sub_266F0(v0) )
    {
      v3 = sub_2F998(v0, 1);
      if ( v1 < v3 )
        v1 = v3;
    }
    ++v0;
  }
  while ( v0 != 4 );
  return v1;
}
