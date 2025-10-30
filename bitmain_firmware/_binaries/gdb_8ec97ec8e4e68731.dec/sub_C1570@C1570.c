int __fastcall sub_C1570(unsigned __int8 *a1, int a2)
{
  unsigned __int8 *v2; // r1
  int v3; // r3
  int v4; // t1

  v2 = &a1[a2];
  if ( a1 >= v2 )
    return 0;
  v3 = 0;
  do
  {
    v4 = *a1++;
    v3 = (16777619 * v3) ^ v4;
  }
  while ( v2 != a1 );
  return v3;
}
