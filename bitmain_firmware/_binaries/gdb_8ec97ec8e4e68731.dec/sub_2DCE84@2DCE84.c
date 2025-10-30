int __fastcall sub_2DCE84(int a1, _DWORD *a2)
{
  int v3; // r2
  int v4; // r12
  int v7; // r0
  _DWORD *v8; // r6
  int v9; // r3
  _DWORD *v10; // r3
  int v11; // r2
  int v12; // r12
  int v13; // r4
  __int16 v14; // lr
  int v15; // r3
  int v16; // r1

  if ( (*(_BYTE *)(a1 + 51) & 0xA) != 8 )
    return 1;
  if ( *(_DWORD *)(a1 + 32) == -1 )
    return 1;
  v3 = *(_DWORD *)(a1 + 64);
  if ( !v3 )
    return 1;
  v4 = *(_DWORD *)(v3 + 20);
  if ( ((*(unsigned __int16 *)(*(_DWORD *)(v4 + 160) + 2340) >> 6) & 0xB) != 0 )
    return 1;
  v7 = *(_DWORD *)(*a2 + 48);
  v8 = *(_DWORD **)(*(_DWORD *)(v7 + 160) + 580);
  if ( v8 )
  {
    while ( v4 != v8[4] )
    {
      v8 = (_DWORD *)v8[7];
      if ( !v8 )
        goto LABEL_9;
    }
    v15 = v8[6];
    if ( v15 )
    {
      v16 = *(_DWORD *)(v3 + 24);
      if ( v16 == *(_DWORD *)(v15 + 16) )
        return 1;
      while ( 1 )
      {
        v15 = *(_DWORD *)(v15 + 20);
        if ( !v15 )
          break;
        if ( *(_DWORD *)(v15 + 16) == v16 )
          return 1;
      }
    }
    goto LABEL_11;
  }
LABEL_9:
  v8 = sub_2AD09C(v7, 0x20u);
  if ( v8 )
  {
    v7 = *(_DWORD *)(*a2 + 48);
    v9 = *(_DWORD *)(v7 + 160);
    v8[4] = *(_DWORD *)(*(_DWORD *)(a1 + 64) + 20);
    v8[7] = *(_DWORD *)(v9 + 580);
    *(_DWORD *)(v9 + 580) = v8;
LABEL_11:
    v10 = sub_2AD09C(v7, 0x18u);
    if ( v10 )
    {
      v11 = *(_DWORD *)(a1 + 64);
      v12 = a2[1];
      v13 = *(_DWORD *)(v11 + 24);
      v14 = *(_WORD *)(v11 + 2);
      v10[5] = v8[6];
      v10[4] = v13;
      *((_WORD *)v10 + 2) = v14;
      *(_DWORD *)(v11 + 36) = v12;
      a2[1] = v12 + 1;
      *((_WORD *)v10 + 3) = v12 + 1;
      v8[6] = v10;
      return 1;
    }
  }
  a2[2] = 1;
  return 0;
}
