int __fastcall receive(__int64 a1)
{
  int v1; // r1
  _DWORD *v2; // r10
  int v3; // r5
  int v4; // r9
  int v5; // r7
  int v6; // r2
  int v7; // r2
  int v8; // r3
  int v9; // r8
  int v10; // r10
  int v11; // r6
  int v12; // r2
  unsigned int *v13; // r1
  unsigned int v14; // r5
  int v15; // r7
  unsigned int v16; // r11
  int v17; // r7
  _BOOL4 v18; // r3
  _BOOL4 v19; // r2
  __int16 v20; // r3
  unsigned int v21; // r2
  int v22; // r0
  char v23; // r1
  int v24; // r3
  unsigned int v25; // r3
  int v26; // r7
  unsigned int v27; // r12
  unsigned int v28; // r1
  unsigned int v29; // r2
  unsigned int v30; // r3
  int v31; // r1
  _BOOL4 v32; // r2
  _BOOL4 v33; // r2
  unsigned int v34; // r8
  int v35; // r3
  bool v36; // zf
  int v37; // r1
  int v38; // r5
  const char *v39; // r4
  const char *v40; // r0
  bool v41; // cc
  int v42; // r2
  int v43; // r2
  int v44; // r3
  int v45; // r3
  int v46; // r3
  int v47; // r7
  int v49; // r2
  int v50; // r3
  int v51; // r1
  unsigned int v52; // r3
  int v53; // r1
  _BOOL4 v54; // r6
  const char *v55; // r0
  int v56; // r3
  int v57; // r1
  unsigned int v58; // r3
  int v59; // r3
  int v60; // r12
  _DWORD *v61; // r5
  const char *v62; // r0
  unsigned __int64 v63; // r0
  const char *v64; // r0
  const char *v65; // r0
  _BOOL4 v66; // r3
  int v67; // r3
  int v68; // r2
  unsigned int v69; // r3
  _DWORD *v70; // r8
  int v71; // r3
  int v72; // r2
  int v73; // r1
  _DWORD *v74; // r5
  int v75; // r12
  int v76; // r1
  int v77; // r2
  unsigned int v78; // r12
  unsigned int v79; // r3
  int v80; // r3
  int v81; // r2
  unsigned int v82; // r1
  unsigned int v83; // r2
  unsigned int v84; // r0
  int i; // r9
  int v86; // r2
  int v87; // r3
  const char *v88; // r0
  int v89; // r6
  const char *v90; // r0
  int v91; // r3
  const char *v92; // r0
  const char *v93; // r0
  int v94; // r3
  bool v95; // zf
  int v96; // r2
  int v97; // r0
  const char *v98; // r0
  int v99; // r9
  unsigned int v100; // r2
  unsigned int v101; // r3
  int v102; // r1
  const char *v103; // r0
  __int64 v104; // r2
  const char *v105; // r0
  int v106; // r2
  int v107; // r2
  const char *v108; // r0
  const char *v109; // r0
  bool v110; // zf
  int v111; // r2
  int v112; // r3
  int v113; // r7
  _BOOL4 v115; // r1
  int v116; // r2
  int v117; // r2
  int v118; // r6
  int v119; // r12
  _BOOL4 v120; // r2
  unsigned int v121; // r6
  const char *v122; // r0
  const char *v123; // r0
  unsigned int v124; // r1
  const char *v125; // r0
  unsigned int v126; // r2
  int v127; // r3
  const char *v128; // r0
  unsigned int v129; // r3
  unsigned int v130; // r2
  _BOOL4 v131; // r8
  int v132; // r2
  int v134; // [sp+30h] [bp-16Ch]
  int v135; // [sp+30h] [bp-16Ch]
  int v136; // [sp+30h] [bp-16Ch]
  unsigned int v137; // [sp+34h] [bp-168h]
  __int16 v138; // [sp+34h] [bp-168h]
  int v139; // [sp+38h] [bp-164h]
  unsigned int v140; // [sp+38h] [bp-164h]
  int v141; // [sp+3Ch] [bp-160h]
  __int16 v142; // [sp+40h] [bp-15Ch]
  int v143; // [sp+44h] [bp-158h]
  int v144; // [sp+44h] [bp-158h]
  int v145; // [sp+44h] [bp-158h]
  int s; // [sp+48h] [bp-154h]
  unsigned int v147; // [sp+4Ch] [bp-150h]
  unsigned __int8 *v148; // [sp+50h] [bp-14Ch]
  _DWORD *v149; // [sp+54h] [bp-148h]
  const char *v150; // [sp+54h] [bp-148h]
  int v151; // [sp+54h] [bp-148h]
  unsigned int v152; // [sp+54h] [bp-148h]
  unsigned int v153; // [sp+58h] [bp-144h]
  int v154; // [sp+5Ch] [bp-140h]
  int v155; // [sp+5Ch] [bp-140h]
  unsigned int v156; // [sp+5Ch] [bp-140h]
  int v157; // [sp+60h] [bp-13Ch]
  const char *v158; // [sp+60h] [bp-13Ch]
  int v159; // [sp+64h] [bp-138h]
  unsigned int v160; // [sp+68h] [bp-134h]
  unsigned int v161; // [sp+68h] [bp-134h]
  int v162; // [sp+6Ch] [bp-130h]
  unsigned __int16 v163; // [sp+70h] [bp-12Ch] BYREF
  __int16 v164; // [sp+72h] [bp-12Ah]
  int v165; // [sp+74h] [bp-128h] BYREF
  unsigned __int64 v166; // [sp+78h] [bp-124h] BYREF
  __int64 v167; // [sp+80h] [bp-11Ch] BYREF
  unsigned __int64 v168; // [sp+88h] [bp-114h] BYREF
  char v169[268]; // [sp+90h] [bp-10Ch] BYREF

  v165 = 0;
  v1 = *(unsigned __int16 *)(a1 + 6);
  ++sys_received;
  if ( !v1 )
    goto LABEL_2;
  v2 = (_DWORD *)(a1 + 4);
  v3 = a1;
  LODWORD(a1) = sub_40054(a1 + 4, &v163);
  v4 = *(unsigned __int8 *)(v3 + 89);
  v5 = v163;
  if ( !*(_BYTE *)(v3 + 89) )
    v4 = 16;
  if ( (v163 & 1) != 0 )
    goto LABEL_54;
  v137 = *(unsigned __int8 *)(v3 + 88);
  v134 = v137 & 7;
  if ( v134 == 7 )
  {
    if ( ntp_mode7 && (v163 & 0x80) == 0 )
    {
      LODWORD(a1) = sub_3F4E4(v3, ((v163 ^ 0x100u) >> 8) & 1);
      return a1;
    }
    goto LABEL_54;
  }
  if ( v134 == 6 )
  {
    if ( (v163 & 0x80) == 0 )
    {
      LODWORD(a1) = sub_23110(v3, v163);
      return a1;
    }
    goto LABEL_54;
  }
  if ( (v163 & 2) != 0
    || (v163 & 0x2000) != 0 && (LODWORD(a1) = sub_68AE4(a1, HIDWORD(a1)), (double)(int)a1 / 2147483650.0 < 0.1) )
  {
LABEL_54:
    ++sys_restricted;
    return a1;
  }
  v143 = (v137 >> 3) & 7;
  if ( v143 == 4 )
  {
    ++sys_newversion;
    if ( (v137 & 7) == 0 )
      goto LABEL_2;
  }
  else
  {
    v6 = (v137 >> 3) & 7;
    if ( v143 )
      v6 = 1;
    if ( (v6 & ((v5 ^ 8u) >> 3)) == 0 )
      goto LABEL_2;
    ++sys_oldversion;
    if ( (v137 & 7) == 0 )
    {
      if ( v143 != 1 )
        goto LABEL_2;
      v134 = 3;
    }
  }
  v148 = (unsigned __int8 *)(v3 + 88);
  v7 = *(_DWORD *)(v3 + 84) - 48;
  v139 = *(_DWORD *)(v3 + 84);
  v141 = v7;
  if ( v7 <= 0 )
  {
    v9 = 48;
    v150 = 0;
    v160 = 0;
LABEL_66:
    if ( !v141 )
    {
      if ( (v5 & 4) == 0 )
      {
        v140 = 0;
        s = 1;
        goto LABEL_69;
      }
      goto LABEL_54;
    }
LABEL_2:
    ++sys_badlength;
    return a1;
  }
  v8 = v7 & 3;
  if ( (v7 & 3) != 0 )
    v8 = 1;
  if ( v7 <= 3 )
    v8 |= 1u;
  if ( v8 )
    goto LABEL_2;
  if ( v7 <= 24 )
  {
    v150 = 0;
    v25 = 48;
    v160 = 0;
    v9 = 48;
    goto LABEL_79;
  }
  a1 = 0x3FFF000002010000LL;
  v149 = v2;
  v9 = 48;
  v10 = v3 + 88;
  v11 = *(_DWORD *)(v3 + 84) - 48;
  v154 = v5;
  v157 = v3;
  do
  {
    v13 = (unsigned int *)(v10 + 4 * (v9 / 4));
    v14 = bswap32(*v13);
    v15 = v14 & 3;
    if ( (v14 & 3) != 0 )
      v15 = 1;
    if ( (unsigned __int16)v14 <= 3u )
      v15 |= 1u;
    if ( v15 )
      goto LABEL_2;
    v9 += (unsigned __int16)v14;
    if ( v139 < v9 )
      goto LABEL_2;
    LODWORD(a1) = 33619968;
    if ( (v14 & 0x3FFF0000) == 0x2010000 && sys_groupname )
    {
      v16 = bswap32(v13[4]);
      if ( v16 > 0x100 || (unsigned int)(unsigned __int16)v14 - 20 < v16 )
        goto LABEL_2;
      _memcpy_chk(v169, v13 + 5);
      v169[v16] = 0;
      LODWORD(a1) = strchr(v169, 64);
      if ( !(_DWORD)a1 )
        goto LABEL_103;
      v8 = a1 + 1;
    }
    v11 -= (unsigned __int16)v14;
    if ( v11 <= 0 )
    {
      v141 = v11;
      v160 = v14;
      v5 = v154;
      v3 = v157;
      v2 = v149;
      v150 = (const char *)v8;
      goto LABEL_66;
    }
    v12 = v11 & 3;
    if ( (v11 & 3) != 0 )
      v12 = 1;
    if ( v11 <= 3 )
      v12 |= 1u;
    if ( v12 )
      goto LABEL_2;
  }
  while ( v11 > 24 );
  v141 = v11;
  v160 = v14;
  v5 = v154;
  v3 = v157;
  v2 = v149;
  v150 = (const char *)v8;
  v24 = v9 + 3;
  if ( v9 >= 0 )
    v24 = v9;
  v25 = v24 & 0xFFFFFFFC;
LABEL_79:
  v140 = bswap32(*(_DWORD *)&v148[v25]);
  s = v141 == 0;
LABEL_69:
  LODWORD(a1) = sub_30FF4(v3, v5);
  v142 = a1;
  v153 = a1 & 0x40;
  if ( (a1 & 0x40) != 0 )
  {
    ++sys_limitrejected;
    if ( (a1 & 0x800) != 0 && (unsigned int)(v134 - 4) > 1 )
    {
      v20 = a1;
      if ( v134 == 3 )
      {
        v21 = v140;
        v22 = v3;
        v23 = 4;
      }
      else
      {
        v22 = v3;
        v21 = v140;
        v23 = 1;
      }
      LODWORD(a1) = sub_C170(v22, v23, v21, v20);
    }
    return a1;
  }
  v26 = sub_32CA0(v3, v134, &v165);
  v27 = *(_DWORD *)(v3 + 120);
  v28 = bswap32(*(_DWORD *)(v3 + 124));
  v29 = *(_DWORD *)(v3 + 128);
  v166 = _byteswap_uint64(__PAIR64__(*(_DWORD *)(v3 + 112), *(_DWORD *)(v3 + 116)));
  v30 = *(_DWORD *)(v3 + 132);
  HIDWORD(v167) = v28;
  v31 = *(_DWORD *)(v3 + 60);
  v168 = _byteswap_uint64(__PAIR64__(v29, v30));
  LODWORD(v167) = bswap32(v27);
  v147 = v31 + 24;
  v158 = (const char *)sub_64648(v134);
  sub_337E4(v165);
  LODWORD(a1) = sub_336EC((int *)v26, (_DWORD *)v3, v134);
  v159 = a1;
  if ( (_DWORD)a1 == 1 )
  {
    sub_25EE0((__int16 *)&dword_8C, v26, "Invalid_NAK");
    if ( v26 )
      ++*(_DWORD *)(v26 + 756);
    v38 = current_time;
    v39 = (const char *)sub_6C2E8(v147);
    v40 = (const char *)sub_6C2E8(v2);
    LODWORD(a1) = sub_64E00(3, "Invalid-NAK error at %ld %s<-%s", v38, v39, v40);
    return a1;
  }
  if ( s )
  {
    v34 = 0;
    s = 0;
    goto LABEL_95;
  }
  if ( (_DWORD)a1 == 2 )
  {
    v34 = 3;
    v153 = 0;
    goto LABEL_95;
  }
  v32 = v140 >= 0x10000;
  if ( !crypto_flags )
    v32 = 0;
  if ( !v32 )
  {
    v153 = 0;
    goto LABEL_88;
  }
  if ( v141 <= 19 )
  {
LABEL_162:
    ++sys_badauth;
    return a1;
  }
  if ( v134 == 5 )
  {
    v43 = *(_DWORD *)(v3 + 60);
    if ( *(_WORD *)(v3 + 4) == 2 )
      v44 = any_interface;
    else
      v44 = any6_interface;
    if ( v43 == v44 )
      goto LABEL_54;
    if ( *(_WORD *)(v43 + 80) == 2 )
    {
      v46 = *(_DWORD *)(v43 + 84) != 0;
    }
    else
    {
      if ( *(_DWORD *)(v43 + 88) )
      {
        v45 = 0;
      }
      else
      {
        v45 = *(_DWORD *)(v43 + 92);
        if ( v45 )
        {
          v45 = *(_DWORD *)(v43 + 88);
        }
        else if ( !*(_DWORD *)(v43 + 96) )
        {
          v45 = *(_DWORD *)(v43 + 100) == 0;
        }
      }
      v46 = v45 ^ 1;
    }
    if ( v46 )
      v147 = v43 + 80;
    s = 0;
LABEL_135:
    v42 = 2;
    goto LABEL_120;
  }
  if ( v26 )
    s = *(_DWORD *)(v26 + 168);
  else
    s = sub_272C8(v2, v147, 0, sys_private, 0);
  v41 = s <= 0;
  if ( s )
    v41 = v9 <= 48;
  if ( v41 )
    goto LABEL_135;
  sub_272C8(v2, v147, v140, 0, 2);
  v42 = 0;
LABEL_120:
  v153 = sub_272C8(v2, v147, v140, s, v42);
LABEL_88:
  LODWORD(a1) = sub_62854(v140, v148, v9, v141);
  v33 = v140 >= 0x10000;
  if ( (_DWORD)a1 )
    v34 = 1;
  else
    v34 = 2;
  if ( !crypto_flags )
    v33 = 0;
  if ( v33 )
    LODWORD(a1) = sub_621BC(v140, 0);
LABEL_95:
  if ( v26 )
  {
    v35 = *(_DWORD *)(v26 + 124);
    if ( v35 )
    {
      if ( v35 != v140 )
        goto LABEL_54;
      v36 = v34 == 1;
      if ( v34 != 1 )
        v36 = v141 == 0;
      if ( !v36 )
        goto LABEL_54;
    }
  }
  v37 = v137 >> 6;
  v162 = v165;
  v138 = v142 & 0xE7FF;
  v155 = v37;
  switch ( v165 )
  {
    case 1:
      LODWORD(a1) = sub_C534(v150, *(const char **)(v26 + 80));
      v145 = a1;
      if ( (_DWORD)a1 )
        goto LABEL_103;
      if ( v134 != 5 )
        goto LABEL_159;
      v121 = *(unsigned __int8 *)(v3 + 90);
      if ( v121 != *(unsigned __int8 *)(v26 + 94) )
      {
        v122 = (const char *)sub_6C2E8(v2);
        sub_64E00(
          6,
          "receive: broadcast poll from %s changed from %u to %u",
          v122,
          *(unsigned __int8 *)(v26 + 94),
          *(unsigned __int8 *)(v3 + 90));
        v121 = *(unsigned __int8 *)(v3 + 90);
      }
      if ( *(unsigned __int8 *)(v26 + 65) > v121 || *(unsigned __int8 *)(v26 + 66) < v121 )
      {
        v145 = v162;
        v123 = (const char *)sub_6C2E8(v2);
        sub_64E00(
          6,
          "receive: broadcast poll of %u from %s is out-of-range (%d to %d)!",
          v121,
          v123,
          *(unsigned __int8 *)(v26 + 65),
          *(unsigned __int8 *)(v26 + 66));
        LOBYTE(v121) = *(_BYTE *)(v3 + 90);
      }
      v124 = 1 << v121;
      if ( (*(_DWORD *)(v26 + 68) & 0x10) != 0 )
        v124 -= 3;
      if ( current_time - *(_DWORD *)(v26 + 732) < v124 )
      {
        v152 = v124;
        ++v145;
        v125 = (const char *)sub_6C2E8(v2);
        sub_64E00(
          6,
          "receive: broadcast packet from %s arrived after %lu, not %lu seconds!",
          v125,
          current_time - *(_DWORD *)(v26 + 732),
          v152);
      }
      a1 = *(_QWORD *)(v26 + 600);
      if ( sys_bcpollbstep )
        v126 = *(unsigned __int8 *)(v3 + 90);
      else
        v126 = 0;
      if ( sys_bcpollbstep )
        v126 = ((unsigned __int8)sys_bcpollbstep << v126) + 2;
      if ( !a1 )
        goto LABEL_349;
      v127 = v168 - a1;
      if ( HIDWORD(v168) < HIDWORD(a1) )
        --v127;
      if ( v127 < 0 && current_time - *(_DWORD *)(v26 + 732) < v126 )
      {
        v128 = (const char *)sub_6C2E8(v2);
        LODWORD(a1) = sub_64E00(
                        6,
                        "receive: broadcast packet from %s contains non-monotonic timestamp: %#010x.%08x -> %#010x.%08x",
                        v128,
                        *(_DWORD *)(v26 + 600),
                        *(_DWORD *)(v26 + 604),
                        (_DWORD)v168,
                        HIDWORD(v168));
      }
      else
      {
LABEL_349:
        if ( !v145 )
          goto LABEL_159;
      }
      *(_DWORD *)(v26 + 728) = current_time;
      ++sys_declined;
      return a1;
    case 3:
      v118 = *(_DWORD *)(v3 + 60);
      if ( (*(_DWORD *)(v118 + 144) & 0x40) == 0 )
      {
        v119 = *(unsigned __int8 *)(v3 + 89);
        if ( !*(_BYTE *)(v3 + 89) )
          v119 = 16;
        LODWORD(a1) = sub_420F0(
                        v2,
                        v118 + 24,
                        &v166,
                        &v167,
                        &v168,
                        v3 + 72,
                        *(unsigned __int8 *)(v3 + 88) >> 6,
                        (*(unsigned __int8 *)(v3 + 88) >> 3) & 7,
                        *(_BYTE *)(v3 + 88) & 7,
                        v119,
                        *(unsigned __int8 *)(v3 + 90),
                        *(char *)(v3 + 91),
                        *(_DWORD *)(v3 + 100),
                        *(_DWORD *)(v3 + 84) - 48,
                        v3 + 136);
        if ( (v142 & 4) != 0 )
          v120 = v34 == 1;
        else
          v120 = v34 <= 1;
        if ( !v120 )
        {
          if ( v34 != 2 )
            goto LABEL_54;
          LODWORD(a1) = sub_C170(v3, 4, 0, v138);
          goto LABEL_162;
        }
LABEL_378:
        LODWORD(a1) = sub_C170(v3, 4, v140, v138);
        return a1;
      }
      if ( !sys_manycastserver )
        goto LABEL_54;
      LODWORD(a1) = sub_C534(v150, 0);
      if ( (_DWORD)a1
        || sys_leap == 3
        || (unsigned __int8)sys_stratum >= (unsigned int)v4
        || !sys_cohort && (unsigned __int8)sys_stratum == v4 + 1
        || *(_DWORD *)(v118 + 152) == *(_DWORD *)(v3 + 100) )
      {
LABEL_103:
        ++sys_declined;
        return a1;
      }
      if ( (v142 & 4) != 0 )
        v131 = v34 == 1;
      else
        v131 = v34 <= 1;
      if ( v131 )
      {
        v132 = *(unsigned __int8 *)(v3 + 89);
        if ( !*(_BYTE *)(v3 + 89) )
          v132 = 16;
        sub_420F0(
          v2,
          v118 + 24,
          &v166,
          &v167,
          &v168,
          v3 + 72,
          *(unsigned __int8 *)(v3 + 88) >> 6,
          (*(unsigned __int8 *)(v3 + 88) >> 3) & 7,
          *(_BYTE *)(v3 + 88) & 7,
          v132,
          *(unsigned __int8 *)(v3 + 90),
          *(char *)(v3 + 91),
          *(_DWORD *)(v3 + 100),
          *(_DWORD *)(v3 + 84) - 48,
          v3 + 136);
        goto LABEL_378;
      }
      return a1;
    case 4:
      LODWORD(a1) = sub_C534(v150, 0);
      if ( (_DWORD)a1 )
        goto LABEL_103;
      LODWORD(a1) = sub_32C0C(v3);
      v47 = a1;
      if ( !(_DWORD)a1 )
        goto LABEL_54;
      if ( (*(_BYTE *)(a1 + 72) & 8) == 0 && sys_authenticate || (v142 & 0x14) != 0 ? v34 != 1 : v34 > 1 )
        goto LABEL_54;
      if ( v155 == 3 )
        goto LABEL_103;
      if ( v4 < sys_floor )
        goto LABEL_103;
      if ( v4 >= sys_ceiling )
        goto LABEL_103;
      LODWORD(a1) = sub_321D4(
                      (int)v2,
                      0,
                      *(char **)(v3 + 60),
                      v164,
                      3u,
                      v143,
                      *(_BYTE *)(a1 + 65),
                      *(_BYTE *)(a1 + 66),
                      *(_DWORD *)(a1 + 68) & 0x100 | 2,
                      0x41u,
                      0,
                      v140,
                      sys_ident);
      if ( !(_DWORD)a1 )
        goto LABEL_103;
      if ( (*(_BYTE *)(v47 + 72) & 8) != 0 )
        *(_DWORD *)(v47 + 720) = current_time + 1;
      return a1;
    case 5:
      v17 = sys_ident;
      LODWORD(a1) = sub_C534(v150, (const char *)sys_ident);
      if ( (_DWORD)a1 )
        goto LABEL_103;
      if ( v142 & 0x14 | sys_authenticate )
        v18 = v34 != 1;
      else
        v18 = v34 > 1;
      if ( v18 )
      {
        if ( (v142 & 4) != 0 )
          v19 = v34 == 1;
        else
          v19 = v34 <= 1;
        if ( v19 )
        {
          LODWORD(a1) = sub_C170(v3, 2, v140, v138);
          return a1;
        }
        if ( v34 != 2 )
          goto LABEL_103;
        LODWORD(a1) = sub_C170(v3, 2, 0, v138);
        goto LABEL_54;
      }
      if ( (v142 & 0x20) != 0 || v155 != 3 && (v4 < sys_floor || v4 >= sys_ceiling) )
        goto LABEL_103;
      LODWORD(a1) = sub_321D4(
                      (int)v2,
                      0,
                      *(char **)(v3 + 60),
                      v164,
                      2u,
                      v143,
                      *(_BYTE *)(v3 + 90),
                      0xAu,
                      0,
                      1u,
                      0,
                      v140,
                      v17);
      v26 = a1;
      if ( !(_DWORD)a1 )
        goto LABEL_103;
      goto LABEL_159;
    case 6:
      v113 = sys_ident;
      LODWORD(a1) = sub_C534(v150, (const char *)sys_ident);
      if ( (_DWORD)a1 )
        goto LABEL_103;
      if ( !sys_bclient )
        goto LABEL_54;
      if ( v142 & 0x14 | sys_authenticate ? v34 != 1 : v34 > 1 )
        goto LABEL_54;
      if ( v155 == 3 || v4 < sys_floor || v4 >= sys_ceiling )
        goto LABEL_103;
      v115 = v140 >= 0x10000;
      if ( !crypto_flags )
        v115 = 0;
      if ( v115 && HIWORD(v160) << 16 != -2113863680 )
        goto LABEL_103;
      v116 = *(_DWORD *)(v3 + 60);
      LODWORD(a1) = &sys_bdelay;
      if ( (*(_DWORD *)(v116 + 144) & 0x40) != 0 )
        v116 = 0;
      if ( sys_bdelay <= 0.0 )
      {
        LODWORD(a1) = sub_321D4(
                        (int)v2,
                        0,
                        (char *)v116,
                        v164,
                        3u,
                        v143,
                        *(_BYTE *)(v3 + 90),
                        *(_BYTE *)(v3 + 90),
                        274,
                        0x20u,
                        0,
                        v140,
                        v113);
        v117 = a1;
        if ( !(_DWORD)a1 )
          goto LABEL_54;
        LODWORD(a1) = v168;
        *(_QWORD *)(v117 + 600) = v168;
        if ( v140 >= 0x10000 )
          LODWORD(a1) = sub_2828C(v117, v3);
        return a1;
      }
      if ( v115 )
        goto LABEL_54;
      LODWORD(a1) = sub_321D4(
                      (int)v2,
                      0,
                      (char *)v116,
                      v164,
                      6u,
                      v143,
                      *(_BYTE *)(v3 + 90),
                      *(_BYTE *)(v3 + 90),
                      2,
                      0x20u,
                      0,
                      v140,
                      v113);
      v26 = a1;
      if ( !(_DWORD)a1 )
        goto LABEL_54;
      a1 = v168;
      *(double *)(v26 + 616) = sys_bdelay;
      *(_QWORD *)(v26 + 600) = a1;
LABEL_159:
      v49 = *(_DWORD *)(v26 + 68);
      if ( v34 != 3 )
      {
        if ( (v49 & 0x800) != 0 )
        {
          if ( v140 < 0x10000 )
            goto LABEL_162;
        }
        else if ( v140 >= 0x10000 )
        {
          goto LABEL_162;
        }
      }
      v50 = *(_DWORD *)(v26 + 300);
      v51 = *(_DWORD *)(v26 + 744);
      if ( (v49 & 0x4000) != 0 )
        *(_DWORD *)(v26 + 68) = v49 & 0xFFFFBFFF;
      v52 = v50 & 0xFFFFFE00;
      v53 = v51 + 1;
      *(_DWORD *)(v26 + 300) = v52;
      if ( (v49 & 0x4000) != 0 )
        *(_DWORD *)(v26 + 300) = v52 | 4;
      *(_DWORD *)(v26 + 744) = v53;
      LODWORD(a1) = sub_3362C(v155, v4, v134, *(_DWORD *)(v3 + 100));
      v144 = a1;
      if ( v168 )
      {
        if ( v168 == *(_QWORD *)(v26 + 568) )
        {
          v94 = *(_DWORD *)(v26 + 764) + 1;
          *(_DWORD *)(v26 + 300) |= 1u;
          *(_DWORD *)(v26 + 764) = v94;
          return a1;
        }
        if ( v134 == 5 )
        {
          if ( (unsigned int)v4 > 0xF )
          {
            v93 = (const char *)sub_6C2E8(v26 + 16);
            LODWORD(a1) = sub_64E00(6, "receive: Unexpected stratum (%d) in broadcast from %s", v4, v93);
            return a1;
          }
        }
        else
        {
          v89 = v166;
          if ( (_DWORD)a1 )
          {
            if ( !v166 || !v167 )
            {
              ++*(_DWORD *)(v26 + 760);
              v90 = (const char *)sub_6C2E8(v26 + 16);
              LODWORD(a1) = sub_64E00(6, "receive: KoD packet from %s has a zero org or rec timestamp.  Ignoring.", v90);
              return a1;
            }
            v95 = (_DWORD)v168 == (_DWORD)v166;
            if ( (_DWORD)v168 == (_DWORD)v166 )
              v95 = HIDWORD(v168) == HIDWORD(v166);
            v96 = !v95;
            if ( (_DWORD)v168 != (_DWORD)v167 )
              v96 |= 1u;
            if ( HIDWORD(v168) == HIDWORD(v167) )
              v97 = v96;
            else
              v97 = v96 | 1;
            if ( v97 )
            {
              ++*(_DWORD *)(v26 + 760);
              v98 = (const char *)sub_6C2E8(v26 + 16);
              LODWORD(a1) = sub_64E00(
                              6,
                              "receive: KoD packet from %s has inconsistent xmt/org/rec timestamps.  Ignoring.",
                              v98);
              return a1;
            }
            v107 = *(_DWORD *)(v26 + 316);
            if ( v107 )
            {
              if ( v107 == 1 && *(_QWORD *)(v26 + 592) != v166 )
              {
                v136 = HIDWORD(v166);
                ++*(_DWORD *)(v26 + 760);
                v109 = (const char *)sub_6C2E8(v26 + 16);
                LODWORD(a1) = sub_64E00(
                                6,
                                "receive: flip 1 KoD origin timestamp %#010x.%08x from %s does not match interleave %#010"
                                "x.%08x - ignoring.",
                                v89,
                                v136,
                                v109,
                                *(_DWORD *)(v26 + 592),
                                *(_DWORD *)(v26 + 596));
                return a1;
              }
            }
            else if ( *(_QWORD *)(v26 + 584) != v166 )
            {
              v135 = HIDWORD(v166);
              ++*(_DWORD *)(v26 + 760);
              v108 = (const char *)sub_6C2E8(v26 + 16);
              LODWORD(a1) = sub_64E00(
                              6,
                              "receive: flip 0 KoD origin timestamp %#010x.%08x from %s does not match %#010x.%08x - ignoring.",
                              v89,
                              v135,
                              v108,
                              *(_DWORD *)(v26 + 584),
                              *(_DWORD *)(v26 + 588));
              return a1;
            }
          }
          else if ( *(_DWORD *)(v26 + 316) )
          {
            if ( v166 && v167 && (v106 = *(_DWORD *)(v26 + 576), *(_QWORD *)(v26 + 576)) )
            {
              v110 = v106 == (_DWORD)v166;
              if ( v106 == (_DWORD)v166 )
                v110 = *(_DWORD *)(v26 + 580) == HIDWORD(v166);
              if ( !v110 )
              {
                v111 = *(_DWORD *)(v26 + 300);
                v112 = *(_DWORD *)(v26 + 68) | 0x4000;
                ++*(_DWORD *)(v26 + 760);
                *(_DWORD *)(v26 + 68) = v112;
                *(_DWORD *)(v26 + 300) = v111 | 2;
              }
            }
            else
            {
              *(_DWORD *)(v26 + 300) |= 4u;
            }
          }
          else if ( v166 )
          {
            v99 = *(_DWORD *)(v26 + 584);
            v151 = *(_DWORD *)(v26 + 588);
            if ( *(_QWORD *)(v26 + 584) == v166 )
            {
              *(_DWORD *)(v26 + 588) = 0;
              *(_DWORD *)(v26 + 584) = 0;
            }
            else
            {
              v100 = *(_DWORD *)(v3 + 112);
              v101 = *(_DWORD *)(v3 + 116);
              v102 = *(_DWORD *)(v26 + 300) | 2;
              ++*(_DWORD *)(v26 + 760);
              *(_DWORD *)(v26 + 300) = v102;
              v161 = bswap32(v100);
              v156 = bswap32(v101);
              v103 = (const char *)sub_6C2E8(v26 + 16);
              sub_64E00(
                6,
                "receive: Unexpected origin timestamp %#010x.%08x does not match aorg %#010x.%08x from %s@%s xmt %#010x.%08x",
                v161,
                v156,
                v99,
                v151,
                v158,
                v103,
                bswap32(*(_DWORD *)(v3 + 128)),
                bswap32(*(_DWORD *)(v3 + 132)));
              v104 = *(_QWORD *)(v26 + 576);
              if ( v104 && v104 == v166 )
              {
                if ( dynamic_interleave )
                {
                  *(_DWORD *)(v26 + 316) = 1;
                  sub_25EE0((_WORD *)&dword_8C + 1, v26, 0);
                }
                else
                {
                  v105 = (const char *)sub_6C2E8(v26 + 16);
                  sub_64E00(6, "receive: Dynamic interleave from %s@%s denied", v158, v105);
                }
              }
            }
          }
          else
          {
            v91 = *(_DWORD *)(v26 + 300) | 2;
            ++*(_DWORD *)(v26 + 760);
            *(_DWORD *)(v26 + 300) = v91;
            v92 = (const char *)sub_6C2E8(v26 + 16);
            sub_64E00(
              6,
              "receive: %s 0 origin timestamp from %s@%s xmt %#010x.%08x",
              "Drop",
              v158,
              v92,
              bswap32(*(_DWORD *)(v3 + 128)),
              bswap32(*(_DWORD *)(v3 + 132)));
          }
        }
      }
      else
      {
        *(_DWORD *)(v26 + 300) |= 4u;
        if ( (_DWORD)a1 )
        {
          ++*(_DWORD *)(v26 + 760);
          v88 = (const char *)sub_6C2E8(v26 + 16);
          LODWORD(a1) = sub_64E00(6, "receive: Unexpected zero transmit timestamp in KoD from %s", v88);
          return a1;
        }
      }
      if ( v159 == 2 )
      {
        LODWORD(a1) = sub_25EE0((__int16 *)&dword_8C, v26, "crypto_NAK");
        HIDWORD(a1) = *(_DWORD *)(v26 + 68);
        v87 = *(_DWORD *)(v26 + 752) + 1;
        *(_DWORD *)(v26 + 300) |= 0x10u;
        *(_DWORD *)(v26 + 752) = v87;
        if ( (a1 & 0x200000000LL) == 0 )
        {
          if ( !*(_DWORD *)(v26 + 136) )
            return a1;
          goto LABEL_199;
        }
        if ( !unpeer_crypto_nak_early )
          return a1;
LABEL_182:
        LODWORD(a1) = sub_31FC4(v26);
        return a1;
      }
      if ( v141 | *(_DWORD *)(v26 + 124) || (v142 & 4) != 0 )
        v54 = v34 != 1;
      else
        v54 = v34 > 1;
      if ( v54 )
      {
        if ( (*(_DWORD *)(v26 + 300) & 0x1FF) != 0 )
        {
          v55 = (const char *)sub_6C2E8(v26 + 16);
          LODWORD(a1) = sub_64E00(6, "receive: Bad auth in packet with bad timestamps from %s denied - spoof?", v55);
          return a1;
        }
        LODWORD(a1) = sub_25EE0((__int16 *)&dword_8C, v26, "digest");
        v56 = *(_DWORD *)(v26 + 752);
        *(_DWORD *)(v26 + 300) |= 0x10u;
        *(_DWORD *)(v26 + 752) = v56 + 1;
        if ( v141 && (unsigned int)(v134 - 1) <= 1 )
          LODWORD(a1) = sub_C170(v3, 1, 0, v138);
        if ( (*(_DWORD *)(v26 + 68) & 2) != 0 )
        {
          if ( !unpeer_digest_early )
            return a1;
          goto LABEL_182;
        }
        if ( !peer_clear_digest_early || !*(_DWORD *)(v26 + 136) )
          return a1;
LABEL_199:
        LODWORD(a1) = sub_36214(v26, (int *)"AUTH");
        return a1;
      }
      if ( v134 != 5 )
      {
        if ( *(_DWORD *)(v26 + 316) )
          goto LABEL_187;
        *(_QWORD *)(v26 + 560) = v168;
        goto LABEL_186;
      }
      if ( (int)v34 > 1 )
      {
        v65 = (const char *)sub_6C2E8(v26 + 16);
        sub_64E00(6, "receive: Bad broadcast auth (%d) from %s", v34, v65);
      }
      else
      {
        v59 = *(_DWORD *)(v26 + 68) & 0x2000;
        if ( v166 )
        {
          if ( !v59 )
          {
            v61 = (_DWORD *)(v3 + 72);
            v62 = (const char *)sub_6C2E8(v26 + 16);
            sub_64E00(6, "receive: Broadcast server at %s is in interleave mode", v62);
            v63 = v168;
            *(_DWORD *)(v26 + 68) |= 0x2000u;
            *(_QWORD *)(v26 + 584) = v63;
            HIDWORD(v63) = v61[1];
            *(_DWORD *)(v26 + 592) = *v61;
            *(_DWORD *)(v26 + 596) = HIDWORD(v63);
            LODWORD(a1) = sub_25EE0((_WORD *)&dword_8C + 1, v26, 0);
            return a1;
          }
        }
        else if ( v59 )
        {
          v64 = (const char *)sub_6C2E8(v26 + 16);
          sub_64E00(6, "receive: Broadcast server at %s is no longer in interleave mode", v64);
          *(_DWORD *)(v26 + 68) &= ~0x2000u;
        }
      }
      v60 = *(_DWORD *)(v26 + 316);
      *(_QWORD *)(v26 + 600) = v168;
      if ( !v60 )
      {
LABEL_186:
        v57 = *(_DWORD *)(v3 + 76);
        *(_DWORD *)(v26 + 576) = *(_DWORD *)(v3 + 72);
        *(_DWORD *)(v26 + 580) = v57;
      }
LABEL_187:
      LODWORD(a1) = v168;
      *(_QWORD *)(v26 + 568) = v168;
      v58 = *(unsigned __int8 *)(v3 + 90);
      if ( v58 < *(unsigned __int8 *)(v26 + 65) )
        LOBYTE(v58) = *(_BYTE *)(v26 + 65);
      *(_BYTE *)(v26 + 94) = v58;
      if ( v144 == 1 )
      {
        ++*(_DWORD *)(v26 + 772);
        sub_25EE0((__int16 *)((char *)&dword_84 + 3), v26, 0);
        v82 = *(unsigned __int8 *)(v3 + 90);
        v83 = *(unsigned __int8 *)(v26 + 65);
        if ( v83 < v82 )
        {
          LOBYTE(v83) = *(_BYTE *)(v26 + 94);
          *(_BYTE *)(v26 + 65) = v83;
        }
        *(_DWORD *)(v26 + 312) = 0;
        *(_DWORD *)(v26 + 712) = 9 << v83;
        *(_DWORD *)(v26 + 308) = 0;
        LODWORD(a1) = sub_34264(v26, v82);
        return a1;
      }
      if ( v144 )
      {
        ++*(_DWORD *)(v26 + 772);
        return a1;
      }
      if ( v134 != 3 )
      {
        v66 = v34 == 1;
        if ( !v140 )
          v66 = 0;
        if ( v66 )
        {
          if ( v140 < 0x10000 && !sub_623A4(v140, v26 + 16) )
          {
            LODWORD(a1) = sub_25EE0((__int16 *)&dword_8C, v26, "authIP");
            ++*(_DWORD *)(v26 + 752);
            return a1;
          }
          v67 = *(_DWORD *)(v26 + 68);
          v68 = current_time;
          *(_DWORD *)(v26 + 732) = current_time;
          *(_DWORD *)(v26 + 728) = v68;
          goto LABEL_210;
        }
      }
      v67 = *(_DWORD *)(v26 + 68);
      v81 = current_time;
      *(_DWORD *)(v26 + 732) = current_time;
      *(_DWORD *)(v26 + 728) = v81;
      if ( v34 == 1 )
      {
LABEL_210:
        v69 = v67 | 4;
        *(_DWORD *)(v26 + 68) = v69;
        goto LABEL_211;
      }
      v69 = v67 & 0xFFFFFFFB;
      *(_DWORD *)(v26 + 68) = v69;
LABEL_211:
      if ( (v69 & 0x800) != 0 )
      {
        v70 = *(_DWORD **)(v26 + 220);
        if ( v70 )
        {
          v71 = v70[1];
          if ( v71 > 0 )
            v70[1] = v71 - 1;
        }
        *(_DWORD *)(v26 + 300) |= 0x80u;
        LODWORD(a1) = sub_2828C(v26, v3);
        if ( (_DWORD)a1 != 256 )
        {
          if ( (_DWORD)a1 != 271 )
            return a1;
          sub_25EE0((__int16 *)((char *)&dword_84 + 1), v26, "crypto error");
          LODWORD(a1) = sub_36214(v26, (int *)"CRYP");
          v72 = *(_DWORD *)(v26 + 68);
          *(_DWORD *)(v26 + 300) |= 0x100u;
          if ( (v72 & 2) == 0 || !unpeer_crypto_early )
            return a1;
          goto LABEL_182;
        }
        *(_DWORD *)(v26 + 708) = 0;
        if ( v134 == 4 )
        {
          if ( *(_DWORD *)(v26 + 124) == v140 )
            *(_DWORD *)(v26 + 300) &= ~0x80u;
        }
        else if ( (*(_DWORD *)(v26 + 300) & 0x80) != 0 )
        {
          if ( v70 )
          {
            v84 = v153;
            for ( i = 0; ; ++i )
            {
              v86 = v70[1];
              if ( *(_DWORD *)(v26 + 160) == v84 || *v70 == v84 )
                break;
              if ( i > v86 )
              {
                v129 = *(_DWORD *)(v26 + 300);
                *(_DWORD *)(v26 + 136) &= ~0x1000u;
                goto LABEL_354;
              }
              v84 = sub_272C8(v2, v147, v84, s, 0);
            }
            v129 = *(_DWORD *)(v26 + 300) & 0xFFFFFF7F;
            *(_DWORD *)(v26 + 160) = v140;
            *(_DWORD *)(v26 + 300) = v129;
            v70[1] = v86 - i;
LABEL_354:
            if ( (v129 & 0x80) != 0 )
              sub_25EE0((__int16 *)&dword_8C, v26, "keylist");
          }
        }
        else
        {
          *(_DWORD *)(v26 + 160) = v140;
        }
        v130 = *(_DWORD *)(v26 + 236);
        if ( (*(_DWORD *)(v26 + 136) & 0x400) == 0 )
          *(_DWORD *)(v26 + 300) |= 0x80u;
        if ( v130 < current_time )
        {
          sub_25EE0((__int16 *)((char *)&dword_84 + 1), v26, "crypto refresh");
          LODWORD(a1) = sub_36214(v26, (int *)"TIME");
          return a1;
        }
      }
      LODWORD(a1) = sub_359B0(v26, v148, *(_DWORD *)(v3 + 84));
      if ( *(_DWORD *)(v26 + 316) )
      {
        v73 = HIDWORD(v167);
        v74 = (_DWORD *)(v3 + 72);
        v75 = current_time;
        *(_DWORD *)(v26 + 560) = v167;
        *(_DWORD *)(v26 + 564) = v73;
        v76 = v74[1];
        v77 = *(_DWORD *)(v26 + 720);
        *(_DWORD *)(v26 + 576) = *v74;
        *(_DWORD *)(v26 + 580) = v76;
        LODWORD(a1) = *(unsigned __int8 *)(v26 + 94);
        v78 = v77 - v75;
        HIDWORD(a1) = *(unsigned __int8 *)(v26 + 64);
        if ( (unsigned int)a1 >= HIDWORD(a1) )
          v79 = 1 << SBYTE4(a1);
        else
          v79 = 1 << a1;
        if ( v78 >= v79 >> 1 )
          v80 = v77 - 1;
        else
          v80 = v77 + 1;
        *(_DWORD *)(v26 + 720) = v80;
      }
      break;
    default:
      goto LABEL_103;
  }
  return a1;
}
