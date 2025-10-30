int __fastcall sub_234B1C(int a1, char *s2)
{
  int *v2; // r4
  int *v3; // r7
  int v5; // r5
  int v6; // t1

  v2 = *(int **)(a1 + 28);
  v3 = *(int **)(a1 + 32);
  if ( v2 == v3 )
    return 0;
  while ( 1 )
  {
    v6 = *v2++;
    v5 = v6;
    if ( !strcasecmp(*(const char **)(v6 + 4), s2) )
      break;
    if ( v3 == v2 )
      return 0;
  }
  return v5;
}
