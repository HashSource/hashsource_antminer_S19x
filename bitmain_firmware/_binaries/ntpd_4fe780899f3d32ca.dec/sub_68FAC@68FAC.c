int __fastcall sub_68FAC(int a1)
{
  int v1; // r4
  int result; // r0
  int v3; // r5
  int v4; // r0

  v1 = a1 + 1;
  result = sysconf(4);
  if ( result > v1 )
  {
    v3 = result;
    do
    {
      v4 = v1++;
      result = close(v4);
    }
    while ( v3 != v1 );
  }
  return result;
}
