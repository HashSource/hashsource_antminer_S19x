int __fastcall sub_123194(unsigned __int8 *a1, int a2, int *a3)
{
  bool v3; // zf
  int *v4; // r4
  int v5; // r5
  int v6; // lr
  int v7; // r7
  unsigned int v8; // r3
  int v9; // r12
  unsigned int v10; // r6
  unsigned int v11; // r5
  int v12; // r4
  int v13; // r0
  unsigned int v14; // r3
  int v15; // r7
  unsigned int v16; // r5
  int v17; // r4
  int v18; // r0
  unsigned int v19; // r3
  int v20; // r7
  unsigned int v21; // r5
  int v22; // r4
  int v23; // r0
  unsigned int v24; // r3
  int v25; // r12
  unsigned int v26; // r5
  int v27; // r4
  int v28; // r0
  unsigned int v29; // r3
  unsigned int v30; // r5
  int v31; // r4
  int v32; // r0
  unsigned int v33; // r3
  int v34; // r12
  unsigned int v35; // r5
  int v36; // r4
  int v37; // r0
  unsigned int v38; // r3
  int v39; // r12
  unsigned int v40; // r5
  int v41; // r4
  int v42; // r0
  unsigned int v43; // r3
  int v44; // r12
  unsigned int v45; // r5
  int v46; // r4
  int v47; // r0
  unsigned int v48; // r3
  unsigned int v49; // r5
  int v50; // r4
  int v51; // r6
  int v52; // r0
  unsigned int v53; // r3
  int v54; // r5
  int v55; // r1
  int v56; // r6
  unsigned int v57; // r1
  int v58; // r4
  int v59; // r0
  unsigned int v60; // r0
  int v61; // lr
  int v62; // r9
  int v63; // r7
  int v64; // r5
  unsigned int v65; // r1
  unsigned int v66; // r0
  int v67; // r6
  int v68; // r3
  int v69; // r7
  int v70; // r5
  unsigned int v71; // r1
  unsigned int v72; // r0
  int v73; // r6
  int v74; // r3
  int v75; // r7
  int v76; // r5
  unsigned int v77; // r1
  unsigned int v78; // r0
  int v79; // r6
  int v80; // r3
  int v81; // r7
  int v82; // r5
  unsigned int v83; // r1
  unsigned int v84; // r0
  int v85; // r6
  int v86; // r3
  int v87; // r7
  int v88; // r5
  unsigned int v89; // r1
  unsigned int v90; // r0
  int v91; // r6
  int v92; // r3
  int v93; // r7
  int v94; // r5
  unsigned int v95; // r1
  unsigned int v96; // r0
  int v97; // lr
  int v98; // r6
  int v99; // r7
  int v100; // r5
  unsigned int v101; // r1
  unsigned int v102; // r0
  int v103; // r3
  int v104; // r6
  int *v105; // r2
  int *v106; // r8
  int v107; // r10
  unsigned int v108; // r9
  int v109; // r7
  int v110; // r0
  int v111; // r0
  unsigned int v112; // r1
  int v113; // t1

  v3 = a3 == 0;
  if ( a3 )
    v3 = a1 == 0;
  if ( v3 )
    return -1;
  if ( (a2 & 0xFFFFFFBF) == 0x80 )
  {
    v4 = a3;
    if ( a2 == 128 )
    {
      a3[60] = 10;
      goto LABEL_9;
    }
    if ( a2 == 192 )
    {
      a3[60] = 12;
      goto LABEL_9;
    }
  }
  else
  {
    if ( a2 != 256 )
      return -2;
    v4 = a3;
  }
  a3[60] = 14;
LABEL_9:
  v5 = ((a1[1] << 16) | (*a1 << 24)) ^ a1[3] | (a1[2] << 8);
  *a3 = v5;
  v6 = ((a1[5] << 16) | (a1[4] << 24)) ^ a1[7] | (a1[6] << 8);
  a3[1] = v6;
  v7 = ((a1[9] << 16) | (a1[8] << 24)) ^ a1[11] | (a1[10] << 8);
  a3[2] = v7;
  v8 = a1[15] ^ ((a1[13] << 16) | (a1[12] << 24)) | (a1[14] << 8);
  a3[3] = v8;
  if ( a2 == 128 )
  {
    v11 = *((_DWORD *)&unk_1C7494 + BYTE1(v8) + 768)
        & 0xFF0000
        ^ *((_DWORD *)&unk_1C7494 + BYTE2(v8) + 512)
        & 0xFF000000
        ^ *((unsigned __int8 *)&unk_1C7494 + 4 * HIBYTE(v8) + 1024)
        ^ *((_DWORD *)&unk_1C7494 + (unsigned __int8)v8)
        & 0xFF00
        ^ v5
        ^ 0x1000000;
    v12 = v11 ^ v6;
    v13 = v11 ^ v6 ^ v7;
    a3[4] = v11;
    v14 = v8 ^ v13;
    a3[5] = v11 ^ v6;
    a3[6] = v13;
    v15 = *((_DWORD *)&unk_1C7494 + (unsigned __int8)v14);
    a3[7] = v14;
    v16 = v15
        & 0xFF00
        ^ v11
        ^ 0x2000000
        ^ *((unsigned __int8 *)&unk_1C7494 + 4 * HIBYTE(v14) + 1024)
        ^ *((_DWORD *)&unk_1C7494 + BYTE2(v14) + 512)
        & 0xFF000000
        ^ *((_DWORD *)&unk_1C7494 + BYTE1(v14) + 768)
        & 0xFF0000;
    v17 = v12 ^ v16;
    v18 = v13 ^ v17;
    a3[8] = v16;
    v19 = v14 ^ v18;
    a3[9] = v17;
    a3[10] = v18;
    v20 = *((_DWORD *)&unk_1C7494 + (unsigned __int8)v19);
    a3[11] = v19;
    v21 = v20
        & 0xFF00
        ^ v16
        ^ 0x4000000
        ^ *((unsigned __int8 *)&unk_1C7494 + 4 * HIBYTE(v19) + 1024)
        ^ *((_DWORD *)&unk_1C7494 + BYTE2(v19) + 512)
        & 0xFF000000
        ^ *((_DWORD *)&unk_1C7494 + BYTE1(v19) + 768)
        & 0xFF0000;
    v22 = v17 ^ v21;
    v23 = v18 ^ v22;
    a3[12] = v21;
    v24 = v19 ^ v23;
    a3[13] = v22;
    a3[14] = v23;
    v25 = *((_DWORD *)&unk_1C7494 + (unsigned __int8)v24);
    a3[15] = v24;
    v26 = *((_DWORD *)&unk_1C7494 + BYTE1(v24) + 768)
        & 0xFF0000
        ^ *((_DWORD *)&unk_1C7494 + BYTE2(v24) + 512)
        & 0xFF000000
        ^ v25
        & 0xFF00
        ^ v21
        ^ 0x8000000
        ^ *((unsigned __int8 *)&unk_1C7494 + 4 * HIBYTE(v24) + 1024);
    v27 = v22 ^ v26;
    a3[16] = v26;
    v28 = v23 ^ v27;
    a3[17] = v27;
    v29 = v24 ^ v28;
    a3[18] = v28;
    a3[19] = v29;
    v30 = *((_DWORD *)&unk_1C7494 + BYTE1(v29) + 768)
        & 0xFF0000
        ^ *((_DWORD *)&unk_1C7494 + (unsigned __int8)v29)
        & 0xFF00
        ^ v26
        ^ 0x10000000
        ^ *((unsigned __int8 *)&unk_1C7494 + 4 * HIBYTE(v29) + 1024)
        ^ *((_DWORD *)&unk_1C7494 + BYTE2(v29) + 512)
        & 0xFF000000;
    v31 = v27 ^ v30;
    v32 = v28 ^ v31;
    a3[20] = v30;
    v33 = v29 ^ v32;
    a3[21] = v31;
    a3[22] = v32;
    v34 = *((_DWORD *)&unk_1C7494 + (unsigned __int8)v33);
    a3[23] = v33;
    v35 = *((_DWORD *)&unk_1C7494 + BYTE1(v33) + 768)
        & 0xFF0000
        ^ *((_DWORD *)&unk_1C7494 + BYTE2(v33) + 512)
        & 0xFF000000
        ^ v34
        & 0xFF00
        ^ v30
        ^ 0x20000000
        ^ *((unsigned __int8 *)&unk_1C7494 + 4 * HIBYTE(v33) + 1024);
    v36 = v31 ^ v35;
    v37 = v32 ^ v36;
    a3[24] = v35;
    v38 = v33 ^ v37;
    a3[25] = v36;
    a3[26] = v37;
    v39 = *((_DWORD *)&unk_1C7494 + (unsigned __int8)v38);
    a3[27] = v38;
    v40 = *((_DWORD *)&unk_1C7494 + BYTE1(v38) + 768)
        & 0xFF0000
        ^ *((_DWORD *)&unk_1C7494 + BYTE2(v38) + 512)
        & 0xFF000000
        ^ v39
        & 0xFF00
        ^ v35
        ^ 0x40000000
        ^ *((unsigned __int8 *)&unk_1C7494 + 4 * HIBYTE(v38) + 1024);
    v41 = v36 ^ v40;
    v42 = v37 ^ v41;
    a3[28] = v40;
    v43 = v38 ^ v42;
    a3[29] = v41;
    a3[30] = v42;
    v44 = *((_DWORD *)&unk_1C7494 + (unsigned __int8)v43);
    a3[31] = v43;
    v45 = *((_DWORD *)&unk_1C7494 + BYTE1(v43) + 768)
        & 0xFF0000
        ^ *((_DWORD *)&unk_1C7494 + BYTE2(v43) + 512)
        & 0xFF000000
        ^ v44
        & 0xFF00
        ^ (v40 + 0x80000000)
        ^ *((unsigned __int8 *)&unk_1C7494 + 4 * HIBYTE(v43) + 1024);
    v46 = v41 ^ v45;
    a3[32] = v45;
    v47 = v42 ^ v46;
    a3[33] = v46;
    v48 = v43 ^ v47;
    a3[34] = v47;
    a3[35] = v48;
    v49 = *((_DWORD *)&unk_1C7494 + BYTE1(v48) + 768)
        & 0xFF0000
        ^ *((_DWORD *)&unk_1C7494 + (unsigned __int8)v48)
        & 0xFF00
        ^ v45
        ^ 0x1B000000
        ^ *((unsigned __int8 *)&unk_1C7494 + 4 * HIBYTE(v48) + 1024)
        ^ *((_DWORD *)&unk_1C7494 + BYTE2(v48) + 512)
        & 0xFF000000;
    v50 = v46 ^ v49;
    v51 = v49 ^ 0x36000000;
    v52 = v47 ^ v50;
    a3[36] = v49;
    v53 = v48 ^ v52;
    a3[37] = v50;
    a3[38] = v52;
    v54 = *((_DWORD *)&unk_1C7494 + BYTE2(v53) + 512);
    v55 = *((_DWORD *)&unk_1C7494 + BYTE1(v53) + 768);
    v56 = v51
        ^ *((_DWORD *)&unk_1C7494 + (unsigned __int8)v53)
        & 0xFF00
        ^ *((unsigned __int8 *)&unk_1C7494 + 4 * HIBYTE(v53) + 1024);
    a3[39] = v53;
    v57 = v55 & 0xFF0000 ^ v54 & 0xFF000000 ^ v56;
    v58 = v50 ^ v57;
    a3[40] = v57;
    v59 = v52 ^ v58;
    a3[41] = v58;
    a3[42] = v59;
    a3[43] = v53 ^ v59;
  }
  else
  {
    v9 = ((a1[17] << 16) | (a1[16] << 24)) ^ a1[19] | (a1[18] << 8);
    a3[4] = v9;
    v10 = ((a1[21] << 16) | (a1[20] << 24)) ^ a1[23] | (a1[22] << 8);
    a3[5] = v10;
    if ( a2 == 192 )
    {
      v60 = *((_DWORD *)&unk_1C7494 + BYTE1(v10) + 768)
          & 0xFF0000
          ^ *((_DWORD *)&unk_1C7494 + BYTE2(v10) + 512)
          & 0xFF000000
          ^ *((_DWORD *)&unk_1C7494 + (unsigned __int8)v10)
          & 0xFF00
          ^ v5
          ^ 0x1000000
          ^ *((unsigned __int8 *)&unk_1C7494 + 4 * HIBYTE(v10) + 1024);
      v61 = v6 ^ v60;
      a3[6] = v60;
      v62 = v7 ^ v61;
      a3[7] = v61;
      v63 = v8 ^ v7 ^ v61;
      a3[8] = v62;
      v64 = v63 ^ v9;
      a3[9] = v63;
      v65 = v10 ^ v63 ^ v9;
      a3[10] = v63 ^ v9;
      a3[11] = v65;
      v66 = *((_DWORD *)&unk_1C7494 + BYTE2(v65) + 512)
          & 0xFF000000
          ^ *((_DWORD *)&unk_1C7494 + (unsigned __int8)v65)
          & 0xFF00
          ^ *((unsigned __int8 *)&unk_1C7494 + 4 * HIBYTE(v65) + 1024)
          ^ 0x2000000
          ^ *((_DWORD *)&unk_1C7494 + BYTE1(v65) + 768)
          & 0xFF0000
          ^ v60;
      v67 = v61 ^ v66;
      a3[12] = v66;
      v68 = v62 ^ v61 ^ v66;
      a3[13] = v61 ^ v66;
      v69 = v63 ^ v68;
      a3[14] = v68;
      v70 = v64 ^ v69;
      a3[15] = v69;
      v71 = v65 ^ v70;
      a3[16] = v70;
      a3[17] = v71;
      v72 = *((_DWORD *)&unk_1C7494 + (unsigned __int8)v71)
          & 0xFF00
          ^ *((unsigned __int8 *)&unk_1C7494 + 4 * HIBYTE(v71) + 1024)
          ^ 0x4000000
          ^ *((_DWORD *)&unk_1C7494 + BYTE2(v71) + 512)
          & 0xFF000000
          ^ *((_DWORD *)&unk_1C7494 + BYTE1(v71) + 768)
          & 0xFF0000
          ^ v66;
      v73 = v67 ^ v72;
      a3[18] = v72;
      v74 = v68 ^ v73;
      a3[19] = v73;
      v75 = v69 ^ v74;
      a3[20] = v74;
      v76 = v70 ^ v75;
      a3[21] = v75;
      v77 = v71 ^ v76;
      a3[22] = v76;
      a3[23] = v77;
      v78 = *((_DWORD *)&unk_1C7494 + (unsigned __int8)v77)
          & 0xFF00
          ^ *((unsigned __int8 *)&unk_1C7494 + 4 * HIBYTE(v77) + 1024)
          ^ 0x8000000
          ^ *((_DWORD *)&unk_1C7494 + BYTE2(v77) + 512)
          & 0xFF000000
          ^ *((_DWORD *)&unk_1C7494 + BYTE1(v77) + 768)
          & 0xFF0000
          ^ v72;
      v79 = v73 ^ v78;
      a3[24] = v78;
      v80 = v74 ^ v79;
      a3[25] = v79;
      v81 = v75 ^ v80;
      a3[26] = v80;
      v82 = v76 ^ v81;
      a3[27] = v81;
      v83 = v77 ^ v82;
      a3[28] = v82;
      a3[29] = v83;
      v84 = *((_DWORD *)&unk_1C7494 + (unsigned __int8)v83)
          & 0xFF00
          ^ *((unsigned __int8 *)&unk_1C7494 + 4 * HIBYTE(v83) + 1024)
          ^ 0x10000000
          ^ *((_DWORD *)&unk_1C7494 + BYTE2(v83) + 512)
          & 0xFF000000
          ^ *((_DWORD *)&unk_1C7494 + BYTE1(v83) + 768)
          & 0xFF0000
          ^ v78;
      v85 = v79 ^ v84;
      a3[30] = v84;
      v86 = v80 ^ v85;
      a3[31] = v85;
      v87 = v81 ^ v86;
      a3[32] = v86;
      v88 = v82 ^ v87;
      a3[33] = v87;
      v89 = v83 ^ v88;
      a3[34] = v88;
      a3[35] = v89;
      v90 = *((_DWORD *)&unk_1C7494 + (unsigned __int8)v89)
          & 0xFF00
          ^ *((unsigned __int8 *)&unk_1C7494 + 4 * HIBYTE(v89) + 1024)
          ^ 0x20000000
          ^ *((_DWORD *)&unk_1C7494 + BYTE2(v89) + 512)
          & 0xFF000000
          ^ *((_DWORD *)&unk_1C7494 + BYTE1(v89) + 768)
          & 0xFF0000
          ^ v84;
      v91 = v85 ^ v90;
      a3[36] = v90;
      v92 = v86 ^ v91;
      a3[37] = v91;
      v93 = v87 ^ v92;
      a3[38] = v92;
      v94 = v88 ^ v93;
      a3[39] = v93;
      v95 = v89 ^ v94;
      a3[40] = v94;
      a3[41] = v95;
      v96 = *((_DWORD *)&unk_1C7494 + (unsigned __int8)v95)
          & 0xFF00
          ^ *((unsigned __int8 *)&unk_1C7494 + 4 * HIBYTE(v95) + 1024)
          ^ 0x40000000
          ^ *((_DWORD *)&unk_1C7494 + BYTE2(v95) + 512)
          & 0xFF000000
          ^ *((_DWORD *)&unk_1C7494 + BYTE1(v95) + 768)
          & 0xFF0000
          ^ v90;
      v97 = v91 ^ v96;
      a3[42] = v96;
      v98 = v92 ^ v91 ^ v96;
      a3[43] = v97;
      v99 = v93 ^ v98;
      a3[44] = v98;
      v100 = v94 ^ v99;
      a3[45] = v99;
      v101 = v95 ^ v100;
      a3[46] = v100;
      a3[47] = v101;
      v102 = v96
           ^ *((_DWORD *)&unk_1C7494 + BYTE1(v101) + 768)
           & 0xFF0000
           ^ *((_DWORD *)&unk_1C7494 + BYTE2(v101) + 512)
           & 0xFF000000
           ^ ((*((_DWORD *)&unk_1C7494 + (unsigned __int8)v101)
             & 0xFF00
             ^ *((unsigned __int8 *)&unk_1C7494 + 4 * HIBYTE(v101) + 1024))
            + 0x80000000);
      a3[48] = v102;
      v103 = v102 ^ v97 ^ v98;
      a3[49] = v102 ^ v97;
      a3[50] = v103;
      a3[51] = v99 ^ v103;
    }
    else
    {
      a3[6] = ((a1[25] << 16) | (a1[24] << 24)) ^ a1[27] | (a1[26] << 8);
      a3[7] = ((a1[29] << 16) | (a1[28] << 24)) ^ a1[31] | (a1[30] << 8);
      if ( a2 == 256 )
      {
        v104 = v7;
        v105 = a3 + 48;
        v106 = (int *)&unk_1C8494;
        while ( 1 )
        {
          v112 = v4[7];
          v113 = *v106++;
          v5 ^= *((_DWORD *)&unk_1C7494 + BYTE1(v112) + 768)
              & 0xFF0000
              ^ *((_DWORD *)&unk_1C7494 + BYTE2(v112) + 512)
              & 0xFF000000
              ^ *((_DWORD *)&unk_1C7494 + (unsigned __int8)v112)
              & 0xFF00
              ^ v113
              ^ *((unsigned __int8 *)&unk_1C7494 + 4 * HIBYTE(v112) + 1024);
          v6 ^= v5;
          v4[8] = v5;
          v104 ^= v6;
          v4[9] = v6;
          v8 ^= v104;
          v4[10] = v104;
          v4[11] = v8;
          if ( v4 == v105 )
            break;
          v4 += 8;
          v107 = *((_DWORD *)&unk_1C7494 + BYTE1(v8)) & 0xFF00;
          v108 = *((_DWORD *)&unk_1C7494 + HIBYTE(v8) + 512)
               & 0xFF000000
               ^ *((unsigned __int8 *)&unk_1C7494 + 4 * (unsigned __int8)v8 + 1024)
               ^ *(v4 - 4)
               ^ *((_DWORD *)&unk_1C7494 + BYTE2(v8) + 768)
               & 0xFF0000;
          v109 = *(v4 - 3) ^ v108 ^ v107;
          v4[4] = v108 ^ v107;
          v110 = *(v4 - 2);
          v4[5] = v109;
          v111 = v110 ^ v109;
          v4[6] = v111;
          v4[7] = v112 ^ v111;
        }
      }
    }
  }
  return 0;
}
