void *__fastcall sub_15F0E0(int a1, int a2, __int64 a3)
{
  int *v4; // r6
  int *v5; // r4
  int *v6; // lr
  int v7; // r0
  int v8; // r1
  int *v9; // r5
  int v10; // r2
  int v11; // r3
  int v12; // r11
  int v13; // r0
  int v14; // r1
  int v15; // r0
  int v16; // r2
  int v17; // r5
  int v18; // r2
  int v19; // r0
  int v20; // r12
  int v21; // r9
  int v22; // lr
  int v23; // r2
  int v24; // r10
  int v25; // r4
  int v26; // r3
  int v27; // r8
  int v28; // r11
  int v29; // r3
  int v30; // r10
  int v31; // r2
  int v32; // r12
  int v33; // r6
  int v34; // r7
  int v35; // lr
  int v36; // r1
  int v37; // r0
  int v38; // r6
  int v39; // r7
  int *v40; // r6
  int v41; // r4
  int v42; // r1
  int v43; // r2
  int v44; // r3
  int v45; // r3
  bool v46; // zf
  int v48; // [sp+0h] [bp-124h]
  int v49; // [sp+4h] [bp-120h]
  int v50; // [sp+8h] [bp-11Ch]
  int v51; // [sp+Ch] [bp-118h]
  int v52; // [sp+Ch] [bp-118h]
  int v53; // [sp+10h] [bp-114h]
  int v54; // [sp+14h] [bp-110h]
  int v55; // [sp+18h] [bp-10Ch]
  int v56; // [sp+1Ch] [bp-108h]
  int v57; // [sp+20h] [bp-104h]
  int v58; // [sp+24h] [bp-100h]
  int v59; // [sp+28h] [bp-FCh]
  int v60; // [sp+2Ch] [bp-F8h]
  int v61; // [sp+30h] [bp-F4h]
  int v62; // [sp+34h] [bp-F0h]
  int v63; // [sp+3Ch] [bp-E8h]
  int v64; // [sp+40h] [bp-E4h]
  int v65; // [sp+44h] [bp-E0h]
  int v66; // [sp+48h] [bp-DCh]
  int v67; // [sp+4Ch] [bp-D8h]
  int v68; // [sp+50h] [bp-D4h]
  int v69; // [sp+54h] [bp-D0h]
  int v70; // [sp+58h] [bp-CCh]
  int v71; // [sp+5Ch] [bp-C8h]
  int v72; // [sp+60h] [bp-C4h]
  int v73; // [sp+64h] [bp-C0h]
  int v74; // [sp+68h] [bp-BCh]
  int v75; // [sp+70h] [bp-B4h]
  int v76; // [sp+74h] [bp-B0h]
  int v77; // [sp+78h] [bp-ACh]
  __int64 v78; // [sp+80h] [bp-A4h]
  int v79; // [sp+88h] [bp-9Ch]
  int v81; // [sp+90h] [bp-94h]
  __int64 v82; // [sp+98h] [bp-8Ch]
  int v83; // [sp+A0h] [bp-84h] BYREF
  int v84; // [sp+A4h] [bp-80h]
  int v85; // [sp+A8h] [bp-7Ch]
  int v86; // [sp+ACh] [bp-78h]
  int v87; // [sp+B0h] [bp-74h]
  int v88; // [sp+B4h] [bp-70h]
  int v89; // [sp+B8h] [bp-6Ch]
  int v90; // [sp+BCh] [bp-68h]
  int v91; // [sp+C0h] [bp-64h]
  int v92; // [sp+C4h] [bp-60h]
  int v93; // [sp+C8h] [bp-5Ch]
  int v94; // [sp+CCh] [bp-58h]
  int v95; // [sp+D0h] [bp-54h]
  int v96; // [sp+D4h] [bp-50h]
  int v97; // [sp+D8h] [bp-4Ch]
  int v98; // [sp+DCh] [bp-48h]
  int v99; // [sp+E0h] [bp-44h] BYREF
  int v100; // [sp+E4h] [bp-40h]
  int v101; // [sp+E8h] [bp-3Ch]
  int v102; // [sp+ECh] [bp-38h]
  int v103; // [sp+F0h] [bp-34h]
  int v104; // [sp+F4h] [bp-30h]
  int v105; // [sp+F8h] [bp-2Ch]
  int v106; // [sp+FCh] [bp-28h]
  int v107; // [sp+100h] [bp-24h]
  int v108; // [sp+104h] [bp-20h]
  int v109; // [sp+108h] [bp-1Ch]
  int v110; // [sp+10Ch] [bp-18h]
  int v111; // [sp+110h] [bp-14h]
  int v112; // [sp+114h] [bp-10h]
  int v113; // [sp+118h] [bp-Ch]
  int v114; // [sp+11Ch] [bp-8h]

  v4 = &v83;
  v81 = a3;
  v82 = 2 * a3;
  v5 = (int *)(a2 + ((2 * (_DWORD)a3 - 1) << 6));
  v6 = v5 + 16;
  do
  {
    v7 = *v5;
    v5 += 4;
    v8 = *(v5 - 3);
    v9 = v4;
    v10 = *(v5 - 2);
    v4 += 4;
    v11 = *(v5 - 1);
    *v9 = v7;
    v9[1] = v8;
    v9[2] = v10;
    v9[3] = v11;
  }
  while ( v5 != v6 );
  if ( v82 )
  {
    v12 = a2 + 64;
    v78 = 0;
    do
    {
      v62 = 4;
      v63 = v83 ^ *(_DWORD *)(v12 - 64);
      v64 = *(_DWORD *)(v12 - 60) ^ v84;
      v75 = *(_DWORD *)(v12 - 56) ^ v85;
      v65 = *(_DWORD *)(v12 - 52) ^ v86;
      v66 = *(_DWORD *)(v12 - 48) ^ v87;
      v67 = *(_DWORD *)(v12 - 44) ^ v88;
      v13 = *(_DWORD *)(v12 - 28);
      v68 = *(_DWORD *)(v12 - 40) ^ v89;
      v69 = *(_DWORD *)(v12 - 36) ^ v90;
      v14 = *(_DWORD *)(v12 - 24);
      v70 = *(_DWORD *)(v12 - 32) ^ v91;
      v83 = v63;
      v71 = v13 ^ v92;
      v86 = v65;
      v84 = v64;
      v89 = v68;
      v90 = v69;
      v15 = *(_DWORD *)(v12 - 20);
      v87 = v66;
      v88 = v67;
      v16 = *(_DWORD *)(v12 - 16);
      v92 = v71;
      v85 = v75;
      v91 = v70;
      v17 = *(_DWORD *)(v12 - 12);
      v76 = v94 ^ v15;
      v72 = v14 ^ v93;
      v93 ^= v14;
      v73 = v95 ^ v16;
      v18 = *(_DWORD *)(v12 - 4);
      v19 = *(_DWORD *)(v12 - 8) ^ v97;
      v74 = v96 ^ v17;
      v94 = v76;
      v95 = v73;
      v96 ^= v17;
      v97 = v19;
      v98 ^= v18;
      v77 = v19;
      v99 = v63;
      v100 = v64;
      v101 = v75;
      v102 = v65;
      v103 = v66;
      v104 = v67;
      v105 = v68;
      v106 = v69;
      v107 = v70;
      v108 = v71;
      v109 = v93;
      v110 = v76;
      v111 = v73;
      v112 = v96;
      v113 = v19;
      v114 = v98;
      v51 = v63;
      v20 = v66;
      v21 = v70;
      v48 = v73;
      v22 = v71;
      v23 = v19;
      v53 = v67;
      v24 = v75;
      v25 = v65;
      v56 = v64;
      v61 = v96;
      v54 = v93;
      v57 = v68;
      v26 = v69;
      v27 = v98;
      v49 = v76;
      v79 = v12;
      do
      {
        v58 = v20 ^ __ROR4__(v51 + v48, 25);
        v60 = v23 ^ __ROR4__(v54 + v57, 25);
        v50 = v25 ^ __ROR4__(v27 + v49, 25);
        v59 = v22 ^ __ROR4__(v53 + v56, 25);
        v28 = v21 ^ __ROR4__(v58 + v51, 23);
        v29 = v26 ^ __ROR4__(v50 + v27, 23);
        v30 = v24 ^ __ROR4__(v60 + v54, 23);
        v31 = v61 ^ __ROR4__(v59 + v53, 23);
        v32 = v48 ^ __ROR4__(v58 + v28, 19);
        v33 = v49 ^ __ROR4__(v50 + v29, 19);
        v34 = v57 ^ __ROR4__(v60 + v30, 19);
        v35 = v56 ^ __ROR4__(v59 + v31, 19);
        v55 = v27 ^ __ROR4__(v29 + v33, 14);
        v52 = v51 ^ __ROR4__(v28 + v32, 14);
        v36 = v54 ^ __ROR4__(v30 + v34, 14);
        v37 = v53 ^ __ROR4__(v31 + v35, 14);
        v48 = v32 ^ __ROR4__(v60 + v55, 25);
        v49 = v33 ^ __ROR4__(v59 + v36, 25);
        v38 = v35 ^ __ROR4__(v52 + v50, 25);
        v24 = v30 ^ __ROR4__(v52 + v38, 23);
        v57 = v34 ^ __ROR4__(v58 + v37, 25);
        v56 = v38;
        v26 = v29 ^ __ROR4__(v37 + v57, 23);
        v21 = v28 ^ __ROR4__(v36 + v49, 23);
        v25 = v50 ^ __ROR4__(v38 + v24, 19);
        v61 = v31 ^ __ROR4__(v55 + v48, 23);
        v20 = v58 ^ __ROR4__(v57 + v26, 19);
        v22 = v59 ^ __ROR4__(v49 + v21, 19);
        v53 = v37 ^ __ROR4__(v26 + v20, 14);
        v23 = v60 ^ __ROR4__(v48 + v61, 19);
        v39 = v52 ^ __ROR4__(v24 + v25, 14);
        v51 = v39;
        v27 = v55 ^ __ROR4__(v61 + v23, 14);
        v54 = v36 ^ __ROR4__(v21 + v22, 14);
        --v62;
      }
      while ( v62 );
      v84 = v64 + v38;
      v85 = v75 + v24;
      v87 = v66 + v20;
      v88 = v67 + v53;
      v89 = v68 + v57;
      v90 = v69 + v26;
      v91 = v70 + v21;
      v92 = v71 + v22;
      v93 = v72 + v54;
      v94 = v76 + v49;
      v95 = v73 + v48;
      v106 = v26;
      v102 = v25;
      v104 = v53;
      v96 = v74 + v61;
      v113 = v23;
      v97 = v77 + v23;
      v109 = v54;
      v83 = v63 + v39;
      v98 += v27;
      v86 = v65 + v25;
      v100 = v38;
      v99 = v39;
      v105 = v57;
      v103 = v20;
      v110 = v49;
      v108 = v22;
      v111 = v48;
      v101 = v24;
      v107 = v21;
      v112 = v61;
      v114 = v27;
      sub_E07F8(&v99, 0x40u);
      v40 = &v83;
      v41 = a1 + (((v78 & 1) * v81 + (unsigned int)(v78 >> 1)) << 6);
      do
      {
        v42 = v40[1];
        v43 = v40[2];
        v44 = v40[3];
        v41 += 16;
        *(_DWORD *)(v41 - 16) = *v40;
        v40 += 4;
        *(_DWORD *)(v41 - 12) = v42;
        *(_DWORD *)(v41 - 8) = v43;
        *(_DWORD *)(v41 - 4) = v44;
      }
      while ( v40 != &v99 );
      v12 = v79 + 64;
      v45 = v78 + 1;
      v46 = HIDWORD(v82) == (unsigned __int64)++v78 >> 32;
      if ( v46 )
        v46 = (_DWORD)v82 == v45;
    }
    while ( !v46 );
  }
  return sub_E07F8(&v83, 0x40u);
}
