int __fastcall sub_2F18E8(unsigned int a1, _DWORD *a2)
{
  int *v2; // r6
  int v3; // r8
  unsigned int v4; // lr
  unsigned int v5; // r12
  unsigned int v6; // r3
  int v7; // r7
  unsigned int v8; // r4
  int *v9; // r2
  int *v10; // lr
  char v11; // r12
  bool v12; // zf
  int v13; // r12
  unsigned int v14; // r9
  unsigned int v15; // r5
  int v16; // r4
  int v17; // r2
  _BOOL4 v18; // r2
  int v19; // r0
  int v21; // r2
  unsigned int v22; // r1
  unsigned int v23; // r8
  int v24; // r8

  v2 = *(int **)(a2[35] + 136);
  v3 = *v2;
  if ( !*v2 )
    return v3;
  v4 = *v2;
  v5 = 0;
  do
  {
    while ( 1 )
    {
      v6 = (v5 + v4) >> 1;
      v7 = 8 * v6;
      v8 = v2[8 * v6 + 6];
      v9 = &v2[8 * v6 + 2];
      if ( v8 <= a1 )
        break;
      v4 = (v5 + v4) >> 1;
      if ( v6 <= v5 )
        goto LABEL_6;
    }
    v5 = v6 + 1;
  }
  while ( v6 + 1 < v4 && v9[12] <= a1 );
LABEL_6:
  v10 = &v2[v7];
  v11 = HIBYTE(v2[v7 + 8]);
  v12 = (v11 & 2) == 0;
  v13 = v11 & 1;
  if ( v12 )
  {
    v14 = v6 + 1;
    v15 = a1 - v8;
    v16 = v10[7] - v8;
    v3 = v16;
    v17 = (HIBYTE(v2[8 * v6 + 8]) >> 2) & 1;
    if ( !v13 )
    {
      v18 = (v2[8 * v6 + 8] & 0x4000000) == 0;
      if ( v15 <= 0xC )
        v18 = 1;
      if ( !v18 )
      {
        v19 = (*(int (**)(void))(*(_DWORD *)(*(_DWORD *)(a2[37] + 4) + 444) + 300))();
        if ( (v2[8 * v14] & 0x60) == 0x60 || v15 > 2 * (sub_2F18A4(v2[8 * v14], v19) + 4) )
          return v16 + 1;
      }
      return v3;
    }
    goto LABEL_20;
  }
  if ( v13 && (*((_BYTE *)v10 + 14) & 0x40) != 0 )
  {
    v15 = a1 - v8;
    v17 = (HIBYTE(v2[8 * v6 + 8]) >> 2) & 1;
    v3 = *(_DWORD *)(v10[2] + 20) - v8 + *(_DWORD *)(*(_DWORD *)v10[2] + 56) - a2[14];
LABEL_20:
    v21 = ((BYTE2(v2[v7 + 3]) >> 5) & 1) + v17;
    if ( v21 )
    {
      v22 = BYTE1(v2[v7 + 3]);
      if ( (v22 & 7) + 9 < v15 )
      {
        v3 += v21;
        if ( (v22 & 7) + (v22 >> 3) + 9 < v15 )
          v3 += v21;
      }
    }
    return v3;
  }
  v23 = (unsigned int)&v2[8 * v3 + 2];
  do
  {
    v9 += 8;
    if ( v23 <= (unsigned int)v9 )
    {
      v24 = a2[9];
      return v24 - v8;
    }
  }
  while ( (*((_BYTE *)v9 + 27) & 2) != 0 );
  v24 = v9[5];
  return v24 - v8;
}
