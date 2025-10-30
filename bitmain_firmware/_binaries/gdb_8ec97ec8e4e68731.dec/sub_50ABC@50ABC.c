int __fastcall sub_50ABC(int result, char *a2, int a3, unsigned __int8 a4)
{
  int v5; // r2
  char *v6; // r12
  int *v7; // r8
  _DWORD *v8; // r9
  int *v9; // r7
  char *v10; // r10
  _DWORD *v11; // r4
  int v12; // r0
  int *v13; // r7
  _DWORD *v14; // r5
  int v15; // r0
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int *v19; // r4
  int v20; // r0
  int v21; // r1
  int v22; // r2
  int v23; // r3
  int v24; // r1
  int v25; // r7
  char *v26; // r6
  char *v27; // r4
  char *v28; // r10
  char *v29; // r5
  int v30; // r0
  _DWORD *v31; // r5
  int v32; // r1
  int v33; // r2
  int v34; // r3
  _DWORD *v35; // r4
  int v36; // r1
  int v37; // r2
  int v38; // r3
  int v39; // r1
  int v40; // r6
  int v41; // r4
  int *v42; // r5
  int v43; // r0
  int v44; // r1
  int v45; // r2
  int v46; // r3
  int *v47; // lr
  char *v49; // r7
  int v50; // r0
  int v51; // r1
  int v52; // r2
  int v53; // r3
  int *v54; // r12
  int v55; // r9
  int v56; // r0
  int v57; // r1
  int v58; // r2
  int v59; // r3
  int v60; // r1
  int v61; // r2
  int v62; // r3
  int v63; // r1
  int v64; // r2
  int v65; // r3
  int v66; // r1
  char *v67; // r12
  int v68; // r0
  int v69; // r1
  int v70; // r2
  int v71; // r3
  int *v72; // r4
  char *v73; // r5
  int v74; // r0
  int v75; // r1
  int v76; // r2
  int v77; // r3
  int *v78; // r4
  int v79; // r0
  int v80; // r1
  int v81; // r2
  int v82; // r3
  int *v83; // r12
  _DWORD *v84; // r7
  int v85; // r0
  int v86; // r1
  int v87; // r2
  int v88; // r3
  int v89; // r1
  _DWORD *v90; // lr
  int v91; // r0
  int v92; // r1
  int v93; // r2
  int v94; // r3
  int *v95; // r4
  int v96; // r0
  int v97; // r1
  int v98; // r2
  int v99; // r3
  int v100; // r1
  _DWORD *i; // [sp+2Ch] [bp-58h]
  int *v102; // [sp+30h] [bp-54h]
  char *v103; // [sp+38h] [bp-4Ch]
  int v104; // [sp+3Ch] [bp-48h]
  _DWORD *v105; // [sp+40h] [bp-44h]
  _DWORD *v106; // [sp+44h] [bp-40h]
  int *v107; // [sp+48h] [bp-3Ch]
  int v109; // [sp+54h] [bp-30h]
  int v110; // [sp+58h] [bp-2Ch]
  int v111; // [sp+58h] [bp-2Ch]
  int v112; // [sp+58h] [bp-2Ch]
  int v113; // [sp+58h] [bp-2Ch]
  int v114; // [sp+58h] [bp-2Ch]
  int v115; // [sp+5Ch] [bp-28h]
  int v116; // [sp+5Ch] [bp-28h]
  int v117; // [sp+5Ch] [bp-28h]
  int v118; // [sp+5Ch] [bp-28h]
  int v119; // [sp+5Ch] [bp-28h]
  int v120; // [sp+60h] [bp-24h]
  int v121; // [sp+60h] [bp-24h]
  int v122; // [sp+60h] [bp-24h]
  int v123; // [sp+60h] [bp-24h]
  int v124; // [sp+60h] [bp-24h]
  int v125; // [sp+64h] [bp-20h]
  int v126; // [sp+64h] [bp-20h]
  int v127; // [sp+64h] [bp-20h]
  int v128; // [sp+64h] [bp-20h]
  int v129; // [sp+64h] [bp-20h]
  int v130; // [sp+68h] [bp-1Ch]
  int v131; // [sp+68h] [bp-1Ch]
  int v132; // [sp+68h] [bp-1Ch]
  int v133; // [sp+68h] [bp-1Ch]
  int v134; // [sp+6Ch] [bp-18h]
  int v135; // [sp+6Ch] [bp-18h]
  int v136; // [sp+6Ch] [bp-18h]
  int v137; // [sp+6Ch] [bp-18h]
  int v138; // [sp+6Ch] [bp-18h]
  int v139; // [sp+70h] [bp-14h]
  int v140; // [sp+70h] [bp-14h]
  int v141; // [sp+70h] [bp-14h]
  int v142; // [sp+70h] [bp-14h]
  int v143; // [sp+70h] [bp-14h]
  int v144; // [sp+74h] [bp-10h]
  int v145; // [sp+74h] [bp-10h]
  int v146; // [sp+74h] [bp-10h]
  int v147; // [sp+74h] [bp-10h]
  int v148; // [sp+74h] [bp-10h]
  int v149; // [sp+78h] [bp-Ch]
  int v150; // [sp+78h] [bp-Ch]
  int v151; // [sp+78h] [bp-Ch]
  int v152; // [sp+78h] [bp-Ch]
  int v153; // [sp+78h] [bp-Ch]
  int v154; // [sp+7Ch] [bp-8h]
  int v155; // [sp+7Ch] [bp-8h]
  int v156; // [sp+7Ch] [bp-8h]
  int v157; // [sp+7Ch] [bp-8h]
  int v158; // [sp+7Ch] [bp-8h]

  v104 = a3;
  v5 = (int)&a2[-result];
  v105 = (_DWORD *)result;
  v103 = a2;
  if ( (int)&a2[-result] > 640 )
  {
    if ( !a3 )
    {
      v28 = a2;
      goto LABEL_17;
    }
    v6 = a2;
    v7 = (int *)(result + 4);
    v107 = (int *)(result + 44);
    v8 = (_DWORD *)(result + 16);
    v106 = (_DWORD *)(result + 56);
    v109 = result + 80;
    while ( 1 )
    {
      --v104;
      v9 = (int *)(v103 - 36);
      v10 = v103 - 24;
      v11 = &v105[10 * (-858993459 * ((v6 - (char *)v105) >> 3) / 2)];
      if ( sub_4FC3C(v107, v106, v11 + 1, v11 + 4) < 0 )
        break;
      if ( sub_4FC3C(v107, v106, v9, v10) < 0 )
        goto LABEL_26;
      v12 = sub_4FC3C(v11 + 1, v11 + 4, v9, v10);
      v13 = v105;
      if ( v12 < 0 )
        goto LABEL_28;
      v14 = v11;
      v110 = *v105;
      v115 = v105[1];
      v120 = v105[2];
      v125 = v105[3];
      v130 = v105[4];
      v134 = v105[5];
      v139 = v105[6];
      v144 = v105[7];
      v149 = v105[8];
      v154 = v105[9];
      v15 = *v11;
      v16 = v11[1];
      v17 = v11[2];
      v18 = v11[3];
      v19 = v11 + 4;
      *v105 = v15;
      v105[1] = v16;
      v105[2] = v17;
      v105[3] = v18;
      v20 = *v19;
      v21 = v19[1];
      v22 = v19[2];
      v23 = v19[3];
      v19 += 4;
      v105[4] = v20;
      v105[5] = v21;
      v105[6] = v22;
      v105[7] = v23;
      v24 = v19[1];
      v105[8] = *v19;
      v105[9] = v24;
      *v14 = v110;
      v14[1] = v115;
      v14[2] = v120;
      v14[3] = v125;
      v14 += 4;
      *v14 = v130;
      v14[1] = v134;
      v14[2] = v139;
      v14[3] = v144;
      *v19 = v149;
      v19[1] = v154;
LABEL_8:
      v25 = v109;
      v26 = v103;
      v102 = v107;
      for ( i = v106; ; i += 10 )
      {
        v27 = (char *)(v25 - 40);
        v28 = (char *)(v25 - 40);
        if ( sub_4FC3C(v102, i, v7, v8) < 0 )
          goto LABEL_14;
        v29 = v26 - 40;
        do
        {
          v30 = sub_4FC3C(v7, v8, (int *)v29 + 1, (_DWORD *)v29 + 4);
          v26 = v29;
          v29 -= 40;
        }
        while ( v30 < 0 );
        if ( v26 <= v27 )
          break;
        v111 = *(_DWORD *)v27;
        v116 = *(_DWORD *)(v25 - 36);
        v121 = *(_DWORD *)(v25 - 32);
        v126 = *(_DWORD *)(v25 - 28);
        v31 = (_DWORD *)(v25 - 8);
        v131 = *(_DWORD *)(v25 - 24);
        v135 = *(_DWORD *)(v25 - 20);
        v140 = *(_DWORD *)(v25 - 16);
        v145 = *(_DWORD *)(v25 - 12);
        v150 = *(_DWORD *)(v25 - 8);
        v155 = *(_DWORD *)(v25 - 4);
        v32 = *((_DWORD *)v26 + 1);
        v33 = *((_DWORD *)v26 + 2);
        v34 = *((_DWORD *)v26 + 3);
        *(_DWORD *)v27 = *(_DWORD *)v26;
        *(_DWORD *)(v25 - 36) = v32;
        *(_DWORD *)(v25 - 32) = v33;
        *(_DWORD *)(v25 - 28) = v34;
        v35 = (_DWORD *)(v25 - 24);
        v36 = *((_DWORD *)v26 + 5);
        v37 = *((_DWORD *)v26 + 6);
        v38 = *((_DWORD *)v26 + 7);
        *v35 = *((_DWORD *)v26 + 4);
        v35[1] = v36;
        v35[2] = v37;
        v35[3] = v38;
        v39 = *((_DWORD *)v26 + 9);
        *v31 = *((_DWORD *)v26 + 8);
        v31[1] = v39;
        *(_DWORD *)v26 = v111;
        *((_DWORD *)v26 + 1) = v116;
        *((_DWORD *)v26 + 2) = v121;
        *((_DWORD *)v26 + 3) = v126;
        *((_DWORD *)v26 + 4) = v131;
        *((_DWORD *)v26 + 5) = v135;
        *((_DWORD *)v26 + 6) = v140;
        *((_DWORD *)v26 + 7) = v145;
        *((_DWORD *)v26 + 8) = v150;
        *((_DWORD *)v26 + 9) = v155;
LABEL_14:
        v25 += 40;
        v102 += 10;
      }
      result = sub_50ABC(v25 - 40, v103, v104, a4);
      v6 = (char *)(v25 - 40);
      v5 = v27 - (char *)v105;
      if ( v27 - (char *)v105 <= 640 )
        return result;
      v103 = (char *)(v25 - 40);
      if ( !v104 )
      {
LABEL_17:
        v40 = -858993459 * (v5 >> 3);
        v41 = (v40 - 2) >> 1;
        v42 = &v105[10 * v41];
        do
        {
          v43 = *v42;
          v44 = v42[1];
          v45 = v42[2];
          v46 = v42[3];
          v47 = v42 + 4;
          v42 -= 10;
          sub_4FCD4((int)v105, v41, v40, v43, v44, v45, v46, *v47, v47[1], v47[2], v47[3], v47[4], v47[5]);
        }
        while ( v41-- != 0 );
        v49 = v28;
        do
        {
          v50 = *((_DWORD *)v49 - 10);
          v51 = *((_DWORD *)v49 - 9);
          v52 = *((_DWORD *)v49 - 8);
          v53 = *((_DWORD *)v49 - 7);
          v54 = (int *)(v49 - 24);
          v55 = v49 - 40 - (char *)v105;
          v49 -= 40;
          v112 = v50;
          v117 = v51;
          v122 = v52;
          v127 = v53;
          v56 = *v54;
          v57 = v54[1];
          v58 = v54[2];
          v59 = v54[3];
          v54 += 4;
          v136 = v57;
          v141 = v58;
          v146 = v59;
          v151 = *v54;
          v156 = v54[1];
          v60 = v105[1];
          v61 = v105[2];
          v62 = v105[3];
          *(_DWORD *)v49 = *v105;
          *((_DWORD *)v49 + 1) = v60;
          *((_DWORD *)v49 + 2) = v61;
          *((_DWORD *)v49 + 3) = v62;
          v63 = v105[5];
          v64 = v105[6];
          v65 = v105[7];
          *((_DWORD *)v49 + 4) = v105[4];
          *((_DWORD *)v49 + 5) = v63;
          *((_DWORD *)v49 + 6) = v64;
          *((_DWORD *)v49 + 7) = v65;
          v66 = v105[9];
          *v54 = v105[8];
          v54[1] = v66;
          result = sub_4FCD4(
                     (int)v105,
                     0,
                     -858993459 * (v55 >> 3),
                     v112,
                     v117,
                     v122,
                     v127,
                     v56,
                     v136,
                     v141,
                     v146,
                     v151,
                     v156);
        }
        while ( v55 > 40 );
        return result;
      }
    }
    if ( sub_4FC3C(v11 + 1, v11 + 4, v9, v10) < 0 )
    {
      v90 = v11;
      v114 = *v105;
      v119 = v105[1];
      v124 = v105[2];
      v129 = v105[3];
      v133 = v105[4];
      v138 = v105[5];
      v143 = v105[6];
      v148 = v105[7];
      v153 = v105[8];
      v158 = v105[9];
      v91 = *v11;
      v92 = v11[1];
      v93 = v11[2];
      v94 = v11[3];
      v95 = v11 + 4;
      *v105 = v91;
      v105[1] = v92;
      v105[2] = v93;
      v105[3] = v94;
      v96 = *v95;
      v97 = v95[1];
      v98 = v95[2];
      v99 = v95[3];
      v95 += 4;
      v105[4] = v96;
      v105[5] = v97;
      v105[6] = v98;
      v105[7] = v99;
      v100 = v95[1];
      v105[8] = *v95;
      v105[9] = v100;
      *v90 = v114;
      v90[1] = v119;
      v90[2] = v124;
      v90[3] = v129;
      v90 += 4;
      *v90 = v133;
      v90[1] = v138;
      v90[2] = v143;
      v90[3] = v148;
      *v95 = v153;
      v95[1] = v158;
      goto LABEL_8;
    }
    if ( sub_4FC3C(v107, v106, v9, v10) >= 0 )
    {
LABEL_26:
      v67 = (char *)(v105 + 10);
      v68 = *v105;
      v69 = v105[1];
      v70 = v105[2];
      v71 = v105[3];
      v72 = v105 + 4;
      v13 = v105;
    }
    else
    {
      v13 = v105;
LABEL_28:
      v68 = *v13;
      v69 = v13[1];
      v70 = v13[2];
      v71 = v13[3];
      v72 = v13 + 4;
      v67 = v103 - 40;
    }
    v113 = v68;
    v118 = v69;
    v123 = v70;
    v128 = v71;
    v73 = v67;
    v74 = *v72;
    v75 = v72[1];
    v76 = v72[2];
    v77 = v72[3];
    v78 = v72 + 4;
    v132 = v74;
    v137 = v75;
    v142 = v76;
    v147 = v77;
    v152 = *v78;
    v157 = v78[1];
    v79 = *(_DWORD *)v67;
    v80 = *((_DWORD *)v67 + 1);
    v81 = *((_DWORD *)v67 + 2);
    v82 = *((_DWORD *)v67 + 3);
    v83 = (int *)(v67 + 16);
    *v13 = v79;
    v13[1] = v80;
    v13[2] = v81;
    v13[3] = v82;
    v84 = v13 + 4;
    v85 = *v83;
    v86 = v83[1];
    v87 = v83[2];
    v88 = v83[3];
    v83 += 4;
    *v84 = v85;
    v84[1] = v86;
    v84[2] = v87;
    v84[3] = v88;
    v89 = v83[1];
    *v78 = *v83;
    v78[1] = v89;
    *(_DWORD *)v73 = v113;
    *((_DWORD *)v73 + 1) = v118;
    *((_DWORD *)v73 + 2) = v123;
    *((_DWORD *)v73 + 3) = v128;
    v73 += 16;
    *(_DWORD *)v73 = v132;
    *((_DWORD *)v73 + 1) = v137;
    *((_DWORD *)v73 + 2) = v142;
    *((_DWORD *)v73 + 3) = v147;
    *v83 = v152;
    v83[1] = v157;
    goto LABEL_8;
  }
  return result;
}
