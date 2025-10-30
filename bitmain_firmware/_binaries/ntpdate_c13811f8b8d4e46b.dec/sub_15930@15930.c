void __fastcall sub_15930(_DWORD **a1)
{
  _DWORD *v2; // r4
  int v3; // r3
  int i; // r5
  int v5; // r2
  int v6; // r3
  int v7; // r3
  FILE *v8; // r0
  unsigned int v9; // r2
  _DWORD *v10; // r3
  unsigned int j; // r5
  _DWORD *v12; // r0
  _DWORD *v13; // r1
  int v14; // r2
  int v15; // r3
  void *v16; // r0

  if ( !a1 || (v2 = *a1) == 0 || *v2 != 1281582695 )
    sub_1073C();
  v3 = v2[1];
  if ( !v3 || v2 == *(_DWORD **)(v3 + 52) )
    sub_1073C();
  for ( i = v2[2]; i; i = v2[2] )
  {
    v7 = *(_DWORD *)(i + 52);
    if ( v7 )
    {
      *(_DWORD *)(v7 + 48) = *(_DWORD *)(i + 48);
      v5 = *(_DWORD *)(i + 48);
    }
    else
    {
      if ( v2[3] != i )
        sub_1073C();
      v5 = *(_DWORD *)(i + 48);
      v2[3] = v5;
    }
    if ( v5 )
      *(_DWORD *)(v5 + 52) = v7;
    else
      v2[2] = v7;
    v6 = *(_DWORD *)(i + 4);
    *(_DWORD *)(i + 48) = -1;
    *(_DWORD *)(i + 52) = -1;
    if ( v6 == 3 )
    {
      free(*(void **)(i + 20));
      v8 = *(FILE **)(i + 16);
      if ( v8 )
        fclose(v8);
    }
    free(*(void **)i);
    free((void *)i);
  }
  v9 = v2[5];
  if ( v9 )
  {
    v10 = (_DWORD *)v2[4];
    for ( j = 0; j < v9; ++j )
    {
      v12 = (_DWORD *)v10[2 * j];
      v13 = &v10[2 * j];
      if ( v12 )
      {
        do
        {
          v15 = v12[3];
          if ( v15 )
          {
            *(_DWORD *)(v15 + 8) = v12[2];
            v14 = v12[2];
          }
          else
          {
            if ( (_DWORD *)v13[1] != v12 )
              sub_1073C();
            v14 = v12[2];
            v13[1] = v14;
          }
          if ( v14 )
            *(_DWORD *)(v14 + 12) = v15;
          else
            *v13 = v15;
          free(v12);
          v10 = (_DWORD *)v2[4];
          v12 = (_DWORD *)v10[2 * j];
          v13 = &v10[2 * j];
        }
        while ( v12 );
        v9 = v2[5];
      }
    }
    if ( v9 )
      free(v10);
  }
  v16 = (void *)v2[8];
  v2[9] = 0;
  if ( v16 )
    free(v16);
  free(v2);
  *a1 = 0;
}
