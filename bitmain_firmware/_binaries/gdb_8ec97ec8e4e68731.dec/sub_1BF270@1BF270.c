void __fastcall sub_1BF270(void **a1, char *a2, _DWORD *a3, _DWORD *a4)
{
  char *v8; // r11
  _DWORD *v9; // r5
  unsigned int v10; // r0
  unsigned int v11; // r8
  size_t v12; // r8
  char *v13; // r0
  char *v14; // r3
  _DWORD *v15; // r7
  int v16; // r8
  char *v17; // r3
  _DWORD *v18; // r1
  _DWORD *v19; // r2
  int v20; // r0
  int v21; // r12
  _DWORD *v22; // r1
  _DWORD *v23; // r2
  int v24; // r0
  int v25; // r0
  int v26; // r2
  _DWORD *v27; // r3
  _DWORD *v28; // r1
  _DWORD *v29; // r0
  _DWORD *v30; // r8
  _DWORD *v31; // lr
  int v32; // r0
  char *v33; // r2
  char *v34; // r4
  unsigned int v35; // r3
  char *v36; // r2
  char *v37; // r12
  int v38; // r1
  char *v39; // r12
  char *v40; // r1
  int v41; // r5
  int v42; // r2
  int v43; // r2
  _DWORD *v44; // r4
  _DWORD *v45; // r9
  _DWORD *v46; // r0
  void *v47; // r0
  void *v48; // r3
  int v49; // r5
  int v50; // r12
  int v51; // r2
  int v52; // r5
  int v53; // lr
  int v54; // r12
  int v55; // r10
  int v56; // r9
  int v57; // r0
  int v58; // r10
  int v59; // r9
  int v60; // r8
  int v61; // lr
  int v62; // r12
  int v63; // r2
  int v64; // lr
  int v65; // r12
  int v66; // r1
  char *v67; // [sp+4h] [bp-8h]

  v8 = (char *)(a2 - (_BYTE *)*a1);
  v9 = a2;
  v10 = -1431655765 * (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 4);
  if ( !v10 )
  {
    v11 = 1;
    goto LABEL_44;
  }
  v11 = 2 * v10;
  if ( v10 > 2 * v10 || v11 > 0x5555555 )
  {
    v12 = -16;
LABEL_4:
    v13 = (char *)sub_9836C(v12);
    v14 = &v13[v12];
    v15 = v13;
    v16 = (int)(v13 + 48);
    v67 = v14;
    goto LABEL_5;
  }
  if ( v11 )
  {
LABEL_44:
    v12 = 48 * v11;
    goto LABEL_4;
  }
  v15 = 0;
  v67 = 0;
  v16 = 48;
LABEL_5:
  v17 = &v8[(_DWORD)v15];
  if ( &v8[(_DWORD)v15] )
  {
    v18 = a3 + 2;
    v19 = (_DWORD *)*a3;
    *(_DWORD *)&v8[(_DWORD)v15] = v17 + 8;
    if ( v19 == a3 + 2 )
    {
      v61 = a3[3];
      v62 = a3[4];
      *((_DWORD *)v17 + 2) = *v18;
      v63 = a3[5];
      *((_DWORD *)v17 + 3) = v61;
      *((_DWORD *)v17 + 4) = v62;
      *((_DWORD *)v17 + 5) = v63;
    }
    else
    {
      v20 = a3[2];
      *(_DWORD *)v17 = v19;
      *((_DWORD *)v17 + 2) = v20;
    }
    *((_BYTE *)a3 + 8) = 0;
    v21 = a3[1];
    *a3 = v18;
    a3[1] = 0;
    v23 = a4 + 2;
    v22 = (_DWORD *)*a4;
    *((_DWORD *)v17 + 1) = v21;
    *((_DWORD *)v17 + 6) = v17 + 32;
    if ( v22 == a4 + 2 )
    {
      v64 = a4[3];
      v65 = a4[4];
      *((_DWORD *)v17 + 8) = *v23;
      v66 = a4[5];
      *((_DWORD *)v17 + 9) = v64;
      *((_DWORD *)v17 + 10) = v65;
      *((_DWORD *)v17 + 11) = v66;
    }
    else
    {
      v24 = a4[2];
      *((_DWORD *)v17 + 6) = v22;
      *((_DWORD *)v17 + 8) = v24;
    }
    v25 = a4[1];
    *a4 = v23;
    a4[1] = 0;
    *((_DWORD *)v17 + 7) = v25;
    *((_BYTE *)a4 + 8) = 0;
  }
  if ( *a1 != a2 )
  {
    v26 = (int)*a1 + 48;
    v27 = v15;
    v28 = &v15[12 * ((178956971 * ((unsigned int)&a2[-v26] >> 4)) & 0xFFFFFFF) + 12];
    while ( 1 )
    {
      v29 = (_DWORD *)(v26 - 40);
      if ( v27 )
      {
        *v27 = v27 + 2;
        v30 = *(_DWORD **)(v26 - 48);
        if ( v30 == v29 )
        {
          v58 = *(_DWORD *)(v26 - 36);
          v59 = *(_DWORD *)(v26 - 32);
          v60 = *(_DWORD *)(v26 - 28);
          v27[2] = *v29;
          v27[3] = v58;
          v27[4] = v59;
          v27[5] = v60;
        }
        else
        {
          *v27 = v30;
          v27[2] = *(_DWORD *)(v26 - 40);
        }
        v31 = (_DWORD *)(v26 - 16);
        v27[1] = *(_DWORD *)(v26 - 44);
        *(_DWORD *)(v26 - 48) = v29;
        *(_DWORD *)(v26 - 44) = 0;
        *(_BYTE *)(v26 - 40) = 0;
        v27[6] = v27 + 8;
        v32 = *(_DWORD *)(v26 - 24);
        if ( v26 - 16 == v32 )
        {
          v55 = *(_DWORD *)(v26 - 12);
          v56 = *(_DWORD *)(v26 - 8);
          v57 = *(_DWORD *)(v26 - 4);
          v27[8] = *v31;
          v27[9] = v55;
          v27[10] = v56;
          v27[11] = v57;
        }
        else
        {
          v27[6] = v32;
          v27[8] = *(_DWORD *)(v26 - 16);
        }
        v27[7] = *(_DWORD *)(v26 - 20);
        *(_DWORD *)(v26 - 24) = v31;
        *(_DWORD *)(v26 - 20) = 0;
        *(_BYTE *)(v26 - 16) = 0;
      }
      v26 += 48;
      if ( v27 + 12 == v28 )
        break;
      v27 += 12;
    }
    v16 = (int)(v27 + 24);
  }
  v33 = (char *)a1[1];
  if ( v33 != a2 )
  {
    v34 = a2 + 48;
    v35 = v16 + 48 * (((178956971 * ((unsigned int)(v33 - v34) >> 4)) & 0xFFFFFFF) + 1);
    do
    {
      v36 = v34 - 40;
      if ( v16 )
      {
        v37 = (char *)*((_DWORD *)v34 - 12);
        *(_DWORD *)v16 = v16 + 8;
        if ( v37 == v36 )
        {
          v52 = *((_DWORD *)v34 - 9);
          v53 = *((_DWORD *)v34 - 8);
          *(_DWORD *)(v16 + 8) = *(_DWORD *)v36;
          v54 = *((_DWORD *)v34 - 7);
          *(_DWORD *)(v16 + 12) = v52;
          *(_DWORD *)(v16 + 16) = v53;
          *(_DWORD *)(v16 + 20) = v54;
        }
        else
        {
          v38 = *((_DWORD *)v34 - 10);
          *(_DWORD *)v16 = v37;
          *(_DWORD *)(v16 + 8) = v38;
        }
        v39 = (char *)*((_DWORD *)v34 - 6);
        v40 = v34 - 16;
        v41 = *((_DWORD *)v34 - 11);
        *((_DWORD *)v34 - 12) = v36;
        *(v34 - 40) = 0;
        *(_DWORD *)(v16 + 4) = v41;
        *((_DWORD *)v34 - 11) = 0;
        *(_DWORD *)(v16 + 24) = v16 + 32;
        if ( v39 == v34 - 16 )
        {
          v49 = *((_DWORD *)v34 - 3);
          v50 = *((_DWORD *)v34 - 2);
          *(_DWORD *)(v16 + 32) = *(_DWORD *)v40;
          v51 = *((_DWORD *)v34 - 1);
          *(_DWORD *)(v16 + 36) = v49;
          *(_DWORD *)(v16 + 40) = v50;
          *(_DWORD *)(v16 + 44) = v51;
        }
        else
        {
          v42 = *((_DWORD *)v34 - 4);
          *(_DWORD *)(v16 + 24) = v39;
          *(_DWORD *)(v16 + 32) = v42;
        }
        v43 = *((_DWORD *)v34 - 5);
        *((_DWORD *)v34 - 6) = v40;
        *(v34 - 16) = 0;
        *(_DWORD *)(v16 + 28) = v43;
        *((_DWORD *)v34 - 5) = 0;
      }
      v16 += 48;
      v34 += 48;
    }
    while ( v16 != v35 );
    v9 = a1[1];
  }
  v44 = *a1;
  if ( *a1 != v9 )
  {
    v45 = v44 + 8;
    do
    {
      v46 = (_DWORD *)v44[6];
      if ( v46 != v45 )
        sub_339E64(v46);
      v47 = (void *)*(v45 - 8);
      v48 = v44 + 2;
      v45 += 12;
      v44 += 12;
      if ( v47 != v48 )
        sub_339E64(v47);
    }
    while ( v9 != v44 );
    v9 = *a1;
  }
  if ( v9 )
    sub_339E64(v9);
  *a1 = v15;
  a1[1] = (void *)v16;
  a1[2] = v67;
}
