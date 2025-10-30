int __fastcall sub_3EFD4(_DWORD *a1)
{
  unsigned int v1; // r5
  const char *v2; // r4
  size_t v3; // r0
  int v4; // r3
  size_t v5; // r6
  int v6; // r0
  unsigned __int8 *v7; // r9
  int v8; // lr
  int v9; // r2
  int v10; // r1
  int v11; // r4
  unsigned int v12; // r5
  unsigned int v13; // r3
  int v14; // r2
  unsigned int v15; // r1
  unsigned int v16; // r3
  int v17; // r2
  unsigned int v18; // r1
  unsigned int v19; // r3
  size_t v20; // r3
  int v21; // r0
  unsigned int v22; // r2
  unsigned int v23; // r7
  int v24; // r3
  unsigned int v25; // r2
  unsigned int v26; // r7
  int v27; // r3
  unsigned int v28; // r7
  _DWORD *v29; // r1
  int v30; // r2
  int v31; // r8
  int v32; // r5
  int v33; // r5
  int v34; // r3
  int v35; // r0
  int v36; // r2
  int v37; // r3
  int v38; // r1
  int result; // r0
  _DWORD *v40; // r5
  unsigned int v41; // r7
  size_t v42; // r0
  int v43; // r12
  unsigned int v44; // r11
  int v45; // r3
  unsigned __int8 *v46; // r10
  unsigned int v47; // r7
  unsigned __int8 *v48; // r2
  unsigned int v49; // r0
  unsigned int v50; // r1
  int v51; // r3
  unsigned int v52; // r0
  unsigned int v53; // r1
  int v54; // r3
  unsigned int v55; // r0
  unsigned int v56; // r1
  unsigned int v57; // r12
  int v58; // r3
  unsigned int v59; // r2
  unsigned int v60; // r1
  int v61; // r3
  unsigned int v62; // r2
  unsigned int v63; // r1
  int v64; // r3
  unsigned int v65; // r6
  int v66; // r7
  int v67; // r3
  _DWORD *v68; // r8
  __int64 v69; // r2
  int v70; // r3
  int v71; // r1
  _DWORD *v72; // r2
  __int64 v73; // r2
  int v74; // r3
  _DWORD *v75; // r8
  int v76; // r2
  int v77; // r10
  int v78; // r3
  unsigned int v79; // r6
  _DWORD *v80; // r7
  unsigned int v81; // r4
  _DWORD *v82; // r6
  int v83; // r4
  char *v84; // r9
  unsigned int v85; // r3
  int v86; // r2
  int v87; // r3
  _DWORD *v88; // r3
  unsigned int v89; // r2
  unsigned int v90; // r1
  bool v91; // cc
  int v92; // r2
  int v93; // r3
  unsigned __int8 *v94; // r11
  unsigned int v95; // r10
  void *v96; // r0
  void **v97; // r9
  void *v98; // r0
  const char *s2; // [sp+10h] [bp-Ch]
  char *s2a; // [sp+10h] [bp-Ch]
  char *s2b; // [sp+10h] [bp-Ch]

  v1 = -1640531527;
  v2 = *(const char **)(a1[1] + 8);
  s2 = v2;
  v3 = strlen(v2);
  v91 = v3 > 0xB;
  v4 = -17973521;
  v5 = v3;
  v6 = -1640531527;
  if ( v91 )
  {
    v7 = (unsigned __int8 *)(v2 + 12);
    v95 = v5;
    do
    {
      v8 = *(v7 - 6);
      v95 -= 12;
      v9 = *(v7 - 2);
      v10 = *(v7 - 10);
      v94 = v7;
      v11 = *(v7 - 7);
      v7 += 12;
      v12 = (v8 << 16) + (v11 << 8) + *(v7 - 20) + (*(v7 - 17) << 24) + v1;
      v13 = (v9 << 16) + (*(v7 - 15) << 8) + *(v7 - 16) + (*(v7 - 13) << 24) + v4;
      v14 = ((v10 << 16) + (*(v7 - 23) << 8) + *(v7 - 24) + (*(v7 - 21) << 24) - v12 - v13 + v6) ^ (v13 >> 13);
      v15 = (v12 - v13 - v14) ^ (v14 << 8);
      v16 = (v13 - v14 - v15) ^ (v15 >> 13);
      v17 = (v14 - v15 - v16) ^ (v16 >> 12);
      v18 = (v15 - v16 - v17) ^ (v17 << 16);
      v19 = (v16 - v17 - v18) ^ (v18 >> 5);
      v6 = (v17 - v18 - v19) ^ (v19 >> 3);
      v1 = (v18 - v19 - v6) ^ (v6 << 10);
      v4 = (v19 - v6 - v1) ^ (v1 >> 15);
    }
    while ( v95 > 0xB );
  }
  else
  {
    v94 = (unsigned __int8 *)v2;
    v95 = v5;
  }
  v20 = v5 + v4;
  switch ( v95 )
  {
    case 1u:
      goto LABEL_16;
    case 2u:
      goto LABEL_15;
    case 3u:
      goto LABEL_14;
    case 4u:
      goto LABEL_13;
    case 5u:
      goto LABEL_12;
    case 6u:
      goto LABEL_11;
    case 7u:
      goto LABEL_10;
    case 8u:
      goto LABEL_9;
    case 9u:
      goto LABEL_8;
    case 0xAu:
      goto LABEL_7;
    case 0xBu:
      v20 += v94[10] << 24;
LABEL_7:
      v20 += v94[9] << 16;
LABEL_8:
      v20 += v94[8] << 8;
LABEL_9:
      v1 += v94[7] << 24;
LABEL_10:
      v1 += v94[6] << 16;
LABEL_11:
      v1 += v94[5] << 8;
LABEL_12:
      v1 += v94[4];
LABEL_13:
      v6 += v94[3] << 24;
LABEL_14:
      v6 += v94[2] << 16;
LABEL_15:
      v6 += v94[1] << 8;
LABEL_16:
      v6 += *v94;
      break;
    default:
      break;
  }
  v21 = (v6 - v1 - v20) ^ (v20 >> 13);
  v22 = (v1 - v20 - v21) ^ (v21 << 8);
  v23 = (v20 - v21 - v22) ^ (v22 >> 13);
  v24 = (v21 - v22 - v23) ^ (v23 >> 12);
  v25 = (v22 - v23 - v24) ^ (v24 << 16);
  v26 = (v23 - v24 - v25) ^ (v25 >> 5);
  v27 = (v24 - v25 - v26) ^ (v26 >> 3);
  v28 = (v26 - v27 - ((v25 - v26 - v27) ^ (v27 << 10))) ^ (((v25 - v26 - v27) ^ (v27 << 10)) >> 15);
  if ( !dword_6A740
    || (v29 = *(_DWORD **)(dword_6A740 + 8), (v30 = *(_DWORD *)(*v29 + 12 * ((v29[1] - 1) & v28))) == 0)
    || (v31 = -v29[5], v32 = v30 - v29[5], v30 == v29[5]) )
  {
LABEL_46:
    v40 = sub_229BC(0x28u, "cgminer.c", "add_cgpu", 11283);
    sub_254E8(v40, *(const void **)(a1[1] + 8), 4u, (int)"cgminer.c", (int)"add_cgpu", 11284);
    v40[1] = 0;
    a1[2] = 0;
    v41 = -1640531527;
    v42 = strlen((const char *)v40);
    v43 = -17973521;
    s2a = (char *)v42;
    v44 = v42;
    v45 = -1640531527;
    if ( v42 <= 0xB )
    {
      v48 = (unsigned __int8 *)v40;
      v44 = v42;
    }
    else
    {
      v46 = (unsigned __int8 *)(v40 + 3);
      do
      {
        v44 -= 12;
        v47 = (*(v46 - 6) << 16) + (*(v46 - 7) << 8) + *(v46 - 8) + (*(v46 - 5) << 24) + v41;
        v48 = v46;
        v49 = (*(v46 - 10) << 16) + (*(v46 - 11) << 8) + *(v46 - 12) + (*(v46 - 9) << 24) - v47;
        v50 = (*(v46 - 2) << 16) + (*(v46 - 3) << 8) + *(v46 - 4) + (*(v46 - 1) << 24) + v43;
        v46 += 12;
        v51 = (v49 - v50 + v45) ^ (v50 >> 13);
        v52 = (v47 - v50 - v51) ^ (v51 << 8);
        v53 = (v50 - v51 - v52) ^ (v52 >> 13);
        v54 = (v51 - v52 - v53) ^ (v53 >> 12);
        v55 = (v52 - v53 - v54) ^ (v54 << 16);
        v56 = (v53 - v54 - v55) ^ (v55 >> 5);
        v45 = (v54 - v55 - v56) ^ (v56 >> 3);
        v41 = (v55 - v56 - v45) ^ (v45 << 10);
        v43 = (v56 - v45 - v41) ^ (v41 >> 15);
      }
      while ( v44 > 0xB );
    }
    v57 = (unsigned int)&s2a[v43];
    switch ( v44 )
    {
      case 1u:
        goto LABEL_60;
      case 2u:
        goto LABEL_59;
      case 3u:
        goto LABEL_58;
      case 4u:
        goto LABEL_57;
      case 5u:
        goto LABEL_56;
      case 6u:
        goto LABEL_55;
      case 7u:
        goto LABEL_54;
      case 8u:
        goto LABEL_53;
      case 9u:
        goto LABEL_52;
      case 0xAu:
        goto LABEL_51;
      case 0xBu:
        v57 += v48[10] << 24;
LABEL_51:
        v57 += v48[9] << 16;
LABEL_52:
        v57 += v48[8] << 8;
LABEL_53:
        v41 += v48[7] << 24;
LABEL_54:
        v41 += v48[6] << 16;
LABEL_55:
        v41 += v48[5] << 8;
LABEL_56:
        v41 += v48[4];
LABEL_57:
        v45 += v48[3] << 24;
LABEL_58:
        v45 += v48[2] << 16;
LABEL_59:
        v45 += v48[1] << 8;
LABEL_60:
        v45 += *v48;
        break;
      default:
        break;
    }
    v40[7] = v40;
    v58 = (v45 - v41 - v57) ^ (v57 >> 13);
    v59 = (v41 - v57 - v58) ^ (v58 << 8);
    v60 = (v57 - v58 - v59) ^ (v59 >> 13);
    v61 = (v58 - v59 - v60) ^ (v60 >> 12);
    v62 = (v59 - v60 - v61) ^ (v61 << 16);
    v63 = (v60 - v61 - v62) ^ (v62 >> 5);
    v64 = (v61 - v62 - v63) ^ (v63 >> 3);
    v65 = (v63 - v64 - ((v62 - v63 - v64) ^ (v64 << 10))) ^ (((v62 - v63 - v64) ^ (v64 << 10)) >> 15);
    v40[9] = v65;
    v66 = dword_6A740;
    v40[8] = strlen((const char *)v40);
    if ( v66 )
    {
      v67 = *(_DWORD *)(v66 + 8);
      v40[4] = 0;
      v68 = v40 + 2;
      v40[2] = v67;
      v40[3] = *(_DWORD *)(*(_DWORD *)(v66 + 8) + 16) - *(_DWORD *)(*(_DWORD *)(v66 + 8) + 20);
      *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v66 + 8) + 16) + 8) = v40;
      *(_DWORD *)(*(_DWORD *)(v66 + 8) + 16) = v40 + 2;
    }
    else
    {
      v40[4] = 0;
      v40[3] = 0;
      dword_6A740 = (int)v40;
      v96 = malloc(0x2Cu);
      v40[2] = v96;
      if ( !v96 )
        goto LABEL_96;
      memset(v96, 0, 0x2Cu);
      v68 = v40 + 2;
      *(_DWORD *)(v40[2] + 16) = v40 + 2;
      *(_DWORD *)(v40[2] + 4) = 32;
      *(_DWORD *)(v40[2] + 8) = 5;
      *(_DWORD *)(v40[2] + 20) = 8;
      v97 = (void **)v40[2];
      *v97 = malloc(0x180u);
      v98 = *(void **)v40[2];
      if ( !v98 )
        goto LABEL_96;
      memset(v98, 0, 0x180u);
      v66 = (int)v40;
      *(_DWORD *)(v40[2] + 40) = -1609490463;
    }
    ++*(_DWORD *)(*(_DWORD *)(v66 + 8) + 12);
    v69 = *(_QWORD *)*(_DWORD *)(v66 + 8);
    v70 = 12 * ((HIDWORD(v69) - 1) & v65);
    ++*(_DWORD *)(v69 + v70 + 4);
    LODWORD(v69) = *(_DWORD *)(**(_DWORD **)(v66 + 8) + v70);
    v40[5] = 0;
    v40[6] = v69;
    LODWORD(v69) = **(_DWORD **)(v66 + 8);
    v71 = *(_DWORD *)(v69 + v70);
    v72 = (_DWORD *)(v69 + v70);
    if ( v71 )
    {
      *(_DWORD *)(v71 + 12) = v68;
      v72 = (_DWORD *)(**(_DWORD **)(v66 + 8) + v70);
    }
    *v72 = v68;
    v73 = *(_QWORD *)(**(_DWORD **)(v66 + 8) + v70 + 4);
    if ( (unsigned int)v73 < 10 * (HIDWORD(v73) + 1) )
      goto LABEL_27;
    v74 = v40[2];
    if ( *(_DWORD *)(v74 + 36) == 1 )
      goto LABEL_27;
    v75 = calloc(24 * *(_DWORD *)(v74 + 4), 1u);
    if ( v75 )
    {
      v76 = v40[2];
      v77 = 0;
      *(_DWORD *)(v76 + 24) = (((2 * *(_DWORD *)(v76 + 4) - 1) & *(_DWORD *)(v76 + 12)) != 0)
                            + (*(_DWORD *)(v76 + 12) >> (*(_BYTE *)(v76 + 8) + 1));
      *(_DWORD *)(v40[2] + 28) = 0;
      v78 = v40[2];
      v79 = *(_DWORD *)(v78 + 4);
      if ( v79 )
      {
        for ( s2b = 0; (unsigned int)s2b < v79; ++s2b )
        {
          v80 = *(_DWORD **)(*(_DWORD *)v78 + v77);
          if ( v80 )
          {
            v81 = v79;
            while ( 1 )
            {
              v82 = (_DWORD *)v80[4];
              v83 = 3 * ((2 * v81 - 1) & v80[7]);
              v84 = (char *)&v75[v83];
              v85 = *((_DWORD *)v84 + 1) + 1;
              *((_DWORD *)v84 + 1) = v85;
              v86 = v40[2];
              if ( v85 > *(_DWORD *)(v86 + 24) )
              {
                ++*(_DWORD *)(v86 + 28);
                *((_DWORD *)v84 + 2) = sub_498D8(*((_DWORD *)v84 + 1), *(_DWORD *)(v40[2] + 24));
              }
              v80[3] = 0;
              v80[4] = v75[v83];
              v87 = v75[v83];
              if ( v87 )
                *(_DWORD *)(v87 + 12) = v80;
              v75[v83] = v80;
              v78 = v40[2];
              if ( !v82 )
                break;
              v81 = *(_DWORD *)(v78 + 4);
              v80 = v82;
            }
            v79 = *(_DWORD *)(v78 + 4);
          }
          v77 += 12;
        }
      }
      free(*(void **)v78);
      *(_DWORD *)(v40[2] + 4) *= 2;
      ++*(_DWORD *)(v40[2] + 8);
      *(_DWORD *)v40[2] = v75;
      v88 = (_DWORD *)v40[2];
      v89 = v88[7];
      v90 = v88[3];
      v91 = v89 > v90 >> 1;
      if ( v89 <= v90 >> 1 )
        v92 = 0;
      else
        v92 = v88[8];
      if ( v91 )
        ++v92;
      v88[8] = v92;
      v93 = v40[2];
      if ( *(_DWORD *)(v93 + 32) > 1u )
        *(_DWORD *)(v93 + 36) = 1;
      goto LABEL_27;
    }
LABEL_96:
    exit(-1);
  }
  while ( *(_DWORD *)(v32 + 36) != v28 || *(_DWORD *)(v32 + 32) != v5 || memcmp(*(const void **)(v32 + 28), s2, v5) )
  {
    v33 = *(_DWORD *)(v32 + 24);
    if ( v33 )
    {
      v32 = v33 + v31;
      if ( v32 )
        continue;
    }
    goto LABEL_46;
  }
  v34 = *(_DWORD *)(v32 + 4) + 1;
  *(_DWORD *)(v32 + 4) = v34;
  a1[2] = v34;
LABEL_27:
  if ( pthread_rwlock_wrlock(&stru_7680C) )
    sub_2EF84("add_cgpu", 11289);
  dword_7346C = (int)sub_22AD4((void *)dword_7346C, 4 * (dword_755C0 + dword_6A744 + 2), "cgminer.c", "add_cgpu", 11290);
  if ( pthread_rwlock_unlock(&stru_7680C) )
    sub_2FB24("add_cgpu", 11291);
  off_67ED8();
  if ( pthread_mutex_lock(&stru_766C4) )
    sub_2EFE0("add_cgpu", 11293);
  a1[58] = time(0);
  if ( pthread_mutex_unlock(&stru_766C4) )
    sub_2F03C("add_cgpu", 11295);
  v35 = off_67ED8();
  if ( byte_7347C )
    v37 = dword_6A744;
  else
    v37 = dword_755C0;
  if ( byte_7347C )
  {
    v35 = dword_755C0;
    v38 = v37 + 1;
    v36 = dword_7346C;
  }
  else
  {
    v38 = v37 + 1;
  }
  if ( byte_7347C )
    dword_6A744 = v38;
  else
    dword_755C0 = v38;
  if ( byte_7347C )
    v37 += v35;
  else
    v36 = dword_7346C;
  result = 1;
  *(_DWORD *)(v36 + 4 * v37) = a1;
  if ( dword_755C0 - dword_74498 > dword_6A748 )
    dword_6A748 = dword_755C0 - dword_74498;
  return result;
}
