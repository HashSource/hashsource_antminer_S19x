int sub_45B60()
{
  int v0; // r4
  int v1; // r5

  v0 = 0;
  v1 = 0;
  do
  {
    if ( sub_26C0C(v0) )
      v1 |= sub_45B24(v0);
    ++v0;
  }
  while ( v0 != 4 );
  return v1;
}
