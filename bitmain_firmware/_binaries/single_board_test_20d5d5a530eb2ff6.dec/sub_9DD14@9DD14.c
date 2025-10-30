int __fastcall sub_9DD14(_DWORD *a1)
{
  if ( a1[386] )
  {
    if ( sub_D17B4(*(_DWORD *)(a1[31] + 216), a1[386]) )
    {
      return 1;
    }
    else
    {
      sub_95494(a1, 80, 617, 68, (int)"ssl/statem/statem_lib.c", 2437);
      return 0;
    }
  }
  else
  {
    sub_95494(a1, 80, 617, 68, (int)"ssl/statem/statem_lib.c", 2430);
    return 0;
  }
}
