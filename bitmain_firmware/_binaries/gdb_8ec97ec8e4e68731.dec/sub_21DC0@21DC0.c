unsigned int __fastcall sub_21DC0(int a1, unsigned int a2, unsigned int a3, int a4)
{
  int v7; // r0
  int v8; // r4
  int v9; // r1
  _BYTE *v10; // r0
  int v11; // r0
  int v12; // r0
  bool v13; // zf
  int v14; // r3
  int v15; // r5
  bool v16; // zf
  unsigned int v17; // r4
  int v18; // r6
  int v19; // r3
  int *v20; // r6
  int v21; // r1
  int v22; // r2
  unsigned int v23; // r3
  int v24; // r4
  int v25; // r3
  int i; // r4
  int v27; // r3
  _BYTE *v29; // r2
  int v30; // r1
  int v31; // r2
  int *v32; // r3
  int *v33; // r4
  int v34; // r1
  int v35; // r2
  int v36; // r5
  bool v37; // cf
  int v38; // r10
  int v39; // r10
  int *v40; // r8
  int v41; // r1
  int v42; // r2
  int v43; // r6
  int v44; // r10
  int v45; // r2
  int v46; // r8
  int v47; // r2
  int v48; // r2
  int v49; // r4
  int v50; // r1
  int v51; // r2
  int v52; // r3
  int v53; // r0
  int v54; // r1
  int v55; // r3
  int v56; // r2
  int v57; // r4
  const char *v58; // r0
  int v59; // r0
  unsigned int v60; // r10
  unsigned int v61; // r8
  int v62; // r6
  int v63; // r3
  int v64; // r4
  unsigned int v65; // r7
  int v66; // r3
  unsigned int v67; // r7
  int v68; // r0
  unsigned int v69; // r0
  unsigned int v70; // r4
  int v71; // r0
  int v72; // r1
  int v73; // r5
  unsigned int v74; // r8
  int v75; // r5
  int v76; // r1
  int v77; // r2
  int v78; // r5
  int v79; // r1
  int v80; // r2
  int v81; // r3
  int v82; // r12
  int v83; // r0
  int v84; // r1
  int v85; // r2
  unsigned int v86; // r3
  int v87; // r8
  int v88; // r1
  int v89; // r2
  int *v90; // r3
  unsigned int v91; // r0
  int v92; // r4
  unsigned int v93; // r0
  int v94; // r1
  int v95; // r2
  int v96; // r3
  int *v97; // r4
  int v98; // r1
  int v99; // r2
  __int16 v100; // r3
  _BYTE *v101; // r2
  int v102; // r4
  int v103; // r3
  _DWORD *v104; // r2
  int v105; // r2
  int v106; // r5
  int v107; // r3
  unsigned int v108; // r0
  unsigned int v109; // r0
  int v110; // r1
  int v111; // r2
  int *v112; // r3
  int v113; // r12
  int v114; // r1
  int v115; // r2
  int v116; // r1
  int v117; // r2
  int *v118; // r3
  unsigned int v119; // r0
  int v120; // r4
  unsigned int v121; // r0
  int v122; // r1
  int v123; // r2
  int v124; // r3
  int v125; // r3
  int v126; // [sp+0h] [bp-134h]
  int v127; // [sp+0h] [bp-134h]
  int v128; // [sp+0h] [bp-134h]
  int v129; // [sp+0h] [bp-134h]
  int v130; // [sp+0h] [bp-134h]
  int v131; // [sp+4h] [bp-130h] BYREF
  int v132; // [sp+8h] [bp-12Ch]
  int v133; // [sp+Ch] [bp-128h]
  int v134; // [sp+10h] [bp-124h]
  int v135; // [sp+14h] [bp-120h]
  int v136; // [sp+18h] [bp-11Ch]
  int v137; // [sp+1Ch] [bp-118h]
  unsigned int v138; // [sp+20h] [bp-114h]
  int v139; // [sp+24h] [bp-110h]
  int v140; // [sp+28h] [bp-10Ch]
  int v141; // [sp+2Ch] [bp-108h]
  int v142; // [sp+30h] [bp-104h]
  int v143; // [sp+34h] [bp-100h]
  int v144; // [sp+38h] [bp-FCh] BYREF
  int v145; // [sp+3Ch] [bp-F8h]
  int v146; // [sp+40h] [bp-F4h]
  int v147; // [sp+48h] [bp-ECh] BYREF
  _BYTE v148[12]; // [sp+4Ch] [bp-E8h] BYREF
  int v149; // [sp+58h] [bp-DCh] BYREF
  int v150; // [sp+5Ch] [bp-D8h]
  int v151; // [sp+60h] [bp-D4h]
  _DWORD v152[26]; // [sp+64h] [bp-D0h] BYREF
  int v153; // [sp+CCh] [bp-68h]
  int v154; // [sp+F4h] [bp-40h]
  int v155; // [sp+F8h] [bp-3Ch]
  int v156; // [sp+FCh] [bp-38h]
  int v157; // [sp+10Ch] [bp-28h] BYREF
  int v158; // [sp+110h] [bp-24h]
  int v159; // [sp+114h] [bp-20h]
  _BYTE v160[4]; // [sp+130h] [bp-4h] BYREF

  v137 = a4;
  v135 = a1;
  v139 = ((int (*)(void))loc_165BB8)();
  v7 = a1;
  v8 = 0;
  v134 = ((int (__fastcall *)(int))loc_165C28)(v7);
  do
  {
    v9 = v8;
    v10 = &v160[12 * v8++];
    sub_1CD71C(v10 - 192, v9, 0);
  }
  while ( v8 != 16 );
  v11 = ((int (__fastcall *)(int))loc_16666C)(v135);
  v12 = sub_1CDC44(v148, 13, v11);
  if ( a2 < a3 )
  {
    v136 = -2048;
    v140 = -1040;
    v138 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v12 = sub_FA9D4(a2, 2, v134);
        v17 = (unsigned __int16)v12;
        v18 = v12 & 0xFE00;
        if ( v18 == 46080 )
        {
          v12 = sub_1CDCD8(v148, v157, v158, v159);
          if ( v12 )
            goto LABEL_34;
          v36 = 14;
          do
          {
            if ( (((((_WORD)v17 << 6) & 0x4000 | (unsigned __int8)v17) >> v36) & 1) != 0 )
            {
              sub_1CD7FC(&v144, v157, v158, v159, -4);
              v157 = v144;
              v158 = v145;
              v159 = v146;
              v12 = sub_1CDDD0(v148, v144, v145, v146, 4, v152[3 * v36 + 3], v152[3 * v36 + 4], v152[3 * v36 + 5]);
            }
            v37 = v36-- != 0;
          }
          while ( v37 );
          goto LABEL_29;
        }
        v19 = v12 & 0xFF80;
        if ( v19 != 45184 )
          break;
        v20 = &v157;
        v147 = (4 * (_WORD)v12) & 0x1FC;
        sub_1CD7FC(&v144, v157, v158, v159, -v147);
LABEL_33:
        v12 = v144;
        v21 = v145;
        v22 = v146;
        a2 += 2;
        *v20 = v144;
        v20[1] = v21;
        v20[2] = v22;
        if ( a3 <= a2 )
          goto LABEL_34;
      }
      v13 = v19 == 45056;
      if ( v19 != 45056 )
        v13 = v18 == 48128;
      v14 = v13;
      if ( (unsigned __int16)v12 == 18109 )
        v14 |= 1u;
      if ( v14 )
      {
LABEL_34:
        if ( !dword_471514 )
          goto LABEL_35;
        goto LABEL_83;
      }
      v15 = (unsigned __int16)(v12 & v136);
      if ( v15 == 43008 )
      {
        v33 = &v152[3 * (BYTE1(v12) & 7) + 3];
        sub_1CD7FC(&v144, v157, v158, v159, (4 * (_WORD)v12) & 0x3FC);
LABEL_48:
        v12 = v144;
        v34 = v145;
        v35 = v146;
        *v33 = v144;
        v33[1] = v34;
        v33[2] = v35;
        goto LABEL_29;
      }
      if ( v18 == 7168 )
      {
        v38 = ((unsigned __int16)v12 >> 3) & 7;
        v12 = sub_1CDB38(v152[3 * v38 + 3], v152[3 * v38 + 4], v152[3 * v38 + 5], 13);
        if ( v12 )
        {
          v20 = &v152[3 * (v17 & 7) + 3];
          sub_1CD7FC(&v144, v152[3 * v38 + 3], v152[3 * v38 + 4], v152[3 * v38 + 5], (v17 >> 6) & 7);
          goto LABEL_33;
        }
        if ( v15 != 12288 )
          goto LABEL_17;
      }
      else if ( v15 != 12288 )
      {
        goto LABEL_16;
      }
      v39 = (v17 >> 8) & 7;
      v12 = sub_1CDB38(v152[3 * v39 + 3], v152[3 * v39 + 4], v152[3 * v39 + 5], 13);
      if ( v12 )
      {
        v40 = &v152[3 * v39 + 3];
        sub_1CD7FC(&v144, *v40, v152[3 * v39 + 4], v152[3 * v39 + 5], (unsigned __int8)v17);
        v12 = v144;
        v41 = v145;
        v42 = v146;
        *v40 = v144;
        v152[3 * v39 + 4] = v41;
        v152[3 * v39 + 5] = v42;
        goto LABEL_29;
      }
LABEL_16:
      if ( v18 == 6144 )
      {
        v43 = (v17 >> 6) & 7;
        v12 = sub_1CDB38(v152[3 * v43 + 3], v152[3 * v43 + 4], v152[3 * v43 + 5], 13);
        if ( v12 )
        {
          v44 = (v17 >> 3) & 7;
          v141 = 2 * v44;
          v12 = sub_1CDB14(v152[3 * v44 + 3], v152[3 * v44 + 4], v152[3 * v44 + 5]);
          if ( v12 )
          {
            v45 = v152[3 * v43 + 5];
            v33 = &v152[3 * (v17 & 7) + 3];
            v126 = v152[3 * v43 + 3];
            v131 = v152[3 * v43 + 4];
            v132 = v45;
            sub_1CD72C(&v144, v152[v141 + 3 + v44], v152[v141 + 4 + v44], v152[v141 + 5 + v44], v126);
            goto LABEL_48;
          }
        }
      }
LABEL_17:
      if ( (v17 & 0xFF00) == 0x4400 )
      {
        v46 = (v17 >> 3) & 0xF;
        v12 = sub_1CDB14(v152[3 * v46 + 3], v152[3 * v46 + 4], v152[3 * v46 + 5]);
        if ( v12 )
        {
          v47 = v152[3 * v46 + 5];
          v33 = &v152[3 * ((v17 >> 4) & 8 | v17 & 7) + 3];
          v127 = v152[3 * v46 + 3];
          v131 = v152[3 * v46 + 4];
          v132 = v47;
          sub_1CD72C(&v144, *v33, v33[1], v33[2], v127);
          goto LABEL_48;
        }
      }
      else if ( (v17 & 0xFF00) == 0x4600 )
      {
        v29 = &v160[12 * ((v17 >> 3) & 0xF)];
        v12 = *((_DWORD *)v29 - 48);
        v30 = *((_DWORD *)v29 - 47);
        v31 = *((_DWORD *)v29 - 46);
        v32 = &v152[3 * (((int)v17 >> 4) & 8 | v17 & 7) + 3];
        *v32 = v12;
        v32[1] = v30;
        v32[2] = v31;
        goto LABEL_29;
      }
      if ( v15 == 36864 )
      {
        v128 = (4 * (_WORD)v17) & 0x3FC;
        v49 = (v17 >> 8) & 7;
        v147 = v128;
        sub_1CD7FC(&v149, v157, v158, v159, v128);
LABEL_72:
        v12 = sub_1CDCD8(v148, v149, v150, v151);
        if ( v12 )
          goto LABEL_34;
        v12 = sub_1CDDD0(v148, v149, v150, v151, 4, v152[3 * v49 + 3], v152[3 * v49 + 4], v152[3 * v49 + 5]);
        goto LABEL_29;
      }
      if ( v15 == 24576 )
      {
        v129 = (v17 >> 4) & 0x7C;
        v147 = v129;
        v50 = v152[3 * ((v17 >> 3) & 7) + 3];
        v51 = v152[3 * ((v17 >> 3) & 7) + 4];
        v52 = v152[3 * ((v17 >> 3) & 7) + 5];
        v49 = v17 & 7;
        sub_1CD7FC(&v149, v50, v51, v52, v129);
        goto LABEL_72;
      }
      if ( ((v15 - 28672) & 0xE800) != 0 )
      {
        if ( v15 == 51200 )
          goto LABEL_66;
      }
      else
      {
        v12 = sub_1CDB38(
                v152[3 * ((v17 >> 3) & 7) + 3],
                v152[3 * ((v17 >> 3) & 7) + 4],
                v152[3 * ((v17 >> 3) & 7) + 5],
                13);
        if ( v12 )
          goto LABEL_29;
        if ( v15 == 51200 )
        {
LABEL_66:
          v48 = (v17 >> 8) & 7;
          goto LABEL_67;
        }
      }
      if ( v15 == 38912 )
        goto LABEL_29;
      if ( v15 != 26624 )
      {
        v16 = (v17 & 0xFFC0) == 0;
        if ( (v17 & 0xFFC0) != 0 )
          v16 = (v17 & 0xFFC0) == 7168;
        if ( v16 )
          goto LABEL_29;
        if ( v15 == 0x2000 )
        {
          v12 = sub_1CD704(&v152[3 * ((v17 >> 8) & 7) + 3], (unsigned __int8)v17);
          goto LABEL_29;
        }
        if ( v15 == 18432 )
        {
          v59 = sub_FA95C(a2 + 4 + 4 * (unsigned __int8)v17, 4, v139);
          v12 = sub_1CD704(&v152[3 * ((v17 >> 8) & 7) + 3], v59);
          goto LABEL_29;
        }
        goto LABEL_68;
      }
      v48 = (v17 >> 3) & 7;
LABEL_67:
      v12 = sub_1CDB38(v152[3 * v48 + 3], v152[3 * v48 + 4], v152[3 * v48 + 5], 13);
      if ( v12 )
        goto LABEL_29;
LABEL_68:
      if ( sub_1829C(v17) != 4 )
      {
        v12 = sub_18534(v17);
        if ( v12 )
          goto LABEL_34;
        v138 = a2;
        goto LABEL_29;
      }
      v60 = a2 + 2;
      v142 = sub_FA9D4(a2 + 2, 2, v134);
      v61 = (unsigned __int16)v142;
      if ( v15 == 61440 && (v142 & 0xE800) == 0xE800 )
      {
        if ( (v142 & 0x800) != 0 )
          v71 = 0;
        else
          v71 = 0x400000;
        v72 = a2 + 4 + ((2 * (v142 & 0x7FF) + (((-2048 * ((v17 >> 10) & 1)) | v17 & 0x7FF) << 12)) ^ v71);
        if ( (v142 & 0x1000) == 0 )
          v72 &= 0xFFFFFFFC;
        v147 = (2 * (v142 & 0x7FF) + (((-2048 * ((v17 >> 10) & 1)) | v17 & 0x7FF) << 12)) ^ v71;
        v12 = sub_21C38(v135, v72, (v142 & 0x1000) != 0);
        if ( !v12 )
          goto LABEL_34;
        goto LABEL_113;
      }
      v62 = v17 & 0xFFD0;
      if ( v62 == 59648 )
      {
        v75 = 2 * (v17 & 0xF);
        v141 = v17 & 0xF;
        if ( sub_1CDB38(v152[3 * v141 + 3], v152[3 * v141 + 4], v152[3 * v141 + 5], 13) )
        {
          v76 = v152[v75 + 4 + v141];
          v77 = v152[v75 + 5 + v141];
          v149 = v152[v75 + 3 + v141];
          v150 = v76;
          v151 = v77;
          v12 = sub_1CDCD8(v148, v149, v76, v77);
          if ( v12 )
            goto LABEL_34;
          v78 = 14;
          v142 = (int)&v131;
          do
          {
            if ( (((int)v61 >> v78) & 1) != 0 )
            {
              sub_1CD7FC(&v144, v149, v150, v151, -4);
              v149 = v144;
              v150 = v145;
              v151 = v146;
              v79 = v152[3 * v78 + 4];
              v80 = v152[3 * v78 + 5];
              v81 = v142;
              *(_DWORD *)v142 = v152[3 * v78 + 3];
              *(_DWORD *)(v81 + 4) = v79;
              *(_DWORD *)(v81 + 8) = v80;
              v12 = sub_1CDDD0(v148, v149, v150, v151, 4, v131, v132, v133);
            }
            v37 = v78-- != 0;
          }
          while ( v37 );
          if ( (v17 & 0x20) != 0 )
            goto LABEL_166;
          goto LABEL_113;
        }
      }
      if ( (v17 & 0xFF50) == 0xE940 )
      {
        v141 = v17 & 0xF;
        v143 = 2 * v141;
        if ( sub_1CDB38(v152[3 * v141 + 3], v152[3 * v141 + 4], v152[3 * v141 + 5], 13) )
        {
          v82 = (unsigned __int8)v61;
          v147 = (unsigned __int8)v61;
          if ( (v17 & 0x80) == 0 )
            v82 = -(unsigned __int8)v61;
          v83 = v152[v143 + 3 + v141];
          v84 = v152[v143 + 4 + v141];
          v85 = v152[v143 + 5 + v141];
          v86 = v61 >> 12;
          v87 = (v61 >> 8) & 0xF;
          v142 = v86;
          v149 = v83;
          v150 = v84;
          v151 = v85;
          sub_1CD7FC(&v144, v83, v84, v85, v82);
          v149 = v144;
          v150 = v145;
          v151 = v146;
          v12 = sub_1CDCD8(v148, v144, v145, v146);
          if ( v12 )
            goto LABEL_34;
          sub_1CDDD0(v148, v149, v150, v151, 4, v152[3 * v142 + 3], v152[3 * v142 + 4], v152[3 * v142 + 5]);
          sub_1CD7FC(v152, v149, v150, v151, 4);
          v12 = sub_1CDDD0(v148, v152[0], v152[1], v152[2], 4, v152[3 * v87 + 3], v152[3 * v87 + 4], v152[3 * v87 + 5]);
          if ( (v17 & 0x20) != 0 )
          {
            v12 = v149;
            v88 = v150;
            v89 = v151;
            v90 = &v152[v143 + 3 + v141];
            *v90 = v149;
            v90[1] = v88;
            v90[2] = v89;
          }
          goto LABEL_113;
        }
      }
      v143 = v17 & 0xFFF0;
      if ( v143 == 63680 )
      {
        v141 = v17 & 0xF;
        if ( (v61 & 0xC00) == 0xC00 )
        {
          v73 = 2 * v141;
          if ( sub_1CDB38(v152[3 * v141 + 3], v152[3 * v141 + 4], v152[3 * v141 + 5], 13) )
          {
            v113 = (unsigned __int8)v61;
            v147 = (unsigned __int8)v61;
            if ( (v61 & 0x200) == 0 )
              v113 = -(unsigned __int8)v61;
            v114 = v152[v73 + 4 + v141];
            v115 = v152[v73 + 5 + v141];
            v149 = v152[v73 + 3 + v141];
            v150 = v114;
            v151 = v115;
            sub_1CD7FC(&v144, v149, v114, v115, v113);
            v149 = v144;
            v150 = v145;
            v151 = v146;
            v12 = sub_1CDCD8(v148, v144, v145, v146);
            if ( v12 )
              goto LABEL_34;
            v12 = sub_1CDDD0(
                    v148,
                    v149,
                    v150,
                    v151,
                    4,
                    v152[3 * (v61 >> 12) + 3],
                    v152[3 * (v61 >> 12) + 4],
                    v152[3 * (v61 >> 12) + 5]);
            if ( (v61 & 0x100) == 0 )
              goto LABEL_113;
LABEL_166:
            v12 = v149;
            v110 = v150;
            v111 = v151;
            v112 = &v152[3 * v141 + 3];
            *v112 = v149;
            v112[1] = v110;
            v112[2] = v111;
LABEL_113:
            a2 = v60;
            goto LABEL_29;
          }
        }
        else
        {
          v73 = 2 * (v17 & 0xF);
        }
        if ( sub_1CDB38(v152[v73 + 3 + v141], v152[v73 + 4 + v141], v152[v73 + 5 + v141], 13) )
        {
          v130 = v61 & 0xFFF;
          v147 = v130;
          v74 = v61 >> 12;
          sub_1CD7FC(&v149, v152[v73 + 3 + v141], v152[v73 + 4 + v141], v152[v73 + 5 + v141], v130);
          v12 = sub_1CDCD8(v148, v149, v150, v151);
          if ( v12 )
            goto LABEL_34;
          v12 = sub_1CDDD0(v148, v149, v150, v151, 4, v152[3 * v74 + 3], v152[3 * v74 + 4], v152[3 * v74 + 5]);
          goto LABEL_113;
        }
      }
      if ( v62 == 63616 )
        goto LABEL_144;
      if ( v62 != 63488 )
      {
        if ( v62 == 59536 && (v142 & 0x8000) == 0 )
        {
LABEL_144:
          v12 = sub_1CDB38(v152[3 * (v17 & 0xF) + 3], v152[3 * (v17 & 0xF) + 4], v152[3 * (v17 & 0xF) + 5], 13);
          if ( v12 )
            goto LABEL_113;
        }
        if ( v143 != 63568 )
          goto LABEL_98;
        if ( (v61 & 0xD00) != 0xC00 )
          goto LABEL_99;
        v106 = v17 & 0xF;
        goto LABEL_158;
      }
      if ( (v61 & 0xD00) != 0xC00 )
      {
        if ( v143 == 63568 )
          goto LABEL_99;
LABEL_98:
        if ( v143 != 63696 )
          goto LABEL_99;
        v105 = 3 * (v17 & 0xF);
        goto LABEL_153;
      }
      v106 = v17 & 0xF;
      v12 = sub_1CDB38(v152[3 * v106 + 3], v152[3 * v106 + 4], v152[3 * v106 + 5], 13);
      if ( v12 )
        goto LABEL_113;
      if ( v143 != 63568 )
        goto LABEL_98;
LABEL_158:
      v105 = 3 * v106;
LABEL_153:
      v12 = sub_1CDB38(v152[v105 + 3], v152[v105 + 4], v152[v105 + 5], 13);
      if ( v12 )
        goto LABEL_113;
LABEL_99:
      v63 = v17 & v140;
      if ( (v17 & v140) == 0xF100 )
      {
        if ( (v142 & 0x8000) == 0 )
        {
          v91 = (2 * (_WORD)v17) & 0x800 | (unsigned __int8)v61 | (v61 >> 4) & 0x700;
          v92 = 3 * (v17 & 0xF);
          v93 = sub_1F298(v91);
          v94 = v152[v92 + 3];
          v95 = v152[v92 + 4];
          v96 = v152[v92 + 5];
          v97 = &v152[3 * ((v61 >> 8) & 0xF) + 3];
          sub_1CD7FC(&v144, v94, v95, v96, v93);
          goto LABEL_148;
        }
      }
      else
      {
        switch ( v63 )
        {
          case 61952:
            if ( (v142 & 0x8000) == 0 )
            {
              v100 = 2 * v17;
              v101 = &v160[12 * (v17 & 0xF)];
              v102 = 3 * ((v61 >> 8) & 0xF);
              v103 = v100 & 0x800 | (unsigned __int8)v61 | (v61 >> 4) & 0x700;
              v104 = v101 - 192;
              goto LABEL_151;
            }
            break;
          case 61856:
            if ( (v142 & 0x8000) == 0 )
            {
              v119 = (2 * (_WORD)v17) & 0x800 | (unsigned __int8)v61 | (v61 >> 4) & 0x700;
              v120 = v17 & 0xF;
              v121 = sub_1F298(v119);
              v122 = v152[3 * v120 + 3];
              v123 = v152[3 * v120 + 4];
              v124 = v152[3 * v120 + 5];
              v97 = &v152[3 * ((v61 >> 8) & 0xF) + 3];
              sub_1CD7FC(&v144, v122, v123, v124, -v121);
              goto LABEL_148;
            }
            break;
          case 62112:
            if ( (v142 & 0x8000) == 0 )
            {
              v125 = (2 * (_WORD)v17) & 0x800 | (unsigned __int8)v61 | (v61 >> 4) & 0x700;
              v104 = &v152[3 * (v17 & 0xF) + 3];
              v102 = 3 * ((v61 >> 8) & 0xF);
              v103 = -v125;
LABEL_151:
              v97 = &v152[v102 + 3];
              sub_1CD7FC(&v144, *v104, v104[1], v104[2], v103);
LABEL_148:
              v12 = v144;
              v98 = v145;
              v99 = v146;
              a2 += 2;
              *v97 = v144;
              v97[1] = v98;
              v97[2] = v99;
              goto LABEL_29;
            }
            break;
          default:
            if ( (v17 & 0xFFFFFBFF) == 0xF04F )
            {
LABEL_178:
              v69 = sub_1F298((2 * (_WORD)v17) & 0x800 | (unsigned __int8)v61 | (v61 >> 4) & 0x700);
              goto LABEL_111;
            }
            if ( v63 == 62016 )
            {
              v12 = sub_1CD704(
                      &v152[3 * ((v61 >> 8) & 0xF) + 3],
                      (2 * (_WORD)v17) & 0x800
                    | (unsigned __int16)((_WORD)v17 << 12)
                    | (unsigned __int8)v61
                    | (v61 >> 4) & 0x700);
              goto LABEL_113;
            }
            goto LABEL_104;
        }
      }
      if ( (v17 & 0xFBFF) == 0xF04F )
        goto LABEL_178;
LABEL_104:
      if ( v17 == 59999 )
      {
        if ( (v61 & 0xFFFFF0F0) == 0 )
        {
          a2 += 2;
          v12 = v152[3 * (v61 & 0xF) + 3];
          v116 = v152[3 * (v61 & 0xF) + 4];
          v117 = v152[3 * (v61 & 0xF) + 5];
          v118 = &v152[3 * ((v61 >> 8) & 0xF) + 3];
          *v118 = v12;
          v118[1] = v116;
          v118[2] = v117;
          goto LABEL_29;
        }
      }
      else
      {
        if ( (v17 & 0xFF7F) == 0xF85F )
        {
          v107 = v61 & 0xFFF;
          v108 = a2 + 4;
          if ( (v17 & 0x80) != 0 )
            v109 = v108 + v107;
          else
            v109 = v108 - v107;
          v147 = v61 & 0xFFF;
          v69 = sub_FA95C(v109, 4, v139);
          v70 = v61 >> 12;
          goto LABEL_112;
        }
        if ( (v17 & 0xFF7F) == 0xE95F )
        {
          v13 = (v17 & 0x80) == 0;
          v64 = v139;
          v65 = a2 + 4;
          v66 = (4 * (_WORD)v61) & 0x3FC;
          if ( v13 )
            v67 = v65 - v66;
          else
            v67 = v65 + v66;
          v147 = (4 * (_WORD)v61) & 0x3FC;
          v68 = sub_FA95C(v67, 4, v139);
          sub_1CD704(&v152[3 * (v61 >> 12) + 3], v68);
          v69 = sub_FA95C(v67 + 4, 4, v64);
LABEL_111:
          v70 = (v61 >> 8) & 0xF;
LABEL_112:
          v12 = sub_1CD704(&v152[3 * v70 + 3], v69);
          goto LABEL_113;
        }
      }
      v12 = sub_1858C(v17, v61);
      if ( v12 )
        goto LABEL_34;
      v138 = a2;
      a2 += 2;
LABEL_29:
      a2 += 2;
      if ( a3 <= a2 )
        goto LABEL_34;
    }
  }
  if ( dword_471514 )
  {
    v138 = 0;
LABEL_83:
    v57 = *(_DWORD *)sub_242FC8(v12);
    v58 = (const char *)sub_25AC8C(v135, a2);
    sub_2594B0(v57, "Prologue scan stopped at %s\n", v58);
LABEL_35:
    v23 = v138;
    if ( !v138 )
      v23 = a2;
    v138 = v23;
  }
  else
  {
    v138 = a2;
  }
  v24 = v137;
  if ( v137 )
  {
    if ( sub_1CDB38(v154, v155, v156, 13) )
    {
      v25 = v156;
      *(_DWORD *)(v24 + 8) = 11;
      *(_DWORD *)(v24 + 4) = -v25;
    }
    else
    {
      v53 = sub_1CDB38(v152[24], v152[25], v153, 13);
      v54 = v137;
      if ( v53 )
      {
        v55 = v153;
        v56 = 7;
      }
      else
      {
        v55 = v159;
        v56 = 13;
      }
      *(_DWORD *)(v137 + 8) = v56;
      *(_DWORD *)(v54 + 4) = -v55;
    }
    for ( i = 0; i != 16; ++i )
    {
      if ( sub_1CDFC4(v148, v135, i, &v147) )
      {
        v27 = *(_DWORD *)(v137 + 12);
        *(_DWORD *)(v27 + 16 * i) = v147;
        *(_DWORD *)(v27 + 16 * i + 4) = 0;
      }
    }
  }
  sub_1CDCA4(v148);
  return v138;
}
