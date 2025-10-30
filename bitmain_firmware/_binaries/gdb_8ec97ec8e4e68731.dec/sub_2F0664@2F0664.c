void __fastcall sub_2F0664(_DWORD *a1)
{
  char *v2; // r6
  unsigned int v3; // r3
  int v4; // r0
  char *v5; // r5
  int *v6; // r2
  int *v7; // r0
  int v8; // r3
  int v9; // t1
  int v10; // r1
  int v11; // r1
  unsigned int v12; // r3
  int v13; // r12
  int v14; // lr
  int *v15; // r2
  int *v16; // r12
  int *v17; // r3
  int v18; // r1
  int v19; // t1
  int v20; // r0
  int v21; // r1
  int v22; // t1
  int v23; // r0
  int v24; // r9
  char *v25; // r8
  int v26; // r5
  int v27; // t1
  size_t v28; // r7
  size_t v29; // r2
  signed int v30; // r1
  size_t v31; // r0
  int v32; // r7

  v2 = (char *)sub_2AB368(4 * a1[7]);
  if ( v2 )
  {
    v3 = a1[7];
    if ( v3 > 1 )
    {
      v4 = a1[10];
      v5 = v2;
      v6 = (int *)(v4 + 4);
      v7 = (int *)(v4 + 4 * v3);
      do
      {
        v9 = *v6++;
        v8 = v9;
        v10 = *(_DWORD *)(v9 + 16);
        if ( v10 )
        {
          v11 = *(_DWORD *)(v8 + 12);
          *(_DWORD *)v5 = v8;
          v5 += 4;
          v10 = v11 - 1;
        }
        *(_DWORD *)(v8 + 12) = v10;
      }
      while ( v7 != v6 );
      if ( (v5 - v2) >> 2 )
      {
        qsort(v2, (v5 - v2) >> 2, 4u, (__compar_fn_t)sub_2F0008);
        v24 = *((_DWORD *)v5 - 1);
        v25 = v5 - 8;
        ++*(_DWORD *)(v24 + 12);
        while ( v25 >= v2 )
        {
          v27 = *(_DWORD *)v25;
          v25 -= 4;
          v26 = v27;
          v28 = *(_DWORD *)(v27 + 12);
          v29 = v28;
          *(_DWORD *)(v27 + 12) = v28 + 1;
          v30 = *(_DWORD *)(v24 + 12);
          v31 = v30 - (v28 + 1);
          if ( (int)(v28 + 1) < v30 )
          {
            v32 = ~v28;
            if ( !memcmp((const void *)(*(_DWORD *)(v24 + 4) + v31), *(const void **)(v26 + 4), v29) )
            {
              *(_DWORD *)(v26 + 20) = v24;
              *(_DWORD *)(v26 + 12) = v32;
              v26 = v24;
            }
          }
          v24 = v26;
        }
      }
    }
    free(v2);
  }
  v12 = a1[7];
  if ( v12 <= 1 )
  {
    a1[9] = 1;
  }
  else
  {
    v13 = a1[10];
    v14 = 1;
    v15 = (int *)(v13 + 4);
    v16 = (int *)(v13 + 4 * v12);
    v17 = v15;
    do
    {
      v19 = *v17++;
      v18 = v19;
      if ( *(_DWORD *)(v19 + 16) )
      {
        v20 = *(_DWORD *)(v18 + 12);
        if ( v20 > 0 )
        {
          *(_DWORD *)(v18 + 20) = v14;
          v14 += v20;
        }
      }
    }
    while ( v16 != v17 );
    a1[9] = v14;
    do
    {
      v22 = *v15++;
      v21 = v22;
      if ( *(_DWORD *)(v22 + 16) )
      {
        v23 = *(_DWORD *)(v21 + 12);
        if ( v23 < 0 )
          *(_DWORD *)(v21 + 20) = v23
                                + *(_DWORD *)(*(_DWORD *)(v21 + 20) + 12)
                                + *(_DWORD *)(*(_DWORD *)(v21 + 20) + 20);
      }
    }
    while ( v17 != v15 );
  }
}
