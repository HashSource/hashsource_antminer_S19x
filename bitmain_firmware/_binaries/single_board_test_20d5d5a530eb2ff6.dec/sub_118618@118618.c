int __fastcall sub_118618(int *a1, char *a2, char *a3, int a4)
{
  int v4; // r5
  _DWORD *v9; // r0
  int v10; // r6
  int *v11; // r0
  int *v12; // r7
  char *v13; // r11
  size_t v14; // r2
  char *v15; // r3
  int *v17; // r0
  int v18; // lr
  unsigned int v19; // r12
  int v20; // r1
  int v21; // r3
  int v22; // r3
  int v23; // r3
  char *v24; // r5
  size_t v25; // r2
  char *v26; // r3
  int v27; // r7
  unsigned int v28; // r4
  int v29; // r1
  int v30; // r3
  int v31; // r3
  int v32; // r0
  int v33; // r0

  v9 = (_DWORD *)sub_11855C();
  v10 = (int)v9;
  if ( !v9 )
    return 0;
  *v9 = 1;
  v11 = (int *)sub_118504();
  v12 = v11;
  *(_DWORD *)(v10 + 4) = v11;
  if ( !v11 )
  {
LABEL_11:
    sub_118570(v10);
    return 0;
  }
  if ( !*v11 )
  {
    v33 = sub_B211C();
    *v12 = v33;
    if ( !v33 )
      goto LABEL_11;
    v12 = *(int **)(v10 + 4);
  }
  if ( !v12[1] )
  {
    v32 = sub_B211C();
    v12[1] = v32;
    if ( !v32 )
      goto LABEL_11;
    v12 = *(int **)(v10 + 4);
  }
  if ( a4 <= 0 )
  {
    v14 = a4;
  }
  else
  {
    v4 = a4 - 1;
    v13 = &a2[a4 - 1];
    if ( *v13 )
    {
      v14 = a4;
LABEL_14:
      if ( !sub_125818(*v12, a2, v14) )
        goto LABEL_11;
      v17 = *(int **)(v10 + 4);
      v18 = *v17;
      v19 = *(_DWORD *)(*v17 + 12) & 0xFFFFFFF0 | 8;
      *(_DWORD *)(*v17 + 12) = v19;
      v20 = (unsigned __int8)*v13;
      if ( v20 << 25 )
      {
        v22 = 1;
        do
          ++v22;
        while ( ((0xFFu >> v22) & v20) != 0 );
        v21 = 8 - v22;
      }
      else
      {
        v21 = 7;
      }
      *(_DWORD *)(v18 + 12) = v19 | v21;
      goto LABEL_21;
    }
    v14 = a4;
    v15 = &a2[a4 - 2];
    while ( 1 )
    {
      --v14;
      v13 = v15--;
      if ( !v14 )
        break;
      if ( *v13 )
        goto LABEL_14;
    }
  }
  if ( !sub_125818(*v12, a2, v14) )
    goto LABEL_11;
  v17 = *(int **)(v10 + 4);
  if ( a4 > 0 )
    v4 = a4 - 1;
  *(_DWORD *)(*v17 + 12) = *(_DWORD *)(*v17 + 12) & 0xFFFFFFF0 | 8;
  if ( a4 <= 0 )
  {
    v25 = a4;
    goto LABEL_25;
  }
LABEL_21:
  v23 = (unsigned __int8)a3[v4];
  v24 = &a3[v4];
  if ( v23 != 255 )
  {
    v25 = a4;
LABEL_33:
    if ( !sub_125818(v17[1], a3, v25) )
      goto LABEL_11;
    v27 = *(_DWORD *)(*(_DWORD *)(v10 + 4) + 4);
    v28 = *(_DWORD *)(v27 + 12) & 0xFFFFFFF0 | 8;
    *(_DWORD *)(v27 + 12) = v28;
    v29 = (unsigned __int8)*v24;
    if ( (v29 & 0x7F) == 0x7F )
    {
      v30 = 7;
    }
    else
    {
      v31 = 1;
      do
        ++v31;
      while ( ((0xFFu >> v31) & ~v29) != 0 );
      v30 = 8 - v31;
    }
    *(_DWORD *)(v27 + 12) = v30 | v28;
    goto LABEL_40;
  }
  v25 = a4;
  v26 = &a3[a4 - 2];
  while ( 1 )
  {
    --v25;
    v24 = v26--;
    if ( !v25 )
      break;
    if ( (unsigned __int8)*v24 != 255 )
      goto LABEL_33;
  }
LABEL_25:
  if ( !sub_125818(v17[1], a3, v25) )
    goto LABEL_11;
  *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v10 + 4) + 4) + 12) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v10 + 4) + 4) + 12)
                                                          & 0xFFFFFFF0
                                                          | 8;
LABEL_40:
  *a1 = v10;
  return 1;
}
