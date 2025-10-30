void __fastcall sub_1B07F4(char **a1)
{
  char *v1; // r7
  char *v2; // r6
  char *v4; // r4
  char *v5; // r8
  __int64 v6; // r6
  unsigned int v7; // r3
  unsigned int v8; // r2
  bool v9; // zf
  unsigned int v10; // lr
  char *v11; // r0
  _DWORD *v12; // r12
  int *v13; // r1
  int v14; // r0
  int v15; // r1
  unsigned int v16; // r10
  unsigned int v17; // r9
  char *v18; // r0
  unsigned int v19; // r0
  char *v20; // r4
  unsigned int v21; // r12
  int v22; // r7
  char *v23; // lr
  char *v24; // r3
  int v25; // r1
  unsigned int v26; // t1
  unsigned int v27; // r9
  char *v28; // r3
  unsigned int v29; // r2
  int v30; // r3
  bool v31; // cf
  unsigned int v32; // r3
  size_t v33; // r7
  char *v34; // r0
  char *v35; // r6
  char *v36; // r3
  char *v37; // r10

  v1 = *a1;
  v2 = a1[1];
  if ( v2 == *a1 )
    return;
  sub_1B05F4((int)*a1, a1[1], 2 * (31 - __clz((v2 - v1) >> 3)));
  if ( v2 - v1 > 128 )
  {
    v20 = v1 + 128;
    sub_1B0A98(v1);
    if ( v2 != v1 + 128 )
    {
      do
      {
        v21 = *(_DWORD *)v20;
        v22 = *((_DWORD *)v20 + 1);
        if ( *(_DWORD *)v20 < *((_DWORD *)v20 - 2) )
        {
          v24 = v20 - 8;
          do
          {
            v25 = *((_DWORD *)v24 + 1);
            v23 = v24;
            *((_DWORD *)v24 + 2) = *(_DWORD *)v24;
            *((_DWORD *)v24 + 3) = v25;
            v26 = *((_DWORD *)v24 - 2);
            v24 -= 8;
          }
          while ( v21 < v26 );
        }
        else
        {
          v23 = v20;
        }
        v20 += 8;
        *(_DWORD *)v23 = v21;
        *((_DWORD *)v23 + 1) = v22;
      }
      while ( v2 != v20 );
    }
  }
  else
  {
    sub_1B0A98(v1);
  }
  v4 = *a1;
  v5 = a1[1];
  LODWORD(v6) = v5 - *a1;
  HIDWORD(v6) = (int)v6 >> 3;
  if ( (unsigned int)((int)v6 >> 3) <= 1 )
  {
    if ( HIDWORD(v6) )
      return;
    v27 = 1;
    if ( a1[2] != v5 )
    {
LABEL_32:
      v28 = v5 + 8;
      v29 = v27;
      do
      {
        --v29;
        *((_DWORD *)v28 - 2) = 0;
        *((_DWORD *)v28 - 1) = 0;
        v28 += 8;
      }
      while ( v29 );
      a1[1] = &v5[8 * v27];
      return;
    }
  }
  else
  {
    v7 = 1;
    v8 = 0;
    do
    {
      while ( 1 )
      {
        v13 = (int *)&v4[8 * v8];
        v16 = *(_DWORD *)&v4[8 * v7];
        v17 = v8 + 1;
        v12 = (_DWORD *)v13[1];
        v11 = (char *)v12 + *v13;
        if ( v16 > (unsigned int)v11 )
          break;
        v18 = &v4[8 * v7++];
        v10 = v8 + 1;
        v19 = *((_DWORD *)v18 + 1) - *v13 + v16;
        if ( v19 < (unsigned int)v12 )
          v19 = v13[1];
        v13[1] = v19;
        if ( v7 == HIDWORD(v6) )
          goto LABEL_18;
      }
      v9 = v17 == v7;
      v10 = v8 + 2;
      if ( v17 == v7 )
      {
        v8 = v7;
      }
      else
      {
        v11 = &v4[8 * v7];
        v12 = v13 + 2;
      }
      if ( v17 != v7 )
        v13 = (int *)v11;
      ++v7;
      if ( !v9 )
      {
        v14 = *v13;
        v15 = v13[1];
        v8 = v17;
        *v12 = v14;
        v12[1] = v15;
      }
    }
    while ( v7 != HIDWORD(v6) );
LABEL_18:
    if ( v10 <= v7 )
    {
      if ( v10 < v7 )
        a1[1] = &v4[8 * v10];
      return;
    }
    v27 = v10 - v7;
    if ( v10 == v7 )
      return;
    if ( v27 <= (a1[2] - v5) >> 3 )
      goto LABEL_32;
    if ( 0x1FFFFFFF - v7 < v27 )
      sub_33D184("vector::_M_default_append");
  }
  if ( HIDWORD(v6) < v27 )
    v30 = v27;
  else
    v30 = (int)v6 >> 3;
  v31 = __CFADD__(v30, HIDWORD(v6));
  v32 = v30 + HIDWORD(v6);
  if ( v31 || v32 > 0x1FFFFFFF )
  {
    v33 = -8;
    goto LABEL_45;
  }
  if ( v32 )
  {
    v33 = 8 * v32;
LABEL_45:
    v34 = (char *)sub_9836C(v33);
    v4 = *a1;
    v37 = v34;
    v5 = a1[1];
    HIDWORD(v6) = &v34[v33];
    LODWORD(v6) = v5 - *a1;
    goto LABEL_46;
  }
  HIDWORD(v6) = 0;
  v37 = 0;
LABEL_46:
  if ( v4 != v5 )
    memmove(v37, v4, v6);
  v35 = &v37[v6];
  v36 = v35 + 8;
  do
  {
    *((_DWORD *)v36 - 2) = 0;
    v36 += 8;
    *((_DWORD *)v36 - 3) = 0;
  }
  while ( &v35[8 * v27 + 8] != v36 );
  LODWORD(v6) = &v35[8 * v27];
  if ( v4 )
    sub_339E64(v4);
  *a1 = v37;
  *(_QWORD *)(a1 + 1) = v6;
}
