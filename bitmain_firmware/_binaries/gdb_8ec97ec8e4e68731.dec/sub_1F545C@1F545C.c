void __fastcall sub_1F545C(_DWORD *a1, _DWORD *a2, int *a3)
{
  _DWORD *v4; // r12
  _DWORD *v7; // r6
  char *v8; // r9
  unsigned int v9; // r3
  unsigned int v10; // r2
  size_t v11; // r5
  char *v12; // r0
  char *v13; // r3
  _DWORD *v14; // r8
  int v15; // r5
  int v16; // r0
  int v17; // r1
  int v18; // r2
  char *v19; // r3
  char *v20; // r12
  _DWORD *v21; // r3
  _DWORD *v22; // r10
  char *v23; // r5
  int v24; // r0
  int v25; // r1
  int v26; // r2
  char *v27; // r2
  char *v28; // r2
  char *v29; // r1
  int v30; // r1
  int v31; // r2
  int v32; // r2
  int v33; // r2
  _BYTE *v34; // r3
  char *v35; // r4
  unsigned int v36; // lr
  char *v37; // r12
  char *v38; // r6
  int v39; // r0
  int v40; // r1
  int v41; // r2
  int v42; // r2
  char *v43; // r1
  char *v44; // r2
  int v45; // r6
  int v46; // r0
  __int64 v47; // r0
  int v48; // r6
  int v49; // r12
  int v50; // r2
  _DWORD *v51; // r4
  void *v52; // r0
  _DWORD *v53; // r0
  _DWORD *v54; // r0
  _DWORD *v55; // r3
  int v56; // r9
  int v57; // r5
  int v58; // r1
  int v59; // r0
  int v60; // r1
  int v61; // r2
  int v62; // r6
  int v63; // r12
  int v64; // r1
  int v65; // r0
  int v66; // r1
  int v67; // r2
  char *v68; // [sp+4h] [bp-20h]

  v4 = (_DWORD *)*a1;
  v7 = a2;
  v8 = (char *)a2 - *a1;
  v9 = 678152731 * ((a1[1] - *a1) >> 2);
  if ( !v9 )
  {
    v10 = 1;
    goto LABEL_41;
  }
  v10 = 1356305462 * ((a1[1] - *a1) >> 2);
  if ( v9 > 2 * v9 || v10 > 0x35E50D7 )
  {
    v11 = -44;
LABEL_4:
    v12 = (char *)sub_9836C(v11);
    v4 = (_DWORD *)*a1;
    v13 = &v12[v11];
    v14 = v12;
    v15 = (int)(v12 + 76);
    v68 = v13;
    goto LABEL_5;
  }
  if ( v10 )
  {
LABEL_41:
    v11 = 76 * v10;
    goto LABEL_4;
  }
  v68 = 0;
  v15 = 76;
  v14 = 0;
LABEL_5:
  v16 = *a3;
  v17 = a3[1];
  v18 = a3[2];
  v19 = &v8[(_DWORD)v14];
  if ( &v8[(_DWORD)v14] )
  {
    *((_DWORD *)v19 + 3) = v19 + 20;
    *((_DWORD *)v19 + 4) = 0;
    v19[20] = 0;
    *((_DWORD *)v19 + 10) = 0;
    v19[44] = 0;
    *(_DWORD *)v19 = v16;
    *((_DWORD *)v19 + 1) = v17;
    *((_DWORD *)v19 + 2) = v18;
    *((_DWORD *)v19 + 16) = 0;
    *((_DWORD *)v19 + 17) = 0;
    *((_DWORD *)v19 + 18) = 0;
    *((_DWORD *)v19 + 9) = v19 + 44;
    *((_DWORD *)v19 + 15) = -1;
  }
  if ( a2 != v4 )
  {
    v20 = (char *)(v4 + 19);
    v21 = v14;
    v22 = &v14[19 * ((678152731 * ((unsigned int)((char *)a2 - v20) >> 2)) & 0x3FFFFFFF) + 19];
    while ( 1 )
    {
      v23 = v20 - 56;
      if ( v21 )
      {
        v24 = *((_DWORD *)v20 - 19);
        v25 = *((_DWORD *)v20 - 18);
        v26 = *((_DWORD *)v20 - 17);
        v21[3] = v21 + 5;
        *v21 = v24;
        v21[1] = v25;
        v21[2] = v26;
        v27 = (char *)*((_DWORD *)v20 - 16);
        if ( v27 == v23 )
        {
          v59 = *((_DWORD *)v20 - 13);
          v60 = *((_DWORD *)v20 - 12);
          v61 = *((_DWORD *)v20 - 11);
          v21[5] = *(_DWORD *)v23;
          v21[6] = v59;
          v21[7] = v60;
          v21[8] = v61;
        }
        else
        {
          v21[3] = v27;
          v21[5] = *((_DWORD *)v20 - 14);
        }
        v28 = v20 - 32;
        v21[4] = *((_DWORD *)v20 - 15);
        *((_DWORD *)v20 - 16) = v23;
        *((_DWORD *)v20 - 15) = 0;
        *(v20 - 56) = 0;
        v21[9] = v21 + 11;
        v29 = (char *)*((_DWORD *)v20 - 10);
        if ( v29 == v20 - 32 )
        {
          v56 = *((_DWORD *)v20 - 7);
          v57 = *((_DWORD *)v20 - 6);
          v58 = *((_DWORD *)v20 - 5);
          v21[11] = *(_DWORD *)v28;
          v21[12] = v56;
          v21[13] = v57;
          v21[14] = v58;
        }
        else
        {
          v21[9] = v29;
          v21[11] = *((_DWORD *)v20 - 8);
        }
        v21[10] = *((_DWORD *)v20 - 9);
        *(v20 - 32) = 0;
        *((_DWORD *)v20 - 10) = v28;
        v30 = *((_DWORD *)v20 - 4);
        *((_DWORD *)v20 - 9) = 0;
        v21[17] = 0;
        v21[18] = 0;
        v21[16] = 0;
        v31 = *((_DWORD *)v20 - 3);
        v21[15] = v30;
        v21[16] = v31;
        *((_DWORD *)v20 - 3) = 0;
        v32 = v21[17];
        v21[17] = *((_DWORD *)v20 - 2);
        *((_DWORD *)v20 - 2) = v32;
        v33 = v21[18];
        v21[18] = *((_DWORD *)v20 - 1);
        *((_DWORD *)v20 - 1) = v33;
      }
      v20 += 76;
      if ( v21 + 19 == v22 )
        break;
      v21 += 19;
    }
    v15 = (int)(v21 + 38);
  }
  v34 = (_BYTE *)a1[1];
  if ( v34 != (_BYTE *)a2 )
  {
    v35 = (char *)(a2 + 19);
    v36 = v15 + 76 * ((678152731 * ((unsigned int)(v34 - v35) >> 2)) & 0x3FFFFFFF) + 76;
    do
    {
      v37 = v35 - 56;
      if ( v15 )
      {
        v38 = (char *)*((_DWORD *)v35 - 16);
        v39 = *((_DWORD *)v35 - 19);
        v40 = *((_DWORD *)v35 - 18);
        v41 = *((_DWORD *)v35 - 17);
        *(_DWORD *)(v15 + 12) = v15 + 20;
        *(_DWORD *)v15 = v39;
        *(_DWORD *)(v15 + 4) = v40;
        *(_DWORD *)(v15 + 8) = v41;
        if ( v38 == v37 )
        {
          v65 = *((_DWORD *)v35 - 13);
          v66 = *((_DWORD *)v35 - 12);
          *(_DWORD *)(v15 + 20) = *(_DWORD *)v37;
          v67 = *((_DWORD *)v35 - 11);
          *(_DWORD *)(v15 + 24) = v65;
          *(_DWORD *)(v15 + 28) = v66;
          *(_DWORD *)(v15 + 32) = v67;
        }
        else
        {
          v42 = *((_DWORD *)v35 - 14);
          *(_DWORD *)(v15 + 12) = v38;
          *(_DWORD *)(v15 + 20) = v42;
        }
        v43 = (char *)*((_DWORD *)v35 - 10);
        v44 = v35 - 32;
        v45 = *((_DWORD *)v35 - 15);
        *((_DWORD *)v35 - 16) = v37;
        *(v35 - 56) = 0;
        *(_DWORD *)(v15 + 16) = v45;
        *((_DWORD *)v35 - 15) = 0;
        *(_DWORD *)(v15 + 36) = v15 + 44;
        if ( v43 == v35 - 32 )
        {
          v62 = *((_DWORD *)v35 - 7);
          v63 = *((_DWORD *)v35 - 6);
          *(_DWORD *)(v15 + 44) = *(_DWORD *)v44;
          v64 = *((_DWORD *)v35 - 5);
          *(_DWORD *)(v15 + 48) = v62;
          *(_DWORD *)(v15 + 52) = v63;
          *(_DWORD *)(v15 + 56) = v64;
        }
        else
        {
          v46 = *((_DWORD *)v35 - 8);
          *(_DWORD *)(v15 + 36) = v43;
          *(_DWORD *)(v15 + 44) = v46;
        }
        v47 = *(_QWORD *)(v35 - 12);
        v48 = *((_DWORD *)v35 - 9);
        v49 = *((_DWORD *)v35 - 4);
        *((_DWORD *)v35 - 10) = v44;
        v50 = *((_DWORD *)v35 - 1);
        *(v35 - 32) = 0;
        *(_DWORD *)(v15 + 40) = v48;
        *((_DWORD *)v35 - 9) = 0;
        *(_DWORD *)(v15 + 60) = v49;
        *(_DWORD *)(v15 + 64) = v47;
        *((_DWORD *)v35 - 3) = 0;
        *(_DWORD *)(v15 + 68) = HIDWORD(v47);
        *((_DWORD *)v35 - 2) = 0;
        *((_DWORD *)v35 - 1) = 0;
        *(_DWORD *)(v15 + 72) = v50;
      }
      v15 += 76;
      v35 += 76;
    }
    while ( v15 != v36 );
    v7 = (_DWORD *)a1[1];
  }
  v51 = (_DWORD *)*a1;
  if ( (_DWORD *)*a1 != v7 )
  {
    do
    {
      v52 = (void *)v51[16];
      if ( v52 )
        sub_339E64(v52);
      v53 = (_DWORD *)v51[9];
      if ( v53 != v51 + 11 )
        sub_339E64(v53);
      v54 = (_DWORD *)v51[3];
      v55 = v51 + 5;
      v51 += 19;
      if ( v54 != v55 )
        sub_339E64(v54);
    }
    while ( v51 != v7 );
    v7 = (_DWORD *)*a1;
  }
  if ( v7 )
    sub_339E64(v7);
  *a1 = v14;
  a1[1] = v15;
  a1[2] = v68;
}
