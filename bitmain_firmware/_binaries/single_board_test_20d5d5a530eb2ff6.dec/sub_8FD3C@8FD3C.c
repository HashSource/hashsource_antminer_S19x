int __fastcall sub_8FD3C(int a1, int a2)
{
  if ( !*(_DWORD *)(a1 + 1516) )
    return 2;
  if ( sub_A8450(a2, a2, 65281, 0, 2)
    && sub_A8398(a2, 2)
    && sub_A8544(a2, *(_DWORD *)(a1 + 124) + 688, *(_DWORD *)(*(_DWORD *)(a1 + 124) + 752), 1)
    && sub_A7EDC(a2) )
  {
    return 1;
  }
  sub_95494(a1, 80, 473, 68, "ssl/statem/extensions_clnt.c", 29);
  return 0;
}
