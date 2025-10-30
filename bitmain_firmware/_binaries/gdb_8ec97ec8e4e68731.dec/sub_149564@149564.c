void __fastcall sub_149564(int a1, unsigned int a2)
{
  char *v3; // r5
  unsigned int v4; // r2
  int v5; // r3
  char *v6; // r9
  unsigned int v8; // r7
  int v9; // r3
  bool v10; // cf
  unsigned int v11; // r7
  size_t v12; // r7
  char *v13; // r0
  char *v14; // r1
  char *v15; // r2
  char *v16; // r3
  bool v17; // zf
  char *v18; // r3
  unsigned int v19; // r2
  char *v20; // r10
  _DWORD *v21; // r0
  _DWORD *v22; // t1
  _DWORD *v23; // r4
  char *v24; // r8

  if ( !a2 )
    return;
  v3 = *(char **)(a1 + 4);
  if ( a2 <= (*(_DWORD *)(a1 + 8) - (int)v3) >> 2 )
  {
    v4 = a2;
    v5 = *(_DWORD *)(a1 + 4);
    do
    {
      v17 = v5 == 0;
      v5 += 4;
      if ( !v17 )
        *(_DWORD *)(v5 - 4) = 0;
      --v4;
    }
    while ( v4 );
    *(_DWORD *)(a1 + 4) = &v3[4 * a2];
    return;
  }
  v6 = *(char **)a1;
  v8 = (int)&v3[-*(_DWORD *)a1] >> 2;
  if ( 0x3FFFFFFF - v8 < a2 )
    sub_33D184("vector::_M_default_append");
  if ( a2 < v8 )
    v9 = (int)&v3[-*(_DWORD *)a1] >> 2;
  else
    v9 = a2;
  v10 = __CFADD__(v8, v9);
  v11 = v8 + v9;
  if ( v10 || v11 > 0x3FFFFFFF )
  {
    v12 = -4;
    goto LABEL_17;
  }
  if ( v11 )
  {
    v12 = 4 * v11;
LABEL_17:
    v13 = (char *)sub_9836C(v12);
    v6 = *(char **)a1;
    v24 = v13;
    v3 = *(char **)(a1 + 4);
    v11 = (unsigned int)&v13[v12];
    goto LABEL_18;
  }
  v24 = 0;
LABEL_18:
  if ( v6 == v3 )
  {
    v14 = v24;
  }
  else
  {
    v15 = v24;
    v16 = v6;
    do
    {
      v17 = v15 == 0;
      v16 += 4;
      if ( v15 )
        *(_DWORD *)v15 = 0;
      v15 += 4;
      if ( !v17 )
      {
        *((_DWORD *)v15 - 1) = *((_DWORD *)v16 - 1);
        *((_DWORD *)v16 - 1) = 0;
      }
    }
    while ( v16 != v3 );
    v14 = &v24[((v3 - (v6 + 4)) & 0xFFFFFFFC) + 4];
  }
  v18 = v14;
  v19 = a2;
  do
  {
    v17 = v18 == 0;
    v18 += 4;
    if ( !v17 )
      *((_DWORD *)v18 - 1) = 0;
    --v19;
  }
  while ( v19 );
  v20 = &v14[4 * a2];
  if ( v6 != v3 )
  {
    do
    {
      v22 = *(_DWORD **)v6;
      v6 += 4;
      v21 = v22;
      if ( v22 )
      {
        do
        {
          v23 = (_DWORD *)*v21;
          sub_339E64(v21);
          v21 = v23;
        }
        while ( v23 );
      }
    }
    while ( v3 != v6 );
    v3 = *(char **)a1;
  }
  if ( v3 )
    sub_339E64(v3);
  *(_DWORD *)a1 = v24;
  *(_DWORD *)(a1 + 4) = v20;
  *(_DWORD *)(a1 + 8) = v11;
}
