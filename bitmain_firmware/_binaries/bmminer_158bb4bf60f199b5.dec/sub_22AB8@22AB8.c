int sub_22AB8()
{
  int v0; // r4
  int v1; // r6
  int v2; // r0

  v0 = 0;
  v1 = 0;
  do
  {
    while ( *(_DWORD *)(dword_A0D68 + 4 * v0 + 4) != 1 )
    {
      if ( ++v0 == 16 )
        return v1;
    }
    v2 = v0++;
    v1 |= sub_22A88(v2);
  }
  while ( v0 != 16 );
  return v1;
}
