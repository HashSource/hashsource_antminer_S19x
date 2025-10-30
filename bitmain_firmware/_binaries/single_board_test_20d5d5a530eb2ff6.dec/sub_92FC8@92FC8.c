int __fastcall sub_92FC8(int a1, unsigned __int8 **a2)
{
  unsigned int v2; // r3
  unsigned int v4; // r2
  unsigned int v5; // r3

  v2 = (unsigned int)a2[1];
  if ( v2 > 1 && (v4 = v2 - 2, v5 = (*a2)[1] | (**a2 << 8), v5 <= v4) && v5 == v4 && (*a2 += v5 + 2, a2[1] = 0, v5) )
  {
    if ( *(_DWORD *)(a1 + 140) || sub_A3FD8() )
      return 1;
    sub_95494(a1, 50, 615, 110, "ssl/statem/extensions_srvr.c", 303);
  }
  else
  {
    sub_95494(a1, 50, 615, 110, "ssl/statem/extensions_srvr.c", 297);
  }
  return 0;
}
