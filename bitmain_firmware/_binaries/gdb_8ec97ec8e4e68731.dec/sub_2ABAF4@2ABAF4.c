int __fastcall sub_2ABAF4(unsigned int a1)
{
  unsigned int v1; // r3
  int result; // r0

  if ( a1 <= 1 )
    return 0;
  v1 = a1 - 1;
  result = 0;
  do
  {
    v1 >>= 1;
    ++result;
  }
  while ( v1 );
  return result;
}
