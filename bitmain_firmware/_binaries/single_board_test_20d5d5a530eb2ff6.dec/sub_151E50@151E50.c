int __fastcall sub_151E50(int *a1, int *a2)
{
  int *v3; // r8
  _BYTE *v4; // r12
  int *v5; // r6
  int v6; // r0
  int v7; // r1
  _DWORD *v8; // lr
  int v9; // r2
  int v10; // r3
  int v11; // r0
  int v12; // r1
  char v13; // lr
  int v14; // r1
  int v15; // r6
  int v16; // r11
  _DWORD *v17; // r5
  int v18; // r0
  int v19; // r0
  int *v20; // r10
  int v21; // r6
  int v22; // r3
  int v23; // r2
  int v24; // r2
  int v25; // r11
  int v26; // r1
  int v27; // r2
  int v28; // r1
  int v29; // r2
  int v30; // r0
  int v31; // r2
  int v32; // r1
  int *v33; // r12
  int v34; // r2
  int v35; // r0
  int v36; // r1
  int v37; // r9
  int v38; // r2
  int v39; // r10
  int v40; // r2
  int v41; // r1
  int *v42; // r2
  int v43; // r9
  int v44; // r10
  int v45; // r2
  int v46; // r1
  int v47; // r11
  int *v48; // r1
  int v49; // r9
  int v50; // r1
  int v51; // r0
  int v52; // r2
  int v53; // r9
  int v54; // r2
  int v55; // r10
  int v56; // r2
  int v57; // r9
  int v58; // r1
  int *v59; // r2
  int v60; // r10
  int v61; // r0
  int v62; // r2
  int v63; // r12
  int v64; // r2
  _DWORD *v65; // r11
  int v66; // r2
  _DWORD *v67; // r12
  int v68; // r9
  int v69; // r1
  int *v70; // r5
  int v71; // r1
  int v72; // r0
  int v73; // r1
  int v74; // r2
  int v75; // r6
  int v76; // r1
  int v77; // r0
  int v78; // r3
  int v79; // r5
  int v80; // r1
  int v81; // r6
  int v82; // r6
  int *v83; // r5
  void *v84; // r6
  int v85; // r5
  void *v86; // r9
  _DWORD *v87; // r10
  _DWORD *v88; // r5
  int *v89; // r11
  int v91; // [sp+0h] [bp-110h] BYREF
  int v92; // [sp+40h] [bp-D0h] BYREF
  _DWORD *v93; // [sp+114h] [bp+4h]
  int v94; // [sp+118h] [bp+8h]
  int v95; // [sp+11Ch] [bp+Ch]
  _DWORD *v96; // [sp+120h] [bp+10h]
  int v97; // [sp+124h] [bp+14h]
  int v98; // [sp+128h] [bp+18h]
  int *v99; // [sp+12Ch] [bp+1Ch]
  int v100; // [sp+134h] [bp+24h]
  int v101; // [sp+138h] [bp+28h]
  _BYTE v102[56]; // [sp+13Ch] [bp+2Ch] BYREF
  unsigned __int8 v103; // [sp+174h] [bp+64h]

  v3 = a2 + 12;
  v4 = v102;
  v5 = a2;
  v98 = (int)v102;
  do
  {
    v6 = *v5;
    v5 += 4;
    v7 = *(v5 - 3);
    v8 = v4;
    v9 = *(v5 - 2);
    v4 += 16;
    v10 = *(v5 - 1);
    *v8 = v6;
    v8[1] = v7;
    v8[2] = v9;
    v8[3] = v10;
  }
  while ( v5 != v3 );
  v11 = *v5;
  v12 = v5[1];
  v95 = (int)(a1 + 32);
  *(_DWORD *)v4 = v11;
  *((_DWORD *)v4 + 1) = v12;
  v13 = *((_BYTE *)v5 + 8);
  v99 = &v91;
  v14 = v98;
  v97 = (int)&v92;
  v4[8] = v13;
  v93 = v99 + 48;
  v15 = v103 & 0x80;
  v103 &= ~0x80u;
  v16 = sub_155FE4(a1 + 16, v14, 1, 0);
  v96 = a1 + 16;
  v94 = v103;
  sub_17BE0C(a1);
  v17 = (_DWORD *)v95;
  sub_155C98(v95, &unk_1D64E0, a1);
  sub_17BBF0(a1 + 48, a1, 39081);
  sub_155C98(a1 + 48, &unk_1D6460, a1 + 48);
  sub_155C98(a1 + 48, &unk_1D64E0, a1 + 48);
  sub_17B628(a1, v17, a1 + 48);
  v18 = sub_1561BC(a1 + 48, a1);
  v95 = v16 & v18 & (((v94 - 1) & ~v94) >> 31);
  sub_17B628(a1, a1 + 48, v17);
  v19 = sub_155C60(a1);
  v20 = v99;
  if ( v15 )
    v15 = -1;
  v21 = v15 ^ v19;
  sub_155C98(v99, &unk_1D6460, a1);
  v100 = v21;
  v22 = ~v21;
  v23 = *v20;
  v101 = ~v21;
  v99 = v20;
  v94 = v23 & v21;
  v24 = *a1;
  v100 = v21;
  *a1 = v94 | ~v21 & v24;
  v25 = v100;
  v101 = ~v21;
  v26 = v99[1];
  v27 = a1[1];
  v100 = v21;
  v28 = v26 & v21 | v27 & ~v21;
  v29 = a1[2];
  a1[1] = v28;
  v30 = ~v21 & v29;
  v31 = a1[3];
  v101 = ~v21;
  v32 = v99[2];
  v94 = v31;
  v33 = v99;
  v34 = v99[3];
  v100 = v21;
  a1[2] = v32 & v25 | v30;
  v35 = v100;
  v101 = ~v21;
  v36 = v33[4];
  a1[3] = v34 & v21 | v94 & ~v21;
  v37 = v35 & v36 | a1[4] & v101;
  v101 = ~v21;
  v94 = v21;
  v100 = v21;
  v38 = v99[5];
  v101 = ~v21;
  v39 = v38 & v21;
  v40 = a1[5];
  v100 = v21;
  a1[4] = v37;
  v41 = ~v21 & v40;
  v42 = v99;
  v43 = v100;
  a1[5] = v39 | v41;
  v101 = ~v21;
  v44 = v42[6] & v94;
  v45 = v99[7];
  a1[6] = v44 | a1[6] & ~v21;
  v46 = a1[7];
  v100 = v21;
  v47 = v46 & ~v21;
  v48 = v99;
  a1[7] = v45 & v21 | v47;
  v49 = v48[8] & v43;
  v50 = a1[8];
  v94 = a1[9];
  v51 = v100;
  v101 = ~v21;
  v52 = v99[9];
  a1[8] = v49 | v50 & ~v21;
  v53 = v51 & v52 | v94 & v101;
  v94 = v21;
  v100 = v21;
  v101 = ~v21;
  v54 = v99[10];
  v100 = v21;
  a1[9] = v53;
  v55 = v54 & v21;
  v56 = a1[10];
  v57 = v100;
  v101 = ~v21;
  v58 = ~v21 & v56;
  v59 = v99;
  a1[10] = v55 | v58;
  v60 = v59[11] & v94;
  v61 = v101;
  v62 = v99[12];
  a1[11] = v60 | a1[11] & ~v21;
  v63 = v62 & v21;
  v64 = a1[12];
  v100 = v21;
  v65 = v17;
  v66 = v63 | v64 & ~v21;
  v67 = v17;
  v68 = v99[13] & v57;
  v69 = a1[13];
  v70 = v99;
  a1[12] = v66;
  v71 = v69 & v61;
  v72 = v100;
  v101 = ~v21;
  a1[13] = v68 | v71;
  v73 = v70[14];
  v74 = v101;
  v100 = v21;
  v75 = a1[14];
  v76 = v73 & v72;
  v77 = v100;
  v101 = v22;
  v78 = v70[15];
  v79 = a1[15];
  v80 = v76 | v74 & v75;
  v81 = v101;
  a1[14] = v80;
  v82 = v81 & v79;
  v83 = v99;
  a1[15] = v78 & v77 | v82;
  *v67 = 1;
  v67[1] = 0;
  v67[2] = 0;
  v67[3] = 0;
  v67 += 4;
  v84 = v83 + 32;
  *v67 = 0;
  v67[1] = 0;
  v67[2] = 0;
  v67[3] = 0;
  v67 += 4;
  *v67 = 0;
  v67[1] = 0;
  v67[2] = 0;
  v67[3] = 0;
  v67 += 4;
  v85 = v97;
  *v67 = 0;
  v67[1] = 0;
  v67[2] = 0;
  v67[3] = 0;
  sub_17BE0C(v85);
  v86 = v93;
  v87 = v96;
  sub_17BE0C(v93);
  sub_155E5C(v99, v85, v86);
  sub_155E5C(a1 + 48, v87, a1);
  sub_17BE0C(v84);
  sub_155C98(v84, v84, v99);
  v97 = v85;
  sub_155C98(a1 + 48, v86, v85);
  sub_17BE0C(a1);
  v88 = v65;
  sub_155E5C(v65, a1, a1);
  v89 = v99;
  sub_155C98(v86, v88, v99);
  sub_17B628(a1, v86, v84);
  sub_17B628(v88, a1 + 48, v86);
  sub_17B628(v87, a1 + 48, v89);
  sub_17B628(a1 + 48, v84, v89);
  sub_E07F8(v86, 0x40u);
  sub_E07F8(v84, 0x40u);
  sub_E07F8((void *)v97, 0x40u);
  sub_E07F8(v89, 0x40u);
  sub_E07F8((void *)v98, 0x39u);
  return v95;
}
