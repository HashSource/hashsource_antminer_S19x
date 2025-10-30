unsigned int __fastcall sub_E1D38(
        unsigned int result,
        unsigned int a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        void (__fastcall *a6)(unsigned int, int *, int))
{
  _BYTE *v6; // r4
  _BYTE *v8; // r6
  int v9; // r5
  int v10; // r3
  _BYTE *v11; // r7
  _DWORD *v12; // r8
  _DWORD *v13; // r11
  int *v14; // r7
  unsigned int v15; // r4
  int v16; // r0
  int v17; // r1
  int v18; // r3
  int v19; // r2
  int v20; // r0
  int v21; // r2
  unsigned int v22; // r3
  unsigned int v23; // r7
  unsigned int *v24; // r3
  unsigned int v25; // r1
  unsigned int v26; // r2
  unsigned int v27; // r3
  char v28; // r2
  char v29; // r2
  char v30; // r2
  char v31; // r2
  char v32; // r2
  char v33; // r2
  char v34; // r2
  char v35; // r2
  char v36; // r2
  char v37; // r2
  char v38; // r2
  char v39; // r2
  char v40; // r2
  char v41; // r2
  char v42; // r2
  _DWORD *v43; // r1
  unsigned int v44; // lr
  _DWORD *v45; // r2
  bool v46; // cf
  char v47; // r3
  int v48; // r3
  unsigned int v49; // lr
  int v50; // r3
  int v51; // r5
  _BYTE *v52; // r8
  _BYTE *v53; // r11
  int *v54; // r7
  unsigned int v55; // r4
  char v56; // r1
  char v57; // r0
  char v58; // r12
  char v59; // r2
  char v60; // r1
  char v61; // r2
  char v62; // r0
  char v63; // r2
  char v64; // r1
  char v65; // r2
  char v66; // r12
  char v67; // r2
  char v68; // r0
  char v69; // r2
  char v70; // r1
  char v71; // r2
  char v72; // r12
  char v73; // r2
  char v74; // r0
  char v75; // r0
  char v76; // r12
  char v77; // r1
  char v78; // r2
  char v79; // r2
  unsigned int v80; // r6
  unsigned int v81; // r8
  char v82; // r2
  char v83; // r0
  char v84; // r1
  char v85; // r3
  char v86; // r2
  char v87; // r3
  char v88; // r0
  char v89; // r3
  char v90; // r2
  char v91; // r3
  char v92; // r1
  char v93; // r3
  char v94; // r2
  char v95; // r3
  char v96; // r0
  char v97; // r3
  char v98; // r2
  char v99; // r3
  char v100; // r1
  char v101; // r3
  char v102; // r2
  char v103; // r2
  char v104; // r0
  char v105; // r3
  char v106; // r1
  char v107; // r3
  char v108; // r2
  char v109; // r3
  char v110; // r0
  char v111; // r3
  char v112; // r2
  char v113; // r3
  char v114; // r1
  char v115; // r3
  char v116; // r2
  char v117; // r3
  char v118; // r0
  char v119; // r3
  char v120; // r2
  char v121; // r3
  char v122; // r1
  char v123; // r3
  char v124; // r2
  char v125; // r3
  char v126; // r2
  char v127; // r2
  char v128; // r1
  char v129; // r3
  char v130; // r2
  char v131; // r3
  char v132; // r2
  unsigned int v133; // r7
  unsigned int v134; // r8
  unsigned int v135; // r6
  int v136; // r0
  int v137; // r2
  int v138; // r1
  int v139; // r3
  int v140; // r0
  int v141; // r3
  int v142; // r2
  int v143; // r3
  int v144; // r3
  int v145; // r1
  unsigned int v146; // [sp+4h] [bp-18h]
  int v147; // [sp+8h] [bp-14h] BYREF
  int v148; // [sp+Ch] [bp-10h]
  int v149; // [sp+10h] [bp-Ch]
  int v150; // [sp+14h] [bp-8h]

  v146 = result;
  v6 = (_BYTE *)a5;
  if ( !a3 )
    return result;
  v8 = (_BYTE *)a2;
  v9 = a3;
  v10 = a2 | a5;
  if ( result == a2 )
  {
    if ( v10 << 30 )
    {
      if ( a3 > 0xF )
      {
        v80 = result + 16;
        v81 = a3;
        do
        {
          v81 -= 16;
          a6(v80 - 16, &v147, a4);
          v80 += 16;
          v82 = *(_BYTE *)(v80 - 32);
          v83 = BYTE1(v147);
          v84 = BYTE2(v147);
          *(_BYTE *)(v80 - 32) = *(_BYTE *)a5 ^ v147;
          v85 = *(_BYTE *)(a5 + 1);
          *(_BYTE *)a5 = v82;
          v86 = *(_BYTE *)(v80 - 31);
          v87 = v85 ^ v83;
          v88 = HIBYTE(v147);
          *(_BYTE *)(v80 - 31) = v87;
          v89 = *(_BYTE *)(a5 + 2);
          *(_BYTE *)(a5 + 1) = v86;
          v90 = *(_BYTE *)(v80 - 30);
          v91 = v89 ^ v84;
          v92 = v148;
          *(_BYTE *)(v80 - 30) = v91;
          v93 = *(_BYTE *)(a5 + 3);
          *(_BYTE *)(a5 + 2) = v90;
          v94 = *(_BYTE *)(v80 - 29);
          v95 = v93 ^ v88;
          v96 = BYTE1(v148);
          *(_BYTE *)(v80 - 29) = v95;
          v97 = *(_BYTE *)(a5 + 4);
          *(_BYTE *)(a5 + 3) = v94;
          v98 = *(_BYTE *)(v80 - 28);
          v99 = v97 ^ v92;
          v100 = BYTE2(v148);
          *(_BYTE *)(v80 - 28) = v99;
          v101 = *(_BYTE *)(a5 + 5);
          *(_BYTE *)(a5 + 4) = v98;
          v102 = *(_BYTE *)(v80 - 27);
          *(_BYTE *)(v80 - 27) = v101 ^ v96;
          *(_BYTE *)(a5 + 5) = v102;
          v103 = *(_BYTE *)(v80 - 26);
          v104 = HIBYTE(v148);
          v105 = *(_BYTE *)(a5 + 6) ^ v100;
          v106 = v149;
          *(_BYTE *)(v80 - 26) = v105;
          v107 = *(_BYTE *)(a5 + 7);
          *(_BYTE *)(a5 + 6) = v103;
          v108 = *(_BYTE *)(v80 - 25);
          v109 = v107 ^ v104;
          v110 = BYTE1(v149);
          *(_BYTE *)(v80 - 25) = v109;
          v111 = *(_BYTE *)(a5 + 8);
          *(_BYTE *)(a5 + 7) = v108;
          v112 = *(_BYTE *)(v80 - 24);
          v113 = v111 ^ v106;
          v114 = BYTE2(v149);
          *(_BYTE *)(v80 - 24) = v113;
          v115 = *(_BYTE *)(a5 + 9);
          *(_BYTE *)(a5 + 8) = v112;
          v116 = *(_BYTE *)(v80 - 23);
          v117 = v115 ^ v110;
          v118 = HIBYTE(v149);
          *(_BYTE *)(v80 - 23) = v117;
          v119 = *(_BYTE *)(a5 + 10);
          *(_BYTE *)(a5 + 9) = v116;
          v120 = *(_BYTE *)(v80 - 22);
          v121 = v119 ^ v114;
          v122 = v150;
          *(_BYTE *)(v80 - 22) = v121;
          v123 = *(_BYTE *)(a5 + 11);
          *(_BYTE *)(a5 + 10) = v120;
          v124 = *(_BYTE *)(v80 - 21);
          *(_BYTE *)(v80 - 21) = v123 ^ v118;
          v125 = *(_BYTE *)(a5 + 12);
          *(_BYTE *)(a5 + 11) = v124;
          v126 = *(_BYTE *)(v80 - 20);
          *(_BYTE *)(v80 - 20) = v125 ^ v122;
          *(_BYTE *)(a5 + 12) = v126;
          v127 = *(_BYTE *)(v80 - 19);
          result = BYTE2(v150);
          v128 = HIBYTE(v150);
          *(_BYTE *)(v80 - 19) = *(_BYTE *)(a5 + 13) ^ BYTE1(v150);
          v129 = *(_BYTE *)(a5 + 14);
          *(_BYTE *)(a5 + 13) = v127;
          v130 = *(_BYTE *)(v80 - 18);
          *(_BYTE *)(v80 - 18) = v129 ^ result;
          v131 = *(_BYTE *)(a5 + 15);
          *(_BYTE *)(a5 + 14) = v130;
          v132 = *(_BYTE *)(v80 - 17);
          *(_BYTE *)(v80 - 17) = v131 ^ v128;
          *(_BYTE *)(a5 + 15) = v132;
        }
        while ( v81 > 0xF );
LABEL_54:
        v133 = (v9 - 16) & 0xFFFFFFF0;
        v9 &= 0xFu;
        v11 = (_BYTE *)(v146 + v133 + 16);
        v8 = v11;
        goto LABEL_10;
      }
    }
    else if ( a3 > 0xF )
    {
      v134 = a3;
      v135 = result + 16;
      do
      {
        v134 -= 16;
        a6(v135 - 16, &v147, a4);
        v135 += 16;
        v136 = *(_DWORD *)(v135 - 32);
        v137 = v148;
        v138 = v149;
        *(_DWORD *)(v135 - 32) = *(_DWORD *)a5 ^ v147;
        v139 = *(_DWORD *)(a5 + 4);
        *(_DWORD *)a5 = v136;
        v140 = *(_DWORD *)(v135 - 28);
        v141 = v139 ^ v137;
        v142 = v150;
        *(_DWORD *)(v135 - 28) = v141;
        v143 = *(_DWORD *)(a5 + 8);
        *(_DWORD *)(a5 + 4) = v140;
        result = *(_DWORD *)(v135 - 24);
        *(_DWORD *)(v135 - 24) = v143 ^ v138;
        v144 = *(_DWORD *)(a5 + 12);
        *(_DWORD *)(a5 + 8) = result;
        v145 = *(_DWORD *)(v135 - 20);
        *(_DWORD *)(v135 - 20) = v144 ^ v142;
        *(_DWORD *)(a5 + 12) = v145;
      }
      while ( v134 > 0xF );
      goto LABEL_54;
    }
    v11 = (_BYTE *)a2;
    goto LABEL_11;
  }
  if ( !((v10 | result) << 30) )
  {
    if ( a3 <= 0xF )
    {
      v11 = (_BYTE *)result;
      goto LABEL_11;
    }
    v12 = (_DWORD *)a5;
    v13 = (_DWORD *)result;
    v14 = (int *)(a2 + 16);
    v15 = a3;
    do
    {
      v15 -= 16;
      a6((unsigned int)v13, v14 - 4, a4);
      v16 = *(v14 - 4);
      v17 = *(v14 - 3);
      v14 += 4;
      v18 = *(v14 - 6);
      v19 = *v12 ^ v16;
      v20 = *(v14 - 5);
      *(v14 - 8) = v19;
      *(v14 - 7) = v12[1] ^ v17;
      *(v14 - 6) = v12[2] ^ v18;
      v21 = v12[3];
      v12 = v13;
      v13 += 4;
      result = v20 ^ v21;
      *(v14 - 5) = result;
    }
    while ( v15 > 0xF );
    goto LABEL_8;
  }
  if ( a3 > 0xF )
  {
    v52 = (_BYTE *)a5;
    v53 = (_BYTE *)result;
    v54 = (int *)(a2 + 16);
    v55 = a3;
    do
    {
      v55 -= 16;
      a6((unsigned int)v53, v54 - 4, a4);
      v56 = *((_BYTE *)v54 - 16);
      v57 = *((_BYTE *)v54 - 15);
      v54 += 4;
      v58 = *((_BYTE *)v54 - 29);
      v59 = *v52 ^ v56;
      v60 = *((_BYTE *)v54 - 30);
      *((_BYTE *)v54 - 32) = v59;
      v61 = v52[1] ^ v57;
      v62 = *((_BYTE *)v54 - 28);
      *((_BYTE *)v54 - 31) = v61;
      v63 = v52[2] ^ v60;
      v64 = *((_BYTE *)v54 - 27);
      *((_BYTE *)v54 - 30) = v63;
      v65 = v58 ^ v52[3];
      v66 = *((_BYTE *)v54 - 26);
      *((_BYTE *)v54 - 29) = v65;
      v67 = v52[4] ^ v62;
      v68 = *((_BYTE *)v54 - 25);
      *((_BYTE *)v54 - 28) = v67;
      v69 = v52[5] ^ v64;
      v70 = *((_BYTE *)v54 - 24);
      *((_BYTE *)v54 - 27) = v69;
      v71 = v66 ^ v52[6];
      v72 = *((_BYTE *)v54 - 23);
      *((_BYTE *)v54 - 26) = v71;
      v73 = v52[7] ^ v68;
      v74 = *((_BYTE *)v54 - 22);
      *((_BYTE *)v54 - 25) = v73;
      *((_BYTE *)v54 - 24) = v52[8] ^ v70;
      *((_BYTE *)v54 - 23) = v72 ^ v52[9];
      *((_BYTE *)v54 - 22) = v52[10] ^ v74;
      v75 = *((_BYTE *)v54 - 20);
      v76 = *((_BYTE *)v54 - 18);
      v77 = *((_BYTE *)v54 - 19);
      *((_BYTE *)v54 - 21) ^= v52[11];
      v78 = v52[12] ^ v75;
      result = *((unsigned __int8 *)v54 - 17);
      *((_BYTE *)v54 - 20) = v78;
      *((_BYTE *)v54 - 19) = v52[13] ^ v77;
      *((_BYTE *)v54 - 18) = v76 ^ v52[14];
      v79 = v52[15];
      v52 = v53;
      v53 += 16;
      *((_BYTE *)v54 - 17) = v79 ^ result;
    }
    while ( v55 > 0xF );
LABEL_8:
    v22 = (unsigned int)(v9 - 16) >> 4;
    v6 = (_BYTE *)a5;
    v9 &= 0xFu;
    v23 = v22 + 1;
    v24 = (unsigned int *)(v146 + 16 * v22);
    v23 *= 16;
    v8 += v23;
    v11 = (_BYTE *)(v23 + v146);
    if ( v24 != (unsigned int *)a5 )
    {
      result = *v24;
      v25 = v24[1];
      v26 = v24[2];
      v27 = v24[3];
      *(_DWORD *)a5 = result;
      *(_DWORD *)(a5 + 4) = v25;
      *(_DWORD *)(a5 + 8) = v26;
      *(_DWORD *)(a5 + 12) = v27;
    }
LABEL_10:
    if ( !v9 )
      return result;
    goto LABEL_11;
  }
  v11 = (_BYTE *)result;
LABEL_11:
  result = ((int (__fastcall *)(_BYTE *, int *, int))a6)(v11, &v147, a4);
  v28 = *v11;
  *v8 = *v6 ^ v147;
  *v6 = v28;
  if ( v9 != 1 )
  {
    v29 = v11[1];
    v8[1] = v6[1] ^ BYTE1(v147);
    v6[1] = v29;
    if ( v9 != 2 )
    {
      v30 = v11[2];
      v8[2] = v6[2] ^ BYTE2(v147);
      v6[2] = v30;
      if ( v9 != 3 )
      {
        v31 = v11[3];
        v8[3] = v6[3] ^ HIBYTE(v147);
        v6[3] = v31;
        if ( v9 != 4 )
        {
          v32 = v11[4];
          v8[4] = v6[4] ^ v148;
          v6[4] = v32;
          if ( v9 != 5 )
          {
            v33 = v11[5];
            v8[5] = v6[5] ^ BYTE1(v148);
            v6[5] = v33;
            if ( v9 != 6 )
            {
              v34 = v11[6];
              v8[6] = v6[6] ^ BYTE2(v148);
              v6[6] = v34;
              if ( v9 != 7 )
              {
                v35 = v11[7];
                v8[7] = v6[7] ^ HIBYTE(v148);
                v6[7] = v35;
                if ( v9 != 8 )
                {
                  v36 = v11[8];
                  v8[8] = v6[8] ^ v149;
                  v6[8] = v36;
                  if ( v9 != 9 )
                  {
                    v37 = v11[9];
                    v8[9] = v6[9] ^ BYTE1(v149);
                    v6[9] = v37;
                    if ( v9 == 10 )
                    {
                      v9 = 10;
                    }
                    else
                    {
                      v38 = v11[10];
                      v8[10] = v6[10] ^ BYTE2(v149);
                      v6[10] = v38;
                      if ( v9 != 11 )
                      {
                        v39 = v11[11];
                        v8[11] = v6[11] ^ HIBYTE(v149);
                        v6[11] = v39;
                        if ( v9 != 12 )
                        {
                          v40 = v11[12];
                          v8[12] = v6[12] ^ v150;
                          v6[12] = v40;
                          if ( v9 != 13 )
                          {
                            v41 = v11[13];
                            v8[13] = v6[13] ^ BYTE1(v150);
                            v6[13] = v41;
                            if ( v9 == 15 )
                            {
                              v42 = v11[14];
                              v8[14] = v6[14] ^ BYTE2(v150);
                              v6[14] = v42;
                              v6[15] = v11[15];
                              return result;
                            }
                            v9 = 14;
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
  v43 = &v11[v9];
  v44 = (unsigned int)&v11[v9 + 4];
  v45 = &v6[v9];
  result = 16 - v9;
  v46 = (unsigned int)&v6[v9] >= v44;
  if ( (unsigned int)&v6[v9] < v44 )
    v46 = v43 >= (_DWORD *)&v6[v9 + 4];
  v47 = v46;
  if ( result <= 9 )
    v47 = 0;
  v48 = v47 & 1;
  if ( (((unsigned __int8)v43 | (unsigned __int8)v45) & 3) != 0 )
    v48 = 0;
  if ( v48 )
  {
    v49 = 4 * (((unsigned int)(12 - v9) >> 2) + 1);
    if ( (unsigned int)(15 - v9) <= 2 )
      goto LABEL_42;
    *v45 = *v43;
    v45[1] = v43[1];
    if ( (unsigned int)(12 - v9) >> 2 == 2 )
      v45[2] = v43[2];
    v9 += v49;
    if ( v49 != result )
    {
LABEL_42:
      v50 = v9 + 1;
      v6[v9] = v11[v9];
      if ( v9 != 15 )
      {
        v51 = v9 + 2;
        v6[v50] = v11[v50];
        if ( v51 != 16 )
          v6[v51] = v11[v51];
      }
    }
  }
  else
  {
    v6[v9] = v11[v9];
    v6[v9 + 1] = v11[v9 + 1];
    if ( v9 != 14 )
    {
      v6[v9 + 2] = v11[v9 + 2];
      if ( v9 != 13 )
      {
        v6[v9 + 3] = v11[v9 + 3];
        if ( v9 != 12 )
        {
          v6[v9 + 4] = v11[v9 + 4];
          if ( v9 != 11 )
          {
            v6[v9 + 5] = v11[v9 + 5];
            if ( v9 != 10 )
            {
              v6[v9 + 6] = v11[v9 + 6];
              if ( v9 != 9 )
              {
                v6[v9 + 7] = v11[v9 + 7];
                if ( v9 != 8 )
                {
                  v6[v9 + 8] = v11[v9 + 8];
                  if ( v9 != 7 )
                  {
                    v6[v9 + 9] = v11[v9 + 9];
                    if ( v9 != 6 )
                    {
                      v6[v9 + 10] = v11[v9 + 10];
                      if ( v9 != 5 )
                      {
                        v6[v9 + 11] = v11[v9 + 11];
                        if ( v9 != 4 )
                        {
                          v6[v9 + 12] = v11[v9 + 12];
                          if ( v9 != 3 )
                          {
                            v6[v9 + 13] = v11[v9 + 13];
                            if ( v9 != 2 )
                              v6[15] = v11[15];
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
  return result;
}
