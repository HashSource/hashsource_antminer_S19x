int __fastcall sub_2F4260(int *a1, int a2, int a3, char *src)
{
  _DWORD *v5; // r1
  int *v6; // r7
  void *v7; // r0
  _DWORD *v8; // r3
  int v9; // r4
  int *i; // r6
  unsigned int v11; // r0
  unsigned int v12; // r1
  int *v13; // r5
  int v14; // r2
  unsigned int v15; // r4
  unsigned int v16; // r8
  unsigned int v17; // r0
  unsigned int v18; // r1
  size_t v19; // r2
  int v20; // r10
  int v21; // r2
  unsigned int v22; // r3
  char *v23; // r6
  char *v24; // r10
  int v25; // r5
  int v26; // r5
  int v27; // r2
  unsigned int v28; // r3
  int v29; // r5
  unsigned int v30; // r3
  int v31; // r9
  int *v32; // r7
  int v33; // r0
  int v34; // r6
  int v35; // r3
  int v36; // r3
  int v37; // r2
  int v38; // r2
  int v39; // lr
  int v40; // r12
  int v41; // r6
  int v42; // r0
  int v43; // r2
  int v44; // r1
  int v45; // lr
  int v46; // r3
  int v47; // r0
  unsigned int v48; // r3
  unsigned int *v49; // r2
  unsigned int v50; // r3
  int v51; // r10
  unsigned int v52; // r1
  int v53; // r9
  bool v54; // zf
  int v55; // r1
  unsigned int v56; // r5
  unsigned int v57; // r6
  int v58; // r8
  int v59; // r6
  int v60; // r2
  int v62; // r6
  int v63; // r2
  int v64; // r3
  int v65; // r4
  unsigned int v66; // r2
  unsigned __int8 *v67; // r7
  int v68; // r5
  size_t v69; // r0
  unsigned __int8 *v70; // r9
  int v71; // t1
  unsigned __int8 v72; // r3
  int v73; // r6
  unsigned __int8 *v74; // r0
  char *v75; // r5
  const __int16 *v76; // r1
  int v77; // r3
  char *v78; // r6
  unsigned int v79; // r5
  int v80; // t1
  int v81; // r3
  int v82; // r3
  unsigned int v83; // r3
  char *v84; // r6
  int v85; // r9
  int v86; // r10
  int v87; // r3
  int v88; // r3
  int v89; // r2
  int v90; // r3
  int v91; // t1
  int v92; // r3
  int v93; // t1
  int v94; // r0
  int v95; // r2
  int v96; // r3
  int v98; // [sp+14h] [bp-30h]
  unsigned int v99; // [sp+14h] [bp-30h]
  int v100; // [sp+14h] [bp-30h]
  _DWORD *v103; // [sp+20h] [bp-24h]
  int v104; // [sp+24h] [bp-20h]
  int v105; // [sp+24h] [bp-20h]
  int v106; // [sp+24h] [bp-20h]
  unsigned int v107; // [sp+24h] [bp-20h]
  unsigned int v108; // [sp+24h] [bp-20h]
  unsigned int v109; // [sp+24h] [bp-20h]
  int v110; // [sp+28h] [bp-1Ch]
  unsigned int v111; // [sp+30h] [bp-14h]
  int v112; // [sp+30h] [bp-14h]
  _DWORD *v113; // [sp+34h] [bp-10h]

  if ( (*(_WORD *)(a3 + 24) & 0x380) != 0x180 )
    return sub_2ADDE8(
             (int)a1,
             *(_DWORD **)(a3 + 60),
             src,
             *(_DWORD *)(a3 + 56),
             *(unsigned int *)(a3 + 56),
             *(_DWORD *)(a3 + 36));
  v110 = (*(int (__fastcall **)(int *, int))(*(_DWORD *)(a1[1] + 444) + 300))(a1, a3);
  if ( !v110 )
    sub_2A6BBC("elf-eh-frame.c", 1930);
  v5 = *(_DWORD **)(a2 + 28);
  v6 = *(int **)(*(_DWORD *)(a3 + 140) + 136);
  v103 = v5 + 42;
  v113 = v5;
  v7 = (void *)v5[48];
  if ( !v5[47] )
    goto LABEL_5;
  if ( !v7 )
  {
    v64 = v5[46];
    v65 = *(_DWORD *)(a2 + 28);
    v5[44] = 0;
    v7 = sub_2AB368(12 * v64);
    *(_DWORD *)(v65 + 192) = v7;
LABEL_5:
    v8 = v103;
    if ( !v7 )
      v8 = 0;
    v103 = v8;
  }
  v9 = (int)&v6[8 * *v6 + 2];
  for ( i = (int *)v9; ; i -= 8 )
  {
    v13 = i;
    if ( v6 + 2 == i )
      break;
    if ( (*((_BYTE *)i - 5) & 2) == 0 )
    {
      v11 = *(i - 3);
      v12 = *(i - 4);
      if ( v11 > v12 )
        memmove(&src[v11], &src[v12], *(i - 5));
    }
  }
  v14 = *v6;
  v15 = v9 - ((v9 - (_DWORD)i) & 0xFFFFFFE0);
  v16 = v15 + 32 * *v6;
  if ( (unsigned int)i < v16 )
  {
    do
    {
      while ( 1 )
      {
        if ( (*((_BYTE *)v13 + 27) & 2) == 0 )
        {
          v17 = v13[5];
          v18 = v13[4];
          if ( v17 < v18 )
            break;
        }
        v16 = v15 + 32 * v14;
        v13 += 8;
        if ( v16 <= (unsigned int)v13 )
          goto LABEL_20;
      }
      v19 = v13[3];
      v13 += 8;
      memmove(&src[v17], &src[v18], v19);
      v14 = *v6;
      v16 = v15 + 32 * *v6;
    }
    while ( v16 > (unsigned int)v13 );
  }
LABEL_20:
  if ( v15 < v16 )
  {
    while ( 1 )
    {
LABEL_21:
      if ( (*(_BYTE *)(v15 + 27) & 2) != 0 )
        goto LABEL_64;
      v20 = *(_DWORD *)(v15 + 12);
      if ( v20 == 4 )
      {
        if ( v15 == v16 - 32 )
          goto LABEL_64;
        v15 += 32;
        sub_2A6BBC("elf-eh-frame.c", 1971);
        if ( v15 >= v16 )
          return sub_2ADDE8(
                   (int)a1,
                   *(_DWORD **)(a3 + 60),
                   src,
                   *(_DWORD *)(a3 + 56),
                   *(unsigned int *)(a3 + 56),
                   *(_DWORD *)(a3 + 36));
      }
      else
      {
        v21 = *(_DWORD *)(v15 + 20);
        v22 = v15;
        v23 = &src[v21];
        v24 = &src[v21 + v20];
        do
        {
          v22 += 32;
          if ( v22 >= v16 )
          {
            v25 = *(_DWORD *)(a3 + 36);
            goto LABEL_27;
          }
        }
        while ( (*(_BYTE *)(v22 + 27) & 2) != 0 );
        v25 = *(_DWORD *)(v22 + 20);
LABEL_27:
        v26 = v25 - v21;
        (*(void (__fastcall **)(int, char *))(a1[1] + 48))(v26 - 4, &src[v21]);
        v27 = *(_DWORD *)(v15 + 12);
        if ( v27 != v26 )
          memset(v24, 0, v26 - v27);
        v28 = *(unsigned __int8 *)(v15 + 27);
        if ( (v28 & 1) != 0 )
        {
          v66 = *(unsigned __int8 *)(v15 + 6);
          if ( (v28 & 8) != 0 || (v66 & 0xA) != 0 )
          {
            v67 = (unsigned __int8 *)(v23 + 9);
            v68 = (v28 >> 2) & 1;
            v106 = (v28 >> 3) & 1 | (v66 >> 1) & 4 | v66 & 2;
            v99 = v106;
            if ( (v66 & 0x20) != 0 )
              v68 = ((v28 >> 2) & 1) + 1;
            v69 = strlen(v23 + 9) + 1;
            v70 = &v67[v69];
            if ( &v67[v69] < (unsigned __int8 *)v24 )
            {
              ++v70;
              if ( (v67[v69] & 0x80u) != 0 )
              {
                while ( v24 != (char *)v70 )
                {
                  v71 = (char)*v70++;
                  if ( v71 >= 0 )
                    goto LABEL_169;
                }
LABEL_94:
                v70 = (unsigned __int8 *)v24;
              }
              else
              {
LABEL_169:
                if ( v24 > (char *)v70 )
                {
                  v90 = (char)*v70++;
                  if ( v90 < 0 )
                  {
                    while ( v24 != (char *)v70 )
                    {
                      v91 = (char)*v70++;
                      if ( v91 >= 0 )
                        goto LABEL_173;
                    }
                    goto LABEL_94;
                  }
LABEL_173:
                  if ( v24 > (char *)v70 )
                  {
                    v92 = (char)*v70++;
                    if ( v92 < 0 )
                    {
                      while ( v24 != (char *)v70 )
                      {
                        v93 = (char)*v70++;
                        if ( v93 >= 0 )
                          goto LABEL_95;
                      }
                      goto LABEL_94;
                    }
                  }
                }
              }
            }
LABEL_95:
            if ( v23[9] == 122 )
            {
              v72 = *v70;
              v67 = (unsigned __int8 *)(v23 + 10);
              *v70++ = v72 + v68;
            }
            v73 = v68;
            v112 = 2 * v68;
            memmove(&v70[2 * v68], v70, v24 - (char *)v70);
            v74 = &v67[v68];
            v75 = (char *)&v70[v68];
            memmove(v74, v67, v70 - v67);
            if ( (*(_BYTE *)(v15 + 27) & 4) != 0 )
            {
              ++v75;
              *v67++ = 122;
              v70[v73] = v73 - 1;
            }
            if ( (*(_BYTE *)(v15 + 6) & 0x20) != 0 )
            {
              if ( (v106 & 1) == 0 )
                sub_2A6BBC("elf-eh-frame.c", 2033);
              *v67++ = 82;
              v77 = v110 - 2;
              if ( (unsigned int)(v110 - 2) > 6 )
                v77 = 16;
              else
                v76 = L"\n\v";
              if ( (unsigned int)(v110 - 2) <= 6 )
                LOBYTE(v77) = *((_BYTE *)v76 + v77) | 0x10;
              *v75++ = v77;
              v99 = v106 & 0xFFFFFFFE;
            }
            if ( v99 )
            {
              v78 = v75;
              v79 = v99;
              while ( 2 )
              {
                v80 = *v67++;
                switch ( v80 )
                {
                  case 'L':
                    if ( (v79 & 2) != 0 )
                    {
                      v88 = *(unsigned __int8 *)(v15 + 25);
                      if ( (unsigned __int8)*v78 != v88 )
                      {
                        sub_2A6BBC("elf-eh-frame.c", 2045);
                        LOBYTE(v88) = *v78;
                      }
                      if ( (v88 & 0x7F) == 0 )
                      {
                        switch ( v110 )
                        {
                          case 4:
                            LOBYTE(v88) = v88 | 0xB;
                            break;
                          case 8:
                            LOBYTE(v88) = v88 | 0xC;
                            break;
                          case 2:
                            LOBYTE(v88) = v88 | 0xA;
                            break;
                        }
                      }
                      v79 &= ~2u;
                      *v78 = v88 | 0x10;
                    }
                    goto LABEL_151;
                  case 'P':
                    v83 = (unsigned __int8)*v78;
                    if ( (*(_BYTE *)(v15 + 6) & 4) != 0 )
                    {
                      if ( (v83 & 0x7F) == 0 )
                      {
                        switch ( v110 )
                        {
                          case 4:
                            v83 |= 0xBu;
                            break;
                          case 8:
                            v83 |= 0xCu;
                            break;
                          case 2:
                            v83 |= 0xAu;
                            break;
                        }
                      }
                      v83 |= 0x10u;
                      *v78 = v83;
                    }
                    v84 = v78 + 1;
                    if ( (v83 & 0x60) == 0x60 )
                    {
                      v85 = 0;
                    }
                    else
                    {
                      v107 = v83;
                      v85 = sub_2F18A4(v83, v110);
                      v100 = v85;
                      v83 = v107;
                      if ( v85 )
                        goto LABEL_131;
                    }
                    v109 = v83;
                    v100 = 0;
                    sub_2A6BBC("elf-eh-frame.c", 2056);
                    v83 = v109;
LABEL_131:
                    v86 = v83 & 0x70;
                    if ( (v86 == 16) != ((*(unsigned __int8 *)(v15 + 6) >> 3) & 1) )
                    {
                      v108 = v83;
                      sub_2A6BBC("elf-eh-frame.c", 2058);
                      v83 = v108;
                    }
                    if ( v86 == 80 )
                      v84 = &src[-v100 & (v84 - src - 1 + v100)];
                    if ( (v79 & 4) != 0 )
                    {
                      v94 = sub_2F1AF0(a1 + 1, (int)v84, v85, (v83 >> 3) & 1);
                      if ( (*(_BYTE *)(v15 + 6) & 4) != 0 )
                        v95 = v94 - (*(_DWORD *)(*(_DWORD *)(a3 + 60) + 28) + *(_DWORD *)(a3 + 56) + v84 - src);
                      else
                        v95 = *(_DWORD *)(v15 + 16) - *(_DWORD *)(v15 + 20) - v112 + v94;
                      v79 &= ~4u;
                      sub_2F1B90((int)(a1 + 1), (int)v84, v95, v85);
                    }
                    v78 = &v84[v100];
LABEL_137:
                    if ( v79 )
                      continue;
LABEL_138:
                    v15 += 32;
                    if ( v15 >= v16 )
                      return sub_2ADDE8(
                               (int)a1,
                               *(_DWORD **)(a3 + 60),
                               src,
                               *(_DWORD *)(a3 + 56),
                               *(unsigned int *)(a3 + 56),
                               *(_DWORD *)(a3 + 36));
                    goto LABEL_21;
                  case 'R':
                    if ( (v79 & 1) != 0 )
                    {
                      v87 = *(unsigned __int8 *)(v15 + 24);
                      if ( (unsigned __int8)*v78 != v87 )
                      {
                        sub_2A6BBC("elf-eh-frame.c", 2086);
                        LOBYTE(v87) = *v78;
                      }
                      if ( (v87 & 0x7F) == 0 )
                      {
                        switch ( v110 )
                        {
                          case 4:
                            LOBYTE(v87) = v87 | 0xB;
                            break;
                          case 8:
                            LOBYTE(v87) = v87 | 0xC;
                            break;
                          case 2:
                            LOBYTE(v87) = v87 | 0xA;
                            break;
                        }
                      }
                      v79 &= ~1u;
                      *v78 = v87 | 0x10;
                    }
LABEL_151:
                    ++v78;
                    if ( !v79 )
                      goto LABEL_138;
                    continue;
                  case 'S':
                    goto LABEL_137;
                  default:
                    sub_2A6BBC("elf-eh-frame.c", 2095);
                    continue;
                }
              }
            }
          }
        }
        else
        {
          v29 = *(_DWORD *)v15;
          (*(void (__fastcall **)(int, char *))(a1[1] + 48))(
            *(_DWORD *)(a3 + 56)
          + 4
          + *(_DWORD *)(v15 + 20)
          - *(_DWORD *)(*(_DWORD *)v15 + 20)
          - *(_DWORD *)(**(_DWORD **)v15 + 56),
            v23 + 4);
          if ( (*(_BYTE *)a2 & 3) != 2 )
          {
            v30 = *(unsigned __int8 *)(v15 + 24);
            v98 = (int)(v23 + 8);
            if ( (v30 & 0x60) == 0x60 )
            {
              v104 = 0;
              v31 = 0;
            }
            else
            {
              v31 = sub_2F18A4(v30, v110);
              v104 = v31;
            }
            v32 = a1 + 1;
            v33 = sub_2F1AF0(a1 + 1, v98, v31, (v30 >> 3) & 1);
            v34 = v33;
            if ( v33 )
            {
              v35 = *(_BYTE *)(v15 + 24) & 0x70;
              switch ( v35 )
              {
                case 32:
                  if ( v103 )
                  {
                    sub_2A6BBC("elf-eh-frame.c", 2125);
                    v36 = v34;
                  }
                  else
                  {
LABEL_37:
                    v36 = v33;
                  }
                  break;
                case 48:
                  v81 = *(_DWORD *)(a1[33] + 12);
                  if ( v81 != 56 )
                  {
                    if ( v81 == 62 )
                    {
                      v96 = *(_DWORD *)(a1[40] + 524);
                      if ( !v96 )
                      {
                        sub_2A6BBC("elf-eh-frame.c", 2132);
                        v96 = *(_DWORD *)(a1[40] + 524);
                      }
                      v36 = v34 + v96;
                      break;
                    }
                    if ( v81 != 9 )
                      (*(void (__fastcall **)(const char *))(*(_DWORD *)(a2 + 24) + 44))("%P: DW_EH_PE_datarel unspecified for this architecture.\n");
                  }
                  v82 = v113[29];
                  if ( !v82 || (unsigned int)*(unsigned __int8 *)(v82 + 12) - 3 > 1 )
                  {
                    sub_2A6BBC("elf-eh-frame.c", 2146);
                    v82 = v113[29];
                  }
                  v36 = v34
                      + *(_DWORD *)(v82 + 24)
                      + *(_DWORD *)(*(_DWORD *)(v82 + 20) + 56)
                      + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v82 + 20) + 60) + 28);
                  break;
                case 16:
                  v89 = *(_DWORD *)(v15 + 16);
                  v36 = *(_DWORD *)(a3 + 56) + 8 + *(_DWORD *)(*(_DWORD *)(a3 + 60) + 28) + v89 + v33;
                  v34 = v89 - *(_DWORD *)(v15 + 20) + v33;
                  break;
                default:
                  goto LABEL_37;
              }
              if ( (*(_BYTE *)(v15 + 27) & 8) != 0 )
                v34 += -8 - *(_DWORD *)(a3 + 56) - *(_DWORD *)(*(_DWORD *)(a3 + 60) + 28) - *(_DWORD *)(v15 + 20);
              v37 = v34;
              v34 = v36;
              sub_2F1B90((int)v32, v98, v37, v31);
            }
            if ( v103 )
            {
              v38 = v31;
              v39 = v103[6];
              v31 = (int)v103;
              v40 = 3 * v103[1];
              *(_DWORD *)(v39 + 4 * v40) = v34;
              v41 = v39 + 4 * v40;
              v42 = sub_2F1AF0(v32, v98 + v104, v38, 0);
              v43 = v103[1];
              v44 = v103[6];
              v45 = *(_DWORD *)(a3 + 56);
              v46 = *(_DWORD *)(*(_DWORD *)(a3 + 60) + 28);
              *(_DWORD *)(v41 + 4) = v42;
              v47 = *(_DWORD *)(v15 + 20);
              v103[1] = v43 + 1;
              *(_DWORD *)(v44 + 12 * v43 + 8) = v46 + v45 + v47;
            }
            v48 = *(unsigned __int8 *)(v15 + 25);
            if ( (v48 & 0x70) == 0x10 || (*(_BYTE *)(v29 + 6) & 2) != 0 )
            {
              if ( (v48 & 0x60) == 0x60 )
                v31 = 0;
              v62 = v98 + *(unsigned __int8 *)(v15 + 26);
              if ( (v48 & 0x60) != 0x60 )
                v31 = sub_2F18A4(*(_BYTE *)(v15 + 25), v110);
              v63 = sub_2F1AF0(v32, v62, v31, (v48 >> 3) & 1);
              if ( v63 )
              {
                if ( (*(_BYTE *)(v15 + 25) & 0x70) == 0x10 )
                {
                  sub_2F1B90((int)v32, v62, v63 + *(_DWORD *)(v15 + 16) - *(_DWORD *)(v15 + 20), v31);
                }
                else
                {
                  if ( (*(_BYTE *)(v29 + 6) & 2) != 0 )
                    v63 += -8
                         - *(_DWORD *)(a3 + 56)
                         - *(_DWORD *)(*(_DWORD *)(a3 + 60) + 28)
                         - *(_DWORD *)(v15 + 20)
                         - *(unsigned __int8 *)(v15 + 26);
                  sub_2F1B90((int)v32, v62, v63, v31);
                }
              }
            }
            else if ( (*(_BYTE *)(v15 + 27) & 4) != 0 )
            {
              memmove((void *)(v98 + 2 * v104 + 1), (const void *)(v98 + 2 * v104), (size_t)&v24[-v98 + -2 * v104]);
              *(_BYTE *)(v98 + 2 * v104) = 0;
            }
            v49 = *(unsigned int **)(v15 + 28);
            if ( v49 )
            {
              v50 = *(unsigned __int8 *)(v15 + 24);
              if ( (v50 & 0x60) == 0x60 )
                v51 = 0;
              else
                v51 = sub_2F18A4(*(_BYTE *)(v15 + 24), v110);
              v52 = *(unsigned __int8 *)(v15 + 27);
              v53 = *(_DWORD *)(v15 + 20);
              v54 = (v52 & 1) == 0;
              v55 = (v52 >> 2) & 1;
              if ( !v54 )
              {
                if ( (*(_BYTE *)(v15 + 6) & 0x20) != 0 )
                  ++v55;
                v53 += v55;
              }
              v105 = v55 + v53 + 8;
              if ( *v49 )
              {
                v56 = 1;
                v111 = v16;
                while ( 1 )
                {
                  v57 = v49[v56];
                  v58 = 4 * v56++;
                  v59 = v98 + v57;
                  v60 = sub_2F1AF0(v32, v59, v51, (v50 >> 3) & 1);
                  if ( v60 )
                  {
                    if ( (*(_BYTE *)(v15 + 24) & 0x70) == 0x10 )
                      v60 += *(_DWORD *)(v15 + 16) + 8 - v105;
                    if ( (*(_BYTE *)(v15 + 27) & 8) != 0 )
                      v60 -= *(_DWORD *)(*(_DWORD *)(a3 + 60) + 28)
                           + *(_DWORD *)(a3 + 56)
                           + v105
                           + *(_DWORD *)(*(_DWORD *)(v15 + 28) + v58);
                    sub_2F1B90((int)v32, v59, v60, v51);
                  }
                  v49 = *(unsigned int **)(v15 + 28);
                  if ( *v49 < v56 )
                    break;
                  v50 = *(unsigned __int8 *)(v15 + 24);
                }
                v16 = v111;
              }
            }
          }
        }
LABEL_64:
        v15 += 32;
        if ( v15 >= v16 )
          return sub_2ADDE8(
                   (int)a1,
                   *(_DWORD **)(a3 + 60),
                   src,
                   *(_DWORD *)(a3 + 56),
                   *(unsigned int *)(a3 + 56),
                   *(_DWORD *)(a3 + 36));
      }
    }
  }
  return sub_2ADDE8(
           (int)a1,
           *(_DWORD **)(a3 + 60),
           src,
           *(_DWORD *)(a3 + 56),
           *(unsigned int *)(a3 + 56),
           *(_DWORD *)(a3 + 36));
}
