int __fastcall sub_93FF8(int a1, int a2)
{
  _DWORD *v2; // r2

  if ( *(_DWORD *)(a2 + 4) )
  {
    sub_95494(a1, 50, 570, 110, "ssl/statem/extensions_srvr.c", 993);
    return 0;
  }
  else
  {
    v2 = *(_DWORD **)(a1 + 124);
    *v2 |= 0x200u;
    return 1;
  }
}
