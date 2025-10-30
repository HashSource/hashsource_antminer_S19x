int __fastcall sub_324230(unsigned __int8 *a1)
{
  int v1; // r3
  unsigned __int8 *v2; // r2
  int result; // r0
  int v4; // r0
  int v5; // t1

  v1 = *a1;
  v2 = a1 + 1;
  if ( !*a1 )
    return *a1;
  result = 0;
  do
  {
    v4 = 67 * result + v1;
    v5 = *v2++;
    v1 = v5;
    result = v4 - 113;
  }
  while ( v5 );
  return result;
}
