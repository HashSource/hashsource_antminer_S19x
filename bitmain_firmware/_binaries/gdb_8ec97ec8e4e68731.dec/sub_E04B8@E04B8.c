int __fastcall sub_E04B8(int a1, int a2)
{
  int v2; // r3
  unsigned int v3; // r1
  int v4; // r3
  unsigned int v5; // lr
  int v6; // r4
  int v8; // r12

  if ( !a2 )
    return 0;
  v2 = *(_DWORD *)(a2 + 48);
  v3 = *(_DWORD *)(a2 + 16);
  if ( (v2 & 2) == 0 )
  {
LABEL_12:
    if ( v3 )
    {
      v8 = *(_DWORD *)(a1 + 24);
      if ( -991146299 * ((*(_DWORD *)(a1 + 28) - v8) >> 2) >= v3 )
        return v8 + 52 * (v3 - 1);
    }
    return 0;
  }
  if ( !v3 )
    return 0;
  v4 = *(_DWORD *)(a1 + 24);
  v5 = -991146299 * ((*(_DWORD *)(a1 + 28) - v4) >> 2);
  if ( v3 > v5 )
    return 0;
  while ( 1 )
  {
    v6 = v4 + 52 * (v3 - 1);
    if ( !v6 )
      return 0;
    v3 = *(_DWORD *)(v6 + 16);
    if ( (*(_DWORD *)(v6 + 48) & 2) == 0 )
      goto LABEL_12;
    if ( !v3 || v3 > v5 )
      return 0;
  }
}
