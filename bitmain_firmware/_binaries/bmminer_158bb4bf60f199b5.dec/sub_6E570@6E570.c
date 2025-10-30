int __fastcall sub_6E570(double a1, int a2)
{
  if ( LODWORD(a1) && *(_DWORD *)LODWORD(a1) == 3 )
    a1 = sub_778B4(*(_DWORD *)(LODWORD(a1) + 8), *(_DWORD *)(LODWORD(a1) + 12), a2, 3);
  return LODWORD(a1);
}
