int __fastcall sub_304B5C(int *a1, int a2)
{
  int v2; // r12
  unsigned int v3; // r3
  int v4; // lr
  _DWORD *v7; // r8
  unsigned int v8; // r6
  unsigned int v9; // r3
  size_t v10; // r4
  unsigned int v11; // r10
  size_t v12; // r6
  size_t v13; // r3
  __int64 v14; // r10
  bool v15; // zf
  _BOOL4 v16; // r10
  __int64 v17; // r0
  size_t v18; // r3
  size_t v19; // r6
  size_t v20; // r1
  size_t v21; // r2
  size_t v22; // r4
  int v23; // r4
  size_t v24; // r6
  size_t v25; // r2
  char *v26; // r0
  int v27; // r3
  int v28; // lr
  size_t v29; // r3
  int v30; // r2
  size_t v31; // lr
  size_t v32; // r2
  int result; // r0
  int v34; // r0
  size_t v35; // r2
  int v36; // r1
  size_t v37; // r4
  int v38; // r1
  int v39; // r12
  unsigned int v40; // r0
  int v41; // r2
  int v42; // r12
  unsigned int v43; // r3
  unsigned int v44; // r2
  unsigned int v45; // r4
  int v46; // r1
  int v47; // r0
  int v48; // r0
  int v49; // r1
  char *v50; // r0
  unsigned int v51; // r3
  size_t v52; // r2
  bool v53; // cc
  size_t v54; // r3
  unsigned int v55; // r2
  unsigned int v56; // r3
  bool v57; // cc
  bool v58; // zf
  size_t v59; // [sp+0h] [bp-Ch]
  int v60; // [sp+4h] [bp-8h]

  v2 = *a1;
  v3 = a1[3] - 5;
  v4 = *(_DWORD *)(*a1 + 4);
  if ( v3 >= a1[11] )
    v3 = a1[11];
  v7 = a1 + 1024;
  v60 = *(_DWORD *)(*a1 + 4);
  v59 = v3;
  do
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)(v2 + 16);
      v9 = (v7[431] + 42) >> 3;
      v10 = v8 - v9;
      if ( v8 < v9 )
        goto LABEL_35;
      v11 = 0xFFFF;
      v12 = a1[27] - a1[23];
      v13 = v12 + v4;
      if ( v12 + v4 <= 0xFFFE )
        v11 = v12 + v4;
      if ( v11 < v10 )
        v10 = v11;
      if ( v59 > v10 )
      {
        HIDWORD(v14) = a2 != 4;
        LODWORD(v14) = v13 != v10;
        if ( v10 )
          HIDWORD(v14) = 0;
        if ( !a2 )
          LODWORD(v14) = 1;
        if ( v14 )
        {
LABEL_35:
          v23 = 0;
          v24 = v60 - v4;
          if ( v60 != v4 )
            goto LABEL_28;
LABEL_36:
          v29 = a1[27];
          goto LABEL_37;
        }
      }
      v15 = a2 == 4;
      if ( a2 == 4 )
        v15 = v13 == v10;
      v16 = v15;
      sub_30B2DC(a1, 0, 0, v16);
      *(_WORD *)(a1[2] + a1[5] - 4) = v10;
      *(_WORD *)(a1[2] + a1[5] - 2) = ~(_WORD)v10;
      sub_304148(*a1);
      if ( v12 )
        break;
      v2 = *a1;
      if ( v10 )
        goto LABEL_26;
LABEL_5:
      v4 = *(_DWORD *)(v2 + 4);
      if ( v16 )
        goto LABEL_27;
    }
    if ( v12 >= v10 )
      v12 = v10;
    v10 -= v12;
    memcpy(*(void **)(*a1 + 12), (const void *)(a1[14] + a1[23]), v12);
    v2 = *a1;
    v17 = *(_QWORD *)(*a1 + 12);
    v18 = a1[23] + v12;
    LODWORD(v17) = v17 + v12;
    HIDWORD(v17) -= v12;
    v19 = *(_DWORD *)(*a1 + 20) + v12;
    *(_QWORD *)(v2 + 12) = v17;
    *(_DWORD *)(v2 + 20) = v19;
    a1[23] = v18;
    if ( !v10 )
      goto LABEL_5;
LABEL_26:
    sub_303E5C(v2, *(void **)(v2 + 12), v10);
    v2 = *a1;
    v4 = *(_DWORD *)(*a1 + 4);
    v20 = *(_DWORD *)(*a1 + 12) + v10;
    v21 = *(_DWORD *)(*a1 + 16) - v10;
    v22 = *(_DWORD *)(*a1 + 20) + v10;
    *(_DWORD *)(v2 + 12) = v20;
    *(_DWORD *)(v2 + 16) = v21;
    *(_DWORD *)(v2 + 20) = v22;
  }
  while ( !v16 );
LABEL_27:
  v23 = 1;
  v24 = v60 - v4;
  if ( v60 == v4 )
    goto LABEL_36;
LABEL_28:
  v25 = a1[11];
  v26 = (char *)a1[14];
  if ( v25 <= v24 )
  {
    v49 = *(_DWORD *)v2;
    v7[428] = 2;
    memcpy(v26, (const void *)(v49 - v25), v25);
    v29 = a1[11];
    a1[27] = v29;
    v28 = v29;
  }
  else
  {
    v27 = a1[27];
    if ( a1[15] - v27 <= v24 )
    {
      v54 = v27 - v25;
      a1[27] = v54;
      memcpy(v26, &v26[v25], v54);
      v56 = v7[428];
      v26 = (char *)a1[14];
      v57 = v56 > 1;
      if ( v56 > 1 )
      {
        v27 = a1[27];
        v2 = *a1;
      }
      else
      {
        v55 = v56 + 1;
        v2 = *a1;
        v27 = a1[27];
      }
      if ( !v57 )
        v7[428] = v55;
    }
    memcpy(&v26[v27], (const void *)(*(_DWORD *)v2 - v24), v24);
    v28 = a1[11];
    v29 = v24 + a1[27];
    a1[27] = v29;
  }
  v30 = v7[429];
  a1[23] = v29;
  v31 = v28 - v30;
  if ( v31 > v24 )
    v32 = v30 + v24;
  else
    v32 = v30 + v31;
  v7[429] = v32;
LABEL_37:
  if ( v7[432] < v29 )
    v7[432] = v29;
  if ( v23 )
    return 3;
  v34 = *a1;
  v35 = *(_DWORD *)(*a1 + 4);
  if ( (a2 & 0xFFFFFFFB) == 0 || v35 )
  {
    v37 = a1[15] - 1 - v29;
    if ( v35 > v37 && (v38 = a1[23], v39 = a1[11], v38 >= v39) )
    {
      v50 = (char *)a1[14];
      a1[27] = v29 - v39;
      a1[23] = v38 - v39;
      memcpy(v50, &v50[v39], v29 - v39);
      v34 = *a1;
      v51 = v7[428];
      v52 = *(_DWORD *)(*a1 + 4);
      v53 = v51 > 1;
      if ( v51 <= 1 )
        ++v51;
      v37 += a1[11];
      if ( !v53 )
        v7[428] = v51;
      if ( v37 >= v52 )
        v37 = v52;
      v29 = a1[27];
      if ( !v37 )
        goto LABEL_51;
    }
    else
    {
      if ( v37 >= v35 )
        v37 = *(_DWORD *)(*a1 + 4);
      if ( !v37 )
      {
LABEL_51:
        v36 = a1[23];
        goto LABEL_52;
      }
    }
    sub_303E5C(v34, (void *)(a1[14] + v29), v37);
    v36 = a1[23];
    v29 = v37 + a1[27];
    a1[27] = v29;
    goto LABEL_52;
  }
  v36 = a1[23];
  if ( v29 == v36 )
    return 1;
LABEL_52:
  v40 = a1[11];
  v41 = a1[3];
  v42 = v7[431] + 42;
  if ( v7[432] < v29 )
    v7[432] = v29;
  v43 = v29 - v36;
  v44 = v41 - (v42 >> 3);
  if ( v44 >= 0xFFFF )
    v44 = 0xFFFF;
  if ( v44 < v40 )
    v40 = v44;
  if ( v40 <= v43 )
  {
    if ( v44 >= v43 )
      v45 = v43;
    else
      v45 = v44;
    v46 = a1[14] + v36;
    if ( a2 == 4 )
    {
      v58 = v44 == v43;
      if ( v44 >= v43 )
        v58 = *(_DWORD *)(*a1 + 4) == 0;
      if ( v58 )
        goto LABEL_71;
    }
    goto LABEL_77;
  }
  result = a2 == 4;
  if ( v43 )
    result = 1;
  if ( !a2 )
    result = 0;
  if ( result )
  {
    result = v44 >= v43;
    if ( *(_DWORD *)(*a1 + 4) )
      result = 0;
    if ( result )
    {
      if ( v44 >= v43 )
        v45 = v43;
      else
        v45 = v44;
      v46 = a1[14] + v36;
      if ( a2 == 4 )
      {
LABEL_71:
        sub_30B2DC(a1, v46, v45, 1);
        v47 = *a1;
        a1[23] += v45;
        sub_304148(v47);
        return 2;
      }
LABEL_77:
      sub_30B2DC(a1, v46, v45, 0);
      v48 = *a1;
      a1[23] += v45;
      sub_304148(v48);
      return 0;
    }
  }
  return result;
}
