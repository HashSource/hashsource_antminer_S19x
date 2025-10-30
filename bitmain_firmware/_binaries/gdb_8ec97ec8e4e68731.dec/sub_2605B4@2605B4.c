int __fastcall sub_2605B4(int *a1, int *a2, int a3)
{
  int v3; // lr
  int v4; // r12
  int v5; // r3
  int v6; // r2
  int v7; // r2
  char v8; // r4
  int v9; // r5
  int v10; // r2
  int v12; // r12
  int v15; // r4
  int v16; // r5
  int v17; // r12
  int v18; // r3
  int v19; // [sp+4h] [bp-4h]

  v3 = *a1;
  v4 = *(__int16 *)(*a1 + 4);
  if ( v4 <= 0 )
    v5 = 0;
  else
    v5 = *(_DWORD *)(v3 + 24);
  if ( v4 > 0 )
    v5 = *(_BYTE *)(v5 + 8) & 1;
  if ( !a3 || v5 >= v4 )
  {
    v9 = *a2;
    v10 = *(__int16 *)(*a2 + 4);
    if ( v5 == v4 )
      goto LABEL_13;
    if ( v4 - v5 != v10 )
      return 0;
LABEL_18:
    if ( v10 > 0 )
    {
      v12 = *(_DWORD *)(v9 + 24);
      v15 = 24 * v5;
      v16 = 0;
      while ( 1 )
      {
        v17 = v12 + 24 * v16++;
        v18 = *(_DWORD *)(v3 + 24) + v15;
        v15 += 24;
        v19 = sub_174598(*(_DWORD *)(v18 + 12), *(_DWORD *)(v17 + 12), 0);
        if ( sub_173CD4(v19, 0) )
          break;
        if ( *(__int16 *)(*a2 + 4) <= v16 )
          return 1;
        v12 = *(_DWORD *)(*a2 + 24);
        v3 = *a1;
      }
      return 0;
    }
    return 1;
  }
  v6 = *(_DWORD *)(v3 + 24);
  if ( (*(_BYTE *)(v6 + 24 * v5 + 8) & 1) == 0 )
  {
LABEL_26:
    v9 = *a2;
    v10 = *(__int16 *)(*a2 + 4);
    if ( v4 - v5 != v10 )
      return 0;
    goto LABEL_18;
  }
  v7 = v6 + 24 * v5 + 24;
  while ( ++v5 != v4 )
  {
    v8 = *(_BYTE *)(v7 + 8);
    v7 += 24;
    if ( (v8 & 1) == 0 )
      goto LABEL_26;
  }
  v9 = *a2;
  v10 = *(__int16 *)(*a2 + 4);
LABEL_13:
  if ( v10 == 1 )
  {
    if ( **(_BYTE **)(*(_DWORD *)(*(_DWORD *)(v9 + 24) + 12) + 24) != 10 )
      return 0;
  }
  else if ( v10 )
  {
    return 0;
  }
  return 1;
}
