int __fastcall sub_946E4(int a1, int a2)
{
  int v5; // r1

  if ( (unsigned int)*(unsigned __int8 *)(*(_DWORD *)(a1 + 1140) + 492) - 1 > 3 )
    return 2;
  if ( sub_A8450(a2, a2, 1, 0, 2)
    && sub_A8398(a2, 2)
    && sub_A8450(a2, v5, *(unsigned __int8 *)(*(_DWORD *)(a1 + 1140) + 492), 0, 1)
    && sub_A7EDC(a2) )
  {
    return 1;
  }
  sub_95494(a1, 80, 548, 68, "ssl/statem/extensions_srvr.c", 1374);
  return 0;
}
