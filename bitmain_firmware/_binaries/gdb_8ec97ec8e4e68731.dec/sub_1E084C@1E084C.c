const char **__fastcall sub_1E084C(int a1, const char *a2)
{
  int v3; // r5
  const char **v4; // r1
  bool v5; // zf
  const char **v6; // r0
  const char **v7; // r4

  v3 = a1;
  v4 = 0;
  while ( 1 )
  {
    v6 = (const char **)((int (__fastcall *)(int, const char **))loc_1E04EC)(a1, v4);
    v7 = v6;
    if ( !v6 )
      break;
    v5 = strcmp(a2, *v6) == 0;
    v4 = v7;
    a1 = v3;
    if ( v5 )
      return v7;
  }
  return 0;
}
