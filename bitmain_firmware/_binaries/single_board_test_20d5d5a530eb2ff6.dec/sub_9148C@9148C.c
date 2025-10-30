int __fastcall sub_9148C(_DWORD *a1, int a2)
{
  int v3; // r7
  int v5; // r0
  int v6; // r3

  if ( !a1[334] )
  {
    sub_95494(a1, 80, 583, 68, "ssl/statem/extensions_clnt.c", 1341);
    return 0;
  }
  if ( *(_DWORD *)(a2 + 4) )
  {
    sub_95494(a1, 50, 583, 110, "ssl/statem/extensions_clnt.c", 1347);
    return 0;
  }
  else
  {
    if ( !a1[35] )
    {
      v3 = a1[285];
      if ( *(_DWORD *)(v3 + 460) )
      {
        sub_95494(a1, 80, 583, 68, "ssl/statem/extensions_clnt.c", 1354);
        return 0;
      }
      v5 = sub_E9E3C(a1[334], "ssl/statem/extensions_clnt.c", 1357);
      v6 = a1[285];
      *(_DWORD *)(v3 + 460) = v5;
      if ( !*(_DWORD *)(v6 + 460) )
      {
        sub_95494(a1, 80, 583, 68, "ssl/statem/extensions_clnt.c", 1360);
        return 0;
      }
    }
    return 1;
  }
}
