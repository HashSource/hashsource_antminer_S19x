int __fastcall sub_359B0(int a1, unsigned __int8 *a2, int a3)
{
  unsigned int v5; // r12
  int v6; // r9
  int v7; // lr
  int v8; // r10
  int v9; // r6
  unsigned int v10; // r8
  double v11; // d9
  int v12; // r0
  double v13; // d8
  unsigned int v14; // r3
  unsigned int v15; // r1
  unsigned int v16; // r9
  unsigned int v17; // lr
  double v18; // d9
  double v19; // d8
  int v20; // r3
  int v21; // r2
  int v22; // r1
  int v23; // r11
  int v24; // r9
  unsigned int v25; // r1
  unsigned __int8 v26; // r3
  int v27; // r2
  int v28; // r3
  int v29; // r3
  int v30; // r3
  int v31; // r3
  const char *v32; // r2
  int v33; // r12
  unsigned int v34; // r12
  __int64 v35; // r2
  double v36; // r0
  double v37; // d0
  int v38; // r2
  double v39; // d9
  int v40; // r1
  int v41; // r0
  unsigned int v42; // r1
  __int64 v43; // r2
  double v44; // r0
  double v45; // d0
  int v46; // r2
  double v47; // r0
  int v48; // r2
  double v49; // d8
  int result; // r0
  unsigned int v51; // lr
  __int64 v52; // r2
  double v53; // r0
  double v54; // d0
  int v55; // r2
  double v56; // d8
  __int64 v57; // r2
  double v58; // r0
  double v59; // d0
  int v60; // r2
  double v61; // r0
  int v62; // r2
  double v63; // r0
  int v64; // r2
  double v65; // r0
  int v66; // r2
  unsigned int v67; // r1
  double v68; // r0
  double v69; // d0
  int v70; // r2
  double v71; // r0
  double v72; // d0
  int v73; // r2
  double v74; // r0
  double v75; // d0
  int v76; // r2
  __int64 v77; // r2
  unsigned int v78; // lr
  __int64 v79; // r2
  double v80; // r0
  double v81; // d0
  int v82; // r2
  double v83; // d8
  unsigned int v84; // r12
  __int64 v85; // r2
  double v86; // r0
  double v87; // d0
  int v88; // r2
  int v89; // r1
  int v90; // r1
  double v91; // r0
  double v92; // d0
  int v93; // r2
  unsigned int v94; // lr
  int v95; // r5
  __int64 v96; // r0
  double v97; // r0
  int v98; // r2
  int v99; // r3
  double v100; // d8
  double v101; // d8
  double v102; // r0
  double v103; // d0
  int v104; // r2
  double v105; // r0
  double v106; // d0
  int v107; // r2
  double v108; // r0
  double v109; // d0
  int v110; // r2
  int v111; // [sp+0h] [bp-164h]
  int v112; // [sp+4h] [bp-160h]
  int v113; // [sp+8h] [bp-15Ch]
  int v114; // [sp+Ch] [bp-158h]
  int v115; // [sp+10h] [bp-154h]
  int v116; // [sp+14h] [bp-150h]
  int v117; // [sp+18h] [bp-14Ch]
  int v118; // [sp+1Ch] [bp-148h]
  int v119; // [sp+20h] [bp-144h]
  int v120; // [sp+24h] [bp-140h]
  int v121; // [sp+28h] [bp-13Ch]
  int v122; // [sp+2Ch] [bp-138h]
  int v123; // [sp+30h] [bp-134h]
  unsigned int v124; // [sp+38h] [bp-12Ch]
  unsigned int v125; // [sp+3Ch] [bp-128h]
  int v126; // [sp+40h] [bp-124h]
  int v127; // [sp+44h] [bp-120h] BYREF
  int v128; // [sp+48h] [bp-11Ch]
  int v129; // [sp+4Ch] [bp-118h] BYREF
  char v130[4]; // [sp+50h] [bp-114h]
  int v131; // [sp+54h] [bp-110h] BYREF
  int v132; // [sp+58h] [bp-10Ch]
  int v133[13]; // [sp+5Ch] [bp-108h] BYREF
  double v134; // [sp+90h] [bp-D4h]
  int v135; // [sp+98h] [bp-CCh]
  int v136; // [sp+9Ch] [bp-C8h]
  int v137; // [sp+A0h] [bp-C4h]
  int v138; // [sp+A4h] [bp-C0h]
  int v139; // [sp+A8h] [bp-BCh]
  int v140; // [sp+ACh] [bp-B8h]
  int v141; // [sp+B0h] [bp-B4h]
  int v142; // [sp+B4h] [bp-B0h]
  int v143; // [sp+B8h] [bp-ACh]
  int v144; // [sp+BCh] [bp-A8h]
  int v145; // [sp+C0h] [bp-A4h]
  int v146; // [sp+C4h] [bp-A0h]
  int v147; // [sp+C8h] [bp-9Ch]
  double v148; // [sp+D0h] [bp-94h]

  v5 = *a2;
  v6 = bswap32(*((_DWORD *)a2 + 7));
  v7 = bswap32(*((_DWORD *)a2 + 8));
  v8 = bswap32(*((_DWORD *)a2 + 6));
  v9 = a2[1];
  v10 = v5 >> 6;
  v11 = (double)bswap32(*((_DWORD *)a2 + 1));
  v12 = bswap32(*((_DWORD *)a2 + 9));
  v13 = (double)bswap32(*((_DWORD *)a2 + 2));
  v14 = bswap32(*((_DWORD *)a2 + 11));
  v15 = *((_DWORD *)a2 + 10);
  if ( !a2[1] )
    v9 = 16;
  v132 = v6;
  v16 = *((_DWORD *)a2 + 4);
  v127 = v7;
  v17 = *((_DWORD *)a2 + 5);
  v131 = v8;
  v128 = v12;
  *(_DWORD *)v130 = v14;
  v125 = bswap32(v17);
  v18 = v11 * 0.0000152587891;
  v19 = v13 * 0.0000152587891;
  v124 = bswap32(v16);
  v129 = bswap32(v15);
  v20 = *(_DWORD *)(a1 + 300);
  if ( v10 == 3 || v9 < sys_floor || v9 >= sys_ceiling )
  {
    v20 |= 0x20u;
    *(_DWORD *)(a1 + 300) = v20;
  }
  if ( v19 + v18 * 0.5 >= 16.0 )
  {
    v20 |= 0x40u;
    *(_DWORD *)(a1 + 300) = v20;
  }
  if ( (v20 & 0x1FF) != 0 )
  {
    v67 = *(unsigned __int8 *)(a1 + 64);
    ++*(_DWORD *)(a1 + 768);
    return sub_34264(a1, v67);
  }
  v21 = a3 - 48;
  v22 = *(_DWORD *)(a1 + 56);
  v23 = *((_DWORD *)a2 + 3);
  if ( v22 )
    v22 += 24;
  v24 = sys_processed;
  ++*(_DWORD *)(a1 + 748);
  sys_processed = v24 + 1;
  LOBYTE(v24) = v5 & 7;
  sub_420F0(
    a1 + 16,
    v22,
    &v131,
    &v127,
    &v129,
    a1 + 576,
    v5 >> 6,
    (v5 >> 3) & 7,
    v5 & 7,
    v9,
    a2[2],
    (char)a2[3],
    v23,
    v21,
    a2 + 48);
  *(_BYTE *)(a1 + 92) = v24;
  if ( (unsigned int)v9 >= 0x10 )
    LOBYTE(v9) = 16;
  *(_BYTE *)(a1 + 91) = v10;
  *(_BYTE *)(a1 + 93) = v9;
  v26 = a2[3];
  v27 = *(_DWORD *)(a1 + 312);
  *(double *)(a1 + 96) = v18;
  *(_BYTE *)(a1 + 95) = v26;
  v28 = *((_DWORD *)a2 + 3);
  *(double *)(a1 + 104) = v19;
  *(_DWORD *)(a1 + 112) = v28;
  *(_DWORD *)(a1 + 116) = v124;
  if ( v27 <= 0 )
    v25 = *(unsigned __int8 *)(a1 + 64);
  *(_DWORD *)(a1 + 120) = v125;
  if ( v27 > 0 )
  {
    v29 = *(unsigned __int8 *)(a1 + 298);
    *(_DWORD *)(a1 + 312) = 0;
    v25 = *(unsigned __int8 *)(a1 + 64);
    if ( v29 )
    {
      v30 = 1 << (v25 - *(_BYTE *)(a1 + 65));
      if ( v30 >= 8 )
        v30 = 8;
      v31 = v30 - 1;
      *(_DWORD *)(a1 + 308) = v31;
      if ( v31 <= 0 )
        goto LABEL_20;
    }
    else
    {
      *(_DWORD *)(a1 + 308) = 5;
    }
    *(_DWORD *)(a1 + 720) = current_time;
  }
LABEL_20:
  sub_34264(a1, v25);
  v32 = (const char *)*(unsigned __int8 *)(a1 + 298);
  if ( !*(_BYTE *)(a1 + 298) )
  {
    sub_25EE0((__int16 *)&dword_84, a1, v32);
    LOBYTE(v32) = *(_BYTE *)(a1 + 298);
    *(_DWORD *)(a1 + 736) = current_time;
  }
  v33 = *(_DWORD *)(a1 + 316);
  *(_BYTE *)(a1 + 298) = (unsigned __int8)v32 | 1;
  if ( !v33 )
  {
    if ( *(_BYTE *)(a1 + 92) != 5 )
    {
      v51 = *(_DWORD *)(a1 + 580);
      HIDWORD(v52) = v129 - *(_DWORD *)(a1 + 576);
      if ( *(_DWORD *)v130 < v51 )
        --HIDWORD(v52);
      LODWORD(v52) = *(_DWORD *)v130 - v51;
      if ( v52 < 0 )
      {
        v68 = COERCE_DOUBLE(sub_8BEC4(v51 - *(_DWORD *)v130, (unsigned __int64)-v52 >> 32));
        v69 = v68;
        LODWORD(v68) = -32;
        ldexp(v68, v70);
        v56 = -v69;
      }
      else
      {
        v53 = COERCE_DOUBLE(sub_8BEC4(v52, HIDWORD(v52)));
        v54 = v53;
        LODWORD(v53) = -32;
        ldexp(v53, v55);
        v56 = v54;
      }
      HIDWORD(v57) = v127 - v131;
      if ( v128 < (unsigned int)v132 )
        --HIDWORD(v57);
      LODWORD(v57) = v128 - v132;
      if ( v57 < 0 )
      {
        v91 = COERCE_DOUBLE(sub_8BEC4(v132 - v128, (unsigned __int64)-v57 >> 32));
        v92 = v91;
        LODWORD(v91) = -32;
        v47 = ldexp(v91, v93);
        v59 = -v92;
      }
      else
      {
        v58 = COERCE_DOUBLE(sub_8BEC4(v57, HIDWORD(v57)));
        v59 = v58;
        LODWORD(v58) = -32;
        v47 = ldexp(v58, v60);
      }
      v49 = fabs(v59 - v56);
      goto LABEL_52;
    }
    LODWORD(v77) = *(_DWORD *)(a1 + 68) & 0x2000;
    if ( (_DWORD)v77 )
    {
      v78 = *(_DWORD *)(a1 + 588);
      HIDWORD(v79) = v131 - *(_DWORD *)(a1 + 584);
      if ( v132 < v78 )
        --HIDWORD(v79);
      LODWORD(v79) = v132 - v78;
      if ( v79 < 0 )
      {
        v102 = COERCE_DOUBLE(sub_8BEC4(v78 - v132, (unsigned __int64)-v79 >> 32));
        v103 = v102;
        LODWORD(v102) = -32;
        ldexp(v102, v104);
        v83 = -v103;
      }
      else
      {
        v80 = COERCE_DOUBLE(sub_8BEC4(v79, HIDWORD(v79)));
        v81 = v80;
        LODWORD(v80) = -32;
        ldexp(v80, v82);
        v83 = v81;
      }
      v84 = *(_DWORD *)(a1 + 596);
      HIDWORD(v85) = v131 - *(_DWORD *)(a1 + 592);
      if ( v132 < v84 )
        --HIDWORD(v85);
      LODWORD(v85) = v132 - v84;
      if ( v85 < 0 )
      {
        v108 = COERCE_DOUBLE(sub_8BEC4(v84 - v132, (unsigned __int64)-v85 >> 32));
        v109 = v108;
        LODWORD(v108) = -32;
        ldexp(v108, v110);
        v87 = -v109;
      }
      else
      {
        v86 = COERCE_DOUBLE(sub_8BEC4(v85, HIDWORD(v85)));
        v87 = v86;
        LODWORD(v86) = -32;
        ldexp(v86, v88);
      }
      v89 = *(_DWORD *)v130;
      *(_DWORD *)(a1 + 584) = v129;
      *(_DWORD *)(a1 + 588) = v89;
      v90 = *(_DWORD *)(a1 + 580);
      *(_DWORD *)(a1 + 592) = *(_DWORD *)(a1 + 576);
      *(_DWORD *)(a1 + 596) = v90;
      if ( v83 < 0.0 || v83 > 1.0 )
      {
        if ( (*(_DWORD *)(a1 + 68) & 0x10) == 0 )
        {
          sub_6C054(v133, 256, "offset %.6f delay %.6f", v87, v83);
          return (int)sub_25EE0((__int16 *)((char *)&dword_8C + 3), a1, (const char *)v133);
        }
        return sub_31FC4(a1);
      }
      *(double *)(a1 + 640) = v83;
    }
    else
    {
      v94 = *(_DWORD *)(a1 + 580);
      if ( *(_DWORD *)v130 < v94 )
        v95 = 1;
      else
        v95 = *(_DWORD *)(a1 + 68) & 0x2000;
      HIDWORD(v77) = v129 - *(_DWORD *)(a1 + 576);
      if ( v95 )
        --HIDWORD(v77);
      v96 = v77 + *(_DWORD *)v130 - v94;
      if ( v77 < 0 )
      {
        v105 = COERCE_DOUBLE(sub_8BEC4(-(int)v96, (unsigned __int64)-v96 >> 32));
        v106 = v105;
        LODWORD(v105) = -32;
        ldexp(v105, v107);
        v87 = -v106;
      }
      else
      {
        v97 = COERCE_DOUBLE(sub_8BEC4(v96, HIDWORD(v96)));
        v87 = v97;
        LODWORD(v97) = -32;
        ldexp(v97, v98);
      }
    }
    v99 = *(_DWORD *)(a1 + 68);
    if ( (v99 & 0x10) != 0 )
    {
      v100 = *(double *)(a1 + 608);
      *(_DWORD *)(a1 + 68) = v99 & 0xFFFFFFEF;
      v101 = fabs(v100 - v87);
      v49 = v101 + v101;
      *(double *)(a1 + 616) = v49;
      if ( v49 > fabs(sys_bdelay) )
        return sub_31FC4(a1);
    }
    else
    {
      v49 = *(double *)(a1 + 616);
    }
    v48 = 1484;
    HIDWORD(v47) = *(unsigned __int8 *)(a1 + 94);
    *(_DWORD *)(a1 + 720) = current_time - 2 + (1 << SBYTE4(v47));
    goto LABEL_52;
  }
  v34 = *(_DWORD *)(a1 + 580);
  HIDWORD(v35) = v129 - *(_DWORD *)(a1 + 576);
  if ( *(_DWORD *)v130 < v34 )
    --HIDWORD(v35);
  LODWORD(v35) = *(_DWORD *)v130 - v34;
  if ( v35 < 0 )
  {
    v74 = COERCE_DOUBLE(sub_8BEC4(v34 - *(_DWORD *)v130, (unsigned __int64)-v35 >> 32));
    v75 = v74;
    LODWORD(v74) = -32;
    ldexp(v74, v76);
    v39 = -v75;
  }
  else
  {
    v36 = COERCE_DOUBLE(sub_8BEC4(v35, HIDWORD(v35)));
    v37 = v36;
    LODWORD(v36) = -32;
    ldexp(v36, v38);
    v39 = v37;
  }
  v40 = *(_DWORD *)(a1 + 316);
  if ( v40 <= 0 )
    v41 = *(_DWORD *)(a1 + 584);
  else
    v41 = *(_DWORD *)(a1 + 592);
  if ( v40 <= 0 )
    v42 = *(_DWORD *)(a1 + 588);
  else
    v42 = *(_DWORD *)(a1 + 596);
  HIDWORD(v43) = v127 - v41;
  if ( v128 < v42 )
    --HIDWORD(v43);
  LODWORD(v43) = v128 - v42;
  if ( v43 < 0 )
  {
    v71 = COERCE_DOUBLE(sub_8BEC4(v42 - v128, (unsigned __int64)-v43 >> 32));
    v72 = v71;
    LODWORD(v71) = -32;
    v47 = ldexp(v71, v73);
    v45 = -v72;
  }
  else
  {
    v44 = COERCE_DOUBLE(sub_8BEC4(v43, HIDWORD(v43)));
    v45 = v44;
    LODWORD(v44) = -32;
    v47 = ldexp(v44, v46);
  }
  v49 = v45 - v39;
  if ( v45 - v39 < 0.0 || v49 > 1.0 )
  {
    sub_6C054(v133, 256, "t21 %.6f t34 %.6f", v45, v39);
    return (int)sub_25EE0((__int16 *)((char *)&dword_8C + 3), a1, (const char *)v133);
  }
LABEL_52:
  LODWORD(v47) = sys_precision;
  v61 = ldexp(v47, v48);
  if ( v49 <= 1.0 )
  {
    LODWORD(v61) = sys_precision;
    v61 = ldexp(v61, v62);
  }
  LODWORD(v61) = sys_precision;
  v63 = ldexp(v61, v62);
  LODWORD(v63) = *(char *)(a1 + 95);
  v65 = ldexp(v63, v64);
  result = sub_35528(
             a1,
             SHIDWORD(v65),
             v66,
             (int)&clock_phi,
             v111,
             v112,
             v113,
             v114,
             v115,
             v116,
             v117,
             v118,
             v119,
             v120,
             v121,
             v122,
             v123,
             (int)&_stack_chk_guard,
             v124,
             v125,
             v126,
             v127,
             v128,
             v129,
             v130[0],
             v131,
             v132,
             v133[0],
             v133[1],
             v133[2],
             v133[3],
             v133[4],
             v133[5],
             v133[6],
             v133[7],
             v133[8],
             v133[9],
             v133[10],
             v133[11],
             v134,
             v135,
             v136,
             v137,
             v138,
             v139,
             v140,
             v141,
             v142,
             v143,
             v144,
             v145,
             v146,
             v147,
             v148);
  if ( (*(_DWORD *)(a1 + 68) & 0x10) != 0 && *(_BYTE *)(a1 + 63) == 3 )
  {
    result = sub_32FE4(a1);
    if ( (result & 0x400) == 0 && ((*(_DWORD *)(a1 + 68) & 0x800) == 0 || (~*(_DWORD *)(a1 + 136) & 0x7F00) == 0) )
      *(_BYTE *)(a1 + 63) = 6;
  }
  return result;
}
