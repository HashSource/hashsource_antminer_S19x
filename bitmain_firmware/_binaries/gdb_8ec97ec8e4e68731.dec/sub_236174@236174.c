int __fastcall sub_236174(int a1, char *s)
{
  int *v2; // r4
  int *v3; // r7
  int v5; // r0
  int *v6; // r5

  v2 = *(int **)(a1 + 36);
  v3 = *(int **)(a1 + 40);
  if ( v2 == v3 )
    return 0;
  while ( 1 )
  {
    v5 = *v2;
    v6 = v2++;
    if ( !sub_33CAA0(v5 + 4, s) )
      break;
    if ( v3 == v2 )
      return 0;
  }
  return *v6;
}
