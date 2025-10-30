int __fastcall sub_D18A4(int a1, unsigned int a2)
{
  int v2; // r4

  v2 = dword_478348;
  if ( !dword_478348 )
    return 0;
  while ( *(_DWORD *)(v2 + 12) != 3 || !sub_D1848(v2, a1, a2) )
  {
    v2 = *(_DWORD *)(v2 + 8);
    if ( !v2 )
      return 0;
  }
  return 1;
}
