int __fastcall sub_35FA0(int a1, unsigned __int8 *a2, int a3)
{
  int v5; // r6
  unsigned int v6; // s16
  double v7; // d9
  unsigned int v8; // r3
  unsigned int v9; // r12
  unsigned int v10; // r7
  unsigned int v11; // r0
  unsigned int v12; // r1
  unsigned int v13; // r12
  unsigned int v14; // r0
  unsigned int v15; // r1
  double v16; // d9
  unsigned int v17; // r0
  unsigned int v18; // r12
  unsigned int v19; // r10
  double v20; // d8
  int v21; // r1
  int v22; // r11
  int v23; // r1
  int v24; // r2
  int v25; // r3
  int v26; // r9
  unsigned int v27; // r1
  unsigned __int8 v28; // r2
  int v29; // r3
  bool v30; // cc
  int v31; // r3
  int v32; // r3
  const char *v33; // r2
  int v34; // r12
  unsigned int v35; // r12
  unsigned int v36; // r1
  unsigned int v37; // r5
  unsigned __int64 v38; // r0
  double v39; // r0
  double v40; // d0
  int v41; // r2
  double v42; // d9
  int v43; // r12
  int v44; // r1
  unsigned int v45; // r12
  unsigned int v46; // r1
  __int64 v47; // r2
  unsigned int v48; // r5
  __int64 v49; // r0
  double v50; // r0
  double v51; // d0
  int v52; // r2
  double v53; // r0
  int v54; // r2
  double v55; // d8
  int result; // r0
  __int64 v57; // r0
  int v58; // r5
  __int64 v59; // r0
  double v60; // r0
  double v61; // d0
  int v62; // r2
  unsigned int v63; // r12
  unsigned int v64; // r1
  double v65; // d8
  unsigned int v66; // r5
  unsigned __int64 v67; // r0
  double v68; // r0
  double v69; // d0
  int v70; // r2
  double v71; // r0
  int v72; // r2
  double v73; // r0
  int v74; // r2
  int v75; // r3
  int v76; // r3
  unsigned int v77; // r1
  unsigned int v78; // r3
  unsigned int v79; // r2
  unsigned __int64 v80; // r6
  unsigned int v81; // r5
  bool v82; // cf
  __int64 v83; // r2
  double v84; // r0
  double v85; // d0
  int v86; // r2
  __int64 v87; // r2
  double v88; // d8
  int v89; // r5
  __int64 v90; // r0
  double v91; // r0
  double v92; // d0
  int v93; // r2
  unsigned int v94; // r1
  int v95; // r1
  unsigned int v96; // r12
  unsigned int v97; // r2
  unsigned int v98; // r5
  unsigned __int64 v99; // r0
  double v100; // r0
  int v101; // r2
  int v102; // r3
  double v103; // d8
  double v104; // d8
  unsigned int v105; // [sp+38h] [bp-12Ch]
  unsigned int v106; // [sp+44h] [bp-120h] BYREF
  unsigned int v107; // [sp+48h] [bp-11Ch]
  unsigned int v108; // [sp+4Ch] [bp-118h] BYREF
  unsigned int v109; // [sp+50h] [bp-114h]
  unsigned int v110; // [sp+54h] [bp-110h] BYREF
  unsigned int v111; // [sp+58h] [bp-10Ch]
  char v112[256]; // [sp+5Ch] [bp-108h] BYREF

  v5 = a2[1];
  v6 = bswap32(*((_DWORD *)a2 + 2));
  v7 = (double)bswap32(*((_DWORD *)a2 + 1));
  v8 = *a2;
  v9 = bswap32(*((_DWORD *)a2 + 6));
  if ( !a2[1] )
    v5 = 16;
  v10 = v8 >> 6;
  v11 = bswap32(*((_DWORD *)a2 + 7));
  v110 = v9;
  v12 = *((_DWORD *)a2 + 8);
  v13 = *((_DWORD *)a2 + 9);
  v111 = v11;
  v14 = *((_DWORD *)a2 + 10);
  v106 = bswap32(v12);
  v15 = *((_DWORD *)a2 + 11);
  v107 = bswap32(v13);
  v108 = bswap32(v14);
  v16 = v7 * 0.0000152587891;
  v17 = *((_DWORD *)a2 + 5);
  v18 = bswap32(*((_DWORD *)a2 + 4));
  v109 = bswap32(v15);
  v105 = v18;
  v19 = bswap32(v17);
  v20 = (double)v6 * 0.0000152587891;
  if ( v8 >> 6 == 3 || v5 < sys_floor || v5 >= sys_ceiling )
  {
    v21 = *(_DWORD *)(a1 + 300) | 0x20;
    *(_DWORD *)(a1 + 300) = v21;
  }
  else
  {
    v21 = *(_DWORD *)(a1 + 300);
  }
  if ( v20 + v16 * 0.5 >= 16.0 )
  {
    v21 |= 0x40u;
    *(_DWORD *)(a1 + 300) = v21;
  }
  if ( (v21 & 0x1FF) != 0 )
  {
    v77 = *(unsigned __int8 *)(a1 + 64);
    ++*(_DWORD *)(a1 + 768);
    return sub_348C4(a1, v77);
  }
  v22 = v8 & 7;
  v23 = *(_DWORD *)(a1 + 56);
  v24 = a3 - 48;
  v25 = (v8 >> 3) & 7;
  if ( v23 )
    v23 += 24;
  v26 = sys_processed;
  ++*(_DWORD *)(a1 + 748);
  sys_processed = v26 + 1;
  sub_42EBC(
    a1 + 16,
    v23,
    &v110,
    &v106,
    &v108,
    a1 + 576,
    v10,
    v25,
    v22,
    v5,
    a2[2],
    (char)a2[3],
    *((_DWORD *)a2 + 3),
    v24,
    a2 + 48);
  *(_BYTE *)(a1 + 92) = v22;
  *(_BYTE *)(a1 + 91) = v10;
  if ( (unsigned int)v5 >= 0x10 )
    LOBYTE(v5) = 16;
  *(_BYTE *)(a1 + 93) = v5;
  v28 = a2[3];
  v29 = *(_DWORD *)(a1 + 312);
  *(double *)(a1 + 96) = v16;
  *(_BYTE *)(a1 + 95) = v28;
  v30 = v29 <= 0;
  v31 = *((_DWORD *)a2 + 3);
  if ( v30 )
    v27 = *(unsigned __int8 *)(a1 + 64);
  *(double *)(a1 + 104) = v20;
  *(_DWORD *)(a1 + 116) = v105;
  *(_DWORD *)(a1 + 112) = v31;
  *(_DWORD *)(a1 + 120) = v19;
  if ( !v30 )
  {
    v32 = *(unsigned __int8 *)(a1 + 298);
    v27 = *(unsigned __int8 *)(a1 + 64);
    *(_DWORD *)(a1 + 312) = 0;
    if ( !v32 )
    {
      *(_DWORD *)(a1 + 308) = 5;
LABEL_18:
      *(_DWORD *)(a1 + 720) = current_time;
      goto LABEL_19;
    }
    v75 = 1 << (v27 - *(_BYTE *)(a1 + 65));
    if ( v75 >= 8 )
      v75 = 8;
    v76 = v75 - 1;
    *(_DWORD *)(a1 + 308) = v76;
    if ( v76 > 0 )
      goto LABEL_18;
  }
LABEL_19:
  sub_348C4(a1, v27);
  v33 = (const char *)*(unsigned __int8 *)(a1 + 298);
  if ( !*(_BYTE *)(a1 + 298) )
  {
    sub_26294(132, a1, v33);
    LOBYTE(v33) = *(_BYTE *)(a1 + 298);
    *(_DWORD *)(a1 + 736) = current_time;
  }
  v34 = *(_DWORD *)(a1 + 316);
  *(_BYTE *)(a1 + 298) = (unsigned __int8)v33 | 1;
  if ( !v34 )
  {
    if ( *(_BYTE *)(a1 + 92) != 5 )
    {
      LODWORD(v57) = v109 - *(_DWORD *)(a1 + 580);
      HIDWORD(v57) = v108 - *(_DWORD *)(a1 + 576);
      if ( (unsigned int)v57 > v109 )
        --HIDWORD(v57);
      v58 = HIDWORD(v57) >> 31;
      v59 = (-(__int64)(HIDWORD(v57) >> 31) ^ v57) + (HIDWORD(v57) >> 31);
      v60 = COERCE_DOUBLE(sub_8D40C(v59, HIDWORD(v59)));
      v61 = v60;
      LODWORD(v60) = -32;
      ldexp(v60, v62);
      v63 = v107 - v111;
      v64 = v106 - v110;
      v65 = v61;
      if ( v58 )
        v65 = -v61;
      if ( v63 > v107 )
        --v64;
      v66 = v64 >> 31;
      v67 = (-(__int64)(v64 >> 31) ^ (__PAIR64__(v64, 0) + v63)) + (v64 >> 31);
      v68 = COERCE_DOUBLE(sub_8D40C(v67, HIDWORD(v67)));
      v69 = v68;
      LODWORD(v68) = -32;
      v53 = ldexp(v68, v70);
      if ( v66 )
        v69 = -v69;
      v55 = fabs(v69 - v65);
      goto LABEL_51;
    }
    if ( (*(_DWORD *)(a1 + 68) & 0x2000) != 0 )
    {
      v78 = v111 - *(_DWORD *)(a1 + 588);
      v79 = v110 - *(_DWORD *)(a1 + 584);
      if ( v111 < v78 )
        --v79;
      v80 = __PAIR64__(v79, 0) + v78;
      v81 = v79 >> 31;
      v82 = v79 >> 31 == 0;
      LODWORD(v83) = -(v79 >> 31) ^ v78;
      HIDWORD(v83) = -!v82 ^ HIDWORD(v80);
      v84 = COERCE_DOUBLE(sub_8D40C(v81 + (unsigned int)v83, ((unsigned __int64)v81 + v83) >> 32));
      v85 = v84;
      LODWORD(v84) = -32;
      ldexp(v84, v86);
      LODWORD(v87) = v111 - *(_DWORD *)(a1 + 596);
      HIDWORD(v87) = v110 - *(_DWORD *)(a1 + 592);
      v88 = v85;
      if ( v81 )
        v88 = -v85;
      if ( v111 < (unsigned int)v87 )
        --HIDWORD(v87);
      v89 = HIDWORD(v87) >> 31;
      v90 = (HIDWORD(v87) >> 31) + (-(__int64)(HIDWORD(v87) >> 31) ^ v87);
      v91 = COERCE_DOUBLE(sub_8D40C(v90, HIDWORD(v90)));
      v92 = v91;
      LODWORD(v91) = -32;
      ldexp(v91, v93);
      v94 = v109;
      *(_DWORD *)(a1 + 584) = v108;
      *(_DWORD *)(a1 + 588) = v94;
      v95 = *(_DWORD *)(a1 + 580);
      *(_DWORD *)(a1 + 592) = *(_DWORD *)(a1 + 576);
      *(_DWORD *)(a1 + 596) = v95;
      if ( v89 )
        v92 = -v92;
      if ( v88 < 0.0 || v88 > 1.0 )
      {
        if ( (*(_DWORD *)(a1 + 68) & 0x10) == 0 )
        {
          sub_6D00C(v112, 256, "offset %.6f delay %.6f", v92, v88);
          return sub_26294(143, a1, v112);
        }
        return sub_324CC(a1);
      }
      *(double *)(a1 + 640) = v88;
    }
    else
    {
      v96 = v109 - *(_DWORD *)(a1 + 580);
      v97 = v108 - *(_DWORD *)(a1 + 576);
      if ( v96 > v109 )
        --v97;
      v98 = v97 >> 31;
      v99 = (v97 >> 31) + (-(__int64)(v97 >> 31) ^ (__PAIR64__(v97, *(_DWORD *)(a1 + 68) & 0x2000) + v96));
      v100 = COERCE_DOUBLE(sub_8D40C(v99, HIDWORD(v99)));
      v92 = v100;
      LODWORD(v100) = -32;
      ldexp(v100, v101);
      if ( v98 )
        v92 = -v92;
    }
    v102 = *(_DWORD *)(a1 + 68);
    if ( (v102 & 0x10) != 0 )
    {
      v103 = *(double *)(a1 + 608);
      *(_DWORD *)(a1 + 68) = v102 & 0xFFFFFFEF;
      v104 = fabs(v103 - v92);
      v55 = v104 + v104;
      *(double *)(a1 + 616) = v55;
      if ( v55 > fabs(sys_bdelay) )
        return sub_324CC(a1);
    }
    else
    {
      v55 = *(double *)(a1 + 616);
    }
    HIDWORD(v53) = 1;
    v54 = current_time - 2;
    *(_DWORD *)(a1 + 720) = current_time - 2 + (1 << *(_BYTE *)(a1 + 94));
    goto LABEL_51;
  }
  v35 = v109 - *(_DWORD *)(a1 + 580);
  v36 = v108 - *(_DWORD *)(a1 + 576);
  if ( v35 > v109 )
    --v36;
  v37 = v36 >> 31;
  v38 = (-(__int64)(v36 >> 31) ^ (__PAIR64__(v36, 0) + v35)) + (v36 >> 31);
  v39 = COERCE_DOUBLE(sub_8D40C(v38, HIDWORD(v38)));
  v40 = v39;
  LODWORD(v39) = -32;
  ldexp(v39, v41);
  v42 = v40;
  if ( v37 )
    v42 = -v40;
  if ( *(int *)(a1 + 316) <= 0 )
  {
    v43 = *(_DWORD *)(a1 + 588);
    v44 = *(_DWORD *)(a1 + 584);
  }
  else
  {
    v43 = *(_DWORD *)(a1 + 596);
    v44 = *(_DWORD *)(a1 + 592);
  }
  v45 = v107 - v43;
  v46 = v106 - v44;
  LODWORD(v47) = 0;
  if ( v45 > v107 )
    --v46;
  v48 = v46 >> 31;
  HIDWORD(v47) = v46;
  v49 = (-(__int64)(v46 >> 31) ^ (v47 + v45)) + (v46 >> 31);
  v50 = COERCE_DOUBLE(sub_8D40C(v49, HIDWORD(v49)));
  v51 = v50;
  LODWORD(v50) = -32;
  v53 = ldexp(v50, v52);
  if ( v48 )
    v51 = -v51;
  v55 = v51 - v42;
  if ( v51 - v42 < 0.0 || v55 > 1.0 )
  {
    sub_6D00C(v112, 256, "t21 %.6f t34 %.6f", v51, v42);
    return sub_26294(143, a1, v112);
  }
LABEL_51:
  LODWORD(v53) = sys_precision;
  v71 = ldexp(v53, v54);
  if ( v55 <= 1.0 )
  {
    LODWORD(v71) = sys_precision;
    v71 = ldexp(v71, v72);
  }
  LODWORD(v71) = sys_precision;
  v73 = ldexp(v71, v72);
  LODWORD(v73) = *(char *)(a1 + 95);
  ldexp(v73, v74);
  result = sub_35AF4(a1);
  if ( (*(_DWORD *)(a1 + 68) & 0x10) != 0 && *(_BYTE *)(a1 + 63) == 3 )
  {
    result = sub_33534(a1);
    if ( (result & 0x400) == 0 && ((*(_DWORD *)(a1 + 68) & 0x800) == 0 || (~*(_DWORD *)(a1 + 136) & 0x7F00) == 0) )
      *(_BYTE *)(a1 + 63) = 6;
  }
  return result;
}
