void __fastcall sub_1632B0(int a1, int **a2, int *a3)
{
  int **v4; // r5
  int **v7; // r4
  char *v8; // r6
  unsigned int v9; // r3
  unsigned int v10; // r10
  size_t v11; // r0
  int **v12; // r0
  int **v13; // r9
  int v14; // r3
  int **i; // r6
  int *v16; // r0
  bool v17; // zf
  int **v18; // r5
  int **v19; // r7
  int *v20; // r0
  int **v21; // r5

  v4 = *(int ***)a1;
  v7 = a2;
  v8 = (char *)a2 - *(_DWORD *)a1;
  v9 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2;
  if ( !v9 )
  {
    v10 = 1;
    goto LABEL_27;
  }
  v10 = 2 * v9;
  if ( v9 > 2 * v9 || v10 > 0x3FFFFFFF )
  {
    v11 = -4;
    v10 = 0x3FFFFFFF;
LABEL_4:
    v12 = (int **)sub_9836C(v11);
    v4 = *(int ***)a1;
    v13 = v12;
    goto LABEL_5;
  }
  if ( v10 )
  {
LABEL_27:
    v11 = 4 * v10;
    goto LABEL_4;
  }
  v13 = 0;
LABEL_5:
  if ( &v8[(_DWORD)v13] )
  {
    v14 = *a3;
    *a3 = 0;
    *(_DWORD *)&v8[(_DWORD)v13] = v14;
  }
  for ( i = v13; a2 != v4; ++i )
  {
    if ( i )
    {
      v16 = *v4;
      v17 = *v4 == 0;
      *i = *v4;
      if ( !v17 )
        sub_1627C4(v16);
    }
    ++v4;
  }
  v18 = *(int ***)(a1 + 4);
  v17 = v18 == a2;
  v19 = i + 1;
  if ( !v17 )
  {
    do
    {
      if ( v19 )
      {
        v20 = *v7;
        v17 = *v7 == 0;
        *v19 = *v7;
        if ( !v17 )
          sub_1627C4(v20);
      }
      ++v7;
      ++v19;
    }
    while ( v18 != v7 );
    v7 = *(int ***)(a1 + 4);
  }
  v21 = *(int ***)a1;
  if ( *(int ***)a1 != v7 )
  {
    do
    {
      if ( *v21++ )
        ((void (*)(void))loc_1625A8)();
    }
    while ( v7 != v21 );
    v7 = *(int ***)a1;
  }
  if ( v7 )
    sub_339E64(v7);
  *(_DWORD *)a1 = v13;
  *(_DWORD *)(a1 + 4) = v19;
  *(_DWORD *)(a1 + 8) = &v13[v10];
}
