void __fastcall sub_E3E0C(_DWORD *a1, char *a2, _DWORD *a3, int *a4, int *a5, int *a6, int *a7)
{
  char *v8; // r12
  char *v11; // r6
  char *v13; // r3
  unsigned int v14; // r0
  unsigned int v15; // r2
  size_t v16; // r8
  char *v17; // r0
  _DWORD *v18; // r9
  char *v19; // r8
  int v20; // r10
  char *v21; // r1
  int v22; // r5
  int v23; // lr
  int v24; // r0
  int v25; // r3
  char *v26; // r5
  _DWORD *v27; // r1
  _DWORD *v28; // r3
  int v29; // r11
  int v30; // r10
  int v31; // r11
  int v32; // r10
  int v33; // r11
  int v34; // r10
  int v35; // r11
  int v36; // r11
  char *v37; // r4
  unsigned int v38; // r2
  __int64 v39; // r0
  int v40; // r11
  int v41; // r5
  int v42; // lr
  int v43; // r11
  int v44; // r5
  int v45; // lr
  void *v46; // r0
  bool v47; // zf
  int v48; // [sp+4h] [bp-8h]
  unsigned int v49; // [sp+4h] [bp-8h]

  v8 = (char *)*a1;
  v11 = (char *)a1[1];
  v13 = &a2[-*a1];
  v14 = -991146299 * ((int)&v11[-*a1] >> 2);
  if ( !v14 )
  {
    v15 = 1;
    goto LABEL_28;
  }
  v15 = 2 * v14;
  if ( v14 > 2 * v14 || v15 > 0x4EC4EC4 )
  {
    v16 = -48;
LABEL_4:
    v48 = a2 - v8;
    v17 = (char *)sub_9836C(v16);
    v8 = (char *)*a1;
    v18 = v17;
    v11 = (char *)a1[1];
    v19 = &v17[v16];
    v13 = (char *)v48;
    v20 = (int)(v17 + 52);
    goto LABEL_5;
  }
  if ( v15 )
  {
LABEL_28:
    v16 = 52 * v15;
    goto LABEL_4;
  }
  v19 = 0;
  v20 = 52;
  v18 = 0;
LABEL_5:
  v21 = &v13[(_DWORD)v18];
  if ( &v13[(_DWORD)v18] )
  {
    v22 = *a4;
    *(_DWORD *)&v13[(_DWORD)v18] = *a3;
    v23 = *a5;
    *((_DWORD *)v21 + 1) = v22;
    v24 = *a6;
    *((_DWORD *)v21 + 10) = v23;
    *((_DWORD *)v21 + 9) = v24;
    v25 = *a7;
    *((_DWORD *)v21 + 2) = 0;
    *((_DWORD *)v21 + 3) = 0;
    *((_DWORD *)v21 + 11) = v25;
    *((_DWORD *)v21 + 4) = 0;
    *((_DWORD *)v21 + 5) = 0;
    *((_DWORD *)v21 + 6) = 0;
    *((_DWORD *)v21 + 7) = 0;
    *((_DWORD *)v21 + 8) = 0;
    *((_DWORD *)v21 + 12) = 0;
  }
  if ( a2 != v8 )
  {
    v26 = v8 + 52;
    v27 = v8 + 52;
    v28 = v18;
    v49 = (82595525 * ((unsigned int)(a2 - (v8 + 52)) >> 2)) & 0x3FFFFFFF;
    do
    {
      if ( v28 )
      {
        v29 = *(v27 - 11);
        v30 = *(v27 - 13);
        v28[1] = *(v27 - 12);
        v28[2] = v29;
        v31 = *(v27 - 10);
        *v28 = v30;
        v28[3] = v31;
        v32 = *(v27 - 9);
        v28[6] = 0;
        v28[7] = 0;
        v28[5] = 0;
        v33 = *(v27 - 8);
        v28[4] = v32;
        v34 = *(v27 - 5);
        v28[5] = v33;
        *(v27 - 8) = 0;
        v35 = v28[6];
        v28[6] = *(v27 - 7);
        *(v27 - 7) = v35;
        v36 = v28[7];
        v28[7] = *(v27 - 6);
        *(v27 - 6) = v36;
        v28[8] = v34;
        v28[9] = *(v27 - 4);
        v28[10] = *(v27 - 3);
        v28[11] = *(v27 - 2);
        v28[12] = *(v27 - 1);
      }
      v28 += 13;
      v27 += 13;
    }
    while ( v28 != &v18[13 * v49 + 13] );
    v20 = (int)&v18[13 * v49 + 26];
    if ( a2 == v11 )
      goto LABEL_19;
    goto LABEL_13;
  }
  if ( a2 != v11 )
  {
LABEL_13:
    v37 = a2 + 52;
    v38 = v20 + 52 * ((82595525 * ((unsigned int)(v11 - v37) >> 2)) & 0x3FFFFFFF) + 52;
    do
    {
      if ( v20 )
      {
        v39 = *((_QWORD *)v37 - 6);
        v40 = *((_DWORD *)v37 - 10);
        v41 = *((_DWORD *)v37 - 9);
        *(_DWORD *)v20 = *((_DWORD *)v37 - 13);
        *(_DWORD *)(v20 + 4) = v39;
        v42 = *((_DWORD *)v37 - 8);
        LODWORD(v39) = *((_DWORD *)v37 - 7);
        *(_DWORD *)(v20 + 8) = HIDWORD(v39);
        HIDWORD(v39) = *((_DWORD *)v37 - 6);
        *(_DWORD *)(v20 + 12) = v40;
        *(_DWORD *)(v20 + 16) = v41;
        v43 = *((_DWORD *)v37 - 5);
        v44 = *((_DWORD *)v37 - 4);
        *(_DWORD *)(v20 + 20) = v42;
        *(_DWORD *)(v20 + 24) = v39;
        v45 = *((_DWORD *)v37 - 3);
        LODWORD(v39) = *((_DWORD *)v37 - 2);
        *(_DWORD *)(v20 + 28) = HIDWORD(v39);
        HIDWORD(v39) = *((_DWORD *)v37 - 1);
        *((_DWORD *)v37 - 8) = 0;
        *((_DWORD *)v37 - 7) = 0;
        *((_DWORD *)v37 - 6) = 0;
        *(_DWORD *)(v20 + 32) = v43;
        *(_DWORD *)(v20 + 36) = v44;
        *(_DWORD *)(v20 + 40) = v45;
        *(_QWORD *)(v20 + 44) = v39;
      }
      v20 += 52;
      v37 += 52;
    }
    while ( v20 != v38 );
    if ( v8 == v11 )
      goto LABEL_23;
    v26 = v8 + 52;
    do
    {
LABEL_19:
      v46 = (void *)*((_DWORD *)v8 + 5);
      if ( v46 )
        sub_339E64(v46);
      v47 = v26 == v11;
      v8 = v26;
      v26 += 52;
    }
    while ( !v47 );
LABEL_23:
    v11 = (char *)*a1;
  }
  if ( v11 )
    sub_339E64(v11);
  *a1 = v18;
  a1[1] = v20;
  a1[2] = v19;
}
