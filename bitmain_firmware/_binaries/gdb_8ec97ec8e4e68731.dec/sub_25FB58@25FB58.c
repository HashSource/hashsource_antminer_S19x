void __fastcall sub_25FB58(
        int *a1,
        char *a2,
        unsigned int a3,
        unsigned int a4,
        _DWORD *a5,
        _DWORD *a6,
        _DWORD *a7,
        unsigned int **a8,
        _DWORD *a9,
        unsigned int *a10)
{
  int v13; // r0
  _DWORD *v14; // r6
  unsigned int *v15; // r0
  unsigned int *v16; // r4
  unsigned int *v17; // r5
  bool v18; // zf
  unsigned int v19; // r2
  int v20; // r2
  int v21; // r3
  __int16 *v22; // r1
  int v23; // r4
  int v24; // r5
  int v25; // r12
  __int64 v26; // r0
  int v27; // r12
  unsigned int v28; // r3
  __int64 v29; // kr00_8
  int v30; // r1
  int v31; // r0
  int v32; // r3
  int v33; // r3
  unsigned __int64 v34; // kr08_8
  int v35; // r0
  unsigned int *v36; // r11
  char *v37; // r0
  int v38; // r2
  int v39; // r3
  __int16 *v40; // r1
  int v41; // r5
  int v42; // r4
  __int16 *v43; // r3
  char *v44; // r0
  int v45; // r2
  int v46; // r3
  unsigned int v48; // [sp+1Ch] [bp-10h]
  int v49; // [sp+1Ch] [bp-10h]
  int v50; // [sp+24h] [bp-8h]

  v13 = sub_171258(a5);
  v14 = (_DWORD *)v13;
  if ( !*a6 )
  {
    v38 = *(_DWORD *)(v13 + 24);
    v39 = *(_WORD *)(v38 + 2) & 0x380;
    v40 = v39 == 128 ? *(__int16 **)(v38 + 28) : &word_3B4A2C;
    v41 = v40[2] - 1;
    if ( v41 >= 0 )
    {
      v42 = 12 * v41;
      while ( 1 )
      {
        v18 = v39 == 128;
        v43 = &word_3B4A2C;
        if ( v18 )
          v43 = *(__int16 **)(v38 + 28);
        v44 = *(char **)(*((_DWORD *)v43 + 8) + v42);
        if ( v44 )
        {
          if ( !sub_25BD2C(v44, a2) )
            break;
        }
        --v41;
        v42 -= 12;
        if ( v41 == -1 )
          goto LABEL_2;
        v38 = v14[6];
        v39 = *(_WORD *)(v38 + 2) & 0x380;
      }
      v45 = v14[6];
      if ( (*(_WORD *)(v45 + 2) & 0x380) == 0x80 )
        v42 += *(_DWORD *)(*(_DWORD *)(v45 + 28) + 32);
      v46 = *(_DWORD *)(v42 + 4);
      *a6 = *(_DWORD *)(v42 + 8);
      *a7 = v46;
      *a9 = v14;
      *a10 = a3;
      a10[1] = a4;
      sub_172A40(v14, v41);
    }
  }
LABEL_2:
  v15 = sub_15852C((int)v14, (int)a2);
  v16 = *a8;
  v17 = v15;
  v18 = *a8 == 0;
  if ( *a8 )
    v18 = v15 == 0;
  if ( !v18 )
  {
    v49 = *v16 + *v15;
    v36 = sub_99FE0(0, -v49);
    *v36 = v49;
    v37 = (char *)memcpy(v36 + 2, v16 + 2, 4 * *v16);
    memcpy(&v37[4 * *v16], v17 + 2, 4 * *v17);
    v16 = *a8;
    if ( !*a8 )
      goto LABEL_33;
    goto LABEL_10;
  }
  if ( v16 )
  {
    v19 = *v16;
    if ( !*v16 )
    {
      v36 = 0;
LABEL_10:
      free(v16);
LABEL_11:
      *a8 = 0;
      if ( !v17 )
        goto LABEL_12;
      goto LABEL_33;
    }
LABEL_9:
    v48 = v19;
    v36 = sub_99FE0(0, -v19);
    *v36 = v48;
    memcpy(v36 + 2, v16 + 2, 4 * v48);
    v16 = *a8;
    if ( !*a8 )
      goto LABEL_11;
    goto LABEL_10;
  }
  if ( !v15 )
  {
    v36 = 0;
    goto LABEL_12;
  }
  v19 = *v15;
  if ( *v15 )
  {
    v16 = v15;
    goto LABEL_9;
  }
  v36 = 0;
LABEL_33:
  free(v17);
LABEL_12:
  v20 = v14[6];
  *a8 = v36;
  v21 = *(_WORD *)(v20 + 2) & 0x380;
  if ( v21 == 128 )
    v22 = *(__int16 **)(v20 + 28);
  else
    v22 = &word_3B4A2C;
  v23 = *v22 - 1;
  if ( v23 >= 0 )
  {
    v24 = 24 * v23;
    if ( v21 == 128 )
      goto LABEL_22;
LABEL_19:
    v25 = *(_DWORD *)(v20 + 24);
    v26 = *(_QWORD *)(v25 + v24);
    v27 = v25 + v24;
    v28 = (((SHIDWORD(v26) >> 31) & 7) + (unsigned int)v26) >> 3;
    v29 = ((SHIDWORD(v26) >> 31) & 7) + v26;
    v30 = (unsigned __int64)(v26 / 8) >> 32;
    v31 = v28 | (HIDWORD(v29) << 29);
    while ( 1 )
    {
      --v23;
      v24 -= 24;
      sub_25FB58(a1, a2, v31 + a3, a4 + __CFADD__(v31, a3) + v30, *(_DWORD *)(v27 + 12), a6, a7, a8, a9, a10);
      if ( v23 == -1 )
        break;
      v20 = v14[6];
      if ( (*(_WORD *)(v20 + 2) & 0x380) != 0x80 )
        goto LABEL_19;
LABEL_22:
      v32 = *(_DWORD *)(v20 + 28);
      if ( (__int16 *)v32 == &word_3B4A2C )
        goto LABEL_19;
      v33 = *(_DWORD *)(v32 + 16);
      if ( !v33 || (((int)*(unsigned __int8 *)(v33 + (v23 >> 3)) >> (v23 & 7)) & 1) == 0 )
        goto LABEL_19;
      v50 = sub_26E718(*a1, v23 & 7);
      v34 = __PAIR64__(a4, a3) + sub_26BC80(*a1);
      v35 = ((int (__fastcall *)(int))loc_26C09C)(*a1);
      v31 = sub_FC59C((int)v14, v23, v50, v34, v34, SHIDWORD(v34), v35, *a1);
      v30 = v31 >> 31;
      v27 = *(_DWORD *)(v14[6] + 24) + v24;
    }
  }
}
