int __fastcall sub_CF584(int a1, unsigned int a2)
{
  int v2; // r3
  unsigned int v5; // r4
  _BOOL4 v6; // r0

  v2 = dword_478860;
  if ( !dword_478860 || !*(_DWORD *)dword_478860 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    v6 = sub_CF3F0(*(_DWORD **)(v2 + 4 * (v5 + 2)), a1, a2);
    ++v5;
    if ( v6 )
      break;
    v2 = dword_478860;
    if ( !dword_478860 || v5 >= *(_DWORD *)dword_478860 )
      return 0;
  }
  return 1;
}
