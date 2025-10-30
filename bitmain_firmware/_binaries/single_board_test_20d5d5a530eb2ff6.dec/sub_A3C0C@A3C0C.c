int __fastcall sub_A3C0C(_DWORD *a1)
{
  int v1; // r3
  int v3; // r3
  int v5; // r2
  int v6; // r3
  int v7; // r2

  v1 = a1[31];
  *(_DWORD *)(v1 + 676) = 0;
  *(_DWORD *)(v1 + 672) = 0;
  sub_A3B68((_DWORD *)(v1 + 676), a1, (int)&loc_5000E);
  if ( sub_9CFC8((int)a1, (int *)(a1[31] + 680), (int *)(a1[31] + 684), 0) )
    return 0;
  if ( !a1[304] )
  {
    v6 = a1[31];
    v7 = *(_DWORD *)(v6 + 672) | 0x1C8;
    *(_DWORD *)(v6 + 676) |= 0x10u;
    *(_DWORD *)(v6 + 672) = v7;
  }
  if ( (a1[402] & 0x20) != 0 )
    return 1;
  v3 = a1[31];
  v5 = *(_DWORD *)(v3 + 672) | 0x20;
  *(_DWORD *)(v3 + 676) |= 0x40u;
  *(_DWORD *)(v3 + 672) = v5;
  return 1;
}
