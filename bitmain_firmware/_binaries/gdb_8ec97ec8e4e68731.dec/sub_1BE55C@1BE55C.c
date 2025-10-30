int __fastcall sub_1BE55C(int *a1, char *s)
{
  int v2; // r4
  int v3; // r6

  v2 = *a1;
  v3 = a1[1];
  if ( *a1 == v3 )
    return 0;
  while ( sub_33CAA0(v2, s) )
  {
    v2 += 48;
    if ( v3 == v2 )
      return 0;
  }
  return v2 + 24;
}
