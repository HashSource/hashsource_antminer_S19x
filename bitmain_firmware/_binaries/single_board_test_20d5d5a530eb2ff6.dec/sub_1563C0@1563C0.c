int __fastcall sub_1563C0(_DWORD *a1, int a2, unsigned int *a3)
{
  int v5; // r12
  unsigned int v6; // lr
  unsigned __int64 v7; // r8
  unsigned int v8; // r2
  unsigned int v9; // r6
  unsigned int v10; // r1
  unsigned int v11; // r0
  unsigned int v12; // r7
  unsigned int v13; // r12
  int v14; // r1
  unsigned int v15; // r6
  unsigned int v16; // r2
  unsigned __int64 v17; // kr38_8
  __int64 v18; // kr40_8
  unsigned __int64 v19; // kr50_8
  unsigned int v20; // t1
  unsigned int v21; // r0
  unsigned __int64 v22; // r10
  int v23; // lr
  unsigned __int64 v24; // kr30_8
  __int64 v25; // r8
  unsigned __int64 v26; // r0
  unsigned int v27; // kr14_4
  __int64 v28; // r4
  unsigned int v29; // r0
  unsigned int v30; // kr68_4
  unsigned __int64 v31; // kr70_8
  int v32; // r5
  int v33; // r7
  unsigned int v34; // r4
  unsigned __int64 v35; // kr78_8
  unsigned __int64 v36; // r0
  unsigned __int64 v37; // r2
  unsigned __int64 v38; // r2
  unsigned __int64 v39; // r2
  unsigned __int64 v40; // r2
  unsigned __int64 v41; // r2
  unsigned __int64 v42; // r0
  unsigned __int64 v43; // r6
  unsigned __int64 v44; // r2
  unsigned __int64 v45; // r2
  unsigned __int64 v46; // r2
  unsigned int v48; // [sp+0h] [bp-204h]
  unsigned int v49; // [sp+8h] [bp-1FCh]
  __int64 v50; // [sp+8h] [bp-1FCh]
  int v51; // [sp+10h] [bp-1F4h]
  int v52; // [sp+10h] [bp-1F4h]
  unsigned int v53; // [sp+18h] [bp-1ECh]
  int v54; // [sp+30h] [bp-1D4h]
  unsigned int v55; // [sp+38h] [bp-1CCh]
  unsigned int v56; // [sp+48h] [bp-1BCh]
  unsigned int v57; // [sp+48h] [bp-1BCh]
  unsigned int v58; // [sp+50h] [bp-1B4h]
  unsigned __int64 v59; // [sp+60h] [bp-1A4h]
  unsigned __int64 v60; // [sp+70h] [bp-194h]
  unsigned __int64 v61; // [sp+78h] [bp-18Ch]
  unsigned __int64 v62; // [sp+78h] [bp-18Ch]
  unsigned __int64 v63; // [sp+88h] [bp-17Ch]
  unsigned __int64 v64; // [sp+88h] [bp-17Ch]
  unsigned int v65; // [sp+A0h] [bp-164h]
  unsigned int v66; // [sp+A8h] [bp-15Ch]
  unsigned int v67; // [sp+B0h] [bp-154h]
  unsigned int v68; // [sp+B8h] [bp-14Ch]
  unsigned int v69; // [sp+C0h] [bp-144h]
  unsigned int v70; // [sp+C8h] [bp-13Ch]
  unsigned int v71; // [sp+F4h] [bp-110h]
  unsigned int v72; // [sp+F8h] [bp-10Ch]
  unsigned int v73; // [sp+110h] [bp-F4h]
  int v74; // [sp+120h] [bp-E4h]
  unsigned int v75; // [sp+128h] [bp-DCh]
  unsigned __int64 v76; // [sp+130h] [bp-D4h]
  __int64 v77; // [sp+138h] [bp-CCh]
  __int64 v78; // [sp+140h] [bp-C4h]
  unsigned __int64 v79; // [sp+140h] [bp-C4h]
  __int64 v80; // [sp+148h] [bp-BCh]
  __int64 v81; // [sp+158h] [bp-ACh]
  unsigned int v82; // [sp+17Ch] [bp-88h]
  unsigned int v83; // [sp+180h] [bp-84h]
  int v84; // [sp+184h] [bp-80h]
  unsigned int v85; // [sp+188h] [bp-7Ch]
  unsigned int v86; // [sp+18Ch] [bp-78h]
  unsigned int v87; // [sp+190h] [bp-74h]
  unsigned int v88; // [sp+194h] [bp-70h]
  unsigned int v89; // [sp+198h] [bp-6Ch]
  unsigned int v90; // [sp+19Ch] [bp-68h]
  unsigned int v91; // [sp+1A0h] [bp-64h]
  unsigned int v92; // [sp+1A4h] [bp-60h]
  unsigned int v93; // [sp+1A8h] [bp-5Ch]
  unsigned int v94; // [sp+1ACh] [bp-58h]
  unsigned int v95; // [sp+1B0h] [bp-54h]
  unsigned int v96; // [sp+1B4h] [bp-50h]
  _BYTE s[60]; // [sp+1C4h] [bp-40h] BYREF

  memset(s, 0, sizeof(s));
  v5 = a2 - 4;
  v84 = a2 + 52;
  v6 = 0;
  v87 = a3[4];
  HIDWORD(v7) = 0;
  v8 = a3[2];
  v88 = a3[5];
  v94 = a3[11];
  v89 = a3[6];
  v83 = *a3;
  v90 = a3[7];
  v95 = a3[12];
  v9 = a3[13];
  v91 = a3[8];
  v10 = a3[3];
  v82 = a3[1];
  v92 = a3[9];
  v11 = a3[10];
  v12 = 0;
  v85 = v8;
  v96 = v9;
  v86 = v10;
  v51 = v5;
  v93 = v11;
  v49 = 0;
  v13 = 0;
  v74 = 0;
  v14 = v51;
  v15 = 0;
  v16 = 0;
  v73 = 0;
  v72 = 0;
  v71 = 0;
  LODWORD(v17) = 0;
  LODWORD(v18) = 0;
  LODWORD(v19) = 0;
  do
  {
    v20 = *(_DWORD *)(v14 + 4);
    v52 = v14 + 4;
    v21 = v83 * v20 + v72;
    v78 = v49;
    v48 = (v83 * (unsigned __int64)v20 + v72) >> 32;
    v80 = v49;
    v22 = v82 * (unsigned __int64)v20 + (unsigned int)v17;
    v81 = v6;
    v23 = -1366193211 * v21;
    v63 = (v48 + v22) >> 32;
    v53 = (0xC97F2475FFFFFFFFLL * v21 + v21) >> 32;
    v24 = ((v63 + v85 * (unsigned __int64)v20 + (unsigned int)v18) >> 32) + v86 * (unsigned __int64)v20 + v73;
    v72 = v53 + 1313144922 * v21 + v48 + v22;
    v65 = (HIDWORD(v24) + v87 * (unsigned __int64)v20 + (unsigned int)v19) >> 32;
    v17 = ((v53 + 0xF4B77C714E45005ALL * v21 + v48 + (unsigned int)v22) >> 32)
        + 0xD2E7526452FF7369LL * v21
        + (unsigned int)v63
        + v85 * v20
        + (_DWORD)v18;
    v66 = (v65 + v88 * (unsigned __int64)v20 + (unsigned int)v74) >> 32;
    v18 = HIDWORD(v17) + 0xF55E2A9164D787BALL * v21 + (unsigned int)v24;
    v67 = (v66 + v89 * (unsigned __int64)v20 + v16) >> 32;
    v73 = HIDWORD(v18) + -1576522544 * v21 + HIDWORD(v24) + v87 * v20 + v19;
    v68 = (v67 + v90 * (unsigned __int64)v20 + HIDWORD(v7)) >> 32;
    v19 = ((HIDWORD(v18) + 0xC862C94FA2082CD0LL * v21 + HIDWORD(v24) + v87 * v20 + (unsigned int)v19) >> 32)
        + 0xC18E599AB418622DLL * v21
        + v65
        + v88 * v20
        + v74;
    v69 = (v68 + v91 * (unsigned __int64)v20 + v13) >> 32;
    v56 = (HIDWORD(v19) + 0xD84E331F7E06254DLL * v21 + v66 + v89 * v20 + v16) >> 32;
    v74 = HIDWORD(v19) + 2114331981 * v21 + v66 + v89 * v20 + v16;
    v50 = 0xAE918BC5516E743BLL * v21;
    v70 = (v69 + v92 * (unsigned __int64)v20 + v15) >> 32;
    v25 = v50 + v67 + v90 * v20 + HIDWORD(v7);
    v75 = v56 + v25;
    v76 = (((unsigned __int64)v56 + v25) >> 32) + v50 + v68 + v91 * v20 + v13;
    v26 = ((v70 + v93 * (unsigned __int64)v20 + v78) >> 32) + v94 * (unsigned __int64)v20 + v80;
    v77 = HIDWORD(v76) + v50 + v69 + v92 * v20 + v15;
    v27 = v70 + v93 * v20 + v78;
    v79 = v95 * (unsigned __int64)v20 + v12 + HIDWORD(v26);
    v15 = HIDWORD(v77) + v50 + v27;
    v7 = ((HIDWORD(v77) + v50 + (unsigned __int64)v27) >> 32) + v50 + (unsigned int)v26;
    v28 = 0x3FFFFFFFLL * (unsigned int)v23 + HIDWORD(v79) + v96 * v20 + (unsigned int)v81;
    v61 = (HIDWORD(v7) + v50 + (unsigned __int64)(unsigned int)v79) >> 32;
    v49 = HIDWORD(v7) + v79 - v23;
    v13 = v77;
    v29 = v61 + v28;
    v12 = v61 + v28;
    v14 = v52;
    HIDWORD(v7) = v76;
    v30 = ((v61 + v28) >> 32) + ((HIDWORD(v79) + v96 * (unsigned __int64)v20 + v81) >> 32) + v71;
    v71 = (((v61 + v28) >> 32) + ((HIDWORD(v79) + v96 * (unsigned __int64)v20 + v81) >> 32) + v71) >> 32;
    v6 = v30;
    v16 = v75;
  }
  while ( v52 != v84 );
  v64 = (int)(((unsigned __int64)v72 - 2874688755u) >> 32) + (unsigned __int64)(unsigned int)v17 - 595116690;
  v62 = SHIDWORD(v64) + (unsigned __int64)(unsigned int)v18 - 2378534741u;
  v60 = (int)(((int)((SHIDWORD(v62) + (unsigned __int64)v73 - 560775794) >> 32)
             + (unsigned __int64)(unsigned int)v19
             - 2933274256u) >> 32)
      + (unsigned __int64)(unsigned int)v74
      - 3293502281u;
  v59 = (int)((SHIDWORD(v60) + (unsigned __int64)v75 - 2093622249) >> 32)
      + (unsigned __int64)(unsigned int)v76
      - 0xFFFFFFFF;
  v31 = SHIDWORD(v59) + (unsigned __int64)(unsigned int)v77 + 1;
  v32 = ((HIDWORD(v31) - 1 + (unsigned __int64)v15 + 1) >> 32) - 1;
  v58 = HIDWORD(v31) + v15;
  v57 = ((HIDWORD(v31) - 1 + (unsigned __int64)v15 + 1) >> 32) + v7;
  v33 = (((int)((((int)(((v32 + (unsigned __int64)(unsigned int)v7 + 1) >> 32) - 1) + (unsigned __int64)v49 + 1) >> 32)
              - 1)
        + (unsigned __int64)v29
        + 1) >> 32)
      - 1;
  v55 = (((int)(((v32 + (unsigned __int64)(unsigned int)v7 + 1) >> 32) - 1) + (unsigned __int64)v49 + 1) >> 32) + v29;
  v54 = v33 + v30 - 0x3FFFFFFF;
  v34 = v71 + ((v33 + (unsigned __int64)v30 - 0x3FFFFFFF) >> 32);
  v35 = v72 + 1420278541 + (unsigned __int64)(v34 & 0xAB5844F3);
  v36 = SHIDWORD(v35) + (unsigned __int64)(unsigned int)v64 + (v34 & 0x2378C292);
  a1[1] = v36;
  *a1 = v35;
  v37 = SHIDWORD(v36) + (unsigned __int64)(unsigned int)(HIDWORD(v64) + v18 + 1916432555) + (v34 & 0x8DC58F55);
  a1[2] = v37;
  v38 = SHIDWORD(v37) + (unsigned __int64)(HIDWORD(v62) + v73 - 560775794) + (v34 & 0x216CC272);
  a1[3] = v38;
  v39 = SHIDWORD(v38)
      + (unsigned __int64)(unsigned int)(((SHIDWORD(v62) + (unsigned __int64)v73 - 560775794) >> 32) + v19 + 1361693040)
      + (v34 & 0xAED63690);
  a1[4] = v39;
  v40 = SHIDWORD(v39)
      + (unsigned __int64)(unsigned int)((((int)((SHIDWORD(v62) + (unsigned __int64)v73 - 560775794) >> 32)
                                         + (unsigned __int64)(unsigned int)v19
                                         - 2933274256u) >> 32)
                                       + v74
                                       + 1001465015)
      + (v34 & 0xC44EDB49);
  a1[5] = v40;
  v41 = SHIDWORD(v40) + (unsigned __int64)(HIDWORD(v60) + v75 - 2093622249) + (v34 & 0x7CCA23E9);
  a1[6] = v41;
  v42 = SHIDWORD(v41)
      + (unsigned __int64)(unsigned int)(((SHIDWORD(v60) + (unsigned __int64)v75 - 2093622249) >> 32) + v76 + 1)
      + v34;
  a1[7] = v42;
  v43 = SHIDWORD(v42) + (unsigned __int64)(unsigned int)(HIDWORD(v59) + v77 + 1) + v34;
  a1[8] = v43;
  v44 = SHIDWORD(v43) + (unsigned __int64)v58 + v34;
  a1[9] = v44;
  v45 = SHIDWORD(v44) + (unsigned __int64)v57 + v34;
  a1[10] = v45;
  v46 = SHIDWORD(v45)
      + (unsigned __int64)(unsigned int)(((v32 + (unsigned __int64)(unsigned int)v7 + 1) >> 32) + v49)
      + v34;
  a1[11] = v46;
  a1[12] = v34 + HIDWORD(v46) + v55;
  a1[13] = ((SHIDWORD(v46) + (unsigned __int64)v55) >> 32)
         + __CFADD__(v34, HIDWORD(v46) + v55)
         + v54
         + (v34 & 0x3FFFFFFF);
  return v42;
}
