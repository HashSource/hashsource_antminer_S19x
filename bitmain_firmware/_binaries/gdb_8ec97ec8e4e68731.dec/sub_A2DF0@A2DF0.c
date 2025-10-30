int __fastcall sub_A2DF0(int a1)
{
  int v1; // r0
  int v2; // r5
  int v3; // r3
  int v4; // r4
  _BOOL4 v5; // r0
  int v6; // r3
  int v7; // r0
  int v8; // r3
  int v9; // r0

  v1 = sub_A0870(a1);
  v2 = v1;
  if ( !v1 )
    return 0;
  v3 = *(_DWORD *)(v1 + 24);
  if ( *(_BYTE *)v3 != 3 || *(__int16 *)(v3 + 4) <= 0 )
    return 0;
  v4 = 0;
  while ( 1 )
  {
    v5 = sub_A1938(v2, v4);
    v6 = *(_DWORD *)(v2 + 24);
    if ( v5 )
      break;
    if ( *(__int16 *)(v6 + 4) <= ++v4 )
      return 0;
  }
  v7 = *(_DWORD *)(*(_DWORD *)(v6 + 24) + 24 * v4 + 12);
  v8 = *(_DWORD *)(v7 + 24);
  if ( *(_BYTE *)v8 == 1 )
    v7 = *(_DWORD *)(v8 + 20);
  v9 = sub_A2598(v7);
  return sub_A0870(v9);
}
