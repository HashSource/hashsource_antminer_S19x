void __fastcall sub_24F558(void ***a1)
{
  void **v1; // r7
  void **v2; // r6
  _DWORD *i; // r0
  void *v5; // r1
  void **v6; // lr
  void **v7; // r7
  unsigned int v8; // r6
  void **v9; // r4
  unsigned int v10; // r12
  int v11; // r8
  void *v12; // r2
  void **v13; // r3
  void **v14; // r3
  int v15; // r2
  int v16; // r3
  void **v17; // r4
  void **v18; // r0
  unsigned int v19; // r4
  unsigned int v20; // r3
  bool v21; // cf
  unsigned int v22; // r6
  _DWORD *v23; // r8
  size_t v24; // r6
  _DWORD *v25; // r12
  char *v26; // r3
  int v27; // r2
  _DWORD *v28; // r7
  void **v29; // r4

  v1 = *a1;
  v2 = a1[1];
  if ( v2 == *a1 )
    return;
  sub_250918(*a1, a1[1], 2 * (31 - __clz(-1431655765 * (v2 - v1))), sub_247854);
  if ( (char *)v2 - (char *)v1 > 192 )
  {
    v17 = v1 + 48;
    for ( i = (_DWORD *)sub_2506C8(v1, v1 + 48, sub_247854); v2 != v17; i = (_DWORD *)sub_25066C(v18, 2390100) )
    {
      v18 = v17;
      v17 += 3;
    }
  }
  else
  {
    i = (_DWORD *)sub_2506C8(v1, v2, sub_247854);
  }
  v6 = *a1;
  v7 = a1[1];
  v8 = -1431655765 * (v7 - *a1);
  if ( v8 <= 1 )
  {
    if ( v8 )
      return;
    v19 = 1;
    if ( a1[2] != v7 )
      goto LABEL_24;
  }
  else
  {
    v9 = *a1;
    v10 = 1;
    v11 = 0;
    do
    {
      while ( 1 )
      {
        v5 = v6[3 * v11];
        v14 = &v6[3 * v11];
        if ( v5 != v9[3] )
          break;
        v15 = (int)v14[2];
        v5 = v9[4];
        if ( (int)v5 > v15 )
          break;
        v5 = v9[5];
        ++v10;
        v9 += 3;
        if ( v15 < (int)v5 )
          v14[2] = v5;
        if ( v10 == v8 )
          goto LABEL_14;
      }
      ++v11;
      v9 += 3;
      if ( v11 != v10 )
      {
        i = *v9;
        v5 = v9[1];
        v12 = v9[2];
        v13 = v14 + 3;
        *v13 = *v9;
        v13[1] = v5;
        v13[2] = v12;
      }
      ++v10;
    }
    while ( v10 != v8 );
LABEL_14:
    v16 = v11 + 1;
    if ( v11 + 1 <= v10 )
    {
      if ( v11 + 1 < v10 )
        a1[1] = &v6[3 * v16];
      return;
    }
    v19 = v16 - v10;
    if ( v16 == v10 )
      return;
    if ( v19 <= -1431655765 * (a1[2] - v7) )
    {
LABEL_24:
      a1[1] = &v7[3 * v19];
      return;
    }
    if ( 357913941 - v10 < v19 )
      sub_33D184("vector::_M_default_append");
  }
  if ( v8 < v19 )
    v20 = v19;
  else
    v20 = v8;
  v21 = __CFADD__(v20, v8);
  v22 = v20 + v8;
  if ( v21 || v22 > 0x15555555 )
  {
    v24 = -1;
    goto LABEL_35;
  }
  if ( v22 )
  {
    v24 = 3 * v22;
LABEL_35:
    i = sub_9836C(v24 * 4);
    v6 = *a1;
    v23 = i;
    v7 = a1[1];
    v22 = (unsigned int)&i[v24];
    goto LABEL_36;
  }
  v23 = 0;
LABEL_36:
  if ( v6 == v7 )
  {
    v25 = v23;
  }
  else
  {
    v26 = (char *)(v6 + 3);
    v27 = 715827883;
    v25 = v23;
    v28 = &v23[3 * ((715827883 * ((unsigned int)((char *)v7 - (char *)(v6 + 3)) >> 2)) & 0x3FFFFFFF) + 3];
    do
    {
      if ( v25 )
      {
        i = (_DWORD *)*((_DWORD *)v26 - 3);
        v5 = (void *)*((_DWORD *)v26 - 2);
        v27 = *((_DWORD *)v26 - 1);
      }
      v26 += 12;
      if ( v25 )
      {
        *v25 = i;
        v25[1] = v5;
        v25[2] = v27;
      }
      v25 += 3;
    }
    while ( v28 != v25 );
  }
  v29 = (void **)&v25[3 * v19];
  if ( v6 )
    sub_339E64(v6);
  *a1 = (void **)v23;
  a1[1] = v29;
  a1[2] = (void **)v22;
}
