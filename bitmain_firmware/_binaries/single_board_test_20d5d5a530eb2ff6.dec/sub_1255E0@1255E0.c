int __fastcall sub_1255E0(unsigned __int8 *a1, int a2, unsigned int *a3)
{
  int result; // r0
  unsigned int v5; // r5
  unsigned int v6; // r4
  unsigned int v7; // r0
  unsigned int *v8; // r3
  int *v9; // r10
  unsigned int v10; // r7
  unsigned int v11; // r6
  unsigned int v12; // lr
  unsigned int v13; // r1
  int *v14; // r2
  unsigned int *v15; // r9
  int *v16; // r3
  int v17; // r1
  int v18; // r5
  int *v19; // r12
  int v20; // r0
  int v21; // r3
  int v22; // r11
  int v23; // r4
  int v24; // r8
  int v25; // r6
  int v26; // r7
  int v27; // r1
  int v28; // lr
  int v29; // r11
  int v30; // r5
  int v31; // r8
  int v32; // r2
  int v33; // r3
  int v34; // r5
  int v35; // r0
  int v36; // r0
  int v37; // r4
  int v38; // r1
  unsigned int v39; // r11
  int v40; // r4
  int v41; // r6
  int v42; // r7
  int v43; // r5
  unsigned int v44; // r1
  int v45; // r7
  int v46; // r5
  int v47; // r3
  unsigned int v48; // r2
  int v49; // r7
  int v50; // r0
  unsigned int v51; // r1
  int v52; // r2
  int v53; // t2
  int v54; // r6
  int v55; // r5
  int v56; // r1
  unsigned int v57; // r4
  unsigned int v58; // r3
  int v59; // r7
  int v60; // r0
  int v61; // r4
  int v62; // r4
  int v63; // r7
  int v64; // r6
  int v65; // r5
  int v66; // r2
  int v67; // r3
  int v68; // r1
  int v69; // r2
  int v70; // r4
  int v71; // r1
  int v72; // r3
  int v73; // t2
  unsigned int v74; // r5
  int v75; // r4
  int v76; // r1
  int v77; // t2
  unsigned int v78; // r2
  unsigned int v79; // r3
  int v80; // r4
  int v81; // r1
  int *v82; // [sp+4h] [bp-8h]

  result = sub_124B24(a1, a2, a3);
  if ( !result )
  {
    v5 = *a3;
    v6 = a3[1];
    v7 = a3[2];
    v8 = &a3[4 * a3[68]];
    v9 = (int *)(v8 - 4);
    v10 = v8[1];
    v11 = v8[3];
    v12 = *v8;
    a3[2] = v8[2];
    a3[1] = v10;
    v13 = a3[3];
    *a3 = v12;
    a3[3] = v11;
    *v8 = v5;
    v14 = (int *)(a3 + 4);
    v8[1] = v6;
    v8[2] = v7;
    v8[3] = v13;
    if ( a3 + 4 < v8 - 4 )
    {
      v15 = a3 + 8;
      v16 = (int *)(v8 - 8);
      do
      {
        v17 = v16[5];
        v9 = v16;
        v18 = v16[6];
        v19 = v16 - 4;
        v20 = v16[7];
        v21 = *(v15 - 3);
        v22 = __ROR4__(v17, 8);
        v23 = *(v15 - 2);
        v24 = __ROR4__(v18, 8);
        v25 = v9[4];
        v26 = *(v15 - 1);
        v27 = v22 ^ __ROR4__(v17 ^ v22, 16);
        v28 = v24 ^ __ROR4__(v18 ^ v24, 16);
        v29 = __ROR4__(v20, 8);
        v30 = __ROR4__(v21, 8);
        v31 = __ROR4__(v25, 8);
        v32 = *(v15 - 4);
        v33 = v30 ^ __ROR4__(v21 ^ v30, 16);
        v34 = v29 ^ __ROR4__(v20 ^ v29, 16);
        v35 = __ROR4__(v23, 8);
        v82 = (int *)v15;
        __pld(v19);
        v36 = v35 ^ __ROR4__(v23 ^ v35, 16);
        v37 = __ROR4__(v26, 8);
        __pld(v15 + 7);
        v38 = v27 ^ v28;
        v39 = v34 ^ v38;
        v40 = v37 ^ __ROR4__(v26 ^ v37, 16);
        v41 = v31 ^ __ROR4__(v25 ^ v31, 16) ^ v38;
        v42 = __ROR4__(v32, 8);
        v43 = v28 ^ v34 ^ v41;
        v44 = v38 ^ v43;
        v45 = v42 ^ __ROR4__(v32 ^ v42, 16);
        v46 = __ROR4__(v43, 16);
        v47 = v33 ^ v36;
        v48 = (v44 << 8) & 0xFF00FF00 ^ (v44 >> 8) & 0xFF00FF;
        v49 = v45 ^ v47;
        v50 = v36 ^ v40 ^ v49;
        v51 = HIBYTE(v39) | (v39 << 24) | ((v39 & 0xFF00) << 8) | ((v39 & 0xFF0000) >> 8);
        v52 = v48 ^ v46;
        v53 = __ROR4__(v50, 16);
        v54 = v41 ^ v52;
        v55 = v46 ^ v51 ^ v54;
        *(v15 - 4) = v54;
        v56 = v51 ^ v52;
        *(v15 - 3) = v52 ^ v55;
        v57 = ((v40 ^ (unsigned int)v47) >> 24)
            | ((v40 ^ v47) << 24)
            | (((v40 ^ v47) & 0xFF00) << 8)
            | (((v40 ^ v47) & 0xFF0000u) >> 8);
        v14 = v82;
        v58 = ((v47 ^ v50) << 8) & 0xFF00FF00 ^ ((v47 ^ (unsigned int)v50) >> 8) & 0xFF00FF ^ v53;
        v59 = v49 ^ v58;
        v60 = v53 ^ v57 ^ v59;
        v61 = v57 ^ v58;
        *(v15 - 2) = v55;
        v15 += 4;
        *(v15 - 5) = v56;
        v9[5] = v58 ^ v60;
        v16 = v19;
        v9[4] = v59;
        v9[6] = v60;
        v9[7] = v61;
      }
      while ( v9 > v82 );
    }
    v62 = v14[2];
    v63 = v14[1];
    v64 = v14[3];
    v65 = *v14;
    v66 = __ROR4__(v62, 8);
    v67 = __ROR4__(v63, 8);
    v68 = __ROR4__(v64, 8);
    v69 = v66 ^ __ROR4__(v62 ^ v66, 16);
    v70 = __ROR4__(v65, 8);
    v71 = v68 ^ __ROR4__(v64 ^ v68, 16);
    v72 = v67 ^ __ROR4__(v63 ^ v67, 16) ^ v69;
    v73 = __ROR4__(v65 ^ v70, 16);
    v74 = v71 ^ v72;
    v75 = v70 ^ v73 ^ v72;
    v76 = v71 ^ v69 ^ v75;
    v77 = __ROR4__(v76, 16);
    v78 = HIBYTE(v74) | (v74 << 24) | ((v74 & 0xFF00) << 8) | ((v74 & 0xFF0000) >> 8);
    v79 = ((v72 ^ (unsigned int)v76) >> 8) & 0xFF00FF ^ ((v72 ^ v76) << 8) & 0xFF00FF00 ^ v77;
    v80 = v75 ^ v79;
    v81 = v77 ^ v78 ^ v80;
    *v9 = v80;
    v9[2] = v81;
    v9[1] = v79 ^ v81;
    v9[3] = v78 ^ v79;
    return 0;
  }
  return result;
}
