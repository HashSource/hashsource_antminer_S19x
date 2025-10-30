char *__fastcall sub_E75B4(char *src, char *a2, char *a3)
{
  char *v3; // r5
  char *v4; // r6
  int v5; // r4
  int v6; // r0
  int v7; // r7
  char *v8; // r3
  char *v9; // r2
  int v10; // r1
  int v11; // t1
  int v12; // r1
  char *v13; // r3
  char *v14; // r12
  int v15; // r1
  int v16; // r2
  int v17; // t1
  int v18; // t1
  int v19; // r1
  unsigned int v21; // r2
  char *v22; // lr
  char *v23; // r3
  int v24; // t1
  int v25; // r7
  char *v26; // r4
  int v27; // r4

  if ( src == a2 )
    return a3;
  v3 = src;
  if ( a3 == a2 )
    return v3;
  v4 = src;
  v5 = (a2 - src) >> 2;
  v6 = (a3 - src) >> 2;
  v7 = v6 - v5;
  if ( v6 - v5 == v5 )
  {
    v21 = (unsigned int)(a2 - (v3 + 4)) >> 2;
    v22 = &a2[a2 - v3];
    v23 = v3 - 4;
    do
    {
      v24 = *((_DWORD *)v23 + 1);
      v23 += 4;
      *(_DWORD *)v23 = *(_DWORD *)a2;
      *(_DWORD *)a2 = v24;
      a2 += 4;
    }
    while ( a2 != v22 );
    return &v3[4 * v21 + 4];
  }
  else
  {
    v3 += a3 - a2;
    if ( v7 <= v5 )
      goto LABEL_15;
    while ( v5 != 1 )
    {
      v8 = &v4[4 * v5];
      if ( v7 > 0 )
      {
        v9 = v4 - 4;
        v10 = 0;
        do
        {
          v11 = *((_DWORD *)v9 + 1);
          v9 += 4;
          ++v10;
          *(_DWORD *)v9 = *(_DWORD *)v8;
          *(_DWORD *)v8 = v11;
          v8 += 4;
        }
        while ( v7 != v10 );
        v4 += 4 * v7;
      }
      sub_347924();
      if ( !v12 )
        return v3;
      v6 = v5;
      v5 -= v12;
      while ( 1 )
      {
        v7 = v6 - v5;
        if ( v6 - v5 > v5 )
          break;
LABEL_15:
        v13 = &v4[4 * v6];
        if ( v7 == 1 )
        {
          v27 = *((_DWORD *)v13 - 1);
          if ( v13 - 4 != v4 )
            memmove(v4 + 4, v4, 4 * v6 - 4);
          *(_DWORD *)v4 = v27;
          return v3;
        }
        v4 = &v13[-4 * v7];
        if ( v5 > 0 )
        {
          v14 = &v13[-4 * v7];
          v15 = 0;
          do
          {
            v17 = *((_DWORD *)v14 - 1);
            v14 -= 4;
            v16 = v17;
            ++v15;
            v18 = *((_DWORD *)v13 - 1);
            v13 -= 4;
            *(_DWORD *)v14 = v18;
            *(_DWORD *)v13 = v16;
          }
          while ( v15 != v5 );
          v4 -= 4 * v15;
        }
        sub_347924();
        v5 = v19;
        if ( !v19 )
          return v3;
        v6 = v7;
      }
    }
    v25 = *(_DWORD *)v4;
    v26 = &v4[4 * v6];
    if ( v26 != v4 + 4 )
      memmove(v4, v4 + 4, 4 * v6 - 4);
    *((_DWORD *)v26 - 1) = v25;
    return v3;
  }
}
