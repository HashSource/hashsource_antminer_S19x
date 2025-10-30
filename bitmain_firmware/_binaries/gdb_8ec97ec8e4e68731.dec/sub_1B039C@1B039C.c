void __fastcall sub_1B039C(char **a1, char *a2, _DWORD *a3, int *a4, int *a5)
{
  char *v6; // r11
  char *v10; // r10
  unsigned int v11; // r0
  unsigned int v12; // r4
  size_t v13; // r4
  char *v14; // r0
  _DWORD *v15; // r8
  int v16; // r4
  char *v17; // r1
  int v18; // lr
  int v19; // r0
  char *v20; // r6
  _DWORD *i; // r4
  char *v22; // lr
  int v23; // r0
  int v24; // r1
  int v25; // r2
  int v26; // r3
  int *v27; // lr
  int v28; // r0
  int v29; // r1
  int v30; // r2
  int v31; // r3
  int v32; // r1
  char *v33; // r5
  unsigned int v34; // r6
  bool v35; // zf
  _DWORD *v36; // r12
  char *v37; // lr
  int v38; // r0
  int v39; // r1
  int v40; // r2
  int v41; // r3
  int *v42; // lr
  int *v43; // r12
  int v44; // r0
  int v45; // r1
  int v46; // r2
  int v47; // r3
  int v48; // r1
  char *v49; // [sp+0h] [bp-Ch]
  char *v50; // [sp+4h] [bp-8h]

  v6 = *a1;
  v10 = (char *)(a2 - *a1);
  v49 = a1[1];
  v11 = -858993459 * ((v49 - *a1) >> 3);
  if ( !v11 )
  {
    v12 = 1;
    goto LABEL_23;
  }
  v12 = 2 * v11;
  if ( v11 > 2 * v11 || v12 > 0x6666666 )
  {
    v13 = -16;
LABEL_4:
    v14 = (char *)sub_9836C(v13);
    v6 = *a1;
    v50 = &v14[v13];
    v15 = v14;
    v16 = (int)(v14 + 40);
    v49 = a1[1];
    goto LABEL_5;
  }
  if ( v12 )
  {
LABEL_23:
    v13 = 40 * v12;
    goto LABEL_4;
  }
  v15 = 0;
  v50 = 0;
  v16 = 40;
LABEL_5:
  v17 = &v10[(_DWORD)v15];
  if ( &v10[(_DWORD)v15] )
  {
    v18 = *a4;
    v19 = *a5;
    *(_DWORD *)&v10[(_DWORD)v15] = *a3;
    *((_DWORD *)v17 + 1) = v18;
    *((_DWORD *)v17 + 4) = v19;
    *((_DWORD *)v17 + 2) = 0;
    *((_DWORD *)v17 + 5) = 0;
    *((_DWORD *)v17 + 6) = 0;
    *((_DWORD *)v17 + 7) = 0;
    *((_DWORD *)v17 + 8) = 0;
    v17[12] = 1;
    *((_DWORD *)v17 + 9) = -1;
  }
  if ( a2 != v6 )
  {
    v20 = v6 + 40;
    for ( i = v15; ; i += 10 )
    {
      v22 = v20 - 40;
      v20 += 40;
      if ( i )
      {
        v23 = *(_DWORD *)v22;
        v24 = *((_DWORD *)v22 + 1);
        v25 = *((_DWORD *)v22 + 2);
        v26 = *((_DWORD *)v22 + 3);
        v27 = (int *)(v22 + 16);
        *i = v23;
        i[1] = v24;
        i[2] = v25;
        i[3] = v26;
        v28 = *v27;
        v29 = v27[1];
        v30 = v27[2];
        v31 = v27[3];
        v27 += 4;
        i[4] = v28;
        i[5] = v29;
        i[6] = v30;
        i[7] = v31;
        v32 = v27[1];
        i[8] = *v27;
        i[9] = v32;
      }
      if ( i + 10 == &v15[10 * ((214748365 * ((unsigned int)(a2 - (v6 + 40)) >> 3)) & 0x1FFFFFFF) + 10] )
        break;
    }
    v16 = (int)(i + 20);
  }
  if ( a2 != v49 )
  {
    v33 = a2 + 40;
    v34 = v16 + 40 * (((214748365 * ((unsigned int)(v49 - v33) >> 3)) & 0x1FFFFFFF) + 1);
    do
    {
      v36 = (_DWORD *)v16;
      v35 = v16 == 0;
      v37 = v33 - 40;
      v16 += 40;
      v33 += 40;
      if ( !v35 )
      {
        v38 = *(_DWORD *)v37;
        v39 = *((_DWORD *)v37 + 1);
        v40 = *((_DWORD *)v37 + 2);
        v41 = *((_DWORD *)v37 + 3);
        v42 = (int *)(v37 + 16);
        *v36 = v38;
        v36[1] = v39;
        v36[2] = v40;
        v36[3] = v41;
        v43 = v36 + 4;
        v44 = *v42;
        v45 = v42[1];
        v46 = v42[2];
        v47 = v42[3];
        v42 += 4;
        *v43 = v44;
        v43[1] = v45;
        v43[2] = v46;
        v43[3] = v47;
        v43 += 4;
        v48 = v42[1];
        *v43 = *v42;
        v43[1] = v48;
      }
    }
    while ( v16 != v34 );
  }
  if ( v6 )
    sub_339E64(v6);
  *a1 = (char *)v15;
  a1[1] = (char *)v16;
  a1[2] = v50;
}
