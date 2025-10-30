int __fastcall sub_10ED98(unsigned __int8 *a1, char *a2, unsigned int a3, int a4, unsigned int a5, void **a6)
{
  int v9; // r9
  char *v10; // r0
  void *v11; // r7
  int v12; // r5
  int v13; // r3
  char *v14; // r3
  char *v15; // r1
  char *v16; // r6
  char *v17; // lr
  char *v18; // r7
  __int64 v19; // r0
  char *v20; // r12
  void *v21; // r7
  int v23; // r1
  int v24; // r2
  int v25; // r0
  char *v26; // r0
  int v27; // lr
  unsigned int v28; // r5
  unsigned int v29; // r0
  int v30; // lr
  int v31; // r3
  int v32; // r12
  int v33; // r2
  char *v34; // r5
  unsigned __int64 v35; // r0
  int v36; // r12
  char *v37; // r0
  char *v38; // r3
  int v39; // r5
  char *v40; // r0
  unsigned int v41; // r2
  int v42; // r1
  int v43; // lr
  int v44; // r12
  char *v45; // r5
  unsigned __int64 v46; // r2
  int v47; // r12
  __int64 v48; // r0
  int v49; // r2
  int v50; // r6
  char *v51; // r5
  int v52; // r0
  int v53; // r2
  int v54; // r12
  char *v55; // r3
  int v56; // r2
  unsigned __int64 v57; // kr00_8
  char *v58; // r3
  int v59; // r6
  char *v60; // r5
  int v61; // r0
  int v62; // r2
  int v63; // r3
  unsigned int v64; // r0
  char *v65; // r5
  unsigned int v66; // r1
  int v67; // r2
  unsigned __int64 v68; // r0
  int v69; // r5
  int v70; // r5
  int v71; // r0
  unsigned int v72; // r2
  int v73; // r1
  unsigned int v74; // r12
  char *v75; // r0
  int v76; // r1
  unsigned __int64 v77; // r2
  int v78; // r6
  char *v79; // r5
  int v80; // r0
  unsigned int v81; // r2
  int v82; // r0
  unsigned int v83; // r12
  int v84; // r0
  unsigned __int64 v85; // r2
  int v86; // r6
  int v87; // r0
  int v88; // r3
  int v89; // r5
  char *v90; // r0
  unsigned __int64 v91; // kr10_8
  int v92; // r5
  int v93; // r0
  int v94; // r0
  int v95; // r0
  unsigned __int64 v96; // r2
  _QWORD *v97; // r0
  __int64 v98; // r2
  _QWORD *v99; // r7
  char *v100; // r12
  __int64 v101; // r0
  int v102; // r6
  void *v103; // r0
  size_t v104; // r2
  void *v105; // r1
  int v106; // r5
  int v107; // r3
  unsigned __int64 v108; // r0
  int v109; // r2
  char *v110; // r5
  int v111; // r12
  int v112; // r0
  int v113; // r2
  int v114; // r5
  int v115; // r3
  int v116; // r0
  int v117; // r2
  int v118; // r5
  int v119; // r3
  __int64 v120; // r0
  int v121; // r2
  _BYTE *v122; // r0
  int v123; // r1
  __int64 v124; // r0
  int v125; // r0
  _DWORD *v126; // r3
  int v127; // r2
  int v128; // r3
  int v129; // r0
  char *v130; // r5
  int v131; // r7
  unsigned int v132; // r2
  int v133; // r0
  int v134; // r0
  char *v135; // r0
  char *v136; // r3
  char *v137; // r0
  char *v138; // r3
  char *v139; // r0
  char *v140; // r3
  char *v141; // r0
  char *v142; // r3
  char *v143; // r0
  char *v144; // r3
  char *v145; // r0
  char *v146; // r3
  char *v147; // r0
  char *v148; // r3
  char *v149; // r0
  char *v150; // r3
  int v151; // r8
  int v152; // r9
  int v153; // r3
  int v154; // r3
  void *v155; // r10
  int v156; // r0
  __int64 v157; // r0
  int v158; // [sp+8h] [bp-4Ch]
  __int64 ptra; // [sp+18h] [bp-3Ch]
  void **ptr; // [sp+18h] [bp-3Ch]
  __int64 v162; // [sp+20h] [bp-34h]
  int v163; // [sp+20h] [bp-34h]
  void *v164; // [sp+20h] [bp-34h]
  char *v165; // [sp+2Ch] [bp-28h]
  int v166; // [sp+2Ch] [bp-28h]
  int v167; // [sp+34h] [bp-20h] BYREF
  unsigned __int64 v168; // [sp+38h] [bp-1Ch] BYREF
  __int64 v169; // [sp+40h] [bp-14h] BYREF
  unsigned __int64 v170; // [sp+48h] [bp-Ch] BYREF

  v9 = a1[20];
  v158 = ((int (__fastcall *)(int))loc_165BB8)(a4);
  if ( (unsigned int)a2 < a3 )
  {
    v10 = (char *)a6[10];
    if ( a5 >= (unsigned int)v10 )
    {
      while ( 1 )
      {
        v11 = (void *)(unsigned __int8)*a2;
        v12 = (int)(a2 + 1);
        v13 = (unsigned __int8)v11 & 0xC0;
        switch ( v13 )
        {
          case 64:
            ++a2;
            a6[10] = &v10[(_DWORD)a6[24] * ((unsigned __int8)v11 & 0x3F)];
            break;
          case 128:
            v23 = (unsigned __int8)v11 & 0x3F;
            v24 = v9;
            v25 = a4;
            v169 = (unsigned __int8)v11 & 0x3F;
LABEL_18:
            v169 = sub_10D970(v25, v23, v24);
            v26 = (char *)sub_11257C(v12, a3, &v168);
            v27 = HIDWORD(v168);
            a2 = v26;
            v28 = v168;
            v29 = (unsigned int)a6[22];
LABEL_19:
            v30 = v29 * v27;
            v31 = v169;
            v35 = v29 * (unsigned __int64)v28;
            v32 = (int)a6[1];
            v33 = v30 + v28 * (_DWORD)a6[23];
            v34 = (char *)(v169 + 1);
            HIDWORD(v35) += v33;
            v170 = v35;
            if ( (int)v169 + 1 > v32 )
            {
              v37 = (char *)sub_93050(*a6, 24 * (_DWORD)v34);
              v38 = (char *)a6[1];
              *a6 = v37;
              memset(&v37[24 * (_DWORD)v38], 0, 24 * (v34 - v38));
              v31 = v169;
              v35 = v170;
              a6[1] = v34;
            }
            v36 = (int)*a6 + 24 * v31;
            *(_DWORD *)(v36 + 16) = 2;
            *(_QWORD *)v36 = v35;
            break;
          case 192:
            ++a2;
            v169 = (unsigned __int8)v11 & 0x3F;
            ((void (__fastcall *)(int))loc_10EADC)(a4);
            break;
          default:
            switch ( *a2 )
            {
              case 0:
                goto LABEL_11;
              case 1:
                HIDWORD(v124) = *(unsigned __int8 *)(*(_DWORD *)a1 + 52);
                LODWORD(v124) = **(_DWORD **)a1;
                v125 = sub_10D9B8(v124, *(_DWORD *)(*(_DWORD *)a1 + 60), v12, &v167, *((_DWORD *)a1 + 1));
                v126 = *(_DWORD **)a1;
                a6[10] = (void *)v125;
                v127 = *(_DWORD *)(*v126 + 4);
                v128 = *(_DWORD *)(v127 + 152);
                if ( v128 == -1 )
                {
                  v157 = sub_94700((int)"dwarf2-frame.c", 378, "sect_index_text not initialized");
                  return sub_10FC0C(v157, HIDWORD(v157));
                }
                a2 = (char *)(v12 + v167);
                a6[10] = (void *)(*(_DWORD *)(*(_DWORD *)(v127 + 144) + 4 * v128) + v125);
                break;
              case 2:
                v121 = v158;
                v122 = a2 + 1;
                v123 = 1;
                a2 += 2;
                goto LABEL_65;
              case 3:
                v122 = a2 + 1;
                v121 = v158;
                v123 = 2;
                a2 += 3;
                goto LABEL_65;
              case 4:
                v122 = a2 + 1;
                v121 = v158;
                v123 = 4;
                a2 += 5;
LABEL_65:
                a6[10] = (char *)a6[10] + sub_15C250(v122, v123, v121) * (_DWORD)a6[24];
                goto LABEL_12;
              case 5:
                v129 = sub_11257C(a2 + 1, a3, &v169);
                v24 = v9;
                v12 = v129;
                v23 = v169;
                v25 = a4;
                goto LABEL_18;
              case 6:
                v120 = sub_11257C(a2 + 1, a3, &v169);
                a2 = (char *)v120;
                ((void (__fastcall *)(int, _DWORD, _DWORD, _DWORD, void **, int))loc_10EADC)(
                  a4,
                  HIDWORD(v120),
                  v169,
                  HIDWORD(v169),
                  a6,
                  v9);
                goto LABEL_12;
              case 7:
                a2 = (char *)sub_11257C(a2 + 1, a3, &v169);
                v116 = sub_10D970(a4, v169, v9);
                v117 = (int)a6[1];
                v118 = v116 + 1;
                v119 = v116;
                v169 = v116;
                if ( v116 + 1 > v117 )
                {
                  v145 = (char *)sub_93050(*a6, 24 * v118);
                  v146 = (char *)a6[1];
                  *a6 = v145;
                  memset(&v145[24 * (_DWORD)v146], 0, 24 * (v118 - (_DWORD)v146));
                  v119 = v169;
                  a6[1] = (void *)v118;
                }
                *((_DWORD *)*a6 + 6 * v119 + 4) = 1;
                goto LABEL_12;
              case 8:
                a2 = (char *)sub_11257C(a2 + 1, a3, &v169);
                v112 = sub_10D970(a4, v169, v9);
                v113 = (int)a6[1];
                v114 = v112 + 1;
                v115 = v112;
                v169 = v112;
                if ( v112 + 1 > v113 )
                {
                  v147 = (char *)sub_93050(*a6, 24 * v114);
                  v148 = (char *)a6[1];
                  *a6 = v147;
                  memset(&v147[24 * (_DWORD)v148], 0, 24 * (v114 - (_DWORD)v148));
                  v115 = v169;
                  a6[1] = (void *)v114;
                }
                *((_DWORD *)*a6 + 6 * v115 + 4) = 5;
                goto LABEL_12;
              case 9:
                v106 = sub_11257C(a2 + 1, a3, &v169);
                v169 = sub_10D970(a4, v169, v9);
                a2 = (char *)sub_11257C(v106, a3, &v168);
                LODWORD(v108) = sub_10D970(a4, v168, v9);
                v107 = v169;
                v108 = (int)v108;
                v109 = (int)a6[1];
                v168 = (int)v108;
                v110 = (char *)(v169 + 1);
                if ( (int)v169 + 1 > v109 )
                {
                  v149 = (char *)sub_93050(*a6, 24 * (_DWORD)v110);
                  v150 = (char *)a6[1];
                  *a6 = v149;
                  memset(&v149[24 * (_DWORD)v150], 0, 24 * (v110 - v150));
                  v107 = v169;
                  v108 = v168;
                  a6[1] = v110;
                }
                v111 = (int)*a6 + 24 * v107;
                *(_DWORD *)(v111 + 16) = 3;
                *(_QWORD *)v111 = v108;
                goto LABEL_12;
              case 10:
                v97 = sub_9836C(0x28u);
                v98 = *((_QWORD *)a6 + 1);
                v99 = v97;
                v100 = (char *)a6[1];
                *(_DWORD *)v97 = 0;
                v97[1] = v98;
                v101 = *((_QWORD *)a6 + 2);
                LODWORD(v98) = a6[7];
                *((_DWORD *)v99 + 6) = a6[6];
                v102 = 24 * (_DWORD)v100;
                HIDWORD(v98) = a6[8];
                v99[2] = v101;
                *((_DWORD *)v99 + 1) = v100;
                *(_QWORD *)((char *)v99 + 28) = v98;
                v103 = sub_93028(24 * (_DWORD)v100);
                v104 = v102;
                v105 = *a6;
                *(_DWORD *)v99 = v103;
                a2 = (char *)v12;
                memcpy(v103, v105, v104);
                a6[8] = v99;
                goto LABEL_12;
              case 11:
                v14 = (char *)a6[8];
                if ( v14 )
                {
                  v15 = (char *)*((_DWORD *)v14 + 8);
                  *((_DWORD *)v14 + 8) = 0;
                  v16 = (char *)a6[8];
                  v165 = v15;
                  v17 = *(char **)v14;
                  v18 = (char *)*((_DWORD *)v14 + 1);
                  ptra = *((_QWORD *)v14 + 1);
                  v19 = *((_QWORD *)v14 + 2);
                  *(_DWORD *)v14 = 0;
                  v20 = (char *)*((_DWORD *)v14 + 6);
                  v162 = v19;
                  LODWORD(v19) = *((_DWORD *)v14 + 7);
                  a6[1] = v18;
                  a6[6] = v20;
                  *((_QWORD *)a6 + 1) = ptra;
                  v21 = *a6;
                  a6[7] = (void *)v19;
                  *((_QWORD *)a6 + 2) = v162;
                  *a6 = v17;
                  a6[8] = v165;
                  if ( v16 )
                  {
                    v153 = *((_DWORD *)v16 + 8);
                    ptr = (void **)v153;
                    if ( v153 )
                    {
                      v154 = *(_DWORD *)(v153 + 32);
                      if ( v154 )
                      {
                        if ( *(_DWORD *)(v154 + 32) )
                        {
                          v166 = v154;
                          v164 = *(void **)(v154 + 32);
                          sub_1118BC(v164);
                          sub_33AC04(v164);
                          v154 = v166;
                        }
                        if ( *(_DWORD *)v154 )
                        {
                          v163 = v154;
                          free(*(void **)v154);
                          v154 = v163;
                        }
                        sub_33AC04((void *)v154);
                      }
                      if ( *ptr )
                        free(*ptr);
                      sub_33AC04(ptr);
                    }
                    if ( *(_DWORD *)v16 )
                      free(*(void **)v16);
                    sub_33AC04(v16);
                  }
                  if ( v21 )
                    free(v21);
LABEL_11:
                  a2 = (char *)v12;
                  goto LABEL_12;
                }
                if ( dword_47AC88 <= 0 )
                  goto LABEL_11;
                v134 = sub_25AC8C(a4, v10);
                ++a2;
                sub_F43B4(&off_46D334, "bad CFI data; mismatched DW_CFA_restore_state at %s", v134);
                goto LABEL_12;
              case 12:
                v95 = sub_11257C(a2 + 1, a3, &v169);
                *((_QWORD *)a6 + 2) = v169;
                a2 = (char *)sub_11257C(v95, a3, &v168);
                if ( *((_BYTE *)a6 + 112) )
                {
                  v132 = (unsigned int)a6[22];
                  v133 = v132 * HIDWORD(v168);
                  v96 = v132 * (unsigned __int64)(unsigned int)v168;
                  HIDWORD(v96) += v133 + v168 * (_DWORD)a6[23];
                }
                else
                {
                  v96 = v168;
                }
                *((_QWORD *)a6 + 1) = v96;
                a6[6] = (void *)1;
                goto LABEL_12;
              case 13:
                a2 = (char *)sub_11257C(a2 + 1, a3, &v169);
                v94 = sub_10D970(a4, v169, v9);
                a6[6] = (void *)1;
                *((_QWORD *)a6 + 2) = v94;
                goto LABEL_12;
              case 14:
                a2 = (char *)sub_11257C(a2 + 1, a3, &v168);
                if ( *((_BYTE *)a6 + 112) )
                {
                  v82 = HIDWORD(v168);
                  v81 = (unsigned int)a6[22];
                  v83 = v168;
LABEL_40:
                  v84 = v81 * v82;
                  v85 = v81 * (unsigned __int64)v83;
                  HIDWORD(v85) += v84 + v83 * (_DWORD)a6[23];
                }
                else
                {
                  v85 = v168;
                }
                *((_QWORD *)a6 + 1) = v85;
                goto LABEL_12;
              case 15:
                v90 = (char *)sub_11257C(a2 + 1, a3, &v168);
                v91 = v168;
                a6[7] = v90;
                a2 = &v90[v91];
                *((_QWORD *)a6 + 2) = v91;
                a6[6] = (void *)2;
                goto LABEL_12;
              case 16:
                v86 = sub_11257C(a2 + 1, a3, &v169);
                v87 = sub_10D970(a4, v169, v9);
                v88 = (int)a6[1];
                v89 = v87 + 1;
                v169 = v87;
                if ( v87 + 1 > v88 )
                {
                  v135 = (char *)sub_93050(*a6, 24 * v89);
                  v136 = (char *)a6[1];
                  *a6 = v135;
                  memset(&v135[24 * (_DWORD)v136], 0, 24 * (v89 - (_DWORD)v136));
                  a6[1] = (void *)v89;
                }
                v52 = sub_11257C(v86, a3, &v168);
                v53 = v169;
                v54 = 4;
                goto LABEL_30;
              case 17:
                v92 = sub_11257C(a2 + 1, a3, &v169);
                v169 = sub_10D970(a4, v169, v9);
                v93 = sub_112620(v92, a3, &v170);
                v27 = HIDWORD(v170);
                a2 = (char *)v93;
                v28 = v170;
                v29 = (unsigned int)a6[22];
                goto LABEL_19;
              case 18:
                v70 = sub_11257C(a2 + 1, a3, &v169);
                *((_QWORD *)a6 + 2) = sub_10D970(a4, v169, v9);
                v71 = sub_112620(v70, a3, &v170);
                v72 = (unsigned int)a6[22];
                a2 = (char *)v71;
                v73 = HIDWORD(v170);
                v74 = v170;
                v75 = (char *)a6[23];
                a6[6] = (void *)1;
                v76 = v72 * v73;
                v77 = v72 * (unsigned __int64)v74;
                HIDWORD(v77) += v76 + v74 * (_DWORD)v75;
                *((_QWORD *)a6 + 1) = v77;
                goto LABEL_12;
              case 19:
                v80 = sub_112620(a2 + 1, a3, &v170);
                v81 = (unsigned int)a6[22];
                a2 = (char *)v80;
                v82 = HIDWORD(v170);
                v83 = v170;
                goto LABEL_40;
              case 20:
                v78 = sub_11257C(a2 + 1, a3, &v169);
                v79 = (char *)(v169 + 1);
                if ( (int)v169 + 1 > (int)a6[1] )
                {
                  v137 = (char *)sub_93050(*a6, 24 * (_DWORD)v79);
                  v138 = (char *)a6[1];
                  *a6 = v137;
                  memset(&v137[24 * (_DWORD)v138], 0, 24 * (v79 - v138));
                  a6[1] = v79;
                }
                a2 = (char *)sub_11257C(v78, a3, &v168);
                v62 = HIDWORD(v168);
                v63 = v169;
                v64 = (unsigned int)a6[22];
                v65 = (char *)a6[23];
                v66 = v168;
                goto LABEL_34;
              case 21:
                v59 = sub_11257C(a2 + 1, a3, &v169);
                v60 = (char *)(v169 + 1);
                if ( (int)v169 + 1 > (int)a6[1] )
                {
                  v139 = (char *)sub_93050(*a6, 24 * (_DWORD)v60);
                  v140 = (char *)a6[1];
                  *a6 = v139;
                  memset(&v139[24 * (_DWORD)v140], 0, 24 * (v60 - v140));
                  a6[1] = v60;
                }
                v61 = sub_112620(v59, a3, &v170);
                v62 = HIDWORD(v170);
                a2 = (char *)v61;
                v63 = v169;
                v64 = (unsigned int)a6[22];
                v65 = (char *)a6[23];
                v66 = v170;
LABEL_34:
                v67 = v64 * v62 + v66 * (_DWORD)v65;
                v68 = v64 * (unsigned __int64)v66;
                v69 = (int)*a6 + 24 * v63;
                *(_DWORD *)(v69 + 16) = 6;
                HIDWORD(v68) += v67;
                *(_QWORD *)v69 = v68;
                goto LABEL_12;
              case 22:
                v50 = sub_11257C(a2 + 1, a3, &v169);
                v51 = (char *)(v169 + 1);
                if ( (int)v169 + 1 > (int)a6[1] )
                {
                  v141 = (char *)sub_93050(*a6, 24 * (_DWORD)v51);
                  v142 = (char *)a6[1];
                  *a6 = v141;
                  memset(&v141[24 * (_DWORD)v142], 0, 24 * (v51 - v142));
                  a6[1] = v51;
                }
                v52 = sub_11257C(v50, a3, &v168);
                v53 = v169;
                v54 = 7;
LABEL_30:
                v55 = (char *)*a6;
                v56 = 3 * v53;
                v57 = v168;
                *((_DWORD *)*a6 + 2 * v56) = v52;
                v58 = &v55[8 * v56];
                a2 = (char *)(v52 + v57);
                *((_DWORD *)v58 + 3) = HIDWORD(v57);
                *((_DWORD *)v58 + 4) = v54;
                *((_DWORD *)v58 + 2) = v57;
                goto LABEL_12;
              case 46:
                a2 = (char *)sub_11257C(a2 + 1, a3, &v168);
                goto LABEL_12;
              case 47:
                v39 = sub_11257C(a2 + 1, a3, &v169);
                v169 = sub_10D970(a4, v169, v9);
                v40 = (char *)sub_11257C(v39, a3, &v168);
                v41 = (unsigned int)a6[22];
                a2 = v40;
                v42 = v169;
                v43 = v41 * HIDWORD(v168);
                v44 = (int)a6[1];
                v46 = v41 * (unsigned __int64)(unsigned int)v168;
                v45 = (char *)(v169 + 1);
                HIDWORD(v46) += v43 + v168 * (_DWORD)a6[23];
                v170 = v46;
                if ( (int)v169 + 1 > v44 )
                {
                  v143 = (char *)sub_93050(*a6, 24 * (_DWORD)v45);
                  v144 = (char *)a6[1];
                  *a6 = v143;
                  memset(&v143[24 * (_DWORD)v144], 0, 24 * (v45 - v144));
                  v42 = v169;
                  v46 = v170;
                  a6[1] = v45;
                }
                v47 = 3 * v42;
                v48 = -(__int64)v46;
                v49 = (int)*a6 + 8 * v47;
                *(_DWORD *)(v49 + 16) = 2;
                *(_QWORD *)v49 = v48;
                goto LABEL_12;
              default:
                if ( (char *)v11 - 28 > (char *)0x23 )
                {
                  sub_94700((int)"dwarf2-frame.c", 590, "Unknown CFI encountered.");
                  sub_33AC04(v11);
                  sub_338FFC(v156);
                }
                if ( !((int (__fastcall *)(int, _DWORD, void **))loc_16ADB4)(a4, (unsigned __int8)*a2, a6) )
                  sub_946E0(
                    "Call Frame Instruction op %d in vendor extension space is not handled on this architecture.",
                    v11);
                goto LABEL_11;
            }
            break;
        }
LABEL_12:
        if ( (unsigned int)a2 < a3 )
        {
          v10 = (char *)a6[10];
          if ( (unsigned int)v10 <= a5 )
            continue;
        }
        break;
      }
    }
  }
  if ( a6[12] )
    return (int)a2;
  v130 = (char *)a6[8];
  if ( v130 )
  {
    v131 = *((_DWORD *)v130 + 8);
    if ( v131 )
    {
      v151 = *(_DWORD *)(v131 + 32);
      if ( v151 )
      {
        v152 = *(_DWORD *)(v151 + 32);
        if ( v152 )
        {
          v155 = *(void **)(v152 + 32);
          if ( v155 )
          {
            sub_1118BC(*(_DWORD *)(v152 + 32));
            sub_33AC04(v155);
          }
          if ( *(_DWORD *)v152 )
            free(*(void **)v152);
          sub_33AC04((void *)v152);
        }
        if ( *(_DWORD *)v151 )
          free(*(void **)v151);
        sub_33AC04((void *)v151);
      }
      if ( *(_DWORD *)v131 )
        free(*(void **)v131);
      sub_33AC04((void *)v131);
    }
    if ( *(_DWORD *)v130 )
      free(*(void **)v130);
    sub_33AC04(v130);
  }
  a6[8] = 0;
  return (int)a2;
}
