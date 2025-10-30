int sub_26C80()
{
  int result; // r0
  int v1; // r3

  if ( dword_5BF82C[0] <= 0 )
    return 0;
  result = 0;
  v1 = 0;
  do
  {
    if ( *(unsigned __int8 *)(dword_5BF848 + 8 * v1++) )
      ++result;
  }
  while ( v1 != dword_5BF82C[0] );
  return result;
}
