int __fastcall sub_141D74(_DWORD *a1, int *a2, int *a3)
{
  int v3; // r5
  int v4; // r3
  int v5; // r12
  int v6; // r11
  int v7; // r10
  int v8; // r6
  int v9; // r7
  __int64 v10; // r0
  __int64 v11; // r0
  __int64 v12; // r4
  __int64 v13; // r2
  __int64 v14; // r0
  __int64 v15; // r2
  unsigned int v16; // r6
  __int64 v17; // r6
  __int64 v18; // r0
  __int64 v19; // r2
  __int64 v20; // r4
  __int64 v21; // r8
  __int64 v22; // r10
  __int64 v23; // r4
  __int64 v24; // r10
  int result; // r0
  int v26; // [sp+0h] [bp-144h]
  __int64 v27; // [sp+0h] [bp-144h]
  int v28; // [sp+8h] [bp-13Ch]
  __int64 v29; // [sp+8h] [bp-13Ch]
  __int64 v30; // [sp+8h] [bp-13Ch]
  int v31; // [sp+10h] [bp-134h]
  int v32; // [sp+10h] [bp-134h]
  int v33; // [sp+18h] [bp-12Ch]
  int v34; // [sp+20h] [bp-124h]
  int v35; // [sp+28h] [bp-11Ch]
  __int64 v36; // [sp+28h] [bp-11Ch]
  int v37; // [sp+30h] [bp-114h]
  __int64 v38; // [sp+30h] [bp-114h]
  int v39; // [sp+38h] [bp-10Ch]
  int v40; // [sp+40h] [bp-104h]
  __int64 v41; // [sp+40h] [bp-104h]
  int v42; // [sp+48h] [bp-FCh]
  int v43; // [sp+50h] [bp-F4h]
  int v44; // [sp+58h] [bp-ECh]
  __int64 v45; // [sp+58h] [bp-ECh]
  int v47; // [sp+64h] [bp-E0h]
  int v48; // [sp+68h] [bp-DCh]
  __int64 v49; // [sp+68h] [bp-DCh]
  int v50; // [sp+70h] [bp-D4h]
  __int64 v51; // [sp+78h] [bp-CCh]
  __int64 v52; // [sp+80h] [bp-C4h]
  unsigned __int64 v53; // [sp+80h] [bp-C4h]
  int v54; // [sp+88h] [bp-BCh]
  __int64 v55; // [sp+88h] [bp-BCh]
  int v56; // [sp+90h] [bp-B4h]
  int v57; // [sp+9Ch] [bp-A8h]
  __int64 v58; // [sp+A0h] [bp-A4h]
  __int64 v59; // [sp+A8h] [bp-9Ch]
  int v60; // [sp+D0h] [bp-74h]
  __int64 v61; // [sp+D8h] [bp-6Ch]
  int v62; // [sp+E0h] [bp-64h]
  __int64 v63; // [sp+E0h] [bp-64h]
  __int64 v64; // [sp+E0h] [bp-64h]
  int v65; // [sp+E8h] [bp-5Ch]
  int v66; // [sp+ECh] [bp-58h]
  int v67; // [sp+F0h] [bp-54h]
  __int64 v68; // [sp+F0h] [bp-54h]
  __int64 v69; // [sp+F0h] [bp-54h]
  __int64 v70; // [sp+100h] [bp-44h]
  __int64 v71; // [sp+100h] [bp-44h]
  __int64 v72; // [sp+108h] [bp-3Ch]
  __int64 v73; // [sp+110h] [bp-34h]
  __int64 v74; // [sp+110h] [bp-34h]
  __int64 v75; // [sp+110h] [bp-34h]
  __int64 v76; // [sp+118h] [bp-2Ch]
  __int64 v77; // [sp+118h] [bp-2Ch]
  __int64 v78; // [sp+120h] [bp-24h]
  __int64 v79; // [sp+120h] [bp-24h]
  __int64 v80; // [sp+128h] [bp-1Ch]
  __int64 v81; // [sp+130h] [bp-14h]
  __int64 v82; // [sp+138h] [bp-Ch]
  __int64 v83; // [sp+138h] [bp-Ch]

  v3 = a2[1];
  v48 = v3;
  v26 = *a2;
  v4 = a3[3];
  v35 = a3[5];
  v40 = a2[3];
  v28 = a2[2];
  v44 = a3[4];
  v43 = v4;
  v5 = a3[1];
  v6 = a2[4];
  v7 = a3[2];
  v66 = 19 * v4;
  v67 = a3[9];
  v57 = 19 * v35;
  v8 = a3[7];
  v62 = a3[8];
  v54 = 2 * a2[5];
  v39 = 19 * v67;
  v50 = a2[5];
  v31 = a2[6];
  v47 = 19 * a3[6];
  v42 = a2[7];
  v34 = 19 * v62;
  v9 = a3[6];
  v33 = a2[8];
  v56 = a2[9];
  v65 = 19 * v44;
  v37 = 19 * v8;
  v78 = 2 * v40 * (__int64)v4 + v28 * (__int64)v44 + v9 * (__int64)*a2 + v35 * (__int64)(2 * v3);
  v76 = v50 * (__int64)*a3
      + v6 * (__int64)v5
      + v40 * (__int64)v7
      + v28 * (__int64)v4
      + v35 * (__int64)*a2
      + v44 * (__int64)v3;
  v70 = 19 * v62 * (__int64)v28 + *a3 * (__int64)*a2 + 2 * v3 * (__int64)(19 * v67);
  v73 = 2 * v42 * (__int64)(19 * v8)
      + v31 * (__int64)(19 * v62)
      + v54 * (__int64)(19 * v67)
      + v6 * (__int64)*a3
      + 2 * v40 * (__int64)v5
      + v28 * (__int64)v7
      + v44 * (__int64)*a2
      + v4 * (__int64)(2 * v3);
  v72 = v5 * (__int64)*a2 + *a3 * (__int64)v3;
  v80 = v40 * (__int64)v44 + v28 * (__int64)v35 + v8 * (__int64)*a2 + v9 * (__int64)v3;
  v10 = v62 * (__int64)*a2 + v8 * (__int64)(2 * v3);
  v82 = v62 * (__int64)v3;
  v63 = v33 * (__int64)v47 + v73;
  v81 = v28 * (__int64)v9 + v10;
  v74 = v42 * (__int64)v34 + v31 * (__int64)(19 * v67) + v76;
  v83 = v67 * (__int64)v26 + v82;
  v11 = v5 * (__int64)(2 * v3);
  v77 = v31 * (__int64)*a3 + v54 * (__int64)v5 + v6 * (__int64)v7 + v78;
  v64 = 2 * v56 * (__int64)(19 * v35) + v63;
  v12 = v40 * (__int64)v34 + v28 * (__int64)(19 * v67) + v72;
  v60 = *a3;
  v68 = 19 * v35 * (__int64)v54 + v47 * (__int64)v6 + 19 * v8 * (__int64)(2 * v40) + v70;
  v71 = v28 * (__int64)*a3 + v7 * (__int64)v26 + v11;
  LODWORD(v11) = v48;
  v49 = v56 * (__int64)v47 + v33 * (__int64)(19 * v8) + v74;
  v79 = v40 * (__int64)v9 + v28 * (__int64)v8 + v83;
  v13 = v64 + 0x2000000;
  LODWORD(v13) = (v64 + 0x2000000) & 0xFC000000;
  v52 = v50 * (__int64)v47 + v6 * (__int64)(19 * v8) + v12;
  v51 = v64 - v13;
  v75 = v54 * (__int64)v43 + v6 * (__int64)v44 + 2 * v40 * (__int64)v35 + v81;
  v14 = v28 * (__int64)v5 + v43 * (__int64)v26 + v7 * (__int64)(int)v11;
  v15 = v49 + ((v64 + 0x2000000) >> 26) + 0x1000000;
  v16 = (unsigned int)v15 >> 25;
  LODWORD(v15) = v15 & 0xFE000000;
  v29 = v66 * (__int64)(2 * v42) + 19 * v44 * (__int64)v31 + v68;
  v58 = v49 + ((v64 + 0x2000000) >> 26) - v15;
  v69 = v6 * (__int64)v35 + v79;
  v36 = v31 * (__int64)(19 * v35) + v52;
  v53 = __PAIR64__(SHIDWORD(v15) >> 25, v16 | (HIDWORD(v15) << 7))
      + 2 * v56 * (__int64)v37
      + v33 * (__int64)v34
      + 2 * v42 * (__int64)v39
      + v77;
  v17 = v54 * (__int64)v37 + v6 * (__int64)v34 + 2 * v40 * (__int64)v39 + v71;
  v55 = v50 * (__int64)v44 + v69;
  v61 = v6 * (__int64)v39 + v40 * (__int64)v60 + v14;
  v18 = 19 * v5 * (__int64)(2 * v56) + 19 * v7 * (__int64)v33 + v29;
  v45 = ((__int64)(v53 + 0x2000000) >> 26)
      + v56 * (__int64)v34
      + v33 * (__int64)v39
      + v42 * (__int64)v60
      + v31 * (__int64)v5
      + v50 * (__int64)v7
      + v6 * (__int64)v43
      + v80;
  v59 = v31 * (__int64)v47 + v17;
  v19 = v18 + 0x2000000;
  LODWORD(v19) = (v18 + 0x2000000) & 0xFC000000;
  v20 = ((v18 + 0x2000000) >> 26) + v56 * (__int64)(19 * v7) + v33 * (__int64)v66 + v42 * (__int64)v65 + v36;
  v38 = v31 * (__int64)v37 + v50 * (__int64)v34 + v61;
  v27 = ((v45 + 0x1000000) >> 25)
      + 2 * v56 * (__int64)v39
      + v33 * (__int64)v60
      + 2 * v42 * (__int64)v5
      + v31 * (__int64)v7
      + v75;
  v21 = v33 * (__int64)v5 + v42 * (__int64)v7 + v31 * (__int64)v43 + v55;
  v32 = v20 - ((v20 + 0x1000000) & 0xFE000000);
  v22 = ((v20 + 0x1000000) >> 25) + 2 * v56 * (__int64)v66 + v33 * (__int64)v65 + 2 * v42 * (__int64)v57 + v59;
  v23 = ((v27 + 0x2000000) >> 26) + v56 * (__int64)v60 + v21 + 0x1000000;
  a1[2] = v22 - ((v22 + 0x2000000) & 0xFC000000);
  v30 = ((v22 + 0x2000000) >> 26) + v56 * (__int64)v65 + v33 * (__int64)v57 + v42 * (__int64)v47 + v38;
  v41 = (v30 + 0x1000000) >> 25;
  v24 = v18 - v19 + 19 * (v23 >> 25);
  *a1 = v24 - ((v24 + 0x2000000) & 0xFC000000);
  result = v51 + v41 - ((v51 + v41 + 0x2000000) & 0xFC000000);
  a1[1] = ((v24 + 0x2000000) >> 26) + v32;
  a1[9] = ((v27 + 0x2000000) >> 26) + v56 * v60 + v21 - (v23 & 0xFE000000);
  a1[8] = v27 - ((v27 + 0x2000000) & 0xFC000000);
  a1[3] = v30 - ((v30 + 0x1000000) & 0xFE000000);
  a1[7] = v45 - ((v45 + 0x1000000) & 0xFE000000);
  a1[4] = result;
  a1[5] = v58 + ((v51 + v41 + 0x2000000) >> 26);
  a1[6] = v53 - ((v53 + 0x2000000) & 0xFC000000);
  return result;
}
