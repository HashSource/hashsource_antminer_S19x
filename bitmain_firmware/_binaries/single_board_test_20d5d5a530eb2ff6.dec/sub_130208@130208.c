_DWORD *__fastcall sub_130208(_DWORD *result, _DWORD *a2)
{
  unsigned int v2; // r3
  int v3; // r4
  bool v4; // cf
  int v5; // r5
  int v6; // r2
  int v7; // r4
  int v8; // r2
  int v9; // r3
  int v10; // r5
  int v11; // r4
  int v12; // r3
  int v13; // r2
  int v14; // r3
  int v15; // r2
  int v16; // r3
  int v17; // r2
  int v18; // r5
  int v19; // r2
  int v20; // r2
  int v21; // r4
  int v22; // r2
  int v23; // r3
  int v24; // r5
  int v25; // r2
  int v26; // r3
  int v27; // r4
  int v28; // r3
  int v29; // r3
  int v30; // r4
  int v31; // r3
  int v32; // r4
  int v33; // r3
  int v34; // r2
  int v35; // r5
  int v36; // r2
  int v37; // r2
  int v38; // r3
  int v39; // r2
  int v40; // r2
  int v41; // r3
  int v42; // r2
  int v43; // r4
  int v44; // r5
  int v45; // r3
  int v46; // r4
  int v47; // r2
  int v48; // r4
  int v49; // r4
  int v50; // r5
  int v51; // r4
  int v52; // r4
  int v53; // r5
  int v54; // r4
  int v55; // r2
  int v56; // r4
  int v57; // r3
  int v58; // r2
  int v59; // r3
  int v60; // r3
  int v61; // r4
  int v62; // r3
  int v63; // r3
  int v64; // r4
  int v65; // r3
  int v66; // r5
  int v67; // r3
  int v68; // r4
  int v69; // r3
  int v70; // r2
  int v71; // r3
  int v72; // r3
  int v73; // r5
  int v74; // r3
  int v75; // r2
  int v76; // r3
  int v77; // r4
  int v78; // r2
  int v79; // r4
  int v80; // r3
  int v81; // r4
  int v82; // r3
  int v83; // r4
  int v84; // r2
  int v85; // r5
  int v86; // r2
  int v87; // r4
  int v88; // r2
  int v89; // r3
  int v90; // r4
  int v91; // r3
  int v92; // r2
  int v93; // r3
  int v94; // r4
  int v95; // r2
  int v96; // r5
  int v97; // r3
  int v98; // r3
  int v99; // r2

  *result = *a2 * *a2;
  v2 = *a2 * a2[1];
  result[1] = 2 * v2;
  v3 = a2[1] * a2[1];
  v5 = 0;
  if ( v2 > 2 * v2 )
  {
    v4 = __CFADD__(v3++, 1);
    if ( v4 )
      v5 = 1;
  }
  v6 = *a2 * a2[2];
  v4 = __CFADD__(v6, v3);
  v7 = v6 + v3;
  if ( v4 )
    ++v5;
  v4 = __CFADD__(v6, v7);
  v8 = v6 + v7;
  if ( v4 )
    ++v5;
  result[2] = v8;
  v9 = *a2 * a2[3];
  v4 = __CFADD__(v9, v5);
  v10 = v9 + v5;
  v11 = v4;
  v4 = __CFADD__(v9, v10);
  v12 = v9 + v10;
  if ( v4 )
    ++v11;
  v13 = a2[1] * a2[2];
  v4 = __CFADD__(v12, v13);
  v14 = v12 + v13;
  if ( v4 )
    ++v11;
  result[3] = v14 + v13;
  if ( __CFADD__(v14, v13) )
    ++v11;
  v15 = a2[2] * a2[2];
  v16 = a2[1] * a2[3];
  v4 = __CFADD__(v15, v11);
  v17 = v15 + v11;
  v18 = v4;
  v4 = __CFADD__(v17, v16);
  v19 = v17 + v16;
  if ( v4 )
    ++v18;
  v4 = __CFADD__(v19, v16);
  v20 = v19 + v16;
  if ( v4 )
    ++v18;
  v21 = *a2 * a2[4];
  v4 = __CFADD__(v20, v21);
  v22 = v20 + v21;
  if ( v4 )
    ++v18;
  result[4] = v21 + v22;
  if ( __CFADD__(v21, v22) )
    ++v18;
  v23 = *a2 * a2[5];
  v4 = __CFADD__(v18, v23);
  v24 = v18 + v23;
  v25 = v4;
  v4 = __CFADD__(v23, v24);
  v26 = v23 + v24;
  if ( v4 )
    ++v25;
  v27 = a2[1] * a2[4];
  v4 = __CFADD__(v26, v27);
  v28 = v26 + v27;
  if ( v4 )
    ++v25;
  v4 = __CFADD__(v28, v27);
  v29 = v28 + v27;
  if ( v4 )
    ++v25;
  v30 = a2[2] * a2[3];
  v4 = __CFADD__(v29, v30);
  v31 = v29 + v30;
  if ( v4 )
    ++v25;
  result[5] = v30 + v31;
  if ( __CFADD__(v30, v31) )
    ++v25;
  v32 = a2[3] * a2[3];
  v33 = a2[2] * a2[4];
  v4 = __CFADD__(v25, v32);
  v34 = v25 + v32;
  v35 = v4;
  v4 = __CFADD__(v34, v33);
  v36 = v34 + v33;
  if ( v4 )
    ++v35;
  v4 = __CFADD__(v36, v33);
  v37 = v36 + v33;
  if ( v4 )
    ++v35;
  v38 = a2[1] * a2[5];
  v4 = __CFADD__(v37, v38);
  v39 = v37 + v38;
  if ( v4 )
    ++v35;
  v4 = __CFADD__(v38, v39);
  v40 = v38 + v39;
  if ( v4 )
    ++v35;
  v41 = *a2 * a2[6];
  v4 = __CFADD__(v41, v40);
  v42 = v41 + v40;
  if ( v4 )
    ++v35;
  result[6] = v41 + v42;
  if ( __CFADD__(v41, v42) )
    ++v35;
  v43 = *a2 * a2[7];
  v4 = __CFADD__(v43, v35);
  v44 = v43 + v35;
  v45 = v4;
  v4 = __CFADD__(v43, v44);
  v46 = v43 + v44;
  if ( v4 )
    ++v45;
  v47 = a2[1] * a2[6];
  v4 = __CFADD__(v47, v46);
  v48 = v47 + v46;
  if ( v4 )
    ++v45;
  v4 = __CFADD__(v48, v47);
  v49 = v48 + v47;
  if ( v4 )
    ++v45;
  v50 = a2[2] * a2[5];
  v4 = __CFADD__(v50, v49);
  v51 = v50 + v49;
  if ( v4 )
    ++v45;
  v4 = __CFADD__(v50, v51);
  v52 = v50 + v51;
  if ( v4 )
    ++v45;
  v53 = a2[3] * a2[4];
  v4 = __CFADD__(v53, v52);
  v54 = v53 + v52;
  if ( v4 )
    ++v45;
  result[7] = v54 + v53;
  if ( __CFADD__(v54, v53) )
    ++v45;
  v55 = a2[4] * a2[4];
  v56 = a2[3] * a2[5];
  v4 = __CFADD__(v55, v45);
  v57 = v55 + v45;
  v58 = v4;
  v4 = __CFADD__(v56, v57);
  v59 = v56 + v57;
  if ( v4 )
    ++v58;
  v4 = __CFADD__(v59, v56);
  v60 = v59 + v56;
  if ( v4 )
    ++v58;
  v61 = a2[2] * a2[6];
  v4 = __CFADD__(v60, v61);
  v62 = v60 + v61;
  if ( v4 )
    ++v58;
  v4 = __CFADD__(v62, v61);
  v63 = v62 + v61;
  if ( v4 )
    ++v58;
  v64 = a2[1] * a2[7];
  v4 = __CFADD__(v64, v63);
  v65 = v64 + v63;
  if ( v4 )
    ++v58;
  result[8] = v64 + v65;
  if ( __CFADD__(v64, v65) )
    ++v58;
  v66 = a2[2] * a2[7];
  v67 = v66 + v58;
  v68 = __CFADD__(v66, v58);
  v4 = __CFADD__(v67, v66);
  v69 = v67 + v66;
  if ( v4 )
    ++v68;
  v70 = a2[3] * a2[6];
  v4 = __CFADD__(v69, v70);
  v71 = v69 + v70;
  if ( v4 )
    ++v68;
  v4 = __CFADD__(v71, v70);
  v72 = v71 + v70;
  if ( v4 )
    ++v68;
  v73 = a2[4] * a2[5];
  v4 = __CFADD__(v73, v72);
  v74 = v73 + v72;
  if ( v4 )
    ++v68;
  result[9] = v73 + v74;
  if ( __CFADD__(v73, v74) )
    ++v68;
  v75 = a2[5] * a2[5];
  v76 = a2[4] * a2[6];
  v4 = __CFADD__(v75, v68);
  v77 = v75 + v68;
  v78 = v4;
  v4 = __CFADD__(v76, v77);
  v79 = v76 + v77;
  if ( v4 )
    ++v78;
  v4 = __CFADD__(v76, v79);
  v80 = v76 + v79;
  if ( v4 )
    ++v78;
  v81 = a2[3] * a2[7];
  v4 = __CFADD__(v81, v80);
  v82 = v81 + v80;
  if ( v4 )
    ++v78;
  result[10] = v82 + v81;
  if ( __CFADD__(v82, v81) )
    ++v78;
  v83 = a2[4] * a2[7];
  v4 = __CFADD__(v83, v78);
  v84 = v83 + v78;
  v85 = v4;
  v4 = __CFADD__(v84, v83);
  v86 = v84 + v83;
  if ( v4 )
    ++v85;
  v87 = a2[5] * a2[6];
  v4 = __CFADD__(v87, v86);
  v88 = v87 + v86;
  if ( v4 )
    ++v85;
  result[11] = v87 + v88;
  if ( __CFADD__(v87, v88) )
    ++v85;
  v89 = a2[6] * a2[6];
  v90 = a2[5] * a2[7];
  v4 = __CFADD__(v89, v85);
  v91 = v89 + v85;
  v92 = v4;
  v4 = __CFADD__(v91, v90);
  v93 = v91 + v90;
  if ( v4 )
    ++v92;
  result[12] = v90 + v93;
  if ( __CFADD__(v90, v93) )
    ++v92;
  v94 = a2[6] * a2[7];
  v4 = __CFADD__(v94, v92);
  v95 = v94 + v92;
  v96 = v4;
  result[13] = v95 + v94;
  if ( __CFADD__(v95, v94) )
    ++v96;
  v97 = a2[7] * a2[7];
  v4 = __CFADD__(v97, v96);
  v98 = v97 + v96;
  v99 = v4;
  result[14] = v98;
  result[15] = v99;
  return result;
}
