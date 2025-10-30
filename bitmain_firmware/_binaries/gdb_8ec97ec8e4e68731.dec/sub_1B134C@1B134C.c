int __fastcall sub_1B134C(unsigned __int8 *a1)
{
  int v1; // r2
  int v2; // r3
  int v3; // r1
  int v4; // t1

  v1 = *a1;
  if ( !*a1 )
    return *a1;
  v2 = 0;
  do
  {
    v3 = byte_438798[v1];
    v4 = *++a1;
    v1 = v4;
    v2 = 67 * v2 - 113 + v3;
  }
  while ( v4 );
  return v2;
}
