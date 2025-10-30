int __fastcall sub_BC33C(unsigned __int8 *a1, unsigned __int8 *a2, int a3)
{
  unsigned __int8 *v3; // r5
  int v4; // r2
  int v5; // r4
  int v6; // t1
  int v7; // t1

  if ( !a3 )
    return 0;
  v3 = &a1[a3];
  v4 = 0;
  do
  {
    v6 = *a1++;
    v5 = v6;
    v7 = *a2++;
    v4 |= v7 ^ v5;
  }
  while ( a1 != v3 );
  return v4;
}
