int sub_32CB0()
{
  int v0; // r4
  int v1; // r5
  signed int v3; // r0

  v0 = 0;
  v1 = -1;
  do
  {
    if ( sub_26C0C(v0) )
    {
      v3 = sub_2FFBC(v0, 1);
      if ( v1 < v3 )
        v1 = v3;
    }
    ++v0;
  }
  while ( v0 != 4 );
  return v1;
}
