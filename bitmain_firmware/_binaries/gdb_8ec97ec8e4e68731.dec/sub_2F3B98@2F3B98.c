int __fastcall sub_2F3B98(int a1, int a2)
{
  _DWORD *v3; // r4
  int v5; // r0
  int v6; // r3
  int v7; // r2

  v3 = *(_DWORD **)(a2 + 28);
  if ( !v3[44] )
  {
    v5 = v3[45];
    if ( v5 )
    {
      sub_323B84(v5);
      v3[45] = 0;
    }
  }
  v6 = v3[42];
  if ( !v6 )
    return 0;
  if ( (*(_BYTE *)(a2 + 3) & 0x60) == 0x40 )
  {
    *(_DWORD *)(v6 + 36) = 8;
  }
  else
  {
    v7 = v3[47];
    *(_DWORD *)(v6 + 36) = 8;
    if ( v7 )
      *(_DWORD *)(v6 + 36) = 8 * v3[46] + 12;
  }
  *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 160) + 2348) + 12) = v6;
  return 1;
}
