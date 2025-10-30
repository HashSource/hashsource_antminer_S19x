int __fastcall sub_DC74C(int a1, char *s1, char *a3)
{
  if ( !a3 )
    return 0;
  if ( *s1 == 107 && s1[1] == 101 && s1[2] == 121 && !s1[3] )
    return sub_DB850(a1, 6, a3);
  if ( !strcmp(s1, "hexkey") )
    return sub_DB880(a1, 6, (int)a3);
  return -2;
}
