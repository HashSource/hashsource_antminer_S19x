int __fastcall sub_489C8(double a1, int a2)
{
  if ( LODWORD(a1) && *(_DWORD *)LODWORD(a1) == 3 )
    a1 = sub_4A11C(*(_DWORD *)(LODWORD(a1) + 8), *(_DWORD *)(LODWORD(a1) + 12), a2, 3);
  return LODWORD(a1);
}
