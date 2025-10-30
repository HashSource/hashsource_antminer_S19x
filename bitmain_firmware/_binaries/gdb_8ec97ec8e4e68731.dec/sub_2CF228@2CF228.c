int __fastcall sub_2CF228(int a1, _DWORD *a2, const char *a3, int a4)
{
  int v4; // r8
  _DWORD *v6; // r4
  char *v9; // r5
  int v10; // r0
  _DWORD *v11; // r7
  _DWORD *v12; // r10
  int v13; // r1
  int v14; // r2
  int v15; // r3
  int v16; // r11
  int v17; // r1
  int v18; // r2
  int v19; // r3
  int v20; // r1
  int v21; // r2
  int v22; // r3
  int v23; // r1
  __int64 v24; // r2
  int v25; // lr
  char v26; // r12
  int v27; // r3
  int v28; // r2
  int v29; // r3
  int v30; // r1
  int v31; // r8
  int (__fastcall *v32)(int *, _DWORD *); // r3
  __int16 v33; // r11
  int v34; // r3
  int v35; // r10
  int v36; // r9
  int v37; // r2
  int v38; // r3
  unsigned int v39; // r0
  int v40; // r8
  int v41; // r12
  int v42; // r3
  int v43; // lr
  int v44; // r3
  int v45; // r5
  int v46; // r2
  int v47; // r0
  unsigned int v48; // r1
  unsigned int v49; // r1
  _DWORD *v50; // r2
  unsigned int v51; // r0
  int v52; // r3
  int v53; // r3
  int v54; // r3
  int v55; // r0
  int v56; // r3
  _BYTE *v57; // r2
  _DWORD *v58; // r11
  unsigned int v59; // r12
  unsigned int v60; // r9
  int *v61; // r3
  unsigned int v62; // r8
  int *v63; // r0
  int v64; // r2
  int v65; // t1
  unsigned int v66; // r1
  int v67; // r3
  int v68; // lr
  int v69; // r9
  _DWORD *v70; // r8
  int v71; // r0
  unsigned int v72; // r3
  unsigned int v73; // r2
  int v74; // r3
  int v75; // r2
  _DWORD *v76; // t1
  int v77; // r2
  int v78; // t1
  int v79; // r3
  int v80; // r3
  int v81; // r1
  int v82; // r0
  int v83; // r3
  unsigned int v84; // r1
  int v85; // r9
  char *v86; // r0
  int v87; // r3
  const char *v88; // r1
  size_t v89; // r2
  int v90; // r0
  int v91; // r3
  void *v92; // r0
  size_t v93; // r2
  unsigned int v94; // r8
  unsigned int v95; // r10
  unsigned int v96; // r4
  int v97; // r7
  unsigned int v98; // r3
  unsigned int v99; // r11
  unsigned int v100; // r1
  void *v101; // r0
  size_t v102; // r9
  int v103; // r0
  int v104; // r3
  unsigned int v105; // r1
  unsigned int v106; // r11
  unsigned int v107; // r11
  int v108; // r1
  unsigned int v109; // r2
  int v110; // r3
  unsigned int *v111; // r9
  int v112; // r4
  unsigned int v113; // r0
  int v114; // r3
  __int16 v115; // [sp+18h] [bp-54h]
  _DWORD *v116; // [sp+18h] [bp-54h]
  char *v117; // [sp+1Ch] [bp-50h]
  _DWORD *v118; // [sp+1Ch] [bp-50h]
  __int64 v119; // [sp+20h] [bp-4Ch]
  unsigned int v120; // [sp+20h] [bp-4Ch]
  int v121; // [sp+2Ch] [bp-40h]
  int v122; // [sp+34h] [bp-38h] BYREF
  char v123[4]; // [sp+38h] [bp-34h] BYREF
  int v124[5]; // [sp+3Ch] [bp-30h] BYREF
  void *ptr[7]; // [sp+50h] [bp-1Ch] BYREF

  if ( a2[11] )
    return 1;
  v6 = a2;
  v9 = (char *)a3;
  v10 = sub_2ADBE0(a1, a3);
  v11 = (_DWORD *)v10;
  if ( v10 )
  {
    v6[11] = v10;
    v12 = *(_DWORD **)(v10 + 140);
    v13 = v6[1];
    v14 = v6[2];
    v15 = v6[3];
    *v12 = *v6;
    v12[1] = v13;
    v12[2] = v14;
    v12[3] = v15;
    v16 = v6[1];
    v17 = v6[5];
    v18 = v6[6];
    v19 = v6[7];
    v12[4] = v6[4];
    v12[5] = v17;
    v12[6] = v18;
    v12[7] = v19;
    v20 = v6[9];
    v21 = v6[10];
    v22 = v6[11];
    v12[8] = v6[8];
    v12[9] = v20;
    v12[10] = v21;
    v12[11] = v22;
    v23 = v6[13];
    v12[12] = v6[12];
    v12[13] = v23;
    v12[23] = a4;
    v12[1] = v16;
    v24 = *((_QWORD *)v6 + 2);
    v25 = v6[3];
    v12[2] = v6[2];
    v26 = *(_BYTE *)(v10 + 24);
    *(_QWORD *)(v10 + 80) = v24;
    *(_DWORD *)(v10 + 32) = v25;
    *(_DWORD *)(v10 + 28) = v25;
    *(_BYTE *)(v10 + 24) = v26 | 1;
    if ( sub_2ADDBC(a1, v10, v6[6]) )
    {
      v11[16] = sub_2ABAF4(v6[9]);
      v27 = v6[1];
      v122 = 0;
      if ( v27 == 8 )
      {
        v29 = v6[2];
        v28 = v29 & 2;
        if ( (v29 & 2) != 0 )
        {
          v28 = 1;
          v122 = 1;
        }
      }
      else
      {
        if ( v27 == 17 )
        {
          v28 = 33554688;
          v122 = 33554688;
        }
        else
        {
          v28 = 256;
          v122 = 256;
        }
        v29 = v6[2];
        if ( (v29 & 2) != 0 )
        {
          v28 |= 3u;
          v122 = v28;
        }
      }
      if ( (v29 & 1) == 0 )
      {
        v28 |= 8u;
        v122 = v28;
      }
      if ( (v29 & 4) != 0 )
      {
        v122 = v28 | 0x10;
      }
      else if ( (v28 & 2) != 0 )
      {
        v122 = v28 | 0x20;
      }
      if ( (v29 & 0x10) != 0 )
      {
        v30 = v6[10];
        v122 |= 0x800000u;
        v11[30] = v30;
      }
      if ( (v29 & 0x20) != 0 )
        v122 |= 0x1000000u;
      if ( (v29 & 0x200) == 0 )
      {
LABEL_23:
        v31 = v122;
        if ( (v29 & 0x400) != 0 )
        {
          v31 = v122 | 0x400;
          v122 |= 0x400u;
        }
        if ( v29 < 0 )
        {
          v31 |= 0x8000u;
          v122 = v31;
        }
        if ( (v31 & 1) == 0 && *v9 == 46 )
        {
          v87 = (unsigned __int8)v9[1];
          switch ( v87 )
          {
            case 'd':
              v88 = ".debug";
              v89 = 6;
              break;
            case 'g':
              v104 = (unsigned __int8)v9[2];
              if ( v104 == 110 )
              {
                v88 = ".gnu.linkonce.wi.";
                v89 = 17;
              }
              else
              {
                if ( v104 != 100 )
                  goto LABEL_29;
                v88 = ".gdb_index";
                v89 = 11;
              }
              break;
            case 'l':
              v88 = ".line";
              v89 = 5;
              break;
            case 's':
              v88 = ".stab";
              v89 = 5;
              break;
            case 'z':
              v88 = ".zdebug";
              v89 = 7;
              break;
            default:
              goto LABEL_29;
          }
          if ( !strncmp(v9, v88, v89) )
            v122 = v31 | 0x2000;
        }
LABEL_29:
        if ( !strncmp(v9, ".gnu.linkonce", 0xDu) && !*(_DWORD *)(v11[35] + 124) )
          v122 |= 0x20000u;
        v32 = *(int (__fastcall **)(int *, _DWORD *))(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 444) + 80);
        if ( v32 && !v32(&v122, v6) || !sub_2ADCD8(a1, (int)v11, v122) )
          return 0;
        if ( v6[1] == 7 )
        {
          v4 = sub_2ADFDC(a1, (int)v11, (int *)ptr);
          if ( !v4 )
            return v4;
          sub_2CC698(a1, (unsigned int)ptr[0], v6[6], v6[5], v6[4], v6[5], v6[9]);
          free(ptr[0]);
        }
        v33 = v122;
        if ( (v122 & 1) != 0 )
        {
          v34 = *(_DWORD *)(a1 + 160);
          v35 = *(_DWORD *)(v34 + 48);
          v36 = *(_DWORD *)(v34 + 68);
          if ( v35 )
          {
            v37 = *(_DWORD *)(v36 + 16);
            if ( !v37 )
            {
              v38 = v36 + 32;
              v39 = 0;
              while ( 1 )
              {
                ++v37;
                if ( *(_DWORD *)(v38 - 32) == 1 && *(_DWORD *)(v38 - 8) )
                  ++v39;
                v38 += 32;
                if ( v37 == v35 )
                  break;
                if ( *(_DWORD *)(v38 - 16) )
                  goto LABEL_46;
              }
              if ( v39 > 1 )
                return 1;
            }
LABEL_46:
            v40 = 0;
            v121 = v122 & 2;
            v115 = v122;
            v117 = v9;
            while ( 1 )
            {
              v41 = *(_DWORD *)(v36 + 32 * v40);
              if ( v41 == 1 )
                break;
              if ( v41 != 7 )
                goto LABEL_48;
              v67 = v6[2];
              v43 = v67 & 0x400;
              if ( (v67 & 0x400) == 0 )
                goto LABEL_48;
              v44 = v67 & 2;
              if ( v44 )
                goto LABEL_52;
              v45 = v6[1];
              if ( v45 != 8 )
                goto LABEL_54;
              v49 = v6[3];
              v46 = 32 * v40;
LABEL_58:
              v50 = (_DWORD *)(v36 + v46);
              v51 = v50[3];
              v52 = v50[4];
              if ( v121 )
              {
                v43 = v6[4];
                v41 = v50[2];
              }
              else
              {
                v52 += v49;
              }
              if ( v121 )
                v53 = v52 + v43;
              else
                v53 = v52 - v51;
              if ( v121 )
                v53 -= v41;
              v11[8] = v53;
              if ( v51 <= v49 && v49 + v6[6] <= v51 + v50[6] )
              {
LABEL_68:
                v33 = v115;
                v9 = v117;
                goto LABEL_69;
              }
LABEL_48:
              if ( ++v40 == v35 )
                goto LABEL_68;
            }
            v42 = v6[2];
            v43 = v42 & 0x400;
            if ( (v42 & 0x400) != 0 )
              goto LABEL_48;
            v44 = v42 & 2;
            if ( !v44 )
              goto LABEL_48;
LABEL_52:
            v45 = v6[1];
            if ( v45 == 8 )
            {
              v46 = 32 * v40;
            }
            else
            {
LABEL_54:
              v46 = 32 * v40;
              v47 = v36 + 32 * v40;
              v48 = *(_DWORD *)(v47 + 8);
              v119 = *((_QWORD *)v6 + 2);
              if ( v48 > (unsigned int)v119 || *(unsigned int *)(v47 + 20) < v119 - v48 + (unsigned int)v6[6] )
                goto LABEL_48;
              if ( !v44 )
                goto LABEL_57;
            }
            v105 = v6[3];
            v106 = *(_DWORD *)(v36 + v46 + 12);
            if ( v105 < v106 )
              goto LABEL_48;
            v107 = v105 - v106;
            v108 = v41 == 7;
            if ( !v43 )
              v108 = 1;
            if ( v45 != 8 )
              v108 |= 1u;
            if ( v108 )
              v108 = v6[6];
            if ( v107 + v108 > *(_DWORD *)(v36 + v46 + 24) )
              goto LABEL_48;
LABEL_57:
            v49 = v6[3];
            goto LABEL_58;
          }
        }
LABEL_69:
        if ( (v33 & 0x2000) != 0 )
        {
          v54 = (unsigned __int8)v9[1];
          if ( v54 == 100 )
          {
            if ( v9[6] != 95 )
              return 1;
          }
          else if ( v54 != 122 || v9[7] != 95 )
          {
            return 1;
          }
          v55 = sub_2A992C(a1, (int)v11, v124, (int *)ptr);
          if ( v55 && (*(_DWORD *)(a1 + 40) & 0x100000) != 0 )
          {
            v4 = sub_2A9D20(a1, (int)v11);
            if ( !v4 )
            {
              sub_2A6A5C("%B: unable to initialize decompress status for section %s", a1, v9);
              return v4;
            }
            v56 = 2;
          }
          else
          {
            if ( !v11[9]
              || ((*(_DWORD *)(a1 + 40) >> 5) & 0x4000) == 0
              || v124[0] < 0
              || !ptr[0]
              || v55 && v124[0] > 0 == ((((*(_DWORD *)(a1 + 40) >> 5) & 0xFFFFFu) >> 17) & 1) )
            {
              return 1;
            }
            v4 = sub_2A9E4C(a1, (int)v11);
            if ( !v4 )
            {
              sub_2A6A5C("%B: unable to initialize compress status for section %s", a1, v9);
              return v4;
            }
            v56 = 1;
          }
          if ( (*(_BYTE *)(a1 + 44) & 8) != 0 )
          {
            if ( v9[1] == 122 && (v56 == 2 || (*(_DWORD *)(a1 + 40) & 0x400000) != 0) )
            {
              v57 = sub_2CBD84(a1, v9);
              if ( !v57 )
                return 0;
              sub_2ADCE4(a1, v11, v57);
            }
          }
          else
          {
            v11[5] |= 0x10000000u;
          }
        }
        return 1;
      }
      v58 = *(_DWORD **)(a1 + 160);
      v59 = v58[579];
      if ( v59 )
      {
        if ( v59 != -1 )
          goto LABEL_110;
      }
      else
      {
        v60 = v58[133];
        if ( !v60 )
          goto LABEL_143;
        v61 = (int *)v58[16];
        v62 = v58[579];
        v63 = &v61[v58[133]];
        do
        {
          v65 = *v61++;
          v64 = v65;
          if ( *(_DWORD *)(v65 + 4) == 17 )
          {
            v66 = *(_DWORD *)(v64 + 24);
            if ( v66 > 7 && *(_DWORD *)(v64 + 40) == 4 && (v66 & 3) == 0 )
              ++v62;
          }
        }
        while ( v63 != v61 );
        if ( !v62 )
        {
LABEL_143:
          v58[579] = -1;
          v58[578] = 0;
          v77 = v11[35];
          goto LABEL_119;
        }
        v58[579] = v62;
        v90 = sub_2AD048(a1, v62, 4u);
        v91 = *(_DWORD *)(a1 + 160);
        v58[578] = v90;
        v92 = *(void **)(v91 + 2312);
        if ( !v92 )
          return 0;
        v93 = 4 * v62;
        v94 = v60;
        memset(v92, 0, v93);
        v118 = v6;
        v58 = *(_DWORD **)(a1 + 160);
        v95 = 0;
        v96 = 0;
        v116 = v11;
        do
        {
          v97 = *(_DWORD *)(v58[16] + 4 * v95);
          if ( *(_DWORD *)(v97 + 4) == 17 )
          {
            v98 = *(_DWORD *)(v97 + 24);
            if ( v98 > 7 && *(_DWORD *)(v97 + 40) == 4 && (v98 & 3) == 0 )
            {
              if ( !sub_2CE6E8((_DWORD *)a1, v95) )
                return 0;
              v99 = v96 + 1;
              v100 = *(_DWORD *)(v97 + 24);
              v120 = v100;
              *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 160) + 2312) + 4 * v96) = v97;
              v101 = (void *)sub_2AD048(a1, v100, 1u);
              *(_DWORD *)(v97 + 48) = v101;
              if ( v101 )
              {
                v102 = v120 & 0x3FFFFFFF;
                memset(v101, 0, v120 & 0x3FFFFFFF);
                if ( !sub_2A8A04(a1, *(_QWORD *)(v97 + 16), 0)
                  && (v103 = sub_2A87D8(*(_DWORD *)(v97 + 48), *(_DWORD *)(v97 + 24), a1), v103 == *(_DWORD *)(v97 + 24)) )
                {
                  v110 = *(_DWORD *)(v97 + 48);
                  v111 = (unsigned int *)(v110 + v102 - 4);
                  v112 = v110 + v103;
                  while ( 1 )
                  {
                    v112 -= 4;
                    v113 = (*(int (__fastcall **)(int))(*(_DWORD *)(a1 + 4) + 76))(v112);
                    if ( v112 == *(_DWORD *)(v97 + 48) )
                      break;
                    if ( v94 <= v113 )
                    {
                      sub_2A6A5C("%B: invalid SHT_GROUP entry", a1);
                      v113 = 0;
                    }
                    *v111-- = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 160) + 64) + 4 * v113);
                  }
                  v114 = *(_DWORD *)(v97 + 44);
                  *v111 = v113;
                  if ( v114 && (v113 & 1) != 0 )
                  {
                    v96 = v99;
                    v58 = *(_DWORD **)(a1 + 160);
                    *(_DWORD *)(v114 + 20) |= 0x20000u;
                  }
                  else
                  {
                    v96 = v99;
                    v58 = *(_DWORD **)(a1 + 160);
                  }
                }
                else
                {
                  sub_2A6A5C("%B: invalid size field in group section header: %#Lx", a1, *(_DWORD *)(v97 + 24));
                  ((void (__fastcall *)(int))loc_2A6C48)(17);
                  memset(*(void **)(v97 + 48), 0, v102);
                  v58 = *(_DWORD **)(a1 + 160);
                }
              }
              else
              {
                sub_2A6A5C("%B: corrupt size field in group section header: %#Lx", a1, *(_DWORD *)(v97 + 24), v120);
                ((void (__fastcall *)(int))loc_2A6C48)(17);
                v58 = *(_DWORD **)(a1 + 160);
              }
            }
          }
          ++v95;
        }
        while ( v94 != v95 );
        v109 = v96;
        v11 = v116;
        v6 = v118;
        if ( v58[579] != v109 )
        {
          v58[579] = v109;
          if ( !v109 )
          {
            v58[578] = 0;
            v58[579] = -1;
            sub_2A6A5C("%B: no valid group sections found", a1);
            ((void (__fastcall *)(int))loc_2A6C48)(17);
            v77 = v116[35];
            goto LABEL_119;
          }
        }
        if ( v109 - 1 <= 0xFFFFFFFD )
        {
          v59 = v109;
LABEL_110:
          v68 = 0;
          while ( 1 )
          {
            v69 = 4 * v68;
            v70 = *(_DWORD **)(v58[578] + 4 * v68);
            if ( v70 )
              break;
LABEL_117:
            if ( ++v68 >= v59 )
              goto LABEL_118;
          }
          v71 = v70[12];
          if ( v71 && (v72 = v70[6], v72 > 3) )
          {
            v73 = v72 & 0xFFFFFFFC;
            v74 = v70[12];
            v75 = v71 + v73 - 4;
            do
            {
              if ( v74 == v75 )
                goto LABEL_117;
              v76 = *(_DWORD **)(v74 + 4);
              v74 += 4;
            }
            while ( v6 != v76 );
            while ( 1 )
            {
              if ( v71 == v75 )
              {
                v84 = v70[7];
                if ( v84 < v58[133] && *(_DWORD *)(*(_DWORD *)(v58[16] + 4 * v84) + 4) == 2 )
                {
                  if ( sub_2CE6E8((_DWORD *)a1, v84) )
                  {
                    v85 = *(_DWORD *)(a1 + 160) + 72;
                    if ( sub_2CDA08(a1, v85, 1u, v70[8], (unsigned int)v124, (char *)ptr, v123) )
                    {
                      v86 = sub_2CDDA8(a1, v85, (int)v124, 0);
                      if ( v86 )
                      {
                        v77 = v11[35];
                        *(_DWORD *)(v77 + 116) = v86;
                        *(_DWORD *)(v77 + 124) = v11;
                        goto LABEL_125;
                      }
                    }
                  }
                }
                return 0;
              }
              v78 = *(_DWORD *)(v71 + 4);
              v71 += 4;
              v79 = *(_DWORD *)(v78 + 44);
              if ( v79 )
              {
                v80 = *(_DWORD *)(v79 + 140);
                v81 = *(_DWORD *)(v80 + 124);
                if ( v81 )
                  break;
              }
            }
            v77 = v11[35];
            v82 = *(_DWORD *)(v80 + 116);
            *(_DWORD *)(v77 + 124) = v81;
            *(_DWORD *)(v77 + 116) = v82;
            *(_DWORD *)(v80 + 124) = v11;
LABEL_125:
            v83 = v70[11];
            if ( v83 )
              *(_DWORD *)(*(_DWORD *)(v83 + 140) + 124) = v11;
LABEL_119:
            v4 = *(_DWORD *)(v77 + 116);
            if ( v4 )
            {
              v29 = v6[2];
              goto LABEL_23;
            }
            sub_2A6A5C("%B: no group info for section '%A'", a1, v11);
          }
          else
          {
            sub_2A6A5C("%B: group section '%A' has no contents", a1, v70[11]);
            v4 = 0;
            *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 160) + 2312) + v69) = 0;
            ((void (__fastcall *)(int))loc_2A6C48)(17);
          }
          return v4;
        }
      }
LABEL_118:
      v77 = v11[35];
      goto LABEL_119;
    }
  }
  return 0;
}
