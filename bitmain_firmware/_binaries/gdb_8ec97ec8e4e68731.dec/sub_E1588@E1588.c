void __fastcall sub_E1588(int a1)
{
  int i; // r4
  _DWORD *v2; // r0

  if ( dword_487D4C )
  {
    v2 = (_DWORD *)sub_242FC8(a1);
    sub_2594B0(*v2, "[btrace] free objfile\n");
  }
  for ( i = dword_48A4D4; i; i = *(_DWORD *)(i + 4) )
  {
    if ( *(_DWORD *)(i + 44) != 2 )
      sub_E1378(i);
  }
}
