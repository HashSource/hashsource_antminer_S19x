int __fastcall sub_182C0(int a1)
{
  int v1; // r3
  int result; // r0

  v1 = a1;
  if ( !a1 )
    return 0;
  result = 0;
  do
  {
    ++result;
    v1 &= v1 - 1;
  }
  while ( v1 );
  return result;
}
