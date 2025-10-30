void __fastcall sub_1AFDD0(char **a1, char *a2, int *a3)
{
  char *v4; // r11
  char *v7; // r6
  unsigned int v8; // r4
  size_t v9; // r4
  char *v10; // r0
  _DWORD *v11; // r9
  int v12; // r4
  char *v13; // r12
  int v14; // r0
  int v15; // r1
  int v16; // r2
  int v17; // r3
  int *v18; // r7
  int *v19; // r12
  int v20; // r0
  int v21; // r1
  int v22; // r2
  int v23; // r3
  int v24; // r1
  char *v25; // r6
  _DWORD *i; // r4
  char *v27; // lr
  int v28; // r0
  int v29; // r1
  int v30; // r2
  int v31; // r3
  int *v32; // lr
  int v33; // r0
  int v34; // r1
  int v35; // r2
  int v36; // r3
  int v37; // r1
  char *v38; // r5
  unsigned int v39; // r6
  bool v40; // zf
  _DWORD *v41; // r12
  char *v42; // lr
  int v43; // r0
  int v44; // r1
  int v45; // r2
  int v46; // r3
  int *v47; // lr
  int *v48; // r12
  int v49; // r0
  int v50; // r1
  int v51; // r2
  int v52; // r3
  int v53; // r1
  char *v54; // [sp+0h] [bp-Ch]
  char *v55; // [sp+4h] [bp-8h]

  v4 = *a1;
  v7 = (char *)(a2 - *a1);
  v54 = a1[1];
  if ( !(-858993459 * ((v54 - *a1) >> 3)) )
  {
    v8 = 1;
    goto LABEL_23;
  }
  v8 = -1717986918 * ((v54 - *a1) >> 3);
  if ( -858993459 * ((v54 - *a1) >> 3) > v8 || v8 > 0x6666666 )
  {
    v9 = -16;
LABEL_4:
    v10 = (char *)sub_9836C(v9);
    v4 = *a1;
    v55 = &v10[v9];
    v11 = v10;
    v12 = (int)(v10 + 40);
    v54 = a1[1];
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_23:
    v9 = 40 * v8;
    goto LABEL_4;
  }
  v11 = 0;
  v55 = 0;
  v12 = 40;
LABEL_5:
  v13 = &v7[(_DWORD)v11];
  if ( &v7[(_DWORD)v11] )
  {
    v14 = *a3;
    v15 = a3[1];
    v16 = a3[2];
    v17 = a3[3];
    v18 = a3 + 4;
    *(_DWORD *)v13 = v14;
    *((_DWORD *)v13 + 1) = v15;
    *((_DWORD *)v13 + 2) = v16;
    *((_DWORD *)v13 + 3) = v17;
    v19 = (int *)(v13 + 16);
    v20 = *v18;
    v21 = v18[1];
    v22 = v18[2];
    v23 = v18[3];
    v18 += 4;
    *v19 = v20;
    v19[1] = v21;
    v19[2] = v22;
    v19[3] = v23;
    v19 += 4;
    v24 = v18[1];
    *v19 = *v18;
    v19[1] = v24;
  }
  if ( a2 != v4 )
  {
    v25 = v4 + 40;
    for ( i = v11; ; i += 10 )
    {
      v27 = v25 - 40;
      v25 += 40;
      if ( i )
      {
        v28 = *(_DWORD *)v27;
        v29 = *((_DWORD *)v27 + 1);
        v30 = *((_DWORD *)v27 + 2);
        v31 = *((_DWORD *)v27 + 3);
        v32 = (int *)(v27 + 16);
        *i = v28;
        i[1] = v29;
        i[2] = v30;
        i[3] = v31;
        v33 = *v32;
        v34 = v32[1];
        v35 = v32[2];
        v36 = v32[3];
        v32 += 4;
        i[4] = v33;
        i[5] = v34;
        i[6] = v35;
        i[7] = v36;
        v37 = v32[1];
        i[8] = *v32;
        i[9] = v37;
      }
      if ( i + 10 == &v11[10 * ((214748365 * ((unsigned int)(a2 - (v4 + 40)) >> 3)) & 0x1FFFFFFF) + 10] )
        break;
    }
    v12 = (int)(i + 20);
  }
  if ( a2 != v54 )
  {
    v38 = a2 + 40;
    v39 = v12 + 40 * (((214748365 * ((unsigned int)(v54 - v38) >> 3)) & 0x1FFFFFFF) + 1);
    do
    {
      v41 = (_DWORD *)v12;
      v40 = v12 == 0;
      v42 = v38 - 40;
      v12 += 40;
      v38 += 40;
      if ( !v40 )
      {
        v43 = *(_DWORD *)v42;
        v44 = *((_DWORD *)v42 + 1);
        v45 = *((_DWORD *)v42 + 2);
        v46 = *((_DWORD *)v42 + 3);
        v47 = (int *)(v42 + 16);
        *v41 = v43;
        v41[1] = v44;
        v41[2] = v45;
        v41[3] = v46;
        v48 = v41 + 4;
        v49 = *v47;
        v50 = v47[1];
        v51 = v47[2];
        v52 = v47[3];
        v47 += 4;
        *v48 = v49;
        v48[1] = v50;
        v48[2] = v51;
        v48[3] = v52;
        v48 += 4;
        v53 = v47[1];
        *v48 = *v47;
        v48[1] = v53;
      }
    }
    while ( v12 != v39 );
  }
  if ( v4 )
    sub_339E64(v4);
  *a1 = (char *)v11;
  a1[1] = (char *)v12;
  a1[2] = v55;
}
