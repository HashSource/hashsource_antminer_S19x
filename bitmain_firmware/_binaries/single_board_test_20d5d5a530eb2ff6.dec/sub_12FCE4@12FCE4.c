_DWORD *__fastcall sub_12FCE4(_DWORD *result, _DWORD *a2, int *a3)
{
  unsigned int v3; // r4
  unsigned int v4; // r3
  bool v5; // cc
  int v6; // r5
  int v7; // r3
  int v8; // r3
  int v9; // r4
  int v10; // r3
  bool v11; // cf
  int v12; // r3
  int v13; // r5
  int v14; // r3
  int v15; // r3
  int v16; // r5
  int v17; // r4
  int v18; // r3
  int v19; // r4
  int v20; // r5
  int v21; // r4
  int v22; // r5
  int v23; // r4
  int v24; // r5
  int v25; // r4
  int v26; // r3
  int v27; // r4
  int v28; // r5
  int v29; // r4
  int v30; // r5
  int v31; // r4
  int v32; // r5
  int v33; // r5
  int v34; // r4
  int v35; // r3
  int v36; // r5
  int v37; // r3
  int v38; // r4
  int v39; // r3
  int v40; // r4
  int v41; // r3
  int v42; // r4
  int v43; // r3
  int v44; // r4
  int v45; // r3
  int v46; // r4
  int v47; // r3
  int v48; // r6
  int v49; // r3
  int v50; // r5
  int v51; // r5
  int v52; // r3
  int v53; // r3
  int v54; // r4
  int v55; // r3
  int v56; // r4
  int v57; // r3
  int v58; // r4
  int v59; // r3
  int v60; // r4
  int v61; // r6
  int v62; // r5
  int v63; // r4
  int v64; // r6
  int v65; // r6
  int v66; // r4
  int v67; // r4
  int v68; // r3
  int v69; // r4
  int v70; // r3
  int v71; // r4
  int v72; // r3
  int v73; // r4
  int v74; // r3
  int v75; // r4
  int v76; // r3
  int v77; // r5
  int v78; // r6
  int v79; // r3
  int v80; // r4
  int v81; // r3
  int v82; // r4
  int v83; // r3
  int v84; // r5
  int v85; // r3
  int v86; // r4
  int v87; // r3
  int v88; // r4
  int v89; // r3
  int v90; // r4
  int v91; // r3
  int v92; // r6
  int v93; // r4
  int v94; // r3
  int v95; // r4
  int v96; // r3
  int v97; // r4
  int v98; // r5
  int v99; // r4
  int v100; // r3
  int v101; // r4
  int v102; // r3
  int v103; // r6
  int v104; // r5
  int v105; // r3
  int v106; // r4
  int v107; // r3
  int v108; // r4
  int v109; // r3
  int v110; // r4
  int v111; // r3
  int v112; // r4
  int v113; // r5
  int v114; // r6
  int v115; // r5
  int v116; // r4
  int v117; // r4
  int v118; // r3
  int v119; // r4
  int v120; // r3
  int v121; // r6
  int v122; // r5
  int v123; // r3
  int v124; // r4
  int v125; // r6
  int v126; // r4
  int v127; // r5
  int v128; // r6
  int v129; // r3
  int v130; // r3
  int v131; // r2
  int v132; // r5

  *result = *a2 * *a3;
  v3 = *a3 * a2[1];
  v4 = v3 + a3[1] * *a2;
  v5 = v3 > v4;
  result[1] = v4;
  v6 = a2[2];
  v7 = *a3;
  if ( v5 )
  {
    v8 = v7 * v6;
    v132 = v8 + 1;
    if ( v8 == -1 )
    {
      v9 = 1;
      goto LABEL_6;
    }
  }
  else
  {
    v132 = v7 * v6;
  }
  v9 = 0;
LABEL_6:
  v10 = a3[1] * a2[1];
  v11 = __CFADD__(v10, v132);
  v12 = v10 + v132;
  if ( v11 )
    ++v9;
  v13 = a3[2] * *a2;
  v11 = __CFADD__(v13, v12);
  v14 = v13 + v12;
  if ( v11 )
    ++v9;
  result[2] = v14;
  v15 = a3[3] * *a2;
  v16 = a3[2] * a2[1];
  v11 = __CFADD__(v15, v9);
  v17 = v15 + v9;
  v18 = v11;
  v11 = __CFADD__(v16, v17);
  v19 = v16 + v17;
  if ( v11 )
    ++v18;
  v20 = a3[1] * a2[2];
  v11 = __CFADD__(v20, v19);
  v21 = v20 + v19;
  if ( v11 )
    ++v18;
  v22 = *a3 * a2[3];
  result[3] = v21 + v22;
  if ( __CFADD__(v21, v22) )
    ++v18;
  v23 = *a3 * a2[4];
  v24 = a3[1] * a2[3];
  v11 = __CFADD__(v18, v23);
  v25 = v18 + v23;
  v26 = v11;
  v11 = __CFADD__(v25, v24);
  v27 = v25 + v24;
  if ( v11 )
    ++v26;
  v28 = a3[2] * a2[2];
  v11 = __CFADD__(v27, v28);
  v29 = v27 + v28;
  if ( v11 )
    ++v26;
  v30 = a3[3] * a2[1];
  v11 = __CFADD__(v29, v30);
  v31 = v29 + v30;
  if ( v11 )
    ++v26;
  v32 = a3[4] * *a2;
  result[4] = v31 + v32;
  if ( __CFADD__(v31, v32) )
    ++v26;
  v33 = a3[5] * *a2;
  v34 = a3[4] * a2[1];
  v11 = __CFADD__(v26, v33);
  v35 = v26 + v33;
  v36 = v11;
  v11 = __CFADD__(v35, v34);
  v37 = v35 + v34;
  if ( v11 )
    ++v36;
  v38 = a3[3] * a2[2];
  v11 = __CFADD__(v37, v38);
  v39 = v37 + v38;
  if ( v11 )
    ++v36;
  v40 = a3[2] * a2[3];
  v11 = __CFADD__(v39, v40);
  v41 = v39 + v40;
  if ( v11 )
    ++v36;
  v42 = a3[1] * a2[4];
  v11 = __CFADD__(v41, v42);
  v43 = v41 + v42;
  if ( v11 )
    ++v36;
  v44 = *a3 * a2[5];
  result[5] = v43 + v44;
  if ( __CFADD__(v43, v44) )
    ++v36;
  v45 = *a3 * a2[6];
  v46 = a3[1] * a2[5];
  v11 = __CFADD__(v45, v36);
  v47 = v45 + v36;
  v48 = v11;
  v11 = __CFADD__(v47, v46);
  v49 = v47 + v46;
  if ( v11 )
    ++v48;
  v50 = a3[2] * a2[4];
  v11 = __CFADD__(v49, v50);
  v51 = v49 + v50;
  if ( v11 )
    ++v48;
  v52 = a3[3] * a2[3];
  v11 = __CFADD__(v52, v51);
  v53 = v52 + v51;
  if ( v11 )
    ++v48;
  v54 = a3[4] * a2[2];
  v11 = __CFADD__(v53, v54);
  v55 = v53 + v54;
  if ( v11 )
    ++v48;
  v56 = a3[5] * a2[1];
  v11 = __CFADD__(v55, v56);
  v57 = v55 + v56;
  if ( v11 )
    ++v48;
  v58 = a3[6] * *a2;
  result[6] = v57 + v58;
  if ( __CFADD__(v57, v58) )
    ++v48;
  v59 = a3[7] * *a2;
  v60 = a3[6] * a2[1];
  v11 = __CFADD__(v48, v59);
  v61 = v48 + v59;
  v62 = v11;
  v11 = __CFADD__(v61, v60);
  v63 = v61 + v60;
  if ( v11 )
    ++v62;
  v64 = a3[5] * a2[2];
  v11 = __CFADD__(v63, v64);
  v65 = v63 + v64;
  if ( v11 )
    ++v62;
  v66 = a3[4] * a2[3];
  v11 = __CFADD__(v66, v65);
  v67 = v66 + v65;
  if ( v11 )
    ++v62;
  v68 = a3[3] * a2[4];
  v11 = __CFADD__(v67, v68);
  v69 = v67 + v68;
  if ( v11 )
    ++v62;
  v70 = a3[2] * a2[5];
  v11 = __CFADD__(v69, v70);
  v71 = v69 + v70;
  if ( v11 )
    ++v62;
  v72 = a3[1] * a2[6];
  v11 = __CFADD__(v72, v71);
  v73 = v72 + v71;
  if ( v11 )
    ++v62;
  v74 = *a3 * a2[7];
  result[7] = v74 + v73;
  if ( __CFADD__(v74, v73) )
    ++v62;
  v75 = a3[1] * a2[7];
  v76 = a3[2] * a2[6];
  v11 = __CFADD__(v62, v75);
  v77 = v62 + v75;
  v78 = v11;
  v11 = __CFADD__(v76, v77);
  v79 = v76 + v77;
  if ( v11 )
    ++v78;
  v80 = a3[3] * a2[5];
  v11 = __CFADD__(v79, v80);
  v81 = v79 + v80;
  if ( v11 )
    ++v78;
  v82 = a3[4] * a2[4];
  v11 = __CFADD__(v81, v82);
  v83 = v81 + v82;
  if ( v11 )
    ++v78;
  v84 = a3[5] * a2[3];
  v11 = __CFADD__(v84, v83);
  v85 = v84 + v83;
  if ( v11 )
    ++v78;
  v86 = a3[6] * a2[2];
  v11 = __CFADD__(v85, v86);
  v87 = v85 + v86;
  if ( v11 )
    ++v78;
  v88 = a3[7] * a2[1];
  result[8] = v88 + v87;
  if ( __CFADD__(v88, v87) )
    ++v78;
  v89 = a3[7] * a2[2];
  v90 = a3[6] * a2[3];
  v11 = __CFADD__(v78, v89);
  v91 = v78 + v89;
  v92 = v11;
  v11 = __CFADD__(v90, v91);
  v93 = v90 + v91;
  if ( v11 )
    ++v92;
  v94 = a3[5] * a2[4];
  v11 = __CFADD__(v93, v94);
  v95 = v93 + v94;
  if ( v11 )
    ++v92;
  v96 = a3[4] * a2[5];
  v11 = __CFADD__(v95, v96);
  v97 = v95 + v96;
  if ( v11 )
    ++v92;
  v98 = a3[3] * a2[6];
  v11 = __CFADD__(v98, v97);
  v99 = v98 + v97;
  if ( v11 )
    ++v92;
  v100 = a3[2] * a2[7];
  result[9] = v99 + v100;
  if ( __CFADD__(v99, v100) )
    ++v92;
  v101 = a3[3] * a2[7];
  v102 = a3[4] * a2[6];
  v11 = __CFADD__(v101, v92);
  v103 = v101 + v92;
  v104 = v11;
  v11 = __CFADD__(v102, v103);
  v105 = v102 + v103;
  if ( v11 )
    ++v104;
  v106 = a3[5] * a2[5];
  v11 = __CFADD__(v105, v106);
  v107 = v105 + v106;
  if ( v11 )
    ++v104;
  v108 = a3[6] * a2[4];
  v11 = __CFADD__(v107, v108);
  v109 = v107 + v108;
  if ( v11 )
    ++v104;
  v110 = a3[7] * a2[3];
  result[10] = v109 + v110;
  if ( __CFADD__(v109, v110) )
    ++v104;
  v111 = a3[7] * a2[4];
  v112 = a3[6] * a2[5];
  v11 = __CFADD__(v104, v111);
  v113 = v104 + v111;
  v114 = v11;
  v11 = __CFADD__(v112, v113);
  v115 = v112 + v113;
  if ( v11 )
    ++v114;
  v116 = a3[5] * a2[6];
  v11 = __CFADD__(v116, v115);
  v117 = v116 + v115;
  if ( v11 )
    ++v114;
  v118 = a3[4] * a2[7];
  result[11] = v117 + v118;
  if ( __CFADD__(v117, v118) )
    ++v114;
  v119 = a3[5] * a2[7];
  v120 = a3[6] * a2[6];
  v11 = __CFADD__(v114, v119);
  v121 = v114 + v119;
  v122 = v11;
  v11 = __CFADD__(v120, v121);
  v123 = v120 + v121;
  if ( v11 )
    ++v122;
  v124 = a3[7] * a2[5];
  result[12] = v123 + v124;
  if ( __CFADD__(v123, v124) )
    ++v122;
  v125 = a3[7] * a2[6];
  v126 = a3[6] * a2[7];
  v11 = __CFADD__(v122, v125);
  v127 = v122 + v125;
  v128 = v11;
  result[13] = v126 + v127;
  if ( __CFADD__(v126, v127) )
    ++v128;
  v129 = a3[7] * a2[7];
  v11 = __CFADD__(v129, v128);
  v130 = v129 + v128;
  v131 = v11;
  result[14] = v130;
  result[15] = v131;
  return result;
}
