int __fastcall sub_A1B6C(_DWORD *a1)
{
  if ( a1[22] || !*(_DWORD *)(a1[285] + 412) )
  {
    if ( sub_A9244(a1, 0) )
      return 2;
    return 0;
  }
  if ( *(_DWORD *)(a1[31] + 212) )
  {
    if ( sub_A9244(a1, 1) )
      return 2;
    return 0;
  }
  sub_95494(a1, 80, 384, 68, (int)"ssl/statem/statem_srvr.c", 3575);
  return 0;
}
