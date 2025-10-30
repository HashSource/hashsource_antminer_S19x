int __fastcall sub_142E68(_DWORD *a1, int *a2)
{
  int v4; // r1
  int v5; // r12
  int v6; // r10
  int v7; // r0
  __int64 v8; // r2
  int v9; // lr
  __int64 v10; // r8
  int v11; // lr
  int v12; // r0
  __int64 v13; // r10
  __int64 v14; // kr40_8
  __int64 v15; // r10
  __int64 v16; // r6
  int v17; // r2
  int v18; // r5
  int v19; // r0
  int v20; // r12
  int v21; // r3
  int v22; // lr
  int v23; // r1
  int v24; // r5
  int v25; // r2
  int v26; // r3
  int v27; // r5
  int v28; // r0
  int v29; // r1
  int v30; // r5
  int v31; // r2
  int v32; // r0
  int v33; // r1
  int v34; // r3
  int v35; // r3
  int v36; // r3
  int v37; // r12
  int v38; // r3
  int v39; // lr
  int v40; // r3
  int v41; // r2
  int v42; // r3
  int v43; // r2
  int v44; // r0
  int v45; // r2
  int v46; // r3
  int v47; // r1
  int v48; // r2
  int v49; // r5
  int v50; // r3
  int v51; // r5
  int v52; // r0
  int v53; // r1
  int v54; // r3
  int result; // r0
  int v56; // [sp+0h] [bp-BCh]
  __int64 v57; // [sp+0h] [bp-BCh]
  int v58; // [sp+8h] [bp-B4h]
  __int64 v59; // [sp+8h] [bp-B4h]
  __int64 v60; // [sp+8h] [bp-B4h]
  int v61; // [sp+10h] [bp-ACh]
  int v62; // [sp+10h] [bp-ACh]
  int v63; // [sp+18h] [bp-A4h]
  __int64 v64; // [sp+18h] [bp-A4h]
  __int64 v65; // [sp+20h] [bp-9Ch]
  unsigned __int64 v66; // [sp+20h] [bp-9Ch]
  __int64 v67; // [sp+28h] [bp-94h]
  __int64 v68; // [sp+28h] [bp-94h]
  __int64 v69; // [sp+30h] [bp-8Ch]
  __int64 v70; // [sp+38h] [bp-84h]
  int v71; // [sp+40h] [bp-7Ch]
  int v72; // [sp+40h] [bp-7Ch]
  int v73; // [sp+48h] [bp-74h]
  __int64 v74; // [sp+50h] [bp-6Ch]
  __int64 v75; // [sp+58h] [bp-64h]
  unsigned __int64 v76; // [sp+58h] [bp-64h]
  unsigned __int64 v77; // [sp+60h] [bp-5Ch]
  unsigned __int64 v78; // [sp+68h] [bp-54h]
  __int64 v79; // [sp+80h] [bp-3Ch]
  __int64 v80; // [sp+88h] [bp-34h]
  _DWORD v81[11]; // [sp+90h] [bp-2Ch] BYREF

  sub_142808(a1, a2);
  sub_142808(a1 + 20, a2 + 10);
  v4 = a2[20];
  v5 = 38 * a2[29];
  v63 = 19 * a2[28];
  v6 = 2 * a2[21];
  v58 = 2 * a2[22];
  v73 = 2 * a2[24];
  v61 = 2 * a2[25];
  v7 = a2[26];
  v56 = 2 * a2[23];
  v71 = 38 * a2[27];
  v8 = 2
     * (v71 * (__int64)a2[27]
      + 2 * v7 * (__int64)v63
      + v5 * (__int64)v61
      + a2[22] * (__int64)a2[22]
      + a2[24] * (__int64)(2 * v4)
      + v6 * (__int64)v56);
  v75 = 2
      * (38 * a2[25] * (__int64)a2[25]
       + 19 * v7 * (__int64)v73
       + v71 * (__int64)v56
       + v63 * (__int64)v58
       + v4 * (__int64)v4
       + v6 * (__int64)v5);
  v9 = a2[24];
  v80 = v58 * (__int64)v9 + v7 * (__int64)(2 * v4) + v6 * (__int64)v61;
  v78 = v8 - __PAIR64__((unsigned __int64)(v8 + 0x2000000) >> 32, (v8 + 0x2000000) & 0xFC000000);
  v10 = v71 * (__int64)v9 + v63 * (__int64)v56 + a2[21] * (__int64)(2 * v4) + a2[22] * (__int64)v5;
  v11 = 2 * a2[27];
  v77 = v75 - __PAIR64__((unsigned __int64)(v75 + 0x2000000) >> 32, (v75 + 0x2000000) & 0xFC000000);
  v76 = ((v75 + 0x2000000) >> 26)
      + __PAIR64__(
          ((unsigned __int64)(19 * v7 * (__int64)v61 + v10) >> 32)
        + ((19 * v7 * (__int64)v61 + v10 + (unsigned __int64)(unsigned int)(19 * v7 * v61 + v10)) >> 32),
          2 * (19 * v7 * v61 + (int)v10));
  v67 = ((v8 + 0x2000000) >> 26)
      + 2
      * (v63 * (__int64)v11
       + v5 * (__int64)v7
       + v58 * (__int64)a2[23]
       + a2[25] * (__int64)(2 * v4)
       + a2[24] * (__int64)v6);
  v79 = v58 * (__int64)v7 + a2[28] * (__int64)(2 * v4) + v6 * (__int64)v11;
  v74 = ((__int64)(v76 + 0x1000000) >> 25)
      + 2
      * (19 * v7 * (__int64)v7
       + v71 * (__int64)v61
       + v73 * (__int64)v63
       + v5 * (__int64)v56
       + a2[22] * (__int64)(2 * v4)
       + a2[21] * (__int64)v6);
  v69 = 2 * (v63 * (__int64)a2[28] + v5 * (__int64)v11 + v56 * (__int64)a2[23] + v80) + ((v67 + 0x1000000) >> 25);
  v12 = v67 - ((v67 + 0x1000000) & 0xFE000000);
  v65 = v58 * (__int64)a2[27] + a2[29] * (__int64)(2 * v4) + a2[28] * (__int64)v6;
  v59 = v5 * (__int64)a2[28]
      + v56 * (__int64)a2[24]
      + v58 * (__int64)a2[25]
      + a2[27] * (__int64)(2 * v4)
      + a2[26] * (__int64)v6;
  v70 = 2
      * (v71 * (__int64)a2[26]
       + v63 * (__int64)v61
       + v5 * (__int64)a2[24]
       + a2[23] * (__int64)(2 * v4)
       + a2[22] * (__int64)v6)
      + ((v74 + 0x2000000) >> 26);
  v64 = a2[24] * (__int64)a2[24] + v61 * (__int64)v56 + v79;
  v57 = v56 * (__int64)a2[26] + v65;
  v13 = ((v69 + 0x2000000) >> 26) + 2 * v59;
  HIDWORD(v13) = (unsigned __int64)(v13 + 0x1000000) >> 32;
  LODWORD(v8) = ((unsigned int)(v13 + 0x1000000) >> 25) | (HIDWORD(v13) << 7);
  HIDWORD(v8) = SHIDWORD(v13) >> 25;
  v14 = v8 + 2 * (v5 * (__int64)a2[29] + v64);
  v66 = ((v70 + 0x1000000) >> 25) + v78;
  v68 = 2 * (v73 * (__int64)a2[25] + v57);
  a1[33] = v70 - ((v70 + 0x1000000) & 0xFE000000);
  a1[37] = ((v69 + 0x2000000) >> 26) + 2 * v59 - ((v13 + 0x1000000) & 0xFE000000);
  v60 = (v14 + 0x2000000) >> 26;
  a1[32] = v74 - ((v74 + 0x2000000) & 0xFC000000);
  a1[36] = v69 - ((v69 + 0x2000000) & 0xFC000000);
  a1[38] = v14 - ((v14 + 0x2000000) & 0xFC000000);
  a1[39] = v60 + v68 - ((v60 + v68 + 0x1000000) & 0xFE000000);
  a1[34] = v66 - ((v66 + 0x2000000) & 0xFC000000);
  a1[35] = v12 + ((__int64)(v66 + 0x2000000) >> 26);
  v15 = 19 * ((v60 + v68 + 0x1000000) >> 25);
  v16 = v77 + v15 + 0x2000000;
  a1[30] = v77 + v15 - (v16 & 0xFC000000);
  a1[31] = v76 - ((v76 + 0x1000000) & 0xFE000000) + (v16 >> 26);
  a1[10] = a2[10] + *a2;
  a1[11] = a2[11] + a2[1];
  a1[12] = a2[12] + a2[2];
  a1[13] = a2[13] + a2[3];
  a1[14] = a2[14] + a2[4];
  a1[15] = a2[15] + a2[5];
  a1[16] = a2[16] + a2[6];
  a1[17] = a2[17] + a2[7];
  a1[18] = a2[18] + a2[8];
  a1[19] = a2[19] + a2[9];
  sub_142808(v81, a1 + 10);
  LODWORD(v16) = a1[20];
  v17 = a1[1];
  v18 = a1[21];
  v19 = a1[22];
  v20 = v16 + *a1;
  v21 = a1[2];
  v62 = v16 - *a1;
  v22 = v18 + v17;
  v23 = a1[3];
  v24 = v18 - v17;
  HIDWORD(v16) = a1[23];
  LODWORD(v16) = v19 - v21;
  v25 = a1[4];
  v26 = v21 + v19;
  LODWORD(v64) = v24;
  v27 = a1[24];
  LODWORD(v10) = a1[25];
  v28 = a1[5];
  LODWORD(v66) = v16;
  LODWORD(v16) = HIDWORD(v16) + v23;
  LODWORD(v57) = v26;
  LODWORD(v68) = HIDWORD(v16) - v23;
  HIDWORD(v16) = v27 + v25;
  v29 = a1[6];
  LODWORD(v69) = v27 - v25;
  v30 = v10 + v28;
  LODWORD(v70) = v10 - v28;
  v31 = a1[7];
  HIDWORD(v10) = a1[8];
  HIDWORD(v15) = a1[27];
  v32 = a1[26] + v29;
  LODWORD(v15) = a1[28];
  v72 = a1[26] - v29;
  v33 = HIDWORD(v15) + v31;
  HIDWORD(v15) -= v31;
  LODWORD(v10) = a1[29];
  LODWORD(v60) = v15 + HIDWORD(v10);
  LODWORD(v15) = v15 - HIDWORD(v10);
  a1[10] = v20;
  a1[20] = v62;
  v34 = a1[9];
  a1[11] = v22;
  HIDWORD(v10) = v10 + v34;
  a1[21] = v64;
  a1[12] = v57;
  v35 = a1[9];
  a1[18] = v60;
  LODWORD(v10) = v10 - v35;
  v36 = v81[0];
  a1[13] = v16;
  a1[22] = v66;
  v37 = v36 - v20;
  v38 = v81[1];
  a1[15] = v30;
  v39 = v38 - v22;
  v40 = v81[2];
  a1[14] = HIDWORD(v16);
  a1[17] = v33;
  v41 = v81[3];
  a1[2] = v40 - v57;
  v42 = v81[6];
  LODWORD(v16) = v41 - v16;
  v43 = v81[4];
  a1[16] = v32;
  a1[19] = HIDWORD(v10);
  v44 = v42 - v32;
  v45 = v43 - HIDWORD(v16);
  HIDWORD(v16) = v81[8];
  a1[4] = v45;
  v46 = a1[30];
  LODWORD(v57) = v81[5] - v30;
  v47 = v81[7] - v33;
  v48 = HIDWORD(v16) - v60;
  HIDWORD(v16) = v81[9];
  v49 = a1[32];
  a1[3] = v16;
  a1[6] = v44;
  a1[7] = v47;
  LODWORD(v60) = v46 - v62;
  v50 = a1[31];
  a1[23] = v68;
  a1[8] = v48;
  a1[27] = HIDWORD(v15);
  a1[31] = v50 - v64;
  a1[28] = v15;
  a1[24] = v69;
  a1[29] = v10;
  *a1 = v37;
  a1[1] = v39;
  a1[32] = v49 - v66;
  a1[5] = v57;
  a1[9] = HIDWORD(v16) - HIDWORD(v10);
  a1[25] = v70;
  a1[26] = v72;
  a1[30] = v60;
  v51 = a1[34];
  HIDWORD(v16) = a1[36];
  a1[33] -= v68;
  v52 = a1[35];
  LODWORD(v16) = a1[37];
  v53 = a1[38] - v15;
  v54 = a1[39];
  a1[34] = v51 - v69;
  result = v52 - v70;
  a1[35] = result;
  a1[36] = HIDWORD(v16) - v72;
  a1[37] = v16 - HIDWORD(v15);
  a1[38] = v53;
  a1[39] = v54 - v10;
  return result;
}
