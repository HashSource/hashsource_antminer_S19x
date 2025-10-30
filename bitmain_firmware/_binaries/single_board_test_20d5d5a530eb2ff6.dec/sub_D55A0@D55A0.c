int __fastcall sub_D55A0(int a1, int *a2, unsigned int a3, unsigned int a4)
{
  int v4; // r4
  unsigned int v8; // r5
  bool v9; // zf
  int v10; // r10
  int v11; // r3
  int result; // r0
  _BOOL4 v13; // r10
  int *v14; // r6
  _DWORD *v15; // r2
  int v16; // r9
  int v17; // r3
  int v18; // r3
  int v19; // r3
  _DWORD *v20; // r4
  int v21; // t1
  int v22; // r1
  int v23; // r2
  int v24; // r3
  _DWORD *v25; // r2
  int v26; // r10
  unsigned __int8 *v27; // r0
  int v28; // r12
  int v29; // r1
  int v30; // r2
  int v31; // r3
  int v32; // r10
  unsigned __int8 *v33; // r3
  bool v34; // cf
  char v35; // r2
  int v36; // r2
  int v37; // r0
  int v38; // r1
  unsigned int v39; // r2
  int v40; // lr
  int v41; // r0
  int v42; // r1
  int v43; // r0
  int v44; // r1
  int v45; // r0
  int v46; // r1
  int v47; // r0
  int v48; // r1
  int v49; // r0
  int v50; // r1
  int v51; // r0
  int v52; // r1
  int v53; // r0
  int v54; // r1
  int v55; // r0
  int v56; // r1
  int v57; // r0
  int v58; // r1
  int v59; // r0
  int v60; // r1
  int v61; // r0
  int v62; // r1
  int v63; // r0
  int v64; // r1
  int v65; // r0
  int v66; // r1
  int v67; // r0
  int v68; // r1
  int v69; // r0
  int v70; // r1
  int v71; // r1
  unsigned __int8 v72; // r0
  unsigned __int8 v73; // r3
  unsigned __int8 v74; // r0
  int v75; // r3
  unsigned __int8 v76; // r2
  unsigned __int8 v77; // r1
  unsigned __int8 v78; // r2
  size_t v79; // r2
  unsigned int v80; // r3
  int v81; // r10
  int v82; // r9
  unsigned __int8 *v83; // r0
  _DWORD *v84; // r6
  size_t v85; // r5
  int v86; // r2
  int v87; // r10
  int v88; // lr
  int v89; // r3
  _DWORD *v90; // r4
  int v91; // t1
  int v92; // r1
  int v93; // r2
  int v94; // r3
  int v95; // r3
  int v96; // r2
  _DWORD *v97; // r3
  int v98; // r10
  unsigned __int8 *v99; // r3
  bool v100; // cf
  char v101; // r2
  int v102; // r2
  unsigned int v103; // r2
  int v104; // r1
  int v105; // lr
  int v106; // r1
  int v107; // r1
  int v108; // r1
  int v109; // r1
  int v110; // r1
  int v111; // r1
  int v112; // r1
  int v113; // r1
  int v114; // r1
  int v115; // r1
  int v116; // r1
  int v117; // r1
  int v118; // r1
  int v119; // r1
  int v120; // r1
  int v121; // r3
  unsigned __int8 v122; // r1
  unsigned int v123; // lr
  unsigned __int8 v124; // r2
  char v125; // r2
  unsigned __int8 v126; // r3
  int v127; // r3
  __int64 v128; // r2
  unsigned __int8 *v129; // r1
  int *v130; // r6
  char *v131; // r2
  char *v132; // r0
  char v133; // t1
  unsigned __int8 v134; // r3
  unsigned __int8 *v135; // r2
  unsigned __int8 *v136; // r1
  char *v137; // r0
  unsigned __int8 v138; // t1
  unsigned __int8 v139; // r3
  int *v140; // [sp+8h] [bp-BCh]
  unsigned __int8 *v141; // [sp+Ch] [bp-B8h]
  unsigned __int8 *v142; // [sp+10h] [bp-B4h]
  unsigned __int8 *v143; // [sp+14h] [bp-B0h]
  unsigned __int8 *v144; // [sp+18h] [bp-ACh]
  unsigned __int8 v145[164]; // [sp+20h] [bp-A4h] BYREF

  v4 = *(_DWORD *)(a1 + 96);
  v140 = a2;
  v8 = *(_DWORD *)(v4 + 200);
  if ( !*(_DWORD *)(v4 + 188) )
  {
    v9 = v8 == -1;
    if ( v8 != -1 )
      v9 = a2 == 0;
    v10 = !v9;
    if ( !v9 )
    {
      if ( a4 == v8 + 16 )
      {
        v26 = -(int)v145 & 0xF;
        v27 = &v145[v26];
        v142 = &v145[v26];
        v141 = &v145[v26 + 64];
        if ( v8 > 0x40 )
        {
          *(_DWORD *)(v4 + 32) = 0;
          sub_137024(v27, &unk_1B5AF0, 64, v4, v4 + 32);
          sub_F1804(v4 + 208, v142);
          *(_DWORD *)(v4 + 32) = 1;
          *(_DWORD *)(v4 + 112) = 0;
          sub_F1858(v4 + 208, v4 + 148, 16, 1);
          v95 = *(_DWORD *)(a1 + 8);
          *(_DWORD *)(v4 + 176) = v8;
          *(_DWORD *)(v4 + 180) = 0;
          *(_QWORD *)(v4 + 168) = 13;
          if ( v95 )
          {
            sub_137024(v140, a3, v8, v4, v4 + 32);
            sub_F1858(v4 + 208, v140, v8, v127);
          }
          else
          {
            sub_F1858(v4 + 208, a3, v8, 0);
            sub_137024(v140, a3, v8, v4, v4 + 32);
          }
          v144 = (unsigned __int8 *)(a3 + v8);
          v96 = -v8 & 0xF;
          v82 = v4 + 208;
          v81 = 16;
          v97 = (int *)((char *)v140 + v8);
          v85 = 64;
          v84 = v97;
          v143 = v141;
          sub_F1858(v4 + 208, &unk_1B5AF0, v96, v141);
LABEL_76:
          v86 = v81;
          v87 = *(_DWORD *)(v4 + 168);
          v88 = *(_DWORD *)(v4 + 176);
          v89 = *(_DWORD *)(v4 + 180);
          *((_DWORD *)v141 + 1) = *(_DWORD *)(v4 + 172);
          *((_DWORD *)v141 + 2) = v88;
          *((_DWORD *)v141 + 3) = v89;
          *(_DWORD *)v141 = v87;
          sub_F1858(v82, v143, v86, v89);
          sub_E07F8((int)v142, v85);
          sub_F25E8(v82);
          *(_DWORD *)(v4 + 200) = -1;
          if ( *(_DWORD *)(a1 + 8) )
          {
            v91 = *(_DWORD *)(v4 + 132);
            v90 = (_DWORD *)(v4 + 132);
            v92 = v90[1];
            v93 = v90[2];
            v94 = v90[3];
            *v84 = v91;
            v84[1] = v92;
            v84[2] = v93;
            v84[3] = v94;
          }
          else if ( sub_BC33C(v143, v144, 16) )
          {
            memset((char *)v84 + 16 - a4, 0, a4 - 16);
            return -1;
          }
          return a4;
        }
        *(_DWORD *)(v4 + 32) = 0;
        sub_137024(v27, &unk_1B5AF0, 128, v4, v4 + 32);
        sub_F1804(v4 + 208, v142);
        *(_DWORD *)(v4 + 112) = 0;
        v28 = *(_DWORD *)(a1 + 8);
        v143 = v142 + 48;
        v29 = *(_DWORD *)(v4 + 152);
        v30 = *(_DWORD *)(v4 + 156);
        v31 = *(_DWORD *)(v4 + 160);
        *((_DWORD *)v142 + 12) = *(_DWORD *)(v4 + 148);
        *((_DWORD *)v142 + 13) = v29;
        *((_DWORD *)v142 + 14) = v30;
        *((_DWORD *)v142 + 15) = v31;
        *(_DWORD *)(v4 + 176) = v8;
        *(_DWORD *)(v4 + 180) = 0;
        *(_QWORD *)(v4 + 168) = 13;
        if ( v28 )
        {
          if ( v8 )
          {
            v98 = v26 + 64;
            v99 = &v145[v98];
            v100 = a3 >= (unsigned int)(v140 + 1);
            if ( a3 < (unsigned int)(v140 + 1) )
              v100 = (unsigned int)v140 >= a3 + 4;
            v101 = v100;
            if ( v8 <= 5 )
              v101 = 0;
            v102 = v101 & 1;
            if ( (((unsigned __int8)v140 | (unsigned __int8)(a3 | (unsigned __int8)v99)) & 3) != 0 )
              v102 = 0;
            if ( v102 )
            {
              v103 = ((v8 - 4) >> 2) + 1;
              v104 = *(_DWORD *)a3 ^ *(_DWORD *)&v145[v98];
              *(_DWORD *)&v145[v98] = v104;
              v105 = 4 * v103;
              *v140 = v104;
              if ( (v8 - 4) >> 2 )
              {
                v106 = *(_DWORD *)(a3 + 4) ^ *((_DWORD *)v99 + 1);
                *((_DWORD *)v99 + 1) = v106;
                v140[1] = v106;
                if ( (v8 - 4) >> 2 != 1 )
                {
                  v107 = *(_DWORD *)(a3 + 8) ^ *((_DWORD *)v99 + 2);
                  *((_DWORD *)v99 + 2) = v107;
                  v140[2] = v107;
                  if ( (v8 - 4) >> 2 != 2 )
                  {
                    v108 = *(_DWORD *)(a3 + 12) ^ *((_DWORD *)v99 + 3);
                    *((_DWORD *)v99 + 3) = v108;
                    v140[3] = v108;
                    if ( (v8 - 4) >> 2 != 3 )
                    {
                      v109 = *(_DWORD *)(a3 + 16) ^ *((_DWORD *)v99 + 4);
                      *((_DWORD *)v99 + 4) = v109;
                      v140[4] = v109;
                      if ( (v8 - 4) >> 2 != 4 )
                      {
                        v110 = *(_DWORD *)(a3 + 20) ^ *((_DWORD *)v99 + 5);
                        *((_DWORD *)v99 + 5) = v110;
                        v140[5] = v110;
                        if ( (v8 - 4) >> 2 != 5 )
                        {
                          v111 = *(_DWORD *)(a3 + 24) ^ *((_DWORD *)v99 + 6);
                          *((_DWORD *)v99 + 6) = v111;
                          v140[6] = v111;
                          if ( (v8 - 4) >> 2 != 6 )
                          {
                            v112 = *(_DWORD *)(a3 + 28) ^ *((_DWORD *)v99 + 7);
                            *((_DWORD *)v99 + 7) = v112;
                            v140[7] = v112;
                            if ( (v8 - 4) >> 2 != 7 )
                            {
                              v113 = *(_DWORD *)(a3 + 32) ^ *((_DWORD *)v99 + 8);
                              *((_DWORD *)v99 + 8) = v113;
                              v140[8] = v113;
                              if ( (v8 - 4) >> 2 != 8 )
                              {
                                v114 = *(_DWORD *)(a3 + 36) ^ *((_DWORD *)v99 + 9);
                                *((_DWORD *)v99 + 9) = v114;
                                v140[9] = v114;
                                if ( (v8 - 4) >> 2 != 9 )
                                {
                                  v115 = *(_DWORD *)(a3 + 40) ^ *((_DWORD *)v99 + 10);
                                  *((_DWORD *)v99 + 10) = v115;
                                  v140[10] = v115;
                                  if ( (v8 - 4) >> 2 != 10 )
                                  {
                                    v116 = *(_DWORD *)(a3 + 44) ^ *((_DWORD *)v99 + 11);
                                    *((_DWORD *)v99 + 11) = v116;
                                    v140[11] = v116;
                                    if ( (v8 - 4) >> 2 != 11 )
                                    {
                                      v117 = *(_DWORD *)(a3 + 48) ^ *((_DWORD *)v99 + 12);
                                      *((_DWORD *)v99 + 12) = v117;
                                      v140[12] = v117;
                                      if ( (v8 - 4) >> 2 != 12 )
                                      {
                                        v118 = *(_DWORD *)(a3 + 52) ^ *((_DWORD *)v99 + 13);
                                        *((_DWORD *)v99 + 13) = v118;
                                        v140[13] = v118;
                                        if ( (v8 - 4) >> 2 != 13 )
                                        {
                                          v119 = *(_DWORD *)(a3 + 56) ^ *((_DWORD *)v99 + 14);
                                          *((_DWORD *)v99 + 14) = v119;
                                          v140[14] = v119;
                                          if ( (v8 - 4) >> 2 == 15 )
                                          {
                                            v120 = *(_DWORD *)(a3 + 60) ^ *((_DWORD *)v99 + 15);
                                            *((_DWORD *)v99 + 15) = v120;
                                            v140[15] = v120;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              if ( v8 != v105 )
              {
                v121 = v105 + 1;
                v122 = v141[4 * v103] ^ *(_BYTE *)(a3 + 4 * v103);
                v141[4 * v103] = v122;
                LOBYTE(v140[v103]) = v122;
                if ( v8 > v105 + 1 )
                {
                  v123 = v105 + 2;
                  v124 = v141[v121] ^ *(_BYTE *)(a3 + v121);
                  v141[v121] = v124;
                  *((_BYTE *)v140 + v121) = v124;
                  if ( v8 > v123 )
                  {
                    v125 = *(_BYTE *)(a3 + v123);
                    a3 += v8;
                    v126 = v141[v123] ^ v125;
                    v141[v123] = v126;
                    *((_BYTE *)v140 + v123) = v126;
                    goto LABEL_74;
                  }
                }
              }
LABEL_122:
              a3 += v8;
              goto LABEL_74;
            }
            v129 = v141;
            v130 = v140;
            v131 = (char *)a3;
            v132 = (char *)v140 - 1;
            a3 += v8;
            do
            {
              v133 = *v131++;
              v134 = v133 ^ *v129;
              *v129++ = v134;
              *++v132 = v134;
            }
            while ( v131 != (char *)a3 );
LABEL_126:
            v140 = v130;
            goto LABEL_74;
          }
        }
        else if ( v8 )
        {
          v32 = v26 + 64;
          v33 = &v145[v32];
          v34 = (unsigned int)v140 >= a3 + 4;
          if ( (unsigned int)v140 < a3 + 4 )
            v34 = a3 >= (unsigned int)(v140 + 1);
          v35 = v34;
          if ( v8 <= 5 )
            v35 = 0;
          v36 = v35 & 1;
          if ( (((unsigned __int8)v140 | (unsigned __int8)(a3 | (unsigned __int8)v33)) & 3) != 0 )
            v36 = 0;
          if ( v36 )
          {
            v37 = *(_DWORD *)a3;
            v38 = *(_DWORD *)&v145[v32];
            v39 = ((v8 - 4) >> 2) + 1;
            *(_DWORD *)&v145[v32] = *(_DWORD *)a3;
            v40 = 4 * v39;
            *v140 = v38 ^ v37;
            if ( (v8 - 4) >> 2 )
            {
              v41 = *(_DWORD *)(a3 + 4);
              v42 = *((_DWORD *)v33 + 1);
              *((_DWORD *)v33 + 1) = v41;
              v140[1] = v42 ^ v41;
              if ( (v8 - 4) >> 2 != 1 )
              {
                v43 = *(_DWORD *)(a3 + 8);
                v44 = *((_DWORD *)v33 + 2);
                *((_DWORD *)v33 + 2) = v43;
                v140[2] = v44 ^ v43;
                if ( (v8 - 4) >> 2 != 2 )
                {
                  v45 = *(_DWORD *)(a3 + 12);
                  v46 = *((_DWORD *)v33 + 3);
                  *((_DWORD *)v33 + 3) = v45;
                  v140[3] = v46 ^ v45;
                  if ( (v8 - 4) >> 2 != 3 )
                  {
                    v47 = *(_DWORD *)(a3 + 16);
                    v48 = *((_DWORD *)v33 + 4);
                    *((_DWORD *)v33 + 4) = v47;
                    v140[4] = v48 ^ v47;
                    if ( (v8 - 4) >> 2 != 4 )
                    {
                      v49 = *(_DWORD *)(a3 + 20);
                      v50 = *((_DWORD *)v33 + 5);
                      *((_DWORD *)v33 + 5) = v49;
                      v140[5] = v50 ^ v49;
                      if ( (v8 - 4) >> 2 != 5 )
                      {
                        v51 = *(_DWORD *)(a3 + 24);
                        v52 = *((_DWORD *)v33 + 6);
                        *((_DWORD *)v33 + 6) = v51;
                        v140[6] = v52 ^ v51;
                        if ( (v8 - 4) >> 2 != 6 )
                        {
                          v53 = *(_DWORD *)(a3 + 28);
                          v54 = *((_DWORD *)v33 + 7);
                          *((_DWORD *)v33 + 7) = v53;
                          v140[7] = v54 ^ v53;
                          if ( (v8 - 4) >> 2 != 7 )
                          {
                            v55 = *(_DWORD *)(a3 + 32);
                            v56 = *((_DWORD *)v33 + 8);
                            *((_DWORD *)v33 + 8) = v55;
                            v140[8] = v56 ^ v55;
                            if ( (v8 - 4) >> 2 != 8 )
                            {
                              v57 = *(_DWORD *)(a3 + 36);
                              v58 = *((_DWORD *)v33 + 9);
                              *((_DWORD *)v33 + 9) = v57;
                              v140[9] = v58 ^ v57;
                              if ( (v8 - 4) >> 2 != 9 )
                              {
                                v59 = *(_DWORD *)(a3 + 40);
                                v60 = *((_DWORD *)v33 + 10);
                                *((_DWORD *)v33 + 10) = v59;
                                v140[10] = v60 ^ v59;
                                if ( (v8 - 4) >> 2 != 10 )
                                {
                                  v61 = *(_DWORD *)(a3 + 44);
                                  v62 = *((_DWORD *)v33 + 11);
                                  *((_DWORD *)v33 + 11) = v61;
                                  v140[11] = v62 ^ v61;
                                  if ( (v8 - 4) >> 2 != 11 )
                                  {
                                    v63 = *(_DWORD *)(a3 + 48);
                                    v64 = *((_DWORD *)v33 + 12);
                                    *((_DWORD *)v33 + 12) = v63;
                                    v140[12] = v64 ^ v63;
                                    if ( (v8 - 4) >> 2 != 12 )
                                    {
                                      v65 = *(_DWORD *)(a3 + 52);
                                      v66 = *((_DWORD *)v33 + 13);
                                      *((_DWORD *)v33 + 13) = v65;
                                      v140[13] = v66 ^ v65;
                                      if ( (v8 - 4) >> 2 != 13 )
                                      {
                                        v67 = *(_DWORD *)(a3 + 56);
                                        v68 = *((_DWORD *)v33 + 14);
                                        *((_DWORD *)v33 + 14) = v67;
                                        v140[14] = v68 ^ v67;
                                        if ( (v8 - 4) >> 2 == 15 )
                                        {
                                          v69 = *(_DWORD *)(a3 + 60);
                                          v70 = *((_DWORD *)v33 + 15);
                                          *((_DWORD *)v33 + 15) = v69;
                                          v140[15] = v69 ^ v70;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            if ( v8 != v40 )
            {
              v71 = v40 + 1;
              v72 = *(_BYTE *)(a3 + 4 * v39);
              v73 = v141[4 * v39];
              v141[4 * v39] = v72;
              LOBYTE(v140[v39]) = v73 ^ v72;
              if ( v8 > v40 + 1 )
              {
                v74 = *(_BYTE *)(a3 + v71);
                v75 = v40 + 2;
                v76 = v141[v71];
                v141[v71] = v74;
                *((_BYTE *)v140 + v71) = v76 ^ v74;
                if ( v8 > v40 + 2 )
                {
                  v77 = *(_BYTE *)(a3 + v75);
                  a3 += v8;
                  v78 = v141[v75];
                  v141[v75] = v77;
                  *((_BYTE *)v140 + v75) = v78 ^ v77;
LABEL_74:
                  v79 = -v8 & 0xF;
                  v80 = v8 + v79;
                  v81 = v8 + v79 + 32;
LABEL_75:
                  v144 = (unsigned __int8 *)a3;
                  v82 = v4 + 208;
                  v83 = &v141[v8];
                  v84 = (int *)((char *)v140 + v8);
                  v85 = 128;
                  v141 += v80;
                  memset(v83, 0, v79);
                  goto LABEL_76;
                }
              }
            }
            goto LABEL_122;
          }
          v130 = v140;
          v135 = (unsigned __int8 *)a3;
          v136 = v141;
          a3 += v8;
          v137 = (char *)v140 - 1;
          do
          {
            v138 = *v135++;
            v139 = *v136;
            *v136++ = v138;
            *++v137 = v138 ^ v139;
          }
          while ( v135 != (unsigned __int8 *)a3 );
          goto LABEL_126;
        }
        v81 = 32;
        v80 = v8;
        v79 = v8;
        goto LABEL_75;
      }
      return -1;
    }
    *(_DWORD *)(v4 + 32) = v10;
    sub_137024(v4 + 48, &unk_1B5AF0, 64, v4, v4 + 32);
    sub_F1804(v4 + 208, v4 + 48);
    *(_QWORD *)(v4 + 176) = 0;
    *(_QWORD *)(v4 + 168) = 0;
    *(_DWORD *)(v4 + 112) = v10;
    *(_DWORD *)(v4 + 32) = 1;
    *(_DWORD *)(v4 + 188) = 1;
    if ( v8 != -1 )
    {
      sub_F1858(v4 + 208, v4 + 148, 13, v8 + 1);
      *(_DWORD *)(v4 + 184) = 1;
      *(_QWORD *)(v4 + 168) = 13;
    }
  }
  if ( a3 )
  {
    if ( !v140 )
    {
      sub_F1858(v4 + 208, a3, a4, 0);
      v128 = *(_QWORD *)(v4 + 168);
      *(_DWORD *)(v4 + 184) = 1;
      *(_QWORD *)(v4 + 168) = v128 + a4;
      return a4;
    }
    v11 = *(_DWORD *)(v4 + 184);
    if ( v11 )
    {
      if ( (*(_DWORD *)(v4 + 168) & 0xF) != 0 )
        sub_F1858(v4 + 208, &unk_1B5AF0, 16 - (*(_DWORD *)(v4 + 168) & 0xF), v11);
      *(_DWORD *)(v4 + 184) = 0;
    }
    result = -1;
    *(_DWORD *)(v4 + 200) = -1;
    if ( v8 == -1 )
    {
      v8 = a4;
      v13 = 0;
    }
    else
    {
      if ( a4 != v8 + 16 )
        return result;
      v13 = v8 != a4;
    }
    if ( *(_DWORD *)(a1 + 8) )
    {
      v14 = v140;
      v15 = (_DWORD *)a3;
      v16 = v4 + 208;
      a3 += v8;
      sub_D50D8(a1, v140, v15, v8);
      sub_F1858(v4 + 208, v140, v8, v17);
    }
    else
    {
      v16 = v4 + 208;
      sub_F1858(v4 + 208, a3, v8, 0);
      v14 = v140;
      v25 = (_DWORD *)a3;
      a3 += v8;
      sub_D50D8(a1, v140, v25, v8);
    }
    *(_QWORD *)(v4 + 176) += v8;
    if ( a3 )
      v18 = v13;
    else
      v18 = v13 | 1;
    v140 = (int *)((char *)v14 + v8);
    if ( !v18 )
      return a4;
    if ( !a3 )
      v13 = 0;
  }
  else
  {
    v16 = v4 + 208;
    v13 = 0;
  }
  v19 = *(_DWORD *)(v4 + 184);
  if ( v19 )
  {
    if ( (*(_DWORD *)(v4 + 168) & 0xF) != 0 )
      sub_F1858(v16, &unk_1B5AF0, 16 - (*(_DWORD *)(v4 + 168) & 0xF), v19);
    v19 = 0;
    *(_DWORD *)(v4 + 184) = 0;
  }
  if ( (*(_DWORD *)(v4 + 176) & 0xF) != 0 )
    sub_F1858(v16, &unk_1B5AF0, 16 - (*(_DWORD *)(v4 + 176) & 0xF), v19);
  sub_F1858(v16, v4 + 168, 16, v19);
  sub_F25E8(v16);
  *(_DWORD *)(v4 + 188) = 0;
  if ( v13 )
  {
    if ( *(_DWORD *)(a1 + 8) )
    {
      v21 = *(_DWORD *)(v4 + 132);
      v20 = (_DWORD *)(v4 + 132);
      v22 = v20[1];
      v23 = v20[2];
      v24 = v20[3];
      *v140 = v21;
      v140[1] = v22;
      v140[2] = v23;
      v140[3] = v24;
    }
    else if ( sub_BC33C(v145, (unsigned __int8 *)a3, 16) )
    {
      memset((char *)v140 - v8, 0, v8);
      return -1;
    }
  }
  else if ( !*(_DWORD *)(a1 + 8) && sub_BC33C(v145, (unsigned __int8 *)(v4 + 132), *(_DWORD *)(v4 + 192)) )
  {
    return -1;
  }
  return a4;
}
