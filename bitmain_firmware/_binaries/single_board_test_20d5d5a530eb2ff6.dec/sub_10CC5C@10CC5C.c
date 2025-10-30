int __fastcall sub_10CC5C(unsigned int **a1, unsigned int **a2)
{
  unsigned int v2; // r2
  unsigned int v3; // r3

  v2 = **a1;
  v3 = **a2;
  if ( v2 > v3 )
    return 1;
  if ( v2 >= v3 )
    return 0;
  return -1;
}
