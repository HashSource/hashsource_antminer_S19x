char *__fastcall sub_28C270(char *result)
{
  char *v1; // r4
  signed int v2; // r1
  _DWORD *v3; // r6
  _DWORD *v4; // r12
  size_t v5; // r1
  _DWORD *v6; // r7
  bool v7; // cc
  void *v8; // r0
  void *v9; // r0
  void **v10; // r6
  _DWORD *v11; // r7
  void *v12; // r0
  char **v13; // r6
  int v14; // r2
  int v15; // r0
  void *v16; // r0
  _DWORD *v17; // r7
  int v18; // r0
  void *v19; // r0
  int v20; // r8
  void *v21; // r0
  int v22; // r6
  int v23; // r2
  int v24; // r3
  _DWORD *v25; // r3

  v1 = result;
  v2 = dword_470778;
  if ( *(_DWORD *)off_47077C[0] )
  {
    if ( dword_470778 < (int)result )
    {
      v5 = 2 * dword_470778;
      v6 = (_DWORD *)off_470780;
      v7 = 2 * dword_470778 < (int)result;
      if ( 2 * dword_470778 < (int)result )
      {
        v5 = (size_t)result;
        dword_470778 = (int)result;
      }
      v8 = *(void **)off_470780;
      if ( !v7 )
        dword_470778 = v5;
      v9 = sub_93050(v8, v5);
      v10 = (void **)off_47077C[0];
      *v6 = v9;
      result = (char *)sub_93050(*v10, dword_470778);
      v2 = dword_470778;
      *v10 = result;
    }
  }
  else
  {
    v11 = (_DWORD *)off_470780;
    if ( dword_470778 < (int)result )
    {
      v2 = (signed int)result;
      dword_470778 = (int)result;
    }
    v12 = sub_93028(v2);
    v13 = (char **)off_47077C[0];
    *v11 = v12;
    result = (char *)sub_93028(dword_470778);
    v2 = dword_470778;
    *v13 = result;
  }
  v3 = (_DWORD *)off_470780;
  if ( (int)v1 < v2 )
  {
    v4 = (_DWORD *)off_47077C[0];
    result = 0;
    do
    {
      v1[*v3] = 0;
      (v1++)[*v4] = 1;
    }
    while ( v1 != (char *)v2 );
  }
  if ( !v3[1] )
  {
    v14 = off_47077C[0];
    v3[2] = 256;
    *(_DWORD *)(v14 + 8) = 256;
    v15 = v3[2];
    v3[4] = v15;
    v16 = sub_93028(4 * v15);
    v17 = (_DWORD *)off_47077C[0];
    v3[3] = v16;
    v18 = v17[2];
    v17[4] = v18;
    v19 = sub_93028(4 * v18);
    v20 = off_47077C[0];
    v17[3] = v19;
    v21 = sub_93028(4 * *(_DWORD *)(v20 + 8));
    v22 = off_470780;
    *(_DWORD *)(v20 + 4) = v21;
    result = (char *)sub_93028(4 * *(_DWORD *)(v22 + 8));
    v23 = off_470780;
    v24 = off_47077C[0];
    *(_DWORD *)(v22 + 4) = result;
    v25 = *(_DWORD **)(v24 + 4);
    **(_DWORD **)(v23 + 4) = 0;
    *v25 = 0;
  }
  dword_48AE00 = 1;
  return result;
}
