int __fastcall sub_94908(int a1, int a2)
{
  if ( *(_DWORD *)(a1 + 1372) && sub_A3748(a1) )
  {
    if ( sub_A8450(a2, a2, 35, 0, 2) && sub_A8450(a2, a2, 0, 0, 2) )
    {
      return 1;
    }
    else
    {
      sub_95494(a1, 80, 460, 68, "ssl/statem/extensions_srvr.c", 1488);
      return 0;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 1372) = 0;
    return 2;
  }
}
