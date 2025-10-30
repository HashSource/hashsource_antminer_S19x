int __fastcall sub_E78E8(_DWORD *a1, int a2, int a3, void (__fastcall *a4)(_DWORD *, _DWORD *, int), int a5, int a6)
{
  void *v10; // r0
  int v11; // r5
  int v12; // r0
  int v13; // r1
  int v14; // r2
  int v15; // lr
  int v16; // r6
  int v17; // r11
  unsigned __int8 v18; // r3
  char v19; // r12
  int v20; // r1
  int v21; // r7
  int v22; // r10
  char v23; // r12
  int v24; // r2
  int v25; // r5
  int v26; // r7
  int v27; // r6
  int v28; // r9
  int v29; // r8
  int v30; // r0
  _BYTE *v31; // r2
  int v32; // r1
  int v33; // r3
  int v34; // r0
  int v35; // r3
  int v36; // r1
  int v37; // r3
  int v38; // r0
  int v39; // r3
  int v40; // r1
  int v41; // r3
  int v42; // r0
  int v43; // r3
  int v44; // r1
  int v45; // r3
  int v46; // r0
  int v47; // r3
  int v48; // r1
  int v49; // r3
  int v50; // r0
  int v51; // r3
  int v52; // r1
  int v53; // r3
  int v54; // r0
  int v55; // r3
  int v56; // r1
  int v57; // r3
  char *v58; // r3
  int v59; // r8
  int v60; // r7
  int v61; // r6
  int v62; // r5
  int v63; // r0
  int v64; // r1
  char v65; // r12
  int v66; // r2
  int v67; // r9
  int v68; // r8
  int v69; // r7
  int v70; // r6
  int v71; // r5
  int v72; // r0
  int v73; // r1
  int v74; // r2
  _BYTE *v75; // r3
  int v76; // r8
  int v77; // r7
  int v78; // r6
  int v79; // r5
  int v80; // r0
  int v81; // r1
  char v82; // r12
  int v83; // r2
  int v84; // r9
  int v85; // r8
  int v86; // r7
  int v87; // r6
  int v88; // r5
  int v89; // r0
  int v90; // r1
  int v91; // r2
  _BYTE *v92; // r3
  int v93; // r8
  int v94; // r7
  int v95; // r6
  int v96; // r5
  int v97; // r0
  int v98; // r1
  char v99; // r12
  int v100; // r2
  int v101; // r9
  int v102; // r8
  int v103; // r7
  int v104; // r6
  int v105; // r5
  int v106; // r0
  int v107; // r1
  int v108; // r2
  _BYTE *v109; // r3
  unsigned int v110; // r9
  int v111; // r8
  unsigned int v112; // r0
  unsigned int v113; // r2
  int v114; // r12
  unsigned int v115; // r11
  int v116; // lr
  int v117; // r7
  int v118; // r6
  int v119; // r5
  int v120; // r1
  int v121; // r0
  int v122; // r2
  int v123; // r12
  int v125; // [sp+Ch] [bp-8h]

  memset(a1, 0, 0x98u);
  a1[6] = 5;
  v10 = CRYPTO_malloc((void *)0x50);
  a1[16] = v10;
  if ( v10 )
  {
    *a1 = a4;
    a1[2] = a2;
    a1[1] = a5;
    a1[3] = a3;
    a1[4] = a6;
    a4(a1 + 8, a1 + 8, a2);
    v11 = *((unsigned __int8 *)a1 + 34);
    v12 = *((unsigned __int8 *)a1 + 33);
    v13 = *((unsigned __int8 *)a1 + 35);
    v14 = *((unsigned __int8 *)a1 + 36);
    v15 = *((unsigned __int8 *)a1 + 47);
    v16 = *((unsigned __int8 *)a1 + 32);
    v17 = *((unsigned __int8 *)a1 + 37);
    *((_BYTE *)a1 + 49) = (v11 >> 7) | (2 * v12);
    *((_BYTE *)a1 + 50) = (v13 >> 7) | (2 * v11);
    v18 = (2 * v15) ^ ((char)v16 >> 7) & 0x87;
    v19 = (v14 >> 7) | (2 * v13);
    v20 = *((unsigned __int8 *)a1 + 45);
    v21 = (v12 >> 7) | (2 * v16);
    v22 = *((unsigned __int8 *)a1 + 38);
    *((_BYTE *)a1 + 51) = v19;
    *((_BYTE *)a1 + 48) = v21;
    v23 = (v17 >> 7) | (2 * v14);
    v24 = *((unsigned __int8 *)a1 + 46);
    v25 = *((unsigned __int8 *)a1 + 43);
    v125 = ((char)v21 >> 7) & 0x87;
    v26 = *((unsigned __int8 *)a1 + 44);
    v27 = *((unsigned __int8 *)a1 + 42);
    v28 = *((unsigned __int8 *)a1 + 39);
    v29 = *((unsigned __int8 *)a1 + 40);
    v30 = *((unsigned __int8 *)a1 + 41);
    *((_BYTE *)a1 + 52) = v23;
    *((_BYTE *)a1 + 62) = (v15 >> 7) | (2 * v24);
    *((_BYTE *)a1 + 53) = (v22 >> 7) | (2 * v17);
    *((_BYTE *)a1 + 63) = v18;
    *((_BYTE *)a1 + 59) = (v26 >> 7) | (2 * v25);
    *((_BYTE *)a1 + 54) = (v28 >> 7) | (2 * v22);
    *((_BYTE *)a1 + 55) = (v29 >> 7) | (2 * v28);
    *((_BYTE *)a1 + 57) = (v27 >> 7) | (2 * v30);
    *((_BYTE *)a1 + 58) = (v25 >> 7) | (2 * v27);
    *((_BYTE *)a1 + 56) = (v30 >> 7) | (2 * v29);
    *((_BYTE *)a1 + 60) = (v20 >> 7) | (2 * v26);
    *((_BYTE *)a1 + 61) = (v24 >> 7) | (2 * v20);
    v31 = (_BYTE *)a1[16];
    v31[15] = 2 * v18;
    v32 = *((unsigned __int8 *)a1 + 62);
    v31[14] = ((int)v18 >> 7) | (2 * v32);
    v33 = *((unsigned __int8 *)a1 + 61);
    v34 = v33 >> 7;
    v31[13] = (v32 >> 7) | (2 * v33);
    v35 = *((unsigned __int8 *)a1 + 60);
    v36 = v35 >> 7;
    v31[12] = v34 | (2 * v35);
    v37 = *((unsigned __int8 *)a1 + 59);
    v38 = v37 >> 7;
    v31[11] = v36 | (2 * v37);
    v39 = *((unsigned __int8 *)a1 + 58);
    v40 = v39 >> 7;
    v31[10] = v38 | (2 * v39);
    v41 = *((unsigned __int8 *)a1 + 57);
    v42 = v41 >> 7;
    v31[9] = v40 | (2 * v41);
    v43 = *((unsigned __int8 *)a1 + 56);
    v44 = v43 >> 7;
    v31[8] = v42 | (2 * v43);
    v45 = *((unsigned __int8 *)a1 + 55);
    v46 = v45 >> 7;
    v31[7] = v44 | (2 * v45);
    v47 = *((unsigned __int8 *)a1 + 54);
    v48 = v47 >> 7;
    v31[6] = v46 | (2 * v47);
    v49 = *((unsigned __int8 *)a1 + 53);
    v50 = v49 >> 7;
    v31[5] = v48 | (2 * v49);
    v51 = *((unsigned __int8 *)a1 + 52);
    v52 = v51 >> 7;
    v31[4] = v50 | (2 * v51);
    v53 = *((unsigned __int8 *)a1 + 51);
    v54 = v53 >> 7;
    v31[3] = v52 | (2 * v53);
    v55 = *((unsigned __int8 *)a1 + 50);
    v56 = v55 >> 7;
    v31[2] = v54 | (2 * v55);
    v57 = *((unsigned __int8 *)a1 + 49);
    v31[1] = v56 | (2 * v57);
    *v31 = (v57 >> 7) | (2 * *((_BYTE *)a1 + 48));
    v31[15] ^= v125;
    v58 = (char *)a1[16];
    v59 = (unsigned __int8)v58[15];
    v60 = (unsigned __int8)v58[14];
    v61 = (unsigned __int8)v58[13];
    v62 = (unsigned __int8)v58[12];
    v63 = (unsigned __int8)v58[11];
    v64 = (unsigned __int8)v58[10];
    v65 = *v58;
    v66 = (unsigned __int8)v58[9];
    v67 = (unsigned __int8)v58[8];
    v58[30] = (v59 >> 7) | (2 * v60);
    LOBYTE(v15) = (v65 >> 7) & 0x87 ^ (2 * v59);
    v68 = (unsigned __int8)v58[7];
    v58[29] = (v60 >> 7) | (2 * v61);
    v69 = (unsigned __int8)v58[6];
    v58[28] = (v61 >> 7) | (2 * v62);
    v70 = (unsigned __int8)v58[5];
    v58[27] = (v62 >> 7) | (2 * v63);
    v71 = (unsigned __int8)v58[4];
    v58[26] = (v63 >> 7) | (2 * v64);
    v72 = (unsigned __int8)v58[3];
    v58[25] = (v64 >> 7) | (2 * v66);
    v73 = (unsigned __int8)v58[2];
    v58[24] = (v66 >> 7) | (2 * v67);
    v74 = (unsigned __int8)v58[1];
    v58[23] = (v67 >> 7) | (2 * v68);
    v58[22] = (v68 >> 7) | (2 * v69);
    v58[21] = (v69 >> 7) | (2 * v70);
    v58[20] = (v70 >> 7) | (2 * v71);
    v58[19] = (v71 >> 7) | (2 * v72);
    v58[18] = (v72 >> 7) | (2 * v73);
    v58[17] = (v73 >> 7) | (2 * v74);
    v58[31] = v15;
    v58[16] = (v74 >> 7) | (2 * v65);
    v75 = (_BYTE *)a1[16];
    v76 = (unsigned __int8)v75[31];
    v77 = (unsigned __int8)v75[30];
    v78 = (unsigned __int8)v75[29];
    v79 = (unsigned __int8)v75[28];
    v80 = (unsigned __int8)v75[27];
    v81 = (unsigned __int8)v75[26];
    v82 = v75[16];
    v83 = (unsigned __int8)v75[25];
    v84 = (unsigned __int8)v75[24];
    v75[46] = (v76 >> 7) | (2 * v77);
    LOBYTE(v15) = (v82 >> 7) & 0x87 ^ (2 * v76);
    v85 = (unsigned __int8)v75[23];
    v75[45] = (v77 >> 7) | (2 * v78);
    v86 = (unsigned __int8)v75[22];
    v75[44] = (v78 >> 7) | (2 * v79);
    v87 = (unsigned __int8)v75[21];
    v75[43] = (v79 >> 7) | (2 * v80);
    v88 = (unsigned __int8)v75[20];
    v75[42] = (v80 >> 7) | (2 * v81);
    v89 = (unsigned __int8)v75[19];
    v75[41] = (v81 >> 7) | (2 * v83);
    v90 = (unsigned __int8)v75[18];
    v75[40] = (v83 >> 7) | (2 * v84);
    v91 = (unsigned __int8)v75[17];
    v75[39] = (v84 >> 7) | (2 * v85);
    v75[38] = (v85 >> 7) | (2 * v86);
    v75[37] = (v86 >> 7) | (2 * v87);
    v75[36] = (v87 >> 7) | (2 * v88);
    v75[35] = (v88 >> 7) | (2 * v89);
    v75[34] = (v89 >> 7) | (2 * v90);
    v75[33] = (v90 >> 7) | (2 * v91);
    v75[47] = v15;
    v75[32] = (v91 >> 7) | (2 * v82);
    v92 = (_BYTE *)a1[16];
    v93 = (unsigned __int8)v92[47];
    v94 = (unsigned __int8)v92[46];
    v95 = (unsigned __int8)v92[45];
    v96 = (unsigned __int8)v92[44];
    v97 = (unsigned __int8)v92[43];
    v98 = (unsigned __int8)v92[42];
    v99 = v92[32];
    v100 = (unsigned __int8)v92[41];
    v101 = (unsigned __int8)v92[40];
    v92[62] = (v93 >> 7) | (2 * v94);
    LOBYTE(v15) = (v99 >> 7) & 0x87 ^ (2 * v93);
    v102 = (unsigned __int8)v92[39];
    v92[61] = (v94 >> 7) | (2 * v95);
    v103 = (unsigned __int8)v92[38];
    v92[60] = (v95 >> 7) | (2 * v96);
    v104 = (unsigned __int8)v92[37];
    v92[59] = (v96 >> 7) | (2 * v97);
    v105 = (unsigned __int8)v92[36];
    v92[58] = (v97 >> 7) | (2 * v98);
    v106 = (unsigned __int8)v92[35];
    v92[57] = (v98 >> 7) | (2 * v100);
    v107 = (unsigned __int8)v92[34];
    v92[56] = (v100 >> 7) | (2 * v101);
    v108 = (unsigned __int8)v92[33];
    v92[55] = (v101 >> 7) | (2 * v102);
    v92[54] = (v102 >> 7) | (2 * v103);
    v92[53] = (v103 >> 7) | (2 * v104);
    v92[52] = (v104 >> 7) | (2 * v105);
    v92[51] = (v105 >> 7) | (2 * v106);
    v92[50] = (v106 >> 7) | (2 * v107);
    v92[49] = (v107 >> 7) | (2 * v108);
    v92[63] = v15;
    v92[48] = (v108 >> 7) | (2 * v99);
    v109 = (_BYTE *)a1[16];
    v110 = (unsigned __int8)v109[59];
    LOBYTE(v107) = v109[60];
    v111 = (unsigned __int8)v109[58];
    v112 = (unsigned __int8)v109[62];
    v113 = (unsigned __int8)v109[61];
    v114 = (unsigned __int8)v109[57];
    v115 = (unsigned __int8)v109[63];
    v116 = (unsigned __int8)v109[56];
    v109[75] = (2 * v110) | ((unsigned __int8)v107 >> 7);
    LOBYTE(v22) = 2 * v111;
    v117 = (unsigned __int8)v109[55];
    LOBYTE(v111) = (v111 >> 7) | (2 * v114);
    v118 = (unsigned __int8)v109[54];
    v109[78] = (2 * v112) | (v115 >> 7);
    LOBYTE(v110) = v22 | (v110 >> 7);
    v119 = (unsigned __int8)v109[53];
    v109[77] = (2 * v113) | (v112 >> 7);
    LOBYTE(v112) = 2 * v107;
    v120 = (unsigned __int8)v109[51];
    LOBYTE(v113) = v112 | (v113 >> 7);
    v121 = (unsigned __int8)v109[52];
    v109[76] = v113;
    v109[72] = (v114 >> 7) | (2 * v116);
    v122 = (unsigned __int8)v109[50];
    v123 = (unsigned __int8)v109[49];
    LOBYTE(v22) = v109[48];
    v109[74] = v110;
    v109[68] = (v119 >> 7) | (2 * v121);
    v109[73] = v111;
    v109[71] = (v116 >> 7) | (2 * v117);
    v109[70] = (v117 >> 7) | (2 * v118);
    v109[69] = (v118 >> 7) | (2 * v119);
    v109[67] = (v121 >> 7) | (2 * v120);
    v109[66] = (v120 >> 7) | (2 * v122);
    v109[65] = (v122 >> 7) | (2 * v123);
    v109[79] = ((char)v22 >> 7) & 0x87 ^ (2 * v115);
    v109[64] = (v123 >> 7) | (2 * v22);
    a1[5] = 4;
    return 1;
  }
  else
  {
    sub_D0048(15, 122, 65, (int)"crypto/modes/ocb128.c", 159);
    return 0;
  }
}
