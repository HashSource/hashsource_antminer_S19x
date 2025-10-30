int __fastcall sub_23FB4(unsigned int a1, int a2)
{
  int v2; // r12
  int v3; // r3
  int result; // r0

  v2 = 0;
  v3 = 0;
  result = 0;
  do
  {
    if ( ((a1 >> v3) & 1) != 0 )
    {
      ++v2;
      result |= 1 << v3;
      if ( v2 == a2 )
        break;
    }
    ++v3;
  }
  while ( v3 != 32 );
  return result;
}
