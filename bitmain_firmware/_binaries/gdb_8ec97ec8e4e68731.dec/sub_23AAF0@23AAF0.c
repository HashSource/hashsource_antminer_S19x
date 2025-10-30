unsigned int *__fastcall sub_23AAF0(unsigned int *a1, unsigned int *a2)
{
  unsigned int *v2; // r4
  unsigned int v3; // r5
  unsigned int v4; // r6
  char *v5; // lr
  int v6; // r8
  unsigned int v7; // r10
  char *v8; // r12
  char *v9; // r7
  int v10; // r3
  unsigned int v11; // r9
  int v12; // r2
  int v13; // r3
  int v14; // r0
  int v15; // r1
  char *v16; // r3
  unsigned int v18; // r2
  unsigned int v19; // r6
  _DWORD *v20; // r3
  unsigned int v21; // r2
  int v22; // r8
  int v23; // r3
  char *v24; // r3
  unsigned int v25; // r3
  unsigned int v26; // r6

  v2 = a1;
  if ( a2 != a1 )
  {
    v3 = *a2;
    v4 = a2[1];
    v5 = (char *)*a1;
    v6 = v4 - *a2;
    v7 = v6 >> 3;
    if ( v6 >> 3 > (unsigned int)((int)(a1[2] - *a1) >> 3) )
    {
      if ( v7 )
      {
        if ( v7 > 0x1FFFFFFF )
          sub_33D01C(a1, a2);
        a1 = (unsigned int *)sub_9836C(v4 - *a2);
        v5 = (char *)*v2;
        v7 = (unsigned int)a1;
      }
      if ( v3 != v4 )
      {
        v18 = v3 + 8;
        v19 = v4 + 8;
        v20 = (_DWORD *)v7;
        do
        {
          if ( v20 )
          {
            a1 = *(unsigned int **)(v18 - 8);
            a2 = *(unsigned int **)(v18 - 4);
          }
          v18 += 8;
          if ( v20 )
          {
            *v20 = a1;
            v20[1] = a2;
          }
          v20 += 2;
        }
        while ( v19 != v18 );
      }
      if ( v5 )
        sub_339E64(v5);
      *v2 = v7;
      v2[2] = v7 + v6;
      v2[1] = v7 + v6;
    }
    else
    {
      v8 = (char *)a1[1];
      v9 = &v5[v6];
      v10 = v8 - v5;
      v11 = (v8 - v5) >> 3;
      if ( v7 <= v11 )
      {
        if ( v6 > 0 )
        {
          v12 = 0;
          do
          {
            v13 = 8 * v12++;
            v14 = *(_DWORD *)(v3 + v13);
            v15 = *(_DWORD *)(v3 + v13 + 4);
            v16 = &v5[v13];
            *(_DWORD *)v16 = v14;
            *((_DWORD *)v16 + 1) = v15;
          }
          while ( (int)(v7 - v12) > 0 );
        }
LABEL_7:
        v2[1] = (unsigned int)v9;
        return v2;
      }
      v21 = v3 + v10;
      if ( v10 > 0 )
      {
        v22 = 0;
        do
        {
          v23 = 8 * v22++;
          a1 = *(unsigned int **)(v3 + v23);
          a2 = *(unsigned int **)(v3 + v23 + 4);
          v24 = &v5[v23];
          *(_DWORD *)v24 = a1;
          *((_DWORD *)v24 + 1) = a2;
        }
        while ( (int)(v11 - v22) > 0 );
      }
      if ( v21 == v4 )
        goto LABEL_7;
      v25 = v21 + 8;
      v26 = v4 + 8;
      do
      {
        if ( v8 )
        {
          a1 = *(unsigned int **)(v25 - 8);
          a2 = *(unsigned int **)(v25 - 4);
        }
        v25 += 8;
        if ( v8 )
        {
          *(_DWORD *)v8 = a1;
          *((_DWORD *)v8 + 1) = a2;
        }
        v8 += 8;
      }
      while ( v25 != v26 );
      v2[1] = (unsigned int)v9;
    }
  }
  return v2;
}
