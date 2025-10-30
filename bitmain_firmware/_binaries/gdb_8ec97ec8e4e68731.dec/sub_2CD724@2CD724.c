int __fastcall sub_2CD724(unsigned __int8 *a1)
{
  int v1; // r3
  unsigned __int8 *v2; // r2
  int result; // r0
  int v4; // r1
  int v5; // t1

  v1 = *a1;
  v2 = a1 + 1;
  result = 5381;
  if ( v1 )
  {
    do
    {
      v4 = v1 + 32 * result;
      v5 = *v2++;
      v1 = v5;
      result += v4;
    }
    while ( v5 );
  }
  return result;
}
