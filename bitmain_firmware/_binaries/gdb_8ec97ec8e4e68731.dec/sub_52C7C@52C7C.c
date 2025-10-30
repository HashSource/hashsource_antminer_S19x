int *__fastcall sub_52C7C(char *s2, int **a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
  int *v7; // r4
  int *v9; // r5
  void (__fastcall *v11)(int *, int); // r3
  int v12; // r3
  void *v13; // r0
  int v14; // r3
  int v15; // r3
  int *v16; // r1
  int *v17; // r2
  int *v18; // r0
  _DWORD *v20; // r2

  *a3 = 0;
  *a4 = 0;
  *a5 = 0;
  *a6 = 0;
  v7 = *a2;
  if ( *a2 )
  {
    v9 = (int *)a2;
    while ( strcmp((const char *)v7[1], s2) )
    {
      v9 = v7;
      v7 = (int *)*v7;
      if ( !v7 )
        return v7;
    }
    v11 = (void (__fastcall *)(int *, int))v7[18];
    if ( v11 )
      v11(v7, v7[6]);
    v12 = v7[22];
    v13 = (void *)v7[7];
    if ( v12 )
      *(_DWORD *)(v12 + 44) = 0;
    *a3 = v7[11];
    *a4 = v7[22];
    v14 = v7[23];
    if ( v14 )
      *(_DWORD *)(v14 + 48) = 0;
    if ( v13 && (v7[3] & 8) != 0 )
      free(v13);
    *a5 = v7[12];
    *a6 = v7[23];
    *v9 = *v7;
    v15 = v7[24];
    v16 = (int *)v7[25];
    if ( v15 )
    {
      v17 = *(int **)(v15 + 100);
      if ( v17 == v7 )
      {
        v20 = (_DWORD *)(v15 + 100);
      }
      else
      {
        while ( (int *)v17[26] != v7 )
          v17 = (int *)v17[26];
        v20 = v17 + 26;
      }
      *v20 = v7[26];
    }
    v18 = v7;
    v7 = v16;
    free(v18);
  }
  return v7;
}
