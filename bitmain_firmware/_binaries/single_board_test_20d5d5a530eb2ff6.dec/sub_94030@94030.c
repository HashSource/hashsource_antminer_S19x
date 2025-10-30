int __fastcall sub_94030(int a1, int a2)
{
  if ( *(_DWORD *)(a2 + 4) )
  {
    sub_95494(a1, 50, 568, 110, "ssl/statem/extensions_srvr.c", 1008);
    return 0;
  }
  else if ( *(_DWORD *)(a1 + 1100) )
  {
    sub_95494(a1, 47, 568, 110, "ssl/statem/extensions_srvr.c", 1014);
    return 0;
  }
  else
  {
    return 1;
  }
}
