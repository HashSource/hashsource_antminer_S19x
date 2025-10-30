int __fastcall sub_E1A74(_DWORD *a1, int a2, unsigned int a3)
{
  int v3; // r3
  int v4; // r12
  int v5; // r12
  int v6; // lr
  int v7; // r5
  int v8; // r4
  bool v9; // zf
  int i; // r4
  int v11; // lr
  _DWORD *v12; // r5
  unsigned int v13; // r7
  int v14; // r4
  int v15; // r12

  v3 = *(_DWORD *)(a2 + 24);
  v4 = *(_DWORD *)(a2 + 28);
  if ( v4 == v3 )
    return 0;
  if ( *(_DWORD *)(v3 + 36) > a3 )
    return 0;
  v5 = -991146299 * ((v4 - v3) >> 2) - 1;
  v6 = v3 + 52 * v5;
  v7 = *(_DWORD *)(v6 + 32);
  v8 = *(_DWORD *)(v6 + 36);
  v9 = v7 == 0;
  if ( v7 )
    v6 = 1;
  else
    v7 = *(_DWORD *)(v6 + 24);
  if ( v9 )
    v6 = (v7 - *(_DWORD *)(v6 + 20)) >> 4;
  if ( v8 + v6 <= a3 )
    return 0;
  for ( i = 0; ; i = v11 + 1 )
  {
    while ( 1 )
    {
      v11 = i + ((unsigned int)(v5 - i) >> 1);
      v12 = (_DWORD *)(v3 + 52 * v11);
      v13 = v12[9];
      if ( v13 <= a3 )
        break;
      v5 = v11 - 1;
    }
    v14 = 1;
    if ( !v12[8] )
      v14 = (v12[6] - v12[5]) >> 4;
    if ( v13 + v14 > a3 )
      break;
  }
  v15 = v12[10];
  a1[2] = a3 - v13;
  *a1 = a2;
  a1[1] = v15 - 1;
  return 1;
}
