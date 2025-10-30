int __fastcall sub_40994(int a1, int a2)
{
  int v4; // r4
  unsigned int v5; // r3
  int v6; // r5
  unsigned int v7; // r3

  v4 = restrictlist4;
  if ( !restrictlist4 )
    return 0;
  while ( 1 )
  {
    v5 = *(_DWORD *)(v4 + 16);
    v6 = *(_DWORD *)v4;
    if ( v5 && v5 <= current_time )
      sub_40820(v4, 0);
    if ( *(_DWORD *)(v4 + 20) == (*(_DWORD *)(v4 + 24) & a1) )
    {
      v7 = ((*(unsigned __int16 *)(v4 + 10) ^ 0x2000u) >> 13) & 1;
      if ( a2 == 123 )
        v7 = 1;
      if ( v7 )
        break;
    }
    v4 = v6;
    if ( !v6 )
      return 0;
  }
  return v4;
}
