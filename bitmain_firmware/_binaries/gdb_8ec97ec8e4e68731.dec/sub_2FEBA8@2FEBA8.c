int __fastcall sub_2FEBA8(_DWORD *a1, int a2)
{
  int v3; // r0
  _DWORD *j; // r3
  int *v6; // r4
  int v8; // r0
  _DWORD *v9; // r7
  _DWORD *k; // r4
  int v11; // r3
  _DWORD *v12; // r4
  int v13; // r3
  int v14; // r1
  int v15; // r0
  int v16; // r3
  int v17; // r8
  int v18; // r9
  signed int v19; // r0
  signed int v20; // r11
  void *v21; // r0
  int v22; // r3
  void *v23; // r10
  int v24; // r9
  unsigned int i; // [sp+10h] [bp-14h] BYREF
  _DWORD v26[4]; // [sp+14h] [bp-10h] BYREF

  v3 = a1[25];
  a1[30] = 0;
  a1[31] = 0;
  for ( i = 0; v3; v3 = *(_DWORD *)(v3 + 12) )
  {
    for ( j = *(_DWORD **)(v3 + 160); j; j = (_DWORD *)*j )
    {
      if ( j[1] == 1 )
        *(_BYTE *)(j[4] + 24) |= 2u;
    }
  }
  v6 = *(int **)(a2 + 56);
  if ( v6 )
  {
    while ( sub_2FE298(a1, v6, a2, &i) )
    {
      v6 = (int *)v6[39];
      if ( !v6 )
        goto LABEL_12;
    }
    return 0;
  }
LABEL_12:
  v8 = *(_DWORD *)(a2 + 28);
  v26[0] = a2;
  v26[1] = a1;
  v26[2] = &i;
  sub_2FCBD4(v8, (int (__fastcall *)(int *, int))sub_2FC700, (int)v26);
  if ( !sub_2FC690(a1 + 30, a1 + 31, &i, 0) )
    return 0;
  v9 = (_DWORD *)a1[25];
  if ( (*(_BYTE *)a2 & 3) != 2 )
  {
LABEL_14:
    while ( v9 )
    {
      for ( k = (_DWORD *)v9[40]; k; k = (_DWORD *)*k )
      {
        while ( 1 )
        {
          v11 = k[1];
          if ( v11 == 1 )
            break;
          if ( v11 && (unsigned int)(v11 - 3) <= 1 )
          {
            if ( !sub_2FE748((int)a1, a2, v9, (int)k) )
              return 0;
          }
          else if ( !sub_2FE9F0((int)a1, a2, v9, (int)k) )
          {
            return 0;
          }
          k = (_DWORD *)*k;
          if ( !k )
            goto LABEL_24;
        }
        if ( !sub_2FCFDC((int)a1, a2, v9, k, 1) )
          return 0;
      }
LABEL_24:
      v9 = (_DWORD *)v9[3];
    }
    return 1;
  }
  if ( v9 )
  {
    do
    {
      v12 = (_DWORD *)v9[40];
      v9[19] = 0;
      if ( v12 )
      {
        do
        {
          while ( 1 )
          {
            v13 = v12[1];
            if ( (unsigned int)(v13 - 3) > 1 )
              break;
            v12 = (_DWORD *)*v12;
            ++v9[19];
            if ( !v12 )
              goto LABEL_33;
          }
          if ( v13 == 1 )
          {
            v17 = v12[4];
            v18 = *(_DWORD *)(v17 + 148);
            v19 = sub_2A6ADC(v18);
            v20 = v19;
            if ( v19 < 0 )
              return 0;
            v21 = sub_2AB368(v19);
            v22 = v20;
            v23 = v21;
            if ( v20 )
              v22 = 1;
            if ( v21 )
              v22 = 0;
            if ( v22 )
              return 0;
            v24 = sub_2A6B10(v18);
            free(v23);
            if ( v24 < 0 )
              return 0;
            if ( *(_DWORD *)(v17 + 76) != v24 )
              sub_2A6BBC("linker.c", 1875);
            v9[19] += v24;
          }
          v12 = (_DWORD *)*v12;
        }
        while ( v12 );
LABEL_33:
        v14 = v9[19];
        if ( v14 )
        {
          v15 = sub_2ACBF4((int)a1, 4 * v14);
          v9[18] = v15;
          if ( !v15 )
            return 0;
          v16 = v9[5];
          v9[19] = v12;
          v9[5] = v16 | 4;
        }
      }
      v9 = (_DWORD *)v9[3];
    }
    while ( v9 );
    v9 = (_DWORD *)a1[25];
    goto LABEL_14;
  }
  return 1;
}
