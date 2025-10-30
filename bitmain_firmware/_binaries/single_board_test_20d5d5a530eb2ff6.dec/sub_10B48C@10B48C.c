const char **__fastcall sub_10B48C(_DWORD *a1, const char *a2, int a3)
{
  int v5; // r4
  const char **v6; // r6
  bool v7; // cc
  int v8; // r1

  if ( a1 )
  {
    v5 = 0;
    while ( 1 )
    {
      v7 = v5 < sub_10C010(*a1, a2, a3);
      v8 = v5++;
      if ( !v7 )
        break;
      v6 = (const char **)sub_10C01C(*a1, v8);
      if ( !strcmp(*v6, a2) )
        return v6;
    }
  }
  return 0;
}
