int __fastcall sub_155530(unsigned int *a1)
{
  unsigned int v2; // r6
  unsigned int v3; // r3
  unsigned int v4; // r5
  unsigned int v5; // r0
  unsigned int v6; // r1
  int v7; // r7
  int v8; // kr00_4
  unsigned int v9; // r4
  unsigned int v10; // r6
  unsigned int v11; // r12
  unsigned int v12; // r9
  __int64 v13; // kr38_8
  unsigned int v14; // r8
  __int64 v15; // r2
  unsigned int v16; // r5
  unsigned int v17; // r1
  int v18; // r12
  int v19; // r9
  __int64 v20; // r2
  int v21; // r8
  __int64 v22; // r0
  int v23; // r6
  __int64 v24; // r6
  __int64 v25; // r4
  __int64 v26; // r0
  __int64 v27; // r2
  unsigned int v28; // r12
  __int64 v29; // r2
  __int64 v30; // r8
  __int64 v31; // r6
  __int64 v32; // r2
  __int64 v33; // r2
  __int64 v34; // r4
  __int64 v35; // r2
  __int64 v36; // r2
  __int64 v37; // r2
  int v38; // kr2C_4
  unsigned __int64 v39; // r0
  __int64 v40; // r0
  unsigned __int64 v41; // r4
  unsigned int v42; // r11
  unsigned int v43; // r12
  __int64 v44; // r0
  unsigned __int64 v45; // kr60_8
  unsigned __int64 v46; // r4
  unsigned __int64 v47; // r2
  unsigned int v48; // r11
  unsigned int v49; // kr58_4
  unsigned __int64 v50; // kr68_8
  unsigned __int64 v51; // r4
  unsigned int v53; // [sp+0h] [bp-74h]
  __int64 v54; // [sp+0h] [bp-74h]
  unsigned int v55; // [sp+8h] [bp-6Ch]
  int v56; // [sp+8h] [bp-6Ch]
  int v57; // [sp+8h] [bp-6Ch]
  __int64 v58; // [sp+10h] [bp-64h]
  __int64 v59; // [sp+18h] [bp-5Ch]
  __int64 v60; // [sp+18h] [bp-5Ch]
  unsigned int v61; // [sp+20h] [bp-54h]
  unsigned int v62; // [sp+20h] [bp-54h]
  __int64 v63; // [sp+20h] [bp-54h]
  unsigned int v64; // [sp+28h] [bp-4Ch]
  __int64 v65; // [sp+28h] [bp-4Ch]
  int v66; // [sp+34h] [bp-40h]
  int v67; // [sp+34h] [bp-40h]
  _BYTE v68[12]; // [sp+34h] [bp-40h]
  int v69; // [sp+38h] [bp-3Ch]
  int v70; // [sp+40h] [bp-34h]
  unsigned int v71; // [sp+40h] [bp-34h]
  __int64 v72; // [sp+40h] [bp-34h]
  int v73; // [sp+48h] [bp-2Ch]
  unsigned int v74; // [sp+48h] [bp-2Ch]
  unsigned __int64 v75; // [sp+50h] [bp-24h]
  unsigned int v76; // [sp+5Ch] [bp-18h]
  unsigned int v77; // [sp+60h] [bp-14h]
  unsigned int v78; // [sp+64h] [bp-10h]
  unsigned int v79; // [sp+68h] [bp-Ch]

  v2 = *a1;
  v3 = a1[15];
  v4 = a1[1];
  v5 = a1[2];
  v6 = v3 >> 28;
  v7 = (v4 & 0xFFFFFFF) + (v2 >> 28);
  v8 = (v2 & 0xFFFFFFF) + (v3 >> 28);
  v9 = a1[4];
  v10 = a1[5];
  v11 = a1[6];
  v66 = (v9 & 0xFFFFFFF) + (a1[3] >> 28);
  v12 = a1[7];
  v13 = (((unsigned int)v8 - 0xFFFFFFFLL) >> 28) + (unsigned int)v7 - 0xFFFFFFF;
  v73 = (v10 & 0xFFFFFFF) + (v9 >> 28);
  v14 = a1[9];
  v15 = (v13 >> 28) + (v5 & 0xFFFFFFF) + (v4 >> 28);
  v70 = (v11 & 0xFFFFFFF) + (v10 >> 28);
  v16 = a1[10];
  v17 = v6 + a1[8];
  v18 = (v12 & 0xFFFFFFF) + (v11 >> 28);
  v53 = a1[11];
  v76 = (v15 - 0xFFFFFFF) & 0xFFFFFFF;
  v19 = (v17 & 0xFFFFFFF) + (v12 >> 28);
  v20 = ((v15 - 0xFFFFFFF) >> 28) + (a1[3] & 0xFFFFFFF) + (v5 >> 28);
  v69 = (v14 & 0xFFFFFFF) + (v17 >> 28);
  v21 = (v16 & 0xFFFFFFF) + (v14 >> 28);
  v55 = a1[14];
  v77 = (v20 - 0xFFFFFFF) & 0xFFFFFFF;
  LODWORD(v22) = (v20 - 0xFFFFFFF) >> 28;
  HIDWORD(v22) = (int)((unsigned __int64)(v20 - 0xFFFFFFF) >> 32) >> 28;
  LODWORD(v20) = v22 + v66;
  v23 = (v22 + (unsigned __int64)(unsigned int)v66 - 0xFFFFFFF) >> 32;
  v67 = (v53 & 0xFFFFFFF) + (v16 >> 28);
  LODWORD(v22) = a1[13];
  LODWORD(v59) = ((unsigned int)(v20 - 0xFFFFFFF) >> 28) | (16 * v23);
  HIDWORD(v59) = v23 >> 28;
  v61 = (v22 & 0xFFFFFFF) + (a1[12] >> 28);
  v24 = v59 + (unsigned int)v73;
  LODWORD(v59) = (v55 & 0xFFFFFFF) + ((unsigned int)v22 >> 28);
  v78 = (v24 - 0xFFFFFFF) & 0xFFFFFFF;
  v74 = (v20 - 0xFFFFFFF) & 0xFFFFFFF;
  v25 = ((v24 - 0xFFFFFFF) >> 28) + (unsigned int)v70;
  v71 = (v25 - 0xFFFFFFF) & 0xFFFFFFF;
  v26 = ((v25 - 0xFFFFFFF) >> 28) + (unsigned int)v18 - 0xFFFFFFF;
  v79 = v26 & 0xFFFFFFF;
  v27 = (v26 >> 28) + (unsigned int)v19 - 268435454;
  v28 = v27 & 0xFFFFFFF;
  v29 = (v27 >> 28) + (unsigned int)v69;
  HIDWORD(v30) = (v29 - 0xFFFFFFF) & 0xFFFFFFF;
  v31 = ((v29 - 0xFFFFFFF) >> 28) + (unsigned int)v21;
  v32 = ((v31 - 0xFFFFFFF) >> 28) + (unsigned int)v67 - 0xFFFFFFF;
  LODWORD(v30) = v32 & 0xFFFFFFF;
  *(_QWORD *)v68 = v30;
  v33 = (v32 >> 28) + (a1[12] & 0xFFFFFFF) + (v53 >> 28);
  v64 = (v33 - 0xFFFFFFF) & 0xFFFFFFF;
  v34 = ((v33 - 0xFFFFFFF) >> 28) + v61;
  v62 = (v34 - 0xFFFFFFF) & 0xFFFFFFF;
  v35 = ((v34 - 0xFFFFFFF) >> 28) + (unsigned int)v59 - 0xFFFFFFF;
  LODWORD(v59) = v35 & 0xFFFFFFF;
  v36 = (v35 >> 28) + (a1[15] & 0xFFFFFFF) + (v55 >> 28);
  v56 = (v36 - 0xFFFFFFF) & 0xFFFFFFF;
  v37 = ((v36 - 0xFFFFFFF) >> 28) & 0xFFFFFFF;
  v38 = (v8 - 0xFFFFFFF) & 0xFFFFFFF;
  *a1 = (v37 + v38) & 0xFFFFFFF;
  v75 = ((unsigned int)v37 & 0xFFFFFFFE) + (unsigned __int64)v28;
  v39 = ((v37 + (unsigned __int64)(unsigned int)v38) >> 28) + v37 + (v13 & 0xFFFFFFF);
  a1[1] = v39 & 0xFFFFFFF;
  v40 = (v39 >> 28) + v37 + v76;
  v54 = v37 + v71;
  v72 = v37 + v79;
  LODWORD(v30) = v40 >> 28;
  a1[2] = v40 & 0xFFFFFFF;
  HIDWORD(v30) = HIDWORD(v40) >> 28;
  v41 = v30 + v37 + v77;
  *(_QWORD *)&v68[4] = v37 + *(unsigned int *)&v68[4];
  v43 = (v37 + (unsigned __int64)(((_DWORD)v31 - 0xFFFFFFF) & 0xFFFFFFF)) >> 32;
  v42 = v37 + ((v31 - 0xFFFFFFF) & 0xFFFFFFF);
  v44 = v37 + v74 + (v41 >> 28);
  v58 = v37 + *(unsigned int *)v68;
  a1[3] = v41 & 0xFFFFFFF;
  v65 = v37 + v64;
  a1[4] = v44 & 0xFFFFFFF;
  LODWORD(v41) = v37 + v78 + (v44 >> 28);
  HIDWORD(v41) = (v37 + v78 + ((unsigned __int64)v44 >> 28)) >> 32;
  v63 = v37 + v62;
  v60 = v37 + (unsigned int)v59;
  v57 = v37 + v56;
  a1[5] = v41 & 0xFFFFFFF;
  v45 = v54 + (v41 >> 28);
  a1[6] = v45 & 0xFFFFFFF;
  v46 = (v72 + (v45 >> 28)) >> 28;
  a1[7] = (v72 + (v45 >> 28)) & 0xFFFFFFF;
  v47 = (v75 + v46) >> 28;
  a1[8] = (v75 + v46) & 0xFFFFFFF;
  a1[9] = (*(_DWORD *)&v68[4] + v47) & 0xFFFFFFF;
  v49 = v42;
  v48 = v42 + ((__int64)(*(_QWORD *)&v68[4] + v47) >> 28);
  v50 = __PAIR64__(v43, v49) + ((*(_QWORD *)&v68[4] + v47) >> 28);
  a1[10] = v48 & 0xFFFFFFF;
  LODWORD(v44) = (v48 >> 28) | (16 * HIDWORD(v50));
  HIDWORD(v44) = HIDWORD(v50) >> 28;
  a1[11] = (v58 + v44) & 0xFFFFFFF;
  a1[12] = (((unsigned __int64)(v58 + v44) >> 28) + v65) & 0xFFFFFFF;
  v51 = (((unsigned __int64)(v58 + v44) >> 28) + v65) >> 28;
  HIDWORD(v51) = (v63 + v51) >> 32;
  a1[14] = (v60 + (((unsigned int)(v63 + v51) >> 28) | (16 * HIDWORD(v51)))) & 0xFFFFFFF;
  a1[13] = (v63 + v51) & 0xFFFFFFF;
  a1[15] = (v57 + ((__int64)(v60 + (__PAIR64__(HIDWORD(v51), (int)v63 + (int)v51) >> 28)) >> 28)) & 0xFFFFFFF;
  return v63 + v51;
}
