_DWORD *__fastcall sub_2B14F0(int a1, int a2, int a3)
{
  unsigned int v3; // r4
  _DWORD *v4; // r3
  char *v5; // r1
  int v7; // r2
  int v8; // r0

  v3 = a2 & 0xFFFFE000;
  v4 = *(_DWORD **)(*(_DWORD *)(a1 + 160) + 12);
  if ( v4 )
  {
    v5 = (char *)(v4 + 2048);
    if ( v3 == v4[2112] )
      return v4;
    while ( 1 )
    {
      v4 = (_DWORD *)*((_DWORD *)v5 + 65);
      v5 = (char *)(v4 + 2048);
      if ( !v4 )
        break;
      if ( v4[2112] == v3 )
        return v4;
    }
  }
  if ( !a3 )
    return 0;
  v4 = sub_2AD09C(a1, 0x2108u);
  if ( v4 )
  {
    v7 = *(_DWORD *)(a1 + 160);
    v8 = *(_DWORD *)(v7 + 12);
    v4[2112] = v3;
    v4[2113] = v8;
    *(_DWORD *)(v7 + 12) = v4;
  }
  return v4;
}
