int __fastcall sub_CB348(int result, unsigned int *a2, int a3, int a4)
{
  int v5; // r2
  char *v6; // r5
  unsigned int *v7; // r6
  unsigned int *v8; // r4
  unsigned int v10; // lr
  __int64 v11; // r10
  signed int v12; // r3
  int v13; // r12
  int v14; // r4
  int v15; // r3
  unsigned int v16; // r2
  int v17; // r0
  _BOOL4 v18; // r5
  _BOOL4 v19; // r5
  _BOOL4 v20; // r12
  _BOOL4 v21; // r5
  _BOOL4 v22; // r3
  unsigned int *v23; // lr
  int v24; // r3
  _BOOL4 v25; // r2
  unsigned int *v26; // r3
  unsigned int v27; // r2
  unsigned int v28; // t1
  int v29; // r0
  _BOOL4 v30; // r9
  unsigned int v31; // t1
  int v32; // r4
  int v33; // r7
  unsigned int *v34; // r8
  unsigned int v35; // t1
  unsigned int v37; // t1
  unsigned int *v38; // [sp+4h] [bp-8h]

  v5 = (int)a2 - result;
  if ( (int)a2 - result <= 64 )
    return result;
  v6 = (char *)a2;
  v7 = (unsigned int *)result;
  if ( !a3 )
  {
LABEL_43:
    v32 = v5 >> 2;
    v33 = ((v5 >> 2) - 2) >> 1;
    v34 = &v7[v33];
    do
    {
      v35 = *v34--;
      sub_CB084((int)v7, v33, v32, v35);
    }
    while ( v33-- != 0 );
    do
    {
      v37 = *((_DWORD *)v6 - 1);
      v6 -= 4;
      *(_DWORD *)v6 = *v7;
      result = sub_CB084((int)v7, 0, (v6 - (char *)v7) >> 2, v37);
    }
    while ( v6 - (char *)v7 > 4 );
    return result;
  }
  v8 = a2;
  v38 = (unsigned int *)(result + 4);
  while ( 2 )
  {
    LODWORD(v11) = v7[1];
    v10 = *(a2 - 1);
    --a3;
    HIDWORD(v11) = *v7;
    v12 = v8 - v7 + ((unsigned int)((char *)v8 - (char *)v7) >> 31);
    v13 = *(_DWORD *)(v11 + 24);
    v14 = *(_DWORD *)(v10 + 24);
    v15 = v12 >> 1;
    v16 = v7[v15];
    v17 = *(_DWORD *)(v16 + 24);
    if ( v13 < v17 || ((unsigned int)v11 < v16 ? (v18 = v13 <= v17) : (v18 = 0), v18) )
    {
      if ( v17 < v14 )
        goto LABEL_17;
      v21 = v16 < v10;
      if ( v17 > v14 )
        v21 = 0;
      if ( v21 )
        goto LABEL_17;
      if ( v13 < v14 || ((unsigned int)v11 < v10 ? (v22 = v13 <= v14) : (v22 = 0), v22) )
      {
LABEL_48:
        *v7 = v10;
        *(a2 - 1) = HIDWORD(v11);
        v11 = *(_QWORD *)v7;
        v13 = *(_DWORD *)(*v7 + 24);
        goto LABEL_28;
      }
LABEL_27:
      *(_QWORD *)v7 = v11;
      goto LABEL_28;
    }
    if ( v13 < v14 )
      goto LABEL_27;
    v19 = (unsigned int)v11 < v10;
    if ( v13 > v14 )
      v19 = 0;
    if ( v19 )
      goto LABEL_27;
    if ( v17 < v14 )
      goto LABEL_48;
    v20 = v16 < v10;
    if ( v17 > v14 )
      v20 = 0;
    if ( v20 )
      goto LABEL_48;
LABEL_17:
    *v7 = v16;
    v7[v15] = HIDWORD(v11);
    v11 = *(_QWORD *)v7;
    v13 = *(_DWORD *)(*v7 + 24);
LABEL_28:
    v8 = v38;
    v23 = a2;
    while ( 1 )
    {
      v24 = *(_DWORD *)(HIDWORD(v11) + 24);
      v6 = (char *)v8;
      if ( v24 >= v13 )
      {
        v25 = HIDWORD(v11) < (unsigned int)v11;
        if ( v24 > v13 )
          v25 = 0;
        if ( !v25 )
          break;
      }
LABEL_40:
      v31 = v8[1];
      ++v8;
      HIDWORD(v11) = v31;
    }
    v26 = v23 - 1;
    do
    {
      do
      {
        v23 = v26;
        v28 = *v26--;
        v27 = v28;
        v29 = *(_DWORD *)(v28 + 24);
      }
      while ( v29 > v13 );
      v30 = v27 > (unsigned int)v11;
      if ( v29 < v13 )
        v30 = 0;
    }
    while ( v30 );
    if ( v8 < v23 )
    {
      *v8 = v27;
      *v23 = HIDWORD(v11);
      LODWORD(v11) = *v7;
      v13 = *(_DWORD *)(*v7 + 24);
      goto LABEL_40;
    }
    result = sub_CB348(v8, a2, a3, a4);
    v5 = (char *)v8 - (char *)v7;
    if ( (char *)v8 - (char *)v7 > 64 )
    {
      a2 = v8;
      if ( !a3 )
        goto LABEL_43;
      continue;
    }
    return result;
  }
}
