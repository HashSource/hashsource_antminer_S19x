int __fastcall sub_1B6298(int **a1, int **a2)
{
  int *v2; // r4
  int *v3; // r5
  __int64 v4; // r2
  int v5; // r6
  int v6; // r7
  int v7; // r0
  int v8; // r2
  int v9; // r12
  int v10; // r8
  int v11; // r6
  unsigned int v12; // r7
  unsigned int v13; // r6
  _DWORD *v14; // r2
  int v15; // r1
  _DWORD *v16; // r3
  int *v18; // r3
  unsigned int v19; // r1
  __int64 v20; // r0

  v2 = *a1;
  v3 = *a2;
  v4 = *(_QWORD *)*a1;
  v5 = *(_DWORD *)(HIDWORD(v4) + 144);
  v6 = *(_DWORD *)(v4 + 28);
  v7 = sub_162FDC(*(_DWORD *)(HIDWORD(v4) + 36), **a1);
  v8 = v3[1];
  v9 = *(_DWORD *)(v5 + 4 * v7);
  v10 = *(_DWORD *)(v8 + 144);
  v11 = *(_DWORD *)(*v3 + 28);
  v12 = v6 + v9;
  v13 = v11 + *(_DWORD *)(v10 + 4 * sub_162FDC(*(_DWORD *)(v8 + 36), *v3));
  if ( v12 < v13 )
    return -1;
  if ( v12 > v13 )
    return 1;
  v14 = (_DWORD *)v2[1];
  v15 = v3[1];
  if ( v14[44] == v15 || *(_DWORD **)(v15 + 176) == v14 )
    return 0;
  if ( v14 == (_DWORD *)v15 )
  {
    v18 = (int *)v14[42];
    v19 = v14[43];
    if ( (unsigned int)v18 < v19 )
    {
      while ( 1 )
      {
        if ( *v18 )
        {
          if ( v2 == v18 )
            return -1;
          if ( v3 == v18 )
            return 1;
        }
        v18 += 3;
        if ( (unsigned int)v18 >= v19 )
          goto LABEL_22;
      }
    }
    goto LABEL_22;
  }
  v16 = *(_DWORD **)(dword_487D2C + 36);
  if ( v16 )
  {
    while ( v16 != v14 )
    {
      if ( v16 == (_DWORD *)v15 )
        return 1;
      v16 = (_DWORD *)*v16;
      if ( !v16 )
        goto LABEL_21;
    }
    return -1;
  }
LABEL_21:
  sub_94700((int)"objfiles.c", 1164, "%s: %s", "int qsort_cmp(const void*, const void*)", "objfile not found");
LABEL_22:
  v20 = sub_94700((int)"objfiles.c", 1149, "%s: %s", "int qsort_cmp(const void*, const void*)", "section not found");
  return sub_1B6414(v20, HIDWORD(v20));
}
