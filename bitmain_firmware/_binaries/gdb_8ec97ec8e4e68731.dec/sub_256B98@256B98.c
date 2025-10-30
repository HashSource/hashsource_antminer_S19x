void __fastcall sub_256B98(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  void *v5; // r4
  int v10; // r6
  _DWORD *v11; // r0
  _BYTE *v12; // r1
  int v13; // r2
  _DWORD *v14; // r4
  _DWORD *v15; // r8
  _BYTE *v16; // r3
  _DWORD *v17; // r9
  int v18; // r2
  char *v19; // r7
  char *v20; // r6
  _DWORD *v21; // r0
  _DWORD *v22; // r0
  int v23; // r11
  unsigned int v24; // r3
  size_t v25; // r10
  void *v26; // r0
  __int64 v27; // r8
  char *v28; // r1
  char *v29; // r0
  int v30; // r2
  char *v31; // r3
  bool v32; // zf
  int v33; // r2
  char *v34; // r3
  bool v35; // zf
  bool v36; // zf
  int v37; // r3
  char *v38; // r11
  _DWORD *v39; // r7
  _DWORD *v40; // t1
  _DWORD *v41; // r0
  _DWORD *v42; // r0
  int v43; // r0

  if ( *a1 )
  {
    sub_94700((int)"ui-out.c", 236, "table header must be specified after table_begin and before table_body.");
    sub_33AC04(v5);
    sub_338FFC(v43);
  }
  v10 = (a1[10] - a1[9]) >> 2;
  v11 = sub_9836C(0x3Cu);
  v12 = *(_BYTE **)a4;
  v13 = *(_DWORD *)(a4 + 4);
  v14 = v11;
  v15 = v11 + 5;
  *v11 = v10 + 1;
  v11[1] = a2;
  v11[2] = a3;
  v11[3] = v11 + 5;
  sub_256A84(v11 + 3, v12, (int)&v12[v13]);
  v16 = *(_BYTE **)a5;
  v17 = v14 + 11;
  v18 = *(_DWORD *)(a5 + 4);
  v14[9] = v14 + 11;
  sub_256A84(v14 + 9, v16, (int)&v16[v18]);
  v19 = (char *)a1[10];
  v20 = v19;
  if ( v19 != (char *)a1[11] )
  {
    if ( v19 )
    {
      *(_DWORD *)v19 = v14;
      a1[10] = v19 + 4;
      return;
    }
    a1[10] = 4;
    goto LABEL_6;
  }
  v23 = (int)&v19[-a1[9]];
  v24 = v23 >> 2;
  if ( !(v23 >> 2) )
  {
    v25 = 4;
    goto LABEL_14;
  }
  v25 = 2 * v24;
  if ( v24 > 2 * v24 || v25 > 0x3FFFFFFF )
  {
    v25 = -4;
LABEL_14:
    v26 = sub_9836C(v25);
    v20 = (char *)a1[10];
    LODWORD(v27) = v26;
    goto LABEL_15;
  }
  if ( v25 )
  {
    v25 = 8 * v24;
    goto LABEL_14;
  }
  LODWORD(v27) = 0;
LABEL_15:
  v28 = (char *)a1[9];
  if ( (_DWORD)v27 + v23 )
  {
    *(_DWORD *)(v27 + v23) = v14;
    v14 = 0;
  }
  v29 = v20;
  if ( v19 == v28 )
  {
    HIDWORD(v27) = v27 + 4;
    if ( v19 == v20 )
      goto LABEL_43;
  }
  else
  {
    v30 = v27;
    v31 = v28;
    do
    {
      v32 = v30 == 0;
      v31 += 4;
      if ( v30 )
        v29 = (char *)*((_DWORD *)v31 - 1);
      v30 += 4;
      if ( !v32 )
      {
        *((_DWORD *)v31 - 1) = 0;
        *(_DWORD *)(v30 - 4) = v29;
      }
    }
    while ( v19 != v31 );
    HIDWORD(v27) = v27 + v19 - v28 + 4;
    if ( v19 == v20 )
      goto LABEL_34;
  }
  v33 = HIDWORD(v27);
  v34 = v19;
  do
  {
    v35 = v33 == 0;
    v34 += 4;
    if ( v33 )
      v29 = (char *)*((_DWORD *)v34 - 1);
    v33 += 4;
    if ( !v35 )
    {
      *((_DWORD *)v34 - 1) = 0;
      *(_DWORD *)(v33 - 4) = v29;
    }
  }
  while ( v34 != v20 );
  v36 = v28 == v34;
  v37 = v34 - (v19 + 4);
  if ( v36 )
    v29 = v28;
  HIDWORD(v27) += (v37 & 0xFFFFFFFC) + 4;
  if ( !v36 )
  {
LABEL_34:
    v38 = v28;
    do
    {
      v40 = *(_DWORD **)v38;
      v38 += 4;
      v39 = v40;
      if ( v40 )
      {
        v41 = (_DWORD *)v39[9];
        if ( v41 != v39 + 11 )
          sub_339E64(v41);
        v42 = (_DWORD *)v39[3];
        if ( v42 != v39 + 5 )
          sub_339E64(v42);
        sub_33AC04(v39);
      }
    }
    while ( v20 != v38 );
    v29 = (char *)a1[9];
  }
LABEL_43:
  if ( v29 )
    sub_339E64(v29);
  a1[11] = v27 + v25;
  *(_QWORD *)(a1 + 9) = v27;
  if ( v14 )
  {
    v15 = v14 + 5;
    v17 = v14 + 11;
LABEL_6:
    v21 = (_DWORD *)v14[9];
    if ( v21 != v17 )
      sub_339E64(v21);
    v22 = (_DWORD *)v14[3];
    if ( v22 != v15 )
      sub_339E64(v22);
    sub_349268(v14);
  }
}
