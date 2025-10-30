void __fastcall sub_23C554(void **a1, char *a2, char **a3, char **a4)
{
  char *v8; // r8
  _DWORD *v9; // r5
  unsigned int v10; // r0
  unsigned int v11; // r7
  size_t v12; // r0
  char *v13; // r11
  char *v14; // r8
  int v15; // r2
  char *v16; // r11
  int v17; // r2
  _BYTE *v18; // r3
  void *v19; // r2
  _BYTE *v20; // r3
  void *v21; // r2
  _DWORD *v22; // r3
  int v23; // r2
  _DWORD *v24; // r1
  _DWORD *v25; // lr
  int v26; // r12
  _DWORD *v27; // r12
  int v28; // lr
  char *v29; // r2
  _DWORD *v30; // r8
  char *v31; // r4
  unsigned int v32; // r0
  char **v33; // r2
  int v34; // r0
  int v35; // r3
  char *v36; // r12
  char *v37; // lr
  char *v38; // r5
  char *v39; // r5
  char *v40; // r12
  char *v41; // r10
  char *v42; // lr
  char *v43; // lr
  _DWORD *v44; // r4
  _DWORD *v45; // r9
  _DWORD *v46; // r0
  _DWORD *v47; // r0
  char *v48; // r10
  char *v49; // r5
  char *v50; // lr
  char *v51; // r10
  char *v52; // r9
  char *v53; // r12
  int v54; // r10
  int v55; // r9
  int v56; // lr
  int v57; // r10
  int v58; // r9
  int v59; // r12
  _DWORD *v60; // [sp+4h] [bp-38h]
  void *ptr[2]; // [sp+8h] [bp-34h] BYREF
  _BYTE v62[16]; // [sp+10h] [bp-2Ch] BYREF
  void *v63[2]; // [sp+20h] [bp-1Ch] BYREF
  _BYTE v64[20]; // [sp+28h] [bp-14h] BYREF

  v8 = (char *)(a2 - (_BYTE *)*a1);
  v9 = a2;
  v10 = -1431655765 * (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 4);
  if ( !v10 )
  {
    v11 = 1;
    goto LABEL_49;
  }
  v11 = 2 * v10;
  if ( v10 > 2 * v10 )
  {
    v11 = 89478485;
    v12 = -16;
LABEL_4:
    v60 = sub_9836C(v12);
    goto LABEL_5;
  }
  if ( v11 > 0x5555555 )
  {
    v11 = 89478485;
    v12 = -16;
    goto LABEL_4;
  }
  if ( v11 )
  {
LABEL_49:
    v12 = 48 * v11;
    goto LABEL_4;
  }
  v60 = 0;
LABEL_5:
  v13 = *a3;
  v63[0] = v64;
  v14 = &v8[(_DWORD)v60];
  if ( v13 )
    v15 = (int)&v13[strlen(v13)];
  else
    v15 = -1;
  sub_2350F8(v63, v13, v15);
  v16 = *a4;
  ptr[0] = v62;
  if ( v16 )
    v17 = (int)&v16[strlen(v16)];
  else
    v17 = -1;
  sub_2350F8(ptr, v16, v17);
  if ( v14 )
  {
    v18 = v63[0];
    v19 = v63[1];
    *(_DWORD *)v14 = v14 + 8;
    sub_2350F8(v14, v18, (int)v19 + (_DWORD)v18);
    v20 = ptr[0];
    v21 = ptr[1];
    *((_DWORD *)v14 + 6) = v14 + 32;
    sub_2350F8((_DWORD *)v14 + 6, v20, (int)v21 + (_DWORD)v20);
  }
  if ( ptr[0] != v62 )
    sub_339E64(ptr[0]);
  if ( v63[0] != v64 )
    sub_339E64(v63[0]);
  if ( *a1 == a2 )
  {
    v22 = v60;
  }
  else
  {
    v23 = (int)*a1 + 48;
    v22 = v60;
    v24 = &v60[12 * ((178956971 * ((unsigned int)&a2[-v23] >> 4)) & 0xFFFFFFF) + 12];
    do
    {
      if ( v22 )
      {
        v25 = (_DWORD *)(v23 - 40);
        *v22 = v22 + 2;
        v26 = *(_DWORD *)(v23 - 48);
        if ( v23 - 40 == v26 )
        {
          v57 = *(_DWORD *)(v23 - 36);
          v58 = *(_DWORD *)(v23 - 32);
          v59 = *(_DWORD *)(v23 - 28);
          v22[2] = *v25;
          v22[3] = v57;
          v22[4] = v58;
          v22[5] = v59;
        }
        else
        {
          *v22 = v26;
          v22[2] = *(_DWORD *)(v23 - 40);
        }
        v27 = (_DWORD *)(v23 - 16);
        v22[1] = *(_DWORD *)(v23 - 44);
        *(_DWORD *)(v23 - 48) = v25;
        *(_DWORD *)(v23 - 44) = 0;
        *(_BYTE *)(v23 - 40) = 0;
        v22[6] = v22 + 8;
        v28 = *(_DWORD *)(v23 - 24);
        if ( v28 == v23 - 16 )
        {
          v54 = *(_DWORD *)(v23 - 12);
          v55 = *(_DWORD *)(v23 - 8);
          v56 = *(_DWORD *)(v23 - 4);
          v22[8] = *v27;
          v22[9] = v54;
          v22[10] = v55;
          v22[11] = v56;
        }
        else
        {
          v22[6] = v28;
          v22[8] = *(_DWORD *)(v23 - 16);
        }
        v22[7] = *(_DWORD *)(v23 - 20);
        *(_DWORD *)(v23 - 24) = v27;
        *(_DWORD *)(v23 - 20) = 0;
        *(_BYTE *)(v23 - 16) = 0;
      }
      v22 += 12;
      v23 += 48;
    }
    while ( v22 != v24 );
  }
  v29 = (char *)a1[1];
  v30 = v22 + 12;
  if ( v29 != a2 )
  {
    v31 = a2 + 48;
    v32 = (unsigned int)(v29 - v31) >> 4;
    v33 = (char **)(v22 + 12);
    v34 = (178956971 * v32) & 0xFFFFFFF;
    v35 = (int)&v22[12 * v34 + 24];
    do
    {
      if ( v33 )
      {
        v36 = (char *)*((_DWORD *)v31 - 12);
        v37 = v31 - 40;
        *v33 = (char *)(v33 + 2);
        if ( v36 == v31 - 40 )
        {
          v51 = (char *)*((_DWORD *)v31 - 9);
          v52 = (char *)*((_DWORD *)v31 - 8);
          v33[2] = *(char **)v37;
          v53 = (char *)*((_DWORD *)v31 - 7);
          v33[3] = v51;
          v33[4] = v52;
          v33[5] = v53;
        }
        else
        {
          v38 = (char *)*((_DWORD *)v31 - 10);
          *v33 = v36;
          v33[2] = v38;
        }
        v39 = (char *)*((_DWORD *)v31 - 6);
        v40 = v31 - 16;
        v41 = (char *)*((_DWORD *)v31 - 11);
        *((_DWORD *)v31 - 12) = v37;
        *(v31 - 40) = 0;
        v33[1] = v41;
        *((_DWORD *)v31 - 11) = 0;
        v33[6] = (char *)(v33 + 8);
        if ( v39 == v31 - 16 )
        {
          v48 = (char *)*((_DWORD *)v31 - 3);
          v49 = (char *)*((_DWORD *)v31 - 2);
          v33[8] = *(char **)v40;
          v50 = (char *)*((_DWORD *)v31 - 1);
          v33[9] = v48;
          v33[10] = v49;
          v33[11] = v50;
        }
        else
        {
          v42 = (char *)*((_DWORD *)v31 - 4);
          v33[6] = v39;
          v33[8] = v42;
        }
        v43 = (char *)*((_DWORD *)v31 - 5);
        *((_DWORD *)v31 - 6) = v40;
        *(v31 - 16) = 0;
        v33[7] = v43;
        *((_DWORD *)v31 - 5) = 0;
      }
      v33 += 12;
      v31 += 48;
    }
    while ( v33 != (char **)v35 );
    v9 = a1[1];
    v30 += 12 * v34 + 12;
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
      v47 = (_DWORD *)*(v45 - 8);
      if ( v47 != v44 + 2 )
        sub_339E64(v47);
      v44 += 12;
      v45 += 12;
    }
    while ( v44 != v9 );
    v9 = *a1;
  }
  if ( v9 )
    sub_339E64(v9);
  *a1 = v60;
  a1[1] = v30;
  a1[2] = &v60[12 * v11];
}
