int __fastcall sub_C1600(unsigned __int8 *a1, int a2, int a3)
{
  unsigned __int8 *v3; // r1
  int v4; // t1

  v3 = &a1[a2];
  if ( a1 < v3 )
  {
    do
    {
      v4 = *a1++;
      a3 = (16777619 * a3) ^ v4;
    }
    while ( v3 != a1 );
  }
  return a3;
}
