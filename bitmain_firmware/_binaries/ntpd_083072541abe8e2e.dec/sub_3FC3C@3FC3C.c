int __fastcall sub_3FC3C(int a1, int a2)
{
  int v2; // r4
  unsigned int v5; // r3
  int v6; // r5
  unsigned int v7; // r3

  v2 = restrictlist4;
  if ( !restrictlist4 )
    return 0;
  while ( 1 )
  {
    v5 = *(_DWORD *)(v2 + 16);
    v6 = *(_DWORD *)v2;
    if ( v5 && v5 <= current_time )
      sub_3FAA4((int *)v2, 0);
    if ( *(_DWORD *)(v2 + 20) == (*(_DWORD *)(v2 + 24) & a1) )
    {
      v7 = ((*(unsigned __int16 *)(v2 + 10) ^ 0x2000u) >> 13) & 1;
      if ( a2 == 123 )
        v7 = 1;
      if ( v7 )
        break;
    }
    v2 = v6;
    if ( !v6 )
      return 0;
  }
  return v2;
}
