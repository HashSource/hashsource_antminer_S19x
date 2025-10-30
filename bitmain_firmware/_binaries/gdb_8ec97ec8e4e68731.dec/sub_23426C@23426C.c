void __fastcall sub_23426C(char **a1, char *a2, _QWORD *a3, __int64 *a4, _DWORD *a5)
{
  char *v6; // r6
  char *v8; // r0
  int v10; // r10
  unsigned int v11; // r9
  size_t v12; // r9
  char *v13; // r0
  char *v14; // r7
  int v15; // r4
  char *v16; // r1
  __int64 v17; // r2
  _DWORD *v18; // r2
  char *v19; // r3
  unsigned int v20; // r4
  int v21; // r1
  char *v22; // r10
  char *v23; // r5
  unsigned int v24; // r1
  __int64 v25; // r10
  __int64 v26; // r2
  void *v27; // r0
  bool v28; // zf
  _QWORD *v29; // [sp+4h] [bp-8h]

  v6 = a1[1];
  v8 = *a1;
  v10 = a2 - v8;
  if ( !(-1431655765 * ((v6 - v8) >> 3)) )
  {
    v11 = 1;
    goto LABEL_28;
  }
  v11 = 1431655766 * ((v6 - v8) >> 3);
  if ( -1431655765 * ((v6 - v8) >> 3) > v11 || v11 > 0xAAAAAAA )
  {
    v12 = -16;
LABEL_4:
    v29 = a3;
    v13 = (char *)sub_9836C(v12);
    a3 = v29;
    v14 = v13;
    v11 = (unsigned int)&v13[v12];
    v15 = (int)(v13 + 24);
    v8 = *a1;
    v6 = a1[1];
    goto LABEL_5;
  }
  if ( v11 )
  {
LABEL_28:
    v12 = 24 * v11;
    goto LABEL_4;
  }
  v15 = 24;
  v14 = 0;
LABEL_5:
  v16 = &v14[v10];
  if ( &v14[v10] )
  {
    *(_QWORD *)&v14[v10] = *a3;
    v17 = *a4;
    *((_DWORD *)v16 + 4) = *a5;
    *((_QWORD *)v16 + 1) = v17;
    *a5 = 0;
  }
  if ( a2 != v8 )
  {
    v18 = v8 + 24;
    v19 = v14;
    v20 = (178956971 * ((unsigned int)(a2 - (v8 + 24)) >> 3)) & 0x1FFFFFFF;
    do
    {
      if ( v19 )
      {
        v21 = *(v18 - 2);
        *(_QWORD *)v19 = *((_QWORD *)v18 - 3);
        *((_QWORD *)v19 + 1) = *((_QWORD *)v18 - 2);
        *(v18 - 2) = 0;
        *((_DWORD *)v19 + 4) = v21;
      }
      v19 += 24;
      v18 += 6;
    }
    while ( v19 != &v14[24 * v20 + 24] );
    v22 = v8 + 24;
    v15 = (int)&v14[24 * v20 + 48];
    if ( a2 == v6 )
      goto LABEL_19;
    goto LABEL_13;
  }
  if ( a2 != v6 )
  {
LABEL_13:
    v23 = a2 + 24;
    v24 = v15 + 24 * (((178956971 * ((unsigned int)(v6 - v23) >> 3)) & 0x1FFFFFFF) + 1);
    do
    {
      if ( v15 )
      {
        v25 = *((_QWORD *)v23 - 3);
        v26 = *((_QWORD *)v23 - 2);
        *(_DWORD *)(v15 + 16) = *((_DWORD *)v23 - 2);
        *(_QWORD *)v15 = v25;
        *(_QWORD *)(v15 + 8) = v26;
        *((_DWORD *)v23 - 2) = 0;
      }
      v15 += 24;
      v23 += 24;
    }
    while ( v15 != v24 );
    if ( v8 == v6 )
      goto LABEL_23;
    v22 = v8 + 24;
    do
    {
LABEL_19:
      v27 = (void *)*((_DWORD *)v8 + 4);
      if ( v27 )
        free(v27);
      v28 = v22 == v6;
      v8 = v22;
      v22 += 24;
    }
    while ( !v28 );
LABEL_23:
    v6 = *a1;
  }
  if ( v6 )
    sub_339E64(v6);
  *a1 = v14;
  a1[1] = (char *)v15;
  a1[2] = (char *)v11;
}
