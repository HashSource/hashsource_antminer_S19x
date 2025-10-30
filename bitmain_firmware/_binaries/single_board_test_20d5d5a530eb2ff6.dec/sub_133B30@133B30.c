int __fastcall sub_133B30(int *a1, int *a2, int *a3, int *a4)
{
  unsigned int v5; // r8
  int result; // r0
  int v9; // r9
  int v10; // r11
  int v11; // r3
  unsigned int v12; // r7
  int v13; // r0
  int v14; // r5
  int v15; // r4
  int v16; // r10
  int v17; // r0
  int v18; // r12
  int v19; // r6
  int v20; // r3
  int v21; // r1
  int v22; // r2
  unsigned int v23; // r3
  unsigned int v24; // r2
  bool v25; // cf
  bool v26; // zf
  unsigned int v27; // r3
  int v28; // r2
  int v29; // r5
  unsigned int v30; // r9
  int v31; // r10
  unsigned int v32; // r6
  _DWORD *v33; // r4
  int v34; // r12
  unsigned int v35; // lr
  char *v36; // r0
  int v37; // r3
  unsigned int v38; // r7
  int v39; // r3
  unsigned int v40; // r3
  int v41; // r2
  int v42; // r11
  unsigned int v43; // r1
  int v44; // r1
  int v45; // r3
  unsigned int v46; // r3
  unsigned int v47; // r2
  int v48; // r1
  int v49; // r3
  unsigned int v50; // r3
  unsigned int v51; // r2
  int v52; // r1
  int v53; // r3
  unsigned int v54; // r3
  unsigned int v55; // r2
  int v56; // r1
  int v57; // r3
  unsigned int v58; // r3
  int v59; // r1
  unsigned int v60; // r2
  int v61; // r11
  int v62; // r3
  unsigned int v63; // r3
  unsigned int v64; // r2
  int v65; // r11
  int v66; // r3
  unsigned int v67; // r3
  unsigned int v68; // r2
  int v69; // r11
  int v70; // r2
  int v71; // r3
  unsigned int v72; // r11
  unsigned int v73; // r1
  _BOOL4 v74; // r3
  int *v75; // lr
  int *v76; // r4
  int v77; // t1
  int v78; // r1
  unsigned int v79; // r2
  int v80; // r0
  int v81; // r3
  unsigned int v82; // r3
  int v83; // r2
  unsigned int v84; // r5
  _DWORD *v85; // r4
  int v86; // r6
  _DWORD *v87; // r0
  int v88; // r1
  unsigned int v89; // lr
  int v90; // r7
  int v91; // r1
  unsigned int v92; // r1
  unsigned int v93; // r7
  int v94; // r2
  int v95; // r1
  int v96; // r7
  int v97; // r2
  unsigned int v98; // r2
  unsigned int v99; // r7
  int v100; // r1
  int v101; // r7
  int v102; // r2
  unsigned int v103; // r2
  unsigned int v104; // r1
  int v105; // r7
  int v106; // r2
  unsigned int v107; // r2
  unsigned int v108; // r1
  int v109; // r7
  int v110; // r2
  unsigned int v111; // r2
  int v112; // r7
  unsigned int v113; // r1
  int v114; // r12
  int v115; // r2
  unsigned int v116; // r2
  unsigned int v117; // r1
  int v118; // r12
  int v119; // r2
  unsigned int v120; // r2
  unsigned int v121; // r1
  int v122; // r12
  int v123; // r1
  int v124; // r2
  unsigned int v125; // r12
  unsigned int v126; // r7
  _BOOL4 v127; // r1
  int *v128; // r10
  int *v129; // r4
  int v130; // t1
  int v131; // r0
  unsigned int v132; // r2
  int v133; // r6
  int v134; // r1
  int v135; // [sp+0h] [bp-1Ch]
  int v136; // [sp+4h] [bp-18h]
  int v139; // [sp+10h] [bp-Ch]

  v5 = a4[1];
  result = sub_B89D8((int)a1, v5);
  if ( result )
  {
    v9 = *a2;
    v10 = *a3;
    v136 = *a1;
    if ( !*a2 )
      v9 = *a1;
    if ( v10 )
    {
      if ( v5 )
        goto LABEL_6;
    }
    else
    {
      v10 = *a1;
      if ( v5 )
      {
LABEL_6:
        v11 = a2[1];
        v12 = 0;
        v13 = a2[2];
        v14 = 0;
        v15 = 0;
        v139 = v11 + 1 - v13;
        v16 = v11 + 1 - a3[2];
        v17 = -v11;
        v18 = v11 - a3[1];
        v135 = v5 - v11;
        v19 = v136 - 4;
        do
        {
          v20 = *(_DWORD *)(v9 + 4 * v15);
          v21 = v18 + v17;
          v22 = *(_DWORD *)(v10 + 4 * v14);
          v15 += (unsigned int)(v139 + v17) >> 31;
          v14 += (unsigned int)(v16 + v17) >> 31;
          v23 = v20 & (v17++ >> 31);
          v24 = v22 & (v21 >> 31);
          v25 = v23 >= v24;
          v26 = v23 == v24;
          v27 = v23 - v24 - v12;
          if ( !v25 )
            v24 = 1;
          *(_DWORD *)(v19 + 4) = v27;
          v19 += 4;
          if ( v25 )
            v24 = 0;
          if ( !v26 )
            v12 = v24;
        }
        while ( v17 != v135 );
        v28 = 0;
        v29 = -v12;
        v30 = v5 - 7;
        v31 = *a4;
        if ( v5 > 8 )
        {
          v33 = (_DWORD *)(v31 + 56);
          v34 = 0;
          v35 = v12;
          v36 = (char *)(v136 + 56);
          do
          {
            v37 = *(v33 - 14);
            v38 = v34 + 9;
            v32 = v34 + 8;
            __pld(v33);
            v34 += 8;
            v39 = v37 & v29;
            __pld(v36);
            v25 = __CFADD__(v39, v28);
            v40 = v39 + v28;
            v41 = *((_DWORD *)v36 - 13);
            v42 = v25;
            v43 = *((_DWORD *)v36 - 14) + v40;
            v33 += 8;
            *((_DWORD *)v36 - 14) = v43;
            if ( v40 > v43 )
              v44 = v42 + 1;
            else
              v44 = v42;
            v36 += 32;
            v45 = *(v33 - 21) & v29;
            v25 = __CFADD__(v45, v44);
            v46 = v45 + v44;
            v47 = v41 + v46;
            v48 = v25;
            *((_DWORD *)v36 - 21) = v47;
            if ( v46 > v47 )
              ++v48;
            v49 = *(v33 - 20) & v29;
            v25 = __CFADD__(v49, v48);
            v50 = v49 + v48;
            v51 = *((_DWORD *)v36 - 20) + v50;
            v52 = v25;
            *((_DWORD *)v36 - 20) = v51;
            if ( v50 > v51 )
              ++v52;
            v53 = *(v33 - 19) & v29;
            v25 = __CFADD__(v53, v52);
            v54 = v53 + v52;
            v55 = *((_DWORD *)v36 - 19) + v54;
            v56 = v25;
            *((_DWORD *)v36 - 19) = v55;
            if ( v54 > v55 )
              ++v56;
            v57 = *(v33 - 18) & v29;
            v25 = __CFADD__(v57, v56);
            v58 = v57 + v56;
            v59 = *((_DWORD *)v36 - 15);
            v60 = *((_DWORD *)v36 - 18) + v58;
            v61 = v25;
            *((_DWORD *)v36 - 18) = v60;
            if ( v58 > v60 )
              ++v61;
            v62 = *(v33 - 17) & v29;
            v25 = __CFADD__(v62, v61);
            v63 = v62 + v61;
            v64 = *((_DWORD *)v36 - 17) + v63;
            v65 = v25;
            *((_DWORD *)v36 - 17) = v64;
            if ( v63 > v64 )
              ++v65;
            v66 = *(v33 - 16) & v29;
            v25 = __CFADD__(v66, v65);
            v67 = v66 + v65;
            v68 = *((_DWORD *)v36 - 16) + v67;
            v69 = v25;
            *((_DWORD *)v36 - 16) = v68;
            if ( v67 > v68 )
              v70 = v69 + 1;
            else
              v70 = v69;
            v71 = *(v33 - 15);
            v72 = (v29 & v71) + v70;
            v73 = v59 + v72;
            v74 = __CFADD__(v29 & v71, v70);
            *((_DWORD *)v36 - 15) = v73;
            if ( v72 > v73 )
              v28 = v74 + 1;
            else
              v28 = v74;
          }
          while ( v30 > v38 );
          v12 = v35;
        }
        else
        {
          v32 = 0;
        }
        v75 = (int *)(v31 + 4 * v32);
        v76 = (int *)(4 * v32 + v136);
        do
        {
          v77 = *v75++;
          ++v32;
          v78 = *v76;
          v25 = __CFADD__(v77 & v29, v28);
          v79 = (v77 & v29) + v28;
          v80 = v25;
          v81 = v79 + v78;
          if ( v79 > v79 + v78 )
            v28 = v80 + 1;
          else
            v28 = v80;
          *v76++ = v81;
        }
        while ( v5 > v32 );
        v82 = v28 - v12;
        v83 = 0;
        if ( v5 > 8 )
        {
          v85 = (_DWORD *)(v31 + 56);
          v86 = 0;
          v87 = (_DWORD *)(v136 + 56);
          do
          {
            v88 = *(v85 - 14);
            v89 = v86 + 9;
            v90 = *(v87 - 14);
            v84 = v86 + 8;
            __pld(v85);
            v86 += 8;
            v91 = v88 & v82;
            __pld(v87);
            v25 = __CFADD__(v91, v83);
            v92 = v91 + v83;
            v85 += 8;
            v93 = v90 + v92;
            v94 = v25;
            *(v87 - 14) = v93;
            if ( v92 > v93 )
              v95 = v94 + 1;
            else
              v95 = v94;
            v96 = *(v87 - 13);
            v87 += 8;
            v97 = *(v85 - 21) & v82;
            v25 = __CFADD__(v97, v95);
            v98 = v97 + v95;
            v99 = v96 + v98;
            v100 = v25;
            *(v87 - 21) = v99;
            if ( v99 < v98 )
              v101 = v100 + 1;
            else
              v101 = v100;
            v102 = *(v85 - 20) & v82;
            v25 = __CFADD__(v102, v101);
            v103 = v102 + v101;
            v104 = *(v87 - 20) + v103;
            v105 = v25;
            *(v87 - 20) = v104;
            if ( v104 < v103 )
              ++v105;
            v106 = *(v85 - 19) & v82;
            v25 = __CFADD__(v106, v105);
            v107 = v106 + v105;
            v108 = *(v87 - 19) + v107;
            v109 = v25;
            *(v87 - 19) = v108;
            if ( v108 < v107 )
              ++v109;
            v110 = *(v85 - 18) & v82;
            v25 = __CFADD__(v110, v109);
            v111 = v110 + v109;
            v112 = *(v87 - 15);
            v113 = *(v87 - 18) + v111;
            v114 = v25;
            *(v87 - 18) = v113;
            if ( v113 < v111 )
              ++v114;
            v115 = *(v85 - 17) & v82;
            v25 = __CFADD__(v115, v114);
            v116 = v115 + v114;
            v117 = *(v87 - 17) + v116;
            v118 = v25;
            *(v87 - 17) = v117;
            if ( v117 < v116 )
              ++v118;
            v119 = *(v85 - 16) & v82;
            v25 = __CFADD__(v119, v118);
            v120 = v119 + v118;
            v121 = *(v87 - 16) + v120;
            v122 = v25;
            *(v87 - 16) = v121;
            if ( v120 > v121 )
              v123 = v122 + 1;
            else
              v123 = v122;
            v124 = *(v85 - 15);
            v125 = (v82 & v124) + v123;
            v126 = v112 + v125;
            v127 = __CFADD__(v82 & v124, v123);
            *(v87 - 15) = v126;
            if ( v125 > v126 )
              v83 = v127 + 1;
            else
              v83 = v127;
          }
          while ( v30 > v89 );
        }
        else
        {
          v84 = 0;
        }
        v128 = (int *)(v31 + 4 * v84);
        v129 = (int *)(v136 + 4 * v84);
        do
        {
          v130 = *v128++;
          ++v84;
          v131 = *v129;
          v25 = __CFADD__(v130 & v82, v83);
          v132 = (v130 & v82) + v83;
          v133 = v25;
          v134 = v132 + v131;
          if ( v132 + v131 < v132 )
            v83 = v133 + 1;
          else
            v83 = v133;
          *v129++ = v134;
        }
        while ( v5 > v84 );
      }
    }
    result = 1;
    a1[1] = v5;
    a1[3] = 0;
  }
  return result;
}
