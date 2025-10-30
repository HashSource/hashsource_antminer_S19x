int __fastcall sub_2B6028(int a1, int a2, int a3, _DWORD *a4)
{
  int v4; // r12
  int result; // r0
  int v6; // r12
  int v7; // r1
  int v8; // r5
  int v9; // r4
  int v10; // lr
  int v11; // r0
  int v12; // r6
  bool v13; // r0
  _BOOL4 v14; // r0
  int v15; // r1
  int v16; // r1
  _DWORD *v17; // t1
  int v18; // r2
  int v19; // r0
  int v20; // r5
  int v21; // r1
  int v22; // t1
  unsigned int v23; // r2
  int v24; // r2
  int v25; // r7
  int v26; // r0
  int v27; // t1
  int v28; // r1

  v4 = a4[1];
  if ( v4 != 1879048193 )
  {
    if ( v4 == 1879048194 )
      a4[2] = 2;
    return 0;
  }
  v6 = *(_DWORD *)(a1 + 160);
  v7 = *(_DWORD *)(a2 + 160);
  v8 = *(_DWORD *)(v6 + 64);
  v9 = *(_DWORD *)(v7 + 64);
  a4[2] = 130;
  a4[8] = 0;
  if ( !a3 )
    goto LABEL_15;
  v10 = a4[11];
  if ( !v10 )
    goto LABEL_15;
  v11 = *(_DWORD *)(a3 + 44);
  if ( !v11 )
    goto LABEL_15;
  v12 = *(_DWORD *)(v11 + 60);
  v13 = v12 != 0;
  if ( !v8 )
    v13 = 0;
  v14 = v10 == v12 && v13;
  if ( v14
    && (v23 = *(_DWORD *)(a3 + 28)) != 0
    && v23 < *(_DWORD *)(v6 + 532)
    && (v24 = *(_DWORD *)(*(_DWORD *)(v8 + 4 * v23) + 44)) != 0 )
  {
    v25 = *(_DWORD *)(v24 + 60);
    v15 = *(_DWORD *)(v7 + 532);
    if ( v25 )
    {
      v18 = v15 - 1;
      v26 = v9 + 4 * v15;
      while ( 1 )
      {
        v20 = -4 - v9 + v26;
        if ( v18 == -1 )
          goto LABEL_38;
        v27 = *(_DWORD *)(v26 - 4);
        v26 -= 4;
        if ( v25 == *(_DWORD *)(v27 + 44) )
        {
          if ( !v18 )
            break;
          goto LABEL_39;
        }
        --v18;
      }
    }
  }
  else
  {
LABEL_15:
    v15 = *(_DWORD *)(v7 + 532);
  }
  result = v15 - 1;
  v16 = v9 + 4 * v15;
  while ( 1 )
  {
    v18 = result - 1;
    if ( result == -1 )
    {
      v18 = -2;
      goto LABEL_21;
    }
    v17 = *(_DWORD **)(v16 - 4);
    v16 -= 4;
    if ( a4 == v17 )
      break;
    --result;
  }
  if ( !result )
    return result;
LABEL_21:
  v19 = v9 + 4 * result;
  while ( 1 )
  {
    v20 = -4 - v9 + v19;
    if ( v18 == -1 )
      break;
    v22 = *(_DWORD *)(v19 - 4);
    v19 -= 4;
    v21 = v22;
    if ( *(_DWORD *)(v22 + 4) == 1 && (*(_DWORD *)(v21 + 8) & 6) == 6 )
    {
      if ( v18 )
        goto LABEL_39;
      return 0;
    }
    --v18;
  }
LABEL_38:
  v20 = -4;
LABEL_39:
  v28 = *(_DWORD *)(v9 + v20);
  a4[7] = v18;
  result = 1;
  if ( (*(_DWORD *)(v28 + 8) & 0x200) != 0 )
    a4[2] = 642;
  return result;
}
