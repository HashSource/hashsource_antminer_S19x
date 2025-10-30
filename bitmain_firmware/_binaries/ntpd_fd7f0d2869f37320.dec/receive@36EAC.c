int __fastcall receive(int a1)
{
  unsigned __int64 v2; // r0
  _DWORD *v3; // r9
  int v4; // r10
  int v5; // r8
  unsigned int v6; // r3
  int v7; // r12
  int v8; // r3
  int v9; // r4
  int v10; // r6
  int v11; // r11
  int v12; // r2
  unsigned int *v13; // r1
  unsigned int v14; // r7
  int v15; // r8
  unsigned int v16; // r10
  int v17; // r7
  _BOOL4 v18; // r3
  _BOOL4 v19; // r2
  int v20; // r3
  unsigned int v21; // r7
  int v22; // r7
  __int16 v23; // r8
  __int16 v24; // r3
  unsigned int v25; // r2
  int v26; // r0
  int v27; // r0
  unsigned int v28; // lr
  unsigned int v29; // r12
  unsigned int v30; // r1
  unsigned int v31; // r2
  int v32; // lr
  unsigned int v33; // r3
  unsigned int v34; // r2
  unsigned int v35; // r8
  char *v36; // r3
  bool v37; // zf
  _BOOL4 v38; // r2
  bool v39; // cc
  _BOOL4 v40; // r2
  _BOOL4 v41; // r8
  int v42; // r12
  __int16 v43; // r3
  int v44; // r6
  int v45; // r12
  _BOOL4 v46; // r2
  int v47; // r4
  const char *v48; // r5
  const char *v49; // r0
  _DWORD *v50; // r2
  int v51; // r3
  int v52; // r3
  int v53; // r3
  int v54; // r7
  int v56; // r3
  bool v57; // zf
  int v58; // r1
  unsigned int v59; // r2
  int v60; // r7
  int v61; // r10
  bool v62; // zf
  _BOOL4 v63; // r6
  const char *v64; // r0
  int v65; // r3
  const char *v66; // r0
  int v67; // r3
  int v68; // r1
  unsigned int v69; // r3
  const char *v70; // r0
  int v71; // r12
  int v72; // r3
  _DWORD *v73; // r5
  const char *v74; // r0
  unsigned __int64 v75; // r0
  int v76; // r3
  _BOOL4 v77; // r3
  int v78; // r3
  unsigned int v79; // r3
  _DWORD *v80; // r8
  int v81; // r3
  int v82; // r2
  unsigned int v83; // r3
  unsigned int v84; // r4
  unsigned __int64 *v85; // r5
  char v86; // r2
  int v87; // lr
  int v88; // r3
  int v89; // r3
  int v90; // r4
  const char *v91; // r0
  int v92; // r3
  unsigned int v93; // r2
  char v94; // r3
  const char *v95; // r0
  unsigned int i; // r2
  unsigned int v97; // r3
  int v98; // r2
  int v99; // r3
  unsigned __int64 v100; // kr00_8
  const char *v101; // r0
  int v102; // r3
  const char *v103; // r0
  const char *v104; // r0
  int v105; // r3
  int v106; // r10
  int v107; // r6
  unsigned int v108; // r1
  int v109; // r3
  const char *v110; // r0
  __int64 v111; // r2
  int v112; // r3
  int v113; // r2
  const char *v114; // r0
  unsigned int v115; // r7
  const char *v116; // r0
  int v117; // r6
  const char *v118; // r0
  unsigned int v119; // r2
  const char *v120; // r0
  unsigned int v121; // r1
  int v122; // r12
  int v123; // r3
  const char *v124; // r0
  int v125; // r7
  _BOOL4 v127; // r2
  int v128; // r2
  _BOOL4 v129; // r3
  int v130; // r1
  const char *v131; // r0
  int v132; // r12
  int v133; // r3
  const char *v134; // r0
  const char *v135; // r0
  unsigned int v137; // [sp+34h] [bp-170h]
  int v138; // [sp+34h] [bp-170h]
  int v139; // [sp+38h] [bp-16Ch]
  int v140; // [sp+3Ch] [bp-168h]
  int v141; // [sp+40h] [bp-164h]
  unsigned int v142; // [sp+40h] [bp-164h]
  unsigned int v143; // [sp+40h] [bp-164h]
  char *s; // [sp+44h] [bp-160h]
  unsigned int v145; // [sp+48h] [bp-15Ch]
  __int16 v146; // [sp+48h] [bp-15Ch]
  unsigned __int8 *v147; // [sp+4Ch] [bp-158h]
  signed int v148; // [sp+50h] [bp-154h]
  int v149; // [sp+50h] [bp-154h]
  signed int v150; // [sp+54h] [bp-150h]
  _DWORD *v151; // [sp+58h] [bp-14Ch]
  int v152; // [sp+5Ch] [bp-148h]
  int v153; // [sp+5Ch] [bp-148h]
  unsigned int v154; // [sp+5Ch] [bp-148h]
  unsigned int v155; // [sp+60h] [bp-144h]
  const char *v156; // [sp+64h] [bp-140h]
  const char *v157; // [sp+68h] [bp-13Ch]
  unsigned int v158; // [sp+6Ch] [bp-138h]
  int v159; // [sp+70h] [bp-134h]
  unsigned __int16 v160; // [sp+78h] [bp-12Ch] BYREF
  __int16 v161; // [sp+7Ah] [bp-12Ah]
  int v162; // [sp+7Ch] [bp-128h] BYREF
  unsigned __int64 v163; // [sp+80h] [bp-124h] BYREF
  unsigned __int64 v164; // [sp+88h] [bp-11Ch] BYREF
  unsigned __int64 v165; // [sp+90h] [bp-114h] BYREF
  char v166[268]; // [sp+98h] [bp-10Ch] BYREF

  LODWORD(v2) = *(unsigned __int16 *)(a1 + 6);
  v162 = 0;
  ++sys_received;
  if ( !((_DWORD)v2 << 8) )
    goto LABEL_2;
  v3 = (_DWORD *)(a1 + 4);
  LODWORD(v2) = sub_40E20(a1 + 4, &v160);
  v4 = *(unsigned __int8 *)(a1 + 89);
  v5 = v160;
  if ( !*(_BYTE *)(a1 + 89) )
    v4 = 16;
  v137 = *(unsigned __int8 *)(a1 + 88);
  if ( (v160 & 1) != 0 )
    goto LABEL_52;
  v139 = v137 & 7;
  if ( v139 == 7 )
  {
    if ( ntp_mode7 && (v160 & 0x80) == 0 )
    {
      LODWORD(v2) = sub_40174(a1, ((v160 ^ 0x100u) >> 8) & 1);
      return v2;
    }
    goto LABEL_52;
  }
  if ( v139 == 6 )
  {
    if ( (v160 & 0x80) == 0 )
    {
      LODWORD(v2) = sub_233F0(a1, v160);
      return v2;
    }
    goto LABEL_52;
  }
  if ( (v160 & 2) != 0 )
    goto LABEL_52;
  if ( (v160 & 0x2000) != 0 )
  {
    LODWORD(v2) = sub_69A2C(v2, HIDWORD(v2));
    if ( (double)(int)v2 / 2147483650.0 < 0.1 )
      goto LABEL_52;
  }
  v141 = (v137 >> 3) & 7;
  if ( v141 == 4 )
  {
    ++sys_newversion;
    if ( (v137 & 7) == 0 )
      goto LABEL_2;
  }
  else
  {
    v6 = ((v5 ^ 8u) >> 3) & 1;
    if ( !v141 )
      v6 = 0;
    if ( !v6 )
      goto LABEL_2;
    ++sys_oldversion;
    if ( (v137 & 7) == 0 )
    {
      if ( v141 != 1 )
        goto LABEL_2;
      v139 = 3;
    }
  }
  v147 = (unsigned __int8 *)(a1 + 88);
  v7 = *(_DWORD *)(a1 + 84);
  v148 = v7 - 48;
  if ( v7 - 48 <= 0 )
  {
    v157 = 0;
    v153 = 48;
    v158 = 0;
  }
  else
  {
    LODWORD(v2) = v7 - 48;
    v8 = (((_BYTE)v7 - 48) & 3) != 0;
    if ( v7 - 48 <= 3 )
      v8 = 1;
    if ( v8 )
      goto LABEL_2;
    if ( v7 - 48 <= 24 )
    {
      v157 = 0;
      v153 = 48;
      v158 = 0;
LABEL_64:
      v20 = v153 + 3;
      v21 = __clz(v148);
      if ( v153 >= 0 )
        v20 = v153;
      v22 = v21 >> 5;
      s = (char *)bswap32(*(_DWORD *)&v147[4 * (v20 >> 2)]);
      goto LABEL_67;
    }
    v9 = *(_DWORD *)(a1 + 84);
    v10 = 48;
    v11 = v7 - 48;
    v149 = v4;
    v152 = v5;
    while ( 1 )
    {
      v13 = (unsigned int *)&v147[4 * (v10 / 4)];
      v14 = bswap32(*v13);
      v15 = v14 & 3;
      if ( (v14 & 3) != 0 )
        v15 = 1;
      if ( (unsigned __int16)v14 <= 3u )
        v15 |= 1u;
      if ( v15 )
        goto LABEL_2;
      v10 += (unsigned __int16)v14;
      if ( v9 < v10 )
        goto LABEL_2;
      LODWORD(v2) = 33619968;
      if ( (v14 & 0x3FFF0000) == 0x2010000 )
      {
        LODWORD(v2) = &GLOBAL_OFFSET_TABLE_;
        if ( sys_groupname )
        {
          v16 = bswap32(v13[4]);
          if ( v16 > 0x100 || (unsigned int)(unsigned __int16)v14 - 20 < v16 )
            goto LABEL_2;
          _memcpy_chk(v166, v13 + 5, v16, 257);
          v166[v16] = 0;
          LODWORD(v2) = strchr(v166, 64);
          if ( !(_DWORD)v2 )
            goto LABEL_76;
          v8 = v2 + 1;
        }
      }
      v11 -= (unsigned __int16)v14;
      if ( v11 <= 0 )
        break;
      v12 = v11 & 3;
      if ( (v11 & 3) != 0 )
        v12 = 1;
      if ( v11 <= 3 )
        v12 |= 1u;
      if ( v12 )
        goto LABEL_2;
      if ( v11 <= 24 )
      {
        v5 = v152;
        v3 = (_DWORD *)(a1 + 4);
        v153 = v10;
        v4 = v149;
        v157 = (const char *)v8;
        v148 = v11;
        v158 = v14;
        goto LABEL_64;
      }
    }
    v4 = v149;
    v5 = v152;
    v148 = v11;
    v153 = v10;
    v3 = (_DWORD *)(a1 + 4);
    v157 = (const char *)v8;
    v158 = v14;
  }
  if ( v148 )
  {
LABEL_2:
    ++sys_badlength;
    return v2;
  }
  v22 = 1;
  s = 0;
  if ( (v5 & 4) != 0 )
  {
    ++sys_restricted;
    return v2;
  }
LABEL_67:
  LODWORD(v2) = sub_314D4(a1, v5);
  v23 = v2;
  v145 = v2 & 0x40;
  if ( (v2 & 0x40) != 0 )
  {
    ++sys_limitrejected;
    if ( (v2 & 0x800) != 0 && (unsigned int)(v139 - 4) > 1 )
    {
      v24 = v2;
      v25 = (unsigned int)s;
      v26 = a1;
      if ( v139 == 3 )
LABEL_127:
        LODWORD(v2) = sub_C270(v26, 4, v25, v24);
      else
        LODWORD(v2) = sub_C270(a1, 1, (unsigned int)s, v24);
    }
    return v2;
  }
  v27 = sub_331D4(a1, v139, &v162);
  v28 = *(_DWORD *)(a1 + 128);
  v29 = *(_DWORD *)(a1 + 120);
  v30 = *(_DWORD *)(a1 + 124);
  v163 = __PAIR64__(bswap32(*(_DWORD *)(a1 + 116)), bswap32(*(_DWORD *)(a1 + 112)));
  v31 = bswap32(v28);
  v32 = *(_DWORD *)(a1 + 60);
  v33 = *(_DWORD *)(a1 + 132);
  v164 = _byteswap_uint64(__PAIR64__(v29, v30));
  v165 = __PAIR64__(bswap32(v33), v31);
  v151 = (_DWORD *)(v32 + 24);
  v140 = v27;
  v156 = (const char *)sub_6557C(v139);
  sub_33D54(v162);
  LODWORD(v2) = sub_33C5C((int *)v140, (_DWORD *)a1, v139);
  v159 = v2;
  if ( (_DWORD)v2 != 1 )
  {
    if ( v22 )
    {
      v34 = v145;
      v146 = v23 & 0xE7FF;
      v35 = v34;
      v155 = v34;
      v150 = v34;
      goto LABEL_80;
    }
    if ( (_DWORD)v2 == 2 )
    {
      v43 = v23 & 0xE7FF;
      v155 = 0;
      v150 = 0;
      v35 = 3;
      v146 = v43;
      goto LABEL_80;
    }
    v146 = v23 & 0xE7FF;
    if ( crypto_flags )
      v38 = (unsigned int)s >= 0x10000;
    else
      v38 = 0;
    if ( v38 )
    {
      if ( v148 <= 19 )
      {
LABEL_137:
        ++sys_badauth;
        return v2;
      }
      if ( v139 == 5 )
      {
        v50 = *(_DWORD **)(a1 + 60);
        if ( *(_WORD *)(a1 + 4) == 2 )
          v51 = any_interface;
        else
          v51 = any6_interface;
        if ( v50 == (_DWORD *)v51 )
          goto LABEL_52;
        if ( *((_WORD *)v50 + 40) == 2 )
        {
          v53 = v50[21] != 0;
        }
        else
        {
          if ( v50[22] )
          {
            LOBYTE(v52) = 0;
          }
          else
          {
            v52 = v50[23];
            if ( v52 )
            {
              v52 = v50[22];
            }
            else if ( !v50[24] )
            {
              LOBYTE(v52) = v50[25] == 0;
            }
          }
          v53 = ((unsigned __int8)v52 ^ 1) & 1;
        }
        if ( v53 )
          v151 = v50 + 20;
        v150 = 0;
      }
      else
      {
        if ( v140 )
          v150 = *(_DWORD *)(v140 + 168);
        else
          v150 = sub_27700(v3, v151, 0, sys_private, 0);
        v39 = v150 <= 0;
        if ( v150 )
          v39 = v153 <= 48;
        if ( !v39 )
        {
          sub_27700(v3, v151, (unsigned int)s, 0, 2);
          v155 = sub_27700(v3, v151, (unsigned int)s, v150, 0);
          goto LABEL_102;
        }
      }
      v155 = sub_27700(v3, v151, (unsigned int)s, v150, 2);
    }
    else
    {
      v155 = 0;
      v150 = 0;
    }
LABEL_102:
    LODWORD(v2) = sub_63770(s, v147, v153, v148);
    if ( (_DWORD)v2 )
      v35 = 1;
    else
      v35 = 2;
    if ( crypto_flags )
      v40 = (unsigned int)s >= 0x10000;
    else
      v40 = 0;
    if ( v40 )
      LODWORD(v2) = sub_630C4(s, 0);
LABEL_80:
    if ( v140 )
    {
      v36 = *(char **)(v140 + 124);
      if ( v36 )
      {
        if ( s != v36 )
          goto LABEL_52;
        v37 = v35 == 1;
        if ( v35 != 1 )
          v37 = v148 == 0;
        if ( !v37 )
          goto LABEL_52;
      }
    }
    v138 = v137 >> 6;
    switch ( v162 )
    {
      case 1:
        LODWORD(v2) = sub_C658(v157, *(const char **)(v140 + 80));
        if ( (_DWORD)v2 )
          goto LABEL_76;
        if ( v139 != 5 )
          goto LABEL_179;
        v115 = *(unsigned __int8 *)(a1 + 90);
        if ( v115 != *(unsigned __int8 *)(v140 + 94) )
        {
          v116 = (const char *)sub_6D2C0(v3);
          sub_65D40(
            6,
            "receive: broadcast poll from %s changed from %u to %u",
            v116,
            *(unsigned __int8 *)(v140 + 94),
            *(unsigned __int8 *)(a1 + 90));
          v115 = *(unsigned __int8 *)(a1 + 90);
        }
        if ( *(unsigned __int8 *)(v140 + 65) > v115 || *(unsigned __int8 *)(v140 + 66) < v115 )
        {
          v117 = 1;
          v118 = (const char *)sub_6D2C0(v3);
          sub_65D40(
            6,
            "receive: broadcast poll of %u from %s is out-of-range (%d to %d)!",
            v115,
            v118,
            *(unsigned __int8 *)(v140 + 65),
            *(unsigned __int8 *)(v140 + 66));
          LOBYTE(v115) = *(_BYTE *)(a1 + 90);
        }
        else
        {
          v117 = 0;
        }
        v119 = 1 << v115;
        if ( (*(_DWORD *)(v140 + 68) & 0x10) != 0 )
          v119 -= 3;
        if ( v119 > current_time - *(_DWORD *)(v140 + 732) )
        {
          v143 = v119;
          v120 = (const char *)sub_6D2C0(v3);
          ++v117;
          sub_65D40(
            6,
            "receive: broadcast packet from %s arrived after %lu, not %lu seconds!",
            v120,
            current_time - *(_DWORD *)(v140 + 732),
            v143);
        }
        if ( sys_bcpollbstep )
          v121 = *(unsigned __int8 *)(a1 + 90);
        else
          v121 = 0;
        if ( sys_bcpollbstep )
          v121 = ((unsigned __int8)sys_bcpollbstep << v121) + 2;
        v122 = *(_DWORD *)(v140 + 600);
        LODWORD(v2) = *(_DWORD *)(v140 + 604);
        if ( *(_QWORD *)(v140 + 600)
          && ((LODWORD(v2) = HIDWORD(v165) - v2, HIDWORD(v165) < (unsigned int)v2)
            ? (v123 = v165 - v122 - 1)
            : (v123 = v165 - v122),
              v123 < 0 && v121 > current_time - *(_DWORD *)(v140 + 732)) )
        {
          v124 = (const char *)sub_6D2C0(v3);
          LODWORD(v2) = sub_65D40(
                          6,
                          "receive: broadcast packet from %s contains non-monotonic timestamp: %#010x.%08x -> %#010x.%08x",
                          v124,
                          *(_DWORD *)(v140 + 600),
                          *(_DWORD *)(v140 + 604),
                          (_DWORD)v165,
                          HIDWORD(v165));
        }
        else if ( !v117 )
        {
          goto LABEL_179;
        }
        *(_DWORD *)(v140 + 728) = current_time;
        ++sys_declined;
        return v2;
      case 3:
        v44 = *(_DWORD *)(a1 + 60);
        if ( (*(_DWORD *)(v44 + 144) & 0x40) == 0 )
        {
          v45 = *(unsigned __int8 *)(a1 + 89);
          if ( !*(_BYTE *)(a1 + 89) )
            v45 = 16;
          LODWORD(v2) = sub_42EBC(
                          v3,
                          v44 + 24,
                          &v163,
                          &v164,
                          &v165,
                          a1 + 72,
                          *(unsigned __int8 *)(a1 + 88) >> 6,
                          (*(unsigned __int8 *)(a1 + 88) >> 3) & 7,
                          *(_BYTE *)(a1 + 88) & 7,
                          v45,
                          *(unsigned __int8 *)(a1 + 90),
                          *(char *)(a1 + 91),
                          *(_DWORD *)(a1 + 100),
                          *(_DWORD *)(a1 + 84) - 48,
                          a1 + 136);
          if ( (v146 & 4) != 0 )
            v46 = v35 == 1;
          else
            v46 = v35 <= 1;
          if ( !v46 )
          {
            if ( v35 == 2 )
            {
              LODWORD(v2) = sub_C270(a1, 4, 0, v146);
              goto LABEL_137;
            }
LABEL_52:
            ++sys_restricted;
            return v2;
          }
LABEL_126:
          v24 = v146;
          v26 = a1;
          v25 = (unsigned int)s;
          goto LABEL_127;
        }
        if ( !sys_manycastserver )
          goto LABEL_52;
        LODWORD(v2) = sub_C658(v157, 0);
        if ( (_DWORD)v2
          || sys_leap == 3
          || v4 <= (unsigned int)(unsigned __int8)sys_stratum
          || !sys_cohort && (unsigned __int8)sys_stratum == v4 + 1
          || *(_DWORD *)(v44 + 152) == *(_DWORD *)(a1 + 100) )
        {
LABEL_76:
          ++sys_declined;
          return v2;
        }
        if ( (v146 & 4) != 0 )
          v41 = v35 == 1;
        else
          v41 = v35 <= 1;
        if ( v41 )
        {
          v42 = *(unsigned __int8 *)(a1 + 89);
          if ( !*(_BYTE *)(a1 + 89) )
            v42 = 16;
          sub_42EBC(
            v3,
            v44 + 24,
            &v163,
            &v164,
            &v165,
            a1 + 72,
            *(unsigned __int8 *)(a1 + 88) >> 6,
            (*(unsigned __int8 *)(a1 + 88) >> 3) & 7,
            *(_BYTE *)(a1 + 88) & 7,
            v42,
            *(unsigned __int8 *)(a1 + 90),
            *(char *)(a1 + 91),
            *(_DWORD *)(a1 + 100),
            *(_DWORD *)(a1 + 84) - 48,
            a1 + 136);
          goto LABEL_126;
        }
        return v2;
      case 4:
        LODWORD(v2) = sub_C658(v157, 0);
        if ( (_DWORD)v2 )
          goto LABEL_76;
        LODWORD(v2) = sub_33140(a1);
        v54 = v2;
        if ( !(_DWORD)v2 )
          goto LABEL_52;
        if ( (*(_BYTE *)(v2 + 72) & 8) == 0 && sys_authenticate || (v146 & 0x14) != 0 ? v35 != 1 : v35 > 1 )
          goto LABEL_52;
        if ( v138 == 3 )
          goto LABEL_76;
        if ( v4 < sys_floor )
          goto LABEL_76;
        if ( v4 >= sys_ceiling )
          goto LABEL_76;
        LODWORD(v2) = sub_326DC(
                        (int)v3,
                        0,
                        *(_DWORD *)(a1 + 60),
                        v161,
                        3u,
                        v141,
                        *(_BYTE *)(v2 + 65),
                        *(_BYTE *)(v2 + 66),
                        *(_DWORD *)(v2 + 68) & 0x100 | 2,
                        65,
                        0,
                        (unsigned int)s,
                        sys_ident);
        if ( !(_DWORD)v2 )
          goto LABEL_76;
        if ( (*(_BYTE *)(v54 + 72) & 8) != 0 )
          *(_DWORD *)(v54 + 720) = current_time + 1;
        return v2;
      case 5:
        v17 = sys_ident;
        LODWORD(v2) = sub_C658(v157, (const char *)sys_ident);
        if ( (_DWORD)v2 )
          goto LABEL_76;
        if ( v146 & 0x14 | sys_authenticate )
          v18 = v35 != 1;
        else
          v18 = v35 > 1;
        if ( v18 )
        {
          if ( (v146 & 4) != 0 )
            v19 = v35 == 1;
          else
            v19 = v35 <= 1;
          if ( v19 )
          {
            LODWORD(v2) = sub_C270(a1, 2, (unsigned int)s, v146);
            return v2;
          }
          if ( v35 != 2 )
            goto LABEL_76;
          LODWORD(v2) = sub_C270(a1, 2, 0, v146);
          goto LABEL_52;
        }
        if ( (v146 & 0x20) != 0 || v138 != 3 && (v4 < sys_floor || v4 >= sys_ceiling) )
          goto LABEL_76;
        LODWORD(v2) = sub_326DC(
                        (int)v3,
                        0,
                        *(_DWORD *)(a1 + 60),
                        v161,
                        2u,
                        v141,
                        *(_BYTE *)(a1 + 90),
                        0xAu,
                        0,
                        1,
                        0,
                        (unsigned int)s,
                        v17);
        v140 = v2;
        if ( !(_DWORD)v2 )
          goto LABEL_76;
        goto LABEL_179;
      case 6:
        v125 = sys_ident;
        LODWORD(v2) = sub_C658(v157, (const char *)sys_ident);
        if ( (_DWORD)v2 )
          goto LABEL_76;
        if ( !sys_bclient )
          goto LABEL_52;
        if ( v146 & 0x14 | sys_authenticate ? v35 != 1 : v35 > 1 )
          goto LABEL_52;
        if ( v138 == 3 || v4 < sys_floor || v4 >= sys_ceiling )
          goto LABEL_76;
        v127 = crypto_flags && (unsigned int)s >= 0x10000;
        LODWORD(v2) = v127;
        if ( v127 && HIWORD(v158) << 16 != -2113863680 )
          goto LABEL_76;
        v128 = *(_DWORD *)(a1 + 60);
        if ( (*(_DWORD *)(v128 + 144) & 0x40) != 0 )
          v128 = 0;
        if ( sys_bdelay <= 0.0 )
        {
          LODWORD(v2) = sub_326DC(
                          (int)v3,
                          0,
                          v128,
                          v161,
                          3u,
                          v141,
                          *(_BYTE *)(a1 + 90),
                          *(_BYTE *)(a1 + 90),
                          274,
                          32,
                          0,
                          (unsigned int)s,
                          v125);
          v132 = v2;
          if ( (_DWORD)v2 )
          {
            LODWORD(v2) = v165;
            *(_QWORD *)(v132 + 600) = v165;
            if ( (unsigned int)s >= 0x10000 )
              LODWORD(v2) = sub_28650(v132, a1);
            return v2;
          }
          goto LABEL_52;
        }
        if ( (_DWORD)v2 )
          goto LABEL_52;
        LODWORD(v2) = sub_326DC(
                        (int)v3,
                        0,
                        v128,
                        v161,
                        6u,
                        v141,
                        *(_BYTE *)(a1 + 90),
                        *(_BYTE *)(a1 + 90),
                        2,
                        32,
                        0,
                        (unsigned int)s,
                        v125);
        v140 = v2;
        if ( !(_DWORD)v2 )
          goto LABEL_52;
        v2 = v165;
        *(double *)(v140 + 616) = sys_bdelay;
        *(_QWORD *)(v140 + 600) = v2;
LABEL_179:
        v56 = *(_DWORD *)(v140 + 68);
        if ( v35 != 3 )
        {
          if ( (v56 & 0x800) != 0 )
          {
            if ( (unsigned int)s < 0x10000 )
              goto LABEL_137;
          }
          else if ( (unsigned int)s >= 0x10000 )
          {
            goto LABEL_137;
          }
        }
        v57 = (*(_DWORD *)(v140 + 68) & 0x4000) == 0;
        if ( (v56 & 0x4000) != 0 )
          v56 &= ~0x4000u;
        v58 = *(_DWORD *)(v140 + 744) + 1;
        v59 = *(_DWORD *)(v140 + 300) & 0xFFFFFE00;
        *(_DWORD *)(v140 + 744) = v58;
        if ( !v57 )
          v58 = v140;
        *(_DWORD *)(v140 + 300) = v59;
        if ( !v57 )
        {
          *(_DWORD *)(v58 + 68) = v56;
          *(_DWORD *)(v58 + 300) = v59 | 4;
        }
        LODWORD(v2) = sub_33B64(v138, v4, v139, *(_DWORD *)(a1 + 100));
        v60 = v2;
        if ( v165 )
        {
          if ( v165 == *(_QWORD *)(v140 + 568) )
          {
            v105 = *(_DWORD *)(v140 + 764);
            *(_DWORD *)(v140 + 300) |= 1u;
            *(_DWORD *)(v140 + 764) = v105 + 1;
            return v2;
          }
          if ( v139 == 5 )
          {
            if ( (unsigned int)v4 > 0xF )
            {
              v104 = (const char *)sub_6D2C0(v140 + 16);
              LODWORD(v2) = sub_65D40(6, "receive: Unexpected stratum (%d) in broadcast from %s", v4, v104);
              return v2;
            }
          }
          else if ( (_DWORD)v2 )
          {
            v100 = v163;
            if ( !v163 || !v164 )
            {
              ++*(_DWORD *)(v140 + 760);
              v101 = (const char *)sub_6D2C0(v140 + 16);
              LODWORD(v2) = sub_65D40(
                              6,
                              "receive: KoD packet from %s has a zero org or rec timestamp.  Ignoring.",
                              v101);
              return v2;
            }
            v129 = v165 != v163;
            if ( (_DWORD)v165 != (_DWORD)v164 )
              v129 = 1;
            if ( HIDWORD(v165) == HIDWORD(v164) )
              v130 = v129;
            else
              v130 = v129 | 1;
            if ( v130 )
            {
              ++*(_DWORD *)(v140 + 760);
              v131 = (const char *)sub_6D2C0(v140 + 16);
              LODWORD(v2) = sub_65D40(
                              6,
                              "receive: KoD packet from %s has inconsistent xmt/org/rec timestamps.  Ignoring.",
                              v131);
              return v2;
            }
            v133 = *(_DWORD *)(v140 + 316);
            if ( v133 )
            {
              if ( v133 == 1 && v163 != *(_QWORD *)(v140 + 592) )
              {
                ++*(_DWORD *)(v140 + 760);
                v135 = (const char *)sub_6D2C0(v140 + 16);
                LODWORD(v2) = sub_65D40(
                                6,
                                "receive: flip 1 KoD origin timestamp %#010x.%08x from %s does not match interleave %#010"
                                "x.%08x - ignoring.",
                                (_DWORD)v100,
                                HIDWORD(v100),
                                v135,
                                *(_DWORD *)(v140 + 592),
                                *(_DWORD *)(v140 + 596));
                return v2;
              }
            }
            else if ( v163 != *(_QWORD *)(v140 + 584) )
            {
              ++*(_DWORD *)(v140 + 760);
              v134 = (const char *)sub_6D2C0(v140 + 16);
              LODWORD(v2) = sub_65D40(
                              6,
                              "receive: flip 0 KoD origin timestamp %#010x.%08x from %s does not match %#010x.%08x - ignoring.",
                              (_DWORD)v100,
                              HIDWORD(v100),
                              v134,
                              *(_DWORD *)(v140 + 584),
                              *(_DWORD *)(v140 + 588));
              return v2;
            }
          }
          else if ( *(_DWORD *)(v140 + 316) )
          {
            if ( v163 && v164 && *(_QWORD *)(v140 + 576) )
            {
              if ( v163 != *(_QWORD *)(v140 + 576) )
              {
                v112 = *(_DWORD *)(v140 + 300);
                v113 = *(_DWORD *)(v140 + 68) | 0x4000;
                ++*(_DWORD *)(v140 + 760);
                *(_DWORD *)(v140 + 68) = v113;
                *(_DWORD *)(v140 + 300) = v112 | 2;
              }
            }
            else
            {
              *(_DWORD *)(v140 + 300) |= 4u;
            }
          }
          else
          {
            if ( !v163 )
            {
              v102 = *(_DWORD *)(v140 + 300);
              ++*(_DWORD *)(v140 + 760);
              *(_DWORD *)(v140 + 300) = v102 | 2;
              v103 = (const char *)sub_6D2C0(v140 + 16);
              sub_65D40(
                6,
                "receive: %s 0 origin timestamp from %s@%s xmt %#010x.%08x",
                "Drop",
                v156,
                v103,
                bswap32(*(_DWORD *)(a1 + 128)),
                bswap32(*(_DWORD *)(a1 + 132)));
              goto LABEL_190;
            }
            v106 = *(_DWORD *)(v140 + 584);
            if ( (_DWORD)v163 == v106 )
            {
              v107 = *(_DWORD *)(v140 + 588);
              if ( HIDWORD(v163) == v107 )
              {
                *(_DWORD *)(v140 + 588) = 0;
                *(_DWORD *)(v140 + 584) = 0;
                goto LABEL_190;
              }
            }
            else
            {
              v107 = *(_DWORD *)(v140 + 588);
            }
            v108 = *(_DWORD *)(a1 + 116);
            v109 = *(_DWORD *)(v140 + 300) | 2;
            ++*(_DWORD *)(v140 + 760);
            *(_DWORD *)(v140 + 300) = v109;
            v154 = bswap32(v108);
            v142 = bswap32(*(_DWORD *)(a1 + 112));
            v110 = (const char *)sub_6D2C0(v140 + 16);
            sub_65D40(
              6,
              "receive: Unexpected origin timestamp %#010x.%08x does not match aorg %#010x.%08x from %s@%s xmt %#010x.%08x",
              v142,
              v154,
              v106,
              v107,
              v156,
              v110,
              bswap32(*(_DWORD *)(a1 + 128)),
              bswap32(*(_DWORD *)(a1 + 132)));
            v111 = *(_QWORD *)(v140 + 576);
            if ( v111 && v111 == v163 )
            {
              if ( dynamic_interleave )
              {
                *(_DWORD *)(v140 + 316) = 1;
                sub_26294(142, v140, 0);
              }
              else
              {
                v114 = (const char *)sub_6D2C0(v140 + 16);
                sub_65D40(6, "receive: Dynamic interleave from %s@%s denied", v156, v114);
              }
            }
          }
        }
        else
        {
          *(_DWORD *)(v140 + 300) |= 4u;
          if ( (_DWORD)v2 )
          {
            ++*(_DWORD *)(v140 + 760);
            v66 = (const char *)sub_6D2C0(v140 + 16);
            LODWORD(v2) = sub_65D40(6, "receive: Unexpected zero transmit timestamp in KoD from %s", v66);
            return v2;
          }
        }
LABEL_190:
        if ( v159 == 2 )
        {
          LODWORD(v2) = sub_26294(140, v140, "crypto_NAK");
          HIDWORD(v2) = *(_DWORD *)(v140 + 68);
          v65 = *(_DWORD *)(v140 + 752);
          *(_DWORD *)(v140 + 300) |= 0x10u;
          *(_DWORD *)(v140 + 752) = v65 + 1;
          if ( (v2 & 0x200000000LL) != 0 )
          {
            if ( !unpeer_crypto_nak_early )
              return v2;
            goto LABEL_204;
          }
          if ( !*(_DWORD *)(v140 + 136) )
            return v2;
          goto LABEL_207;
        }
        v61 = v148;
        if ( v148 )
          v61 = 1;
        v62 = v148 == 0;
        if ( !v148 )
          v62 = *(_DWORD *)(v140 + 124) == 0;
        if ( v62 && (v146 & 4) == 0 )
          v63 = v35 > 1;
        else
          v63 = v35 != 1;
        if ( v63 )
        {
          if ( (*(_DWORD *)(v140 + 300) & 0x1FF) != 0 )
          {
            v64 = (const char *)sub_6D2C0(v140 + 16);
            LODWORD(v2) = sub_65D40(6, "receive: Bad auth in packet with bad timestamps from %s denied - spoof?", v64);
            return v2;
          }
          LODWORD(v2) = sub_26294(140, v140, "digest");
          v67 = *(_DWORD *)(v140 + 752);
          *(_DWORD *)(v140 + 300) |= 0x10u;
          *(_DWORD *)(v140 + 752) = v67 + 1;
          if ( v61 && (unsigned int)(v139 - 1) <= 1 )
            LODWORD(v2) = sub_C270(a1, 1, 0, v146);
          if ( (*(_DWORD *)(v140 + 68) & 2) != 0 )
          {
            if ( !unpeer_digest_early )
              return v2;
            goto LABEL_204;
          }
          if ( !peer_clear_digest_early || !*(_DWORD *)(v140 + 136) )
            return v2;
LABEL_207:
          LODWORD(v2) = sub_367D8(v140, (int *)"AUTH");
          return v2;
        }
        if ( v139 == 5 )
        {
          if ( (int)v35 <= 1 )
          {
            v72 = *(_DWORD *)(v140 + 68);
            if ( v163 )
            {
              if ( (v72 & 0x2000) == 0 )
              {
                v73 = (_DWORD *)(a1 + 72);
                v74 = (const char *)sub_6D2C0(v140 + 16);
                sub_65D40(6, "receive: Broadcast server at %s is in interleave mode", v74);
                v75 = v165;
                *(_DWORD *)(v140 + 68) |= 0x2000u;
                *(_QWORD *)(v140 + 584) = v75;
                HIDWORD(v75) = v73[1];
                *(_DWORD *)(v140 + 592) = *v73;
                *(_DWORD *)(v140 + 596) = HIDWORD(v75);
                LODWORD(v2) = sub_26294(142, v140, 0);
                return v2;
              }
            }
            else if ( (v72 & 0x2000) != 0 )
            {
              v95 = (const char *)sub_6D2C0(v140 + 16);
              sub_65D40(6, "receive: Broadcast server at %s is no longer in interleave mode", v95);
              *(_DWORD *)(v140 + 68) &= ~0x2000u;
            }
          }
          else
          {
            v70 = (const char *)sub_6D2C0(v140 + 16);
            sub_65D40(6, "receive: Bad broadcast auth (%d) from %s", v35, v70);
          }
          v71 = *(_DWORD *)(v140 + 316);
          *(_QWORD *)(v140 + 600) = v165;
          if ( v71 )
          {
LABEL_218:
            LODWORD(v2) = v165;
            v69 = *(unsigned __int8 *)(v140 + 65);
            *(_QWORD *)(v140 + 568) = v165;
            if ( v69 < *(unsigned __int8 *)(a1 + 90) )
              LOBYTE(v69) = *(_BYTE *)(a1 + 90);
            *(_BYTE *)(v140 + 94) = v69;
            if ( v60 == 1 )
            {
              ++*(_DWORD *)(v140 + 772);
              sub_26294(135, v140, 0);
              v93 = *(unsigned __int8 *)(v140 + 65);
              if ( *(unsigned __int8 *)(a1 + 90) > v93 )
              {
                v94 = *(_BYTE *)(v140 + 94);
                *(_BYTE *)(v140 + 65) = v94;
                LOBYTE(v93) = v94;
              }
              *(_DWORD *)(v140 + 312) = 0;
              *(_DWORD *)(v140 + 712) = 9 << v93;
              *(_DWORD *)(v140 + 308) = 0;
              LODWORD(v2) = sub_348C4(v140, *(unsigned __int8 *)(a1 + 90));
              return v2;
            }
            if ( v60 )
            {
              ++*(_DWORD *)(v140 + 772);
              return v2;
            }
            v76 = 1 << (v139 - 1);
            if ( (v76 & 0x64) == 0 )
            {
              if ( (v76 & 0x1B) != 0 )
              {
                v77 = v35 == 1;
                if ( !s )
                  v77 = 0;
                if ( v77 )
                {
                  if ( (unsigned int)s < 0x10000 && !sub_632AC(s, v140 + 16) )
                  {
                    LODWORD(v2) = sub_26294(140, v140, "authIP");
                    ++*(_DWORD *)(v140 + 752);
                    return v2;
                  }
                  v78 = current_time;
                  *(_DWORD *)(v140 + 732) = current_time;
                  *(_DWORD *)(v140 + 728) = v78;
                  goto LABEL_240;
                }
              }
              else
              {
                v91 = (const char *)sub_6D2C0(v140 + 16);
                sub_65D40(6, "receive: Unexpected mode (%d) in packet from %s", v139, v91);
              }
            }
            v92 = current_time;
            *(_DWORD *)(v140 + 732) = current_time;
            *(_DWORD *)(v140 + 728) = v92;
            if ( v35 != 1 )
            {
              v79 = *(_DWORD *)(v140 + 68) & 0xFFFFFFFB;
              *(_DWORD *)(v140 + 68) = v79;
LABEL_241:
              if ( (v79 & 0x800) != 0 )
              {
                v80 = *(_DWORD **)(v140 + 220);
                if ( v80 )
                {
                  v81 = v80[1];
                  if ( v81 > 0 )
                    v80[1] = v81 - 1;
                }
                *(_DWORD *)(v140 + 300) |= 0x80u;
                LODWORD(v2) = sub_28650(v140, a1);
                if ( (_DWORD)v2 != 256 )
                {
                  if ( (_DWORD)v2 != 271 )
                    return v2;
                  sub_26294(133, v140, "crypto error");
                  LODWORD(v2) = sub_367D8(v140, (int *)"CRYP");
                  v82 = *(_DWORD *)(v140 + 68);
                  *(_DWORD *)(v140 + 300) |= 0x100u;
                  if ( (v82 & 2) == 0 || !unpeer_crypto_early )
                    return v2;
LABEL_204:
                  LODWORD(v2) = sub_324CC(v140);
                  return v2;
                }
                v90 = 0;
                *(_DWORD *)(v140 + 708) = 0;
                if ( v139 == 4 )
                {
                  if ( *(char **)(v140 + 124) == s )
                    *(_DWORD *)(v140 + 300) &= ~0x80u;
                }
                else if ( (*(_DWORD *)(v140 + 300) & 0x80) != 0 )
                {
                  if ( v80 )
                  {
                    for ( i = v155; *(_DWORD *)(v140 + 160) != i && *v80 != i; i = sub_27700(v3, v151, i, v150, 0) )
                    {
                      if ( v90 > v80[1] )
                      {
                        v97 = *(_DWORD *)(v140 + 300);
                        *(_DWORD *)(v140 + 136) &= ~0x1000u;
                        goto LABEL_286;
                      }
                      ++v90;
                    }
                    v98 = v80[1];
                    v99 = *(_DWORD *)(v140 + 300);
                    *(_DWORD *)(v140 + 160) = s;
                    v97 = v99 & 0xFFFFFF7F;
                    *(_DWORD *)(v140 + 300) = v97;
                    v80[1] = v98 - v90;
LABEL_286:
                    if ( (v97 & 0x80) != 0 )
                      sub_26294(140, v140, "keylist");
                  }
                }
                else
                {
                  *(_DWORD *)(v140 + 160) = s;
                }
                if ( (*(_DWORD *)(v140 + 136) & 0x400) == 0 )
                  *(_DWORD *)(v140 + 300) |= 0x80u;
                if ( *(_DWORD *)(v140 + 236) < (unsigned int)current_time )
                {
                  sub_26294(133, v140, "crypto refresh");
                  LODWORD(v2) = sub_367D8(v140, (int *)"TIME");
                  return v2;
                }
              }
              LODWORD(v2) = sub_35FA0(v140, v147, *(_DWORD *)(a1 + 84));
              if ( *(_DWORD *)(v140 + 316) )
              {
                v83 = *(unsigned __int8 *)(v140 + 94);
                v84 = *(unsigned __int8 *)(v140 + 64);
                v85 = (unsigned __int64 *)(a1 + 72);
                v86 = v140;
                v87 = current_time;
                if ( v83 >= v84 )
                  v86 = *(_BYTE *)(v140 + 64);
                *(_QWORD *)(v140 + 560) = v164;
                v2 = *v85;
                if ( v83 < v84 )
                  v86 = v83;
                v88 = *(_DWORD *)(v140 + 720);
                *(_QWORD *)(v140 + 576) = v2;
                if ( v88 - v87 >= (unsigned int)(1 << v86) >> 1 )
                  v89 = v88 - 1;
                else
                  v89 = v88 + 1;
                *(_DWORD *)(v140 + 720) = v89;
              }
              return v2;
            }
LABEL_240:
            v79 = *(_DWORD *)(v140 + 68) | 4;
            *(_DWORD *)(v140 + 68) = v79;
            goto LABEL_241;
          }
        }
        else
        {
          if ( *(_DWORD *)(v140 + 316) )
            goto LABEL_218;
          *(_QWORD *)(v140 + 560) = v165;
        }
        v68 = *(_DWORD *)(a1 + 76);
        *(_DWORD *)(v140 + 576) = *(_DWORD *)(a1 + 72);
        *(_DWORD *)(v140 + 580) = v68;
        goto LABEL_218;
      default:
        goto LABEL_76;
    }
  }
  sub_26294(140, v140, "Invalid_NAK");
  if ( v140 )
    ++*(_DWORD *)(v140 + 756);
  v47 = current_time;
  v48 = (const char *)sub_6D2C0(v151);
  v49 = (const char *)sub_6D2C0(v3);
  LODWORD(v2) = sub_65D40(3, "Invalid-NAK error at %ld %s<-%s", v47, v48, v49);
  return v2;
}
