bool __fastcall sub_AA49C(int *a1, char *s2)
{
  int v3; // r5
  int *v5; // r5
  int v6; // r0
  _BOOL4 v7; // r4

  v3 = *a1;
  if ( (*a1 & 2) != 0 && (!strcasecmp(s2, "+automatic") || !strcasecmp(s2, "automatic"))
    || (v3 & 1) != 0 && !strcmp(s2, "auto") )
  {
    return 1;
  }
  if ( !sub_C5060(s2) && !sub_EAFD0(s2) )
    return 0;
  v5 = (int *)sub_C5494();
  if ( !v5 )
    return 0;
  v6 = a1[3];
  if ( v6 )
  {
    v7 = sub_89534(v6, 4, 0, (int)v5) > 0;
  }
  else if ( a1[4] )
  {
    v7 = sub_890D4((_DWORD *)a1[4], 4, a1[3], v5) > 0;
  }
  else
  {
    v7 = 1;
  }
  sub_C5410(v5);
  return v7;
}
