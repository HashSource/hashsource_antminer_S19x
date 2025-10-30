int __fastcall sub_1E3D7C(int a1, _DWORD *a2)
{
  int v4; // r0
  __int64 v5; // kr08_8
  int *v6; // r9
  int v7; // r0
  int v8; // r0
  int v9; // r2
  unsigned __int8 *v10; // r4
  unsigned __int64 v11; // r2
  bool v12; // cc
  int v13; // r1
  int v14; // r1
  int v15; // r2
  int result; // r0
  int v17; // r4
  unsigned int v18; // r0
  int v19; // r3
  int v20; // r2
  char *v21; // r6
  int v22; // r7
  char *v23; // r0
  unsigned __int8 *v24; // r4
  const char *v25; // r2
  char *v26; // r3
  int v27; // t1
  int v28; // r1
  int v29; // t1
  int v30; // r1
  int v31; // r2
  const char *v32; // r6
  unsigned __int8 *v33; // r0
  int v34; // r1
  int v35; // r2
  unsigned __int8 *v36; // r12
  const char *v37; // r2
  unsigned __int8 *v38; // r3
  int v39; // r0
  int v40; // r1
  int v41; // t1
  int v42; // r3
  const char *v43; // r2
  unsigned __int8 *v44; // r3
  int v45; // r0
  int v46; // r1
  int v47; // t1
  const char *v48; // r3
  int v49; // r2
  int v50; // t1
  int v51; // r1
  unsigned __int8 *v52; // r0
  unsigned __int8 *v53; // r3
  unsigned __int8 *v54; // r2
  int v55; // r1
  int v56; // t1
  int v57; // r12
  char *v58; // r1
  unsigned __int8 *v59; // r2
  int v60; // r7
  int v61; // t1
  int v62; // r0
  char *v63; // r1
  int v64; // r2
  int v65; // t1
  int v66; // r0
  __int64 v67; // r2
  const char *v68; // r2
  unsigned __int8 *v69; // r3
  int v70; // r0
  int v71; // r1
  int v72; // t1
  unsigned __int8 *v73; // r12
  const char *v74; // r2
  unsigned __int8 *v75; // r3
  int v76; // r0
  int v77; // r1
  int v78; // t1
  const char *v79; // r3
  int v80; // r1
  int v81; // r2
  int v82; // t1
  int v83; // r3
  const char *v84; // r2
  unsigned __int8 *v85; // r3
  int v86; // t1
  int v87; // r0
  unsigned __int8 *v88; // r4
  unsigned __int8 *v89; // r3
  int v90; // kr00_4
  int v91; // r7
  int v92; // r6
  int v93; // r12
  int v94; // r3
  unsigned int v95; // r6
  unsigned __int8 *v96; // r4
  size_t v97; // r0
  _BYTE *v98; // r7
  int v99; // r0
  int v100; // r0
  int v101; // r4
  int v102; // r0
  int v103; // r1
  unsigned int *v104; // r2
  int v105; // r3
  char *v106; // r0
  int v107; // r0
  const char *v108; // r2
  unsigned __int8 *v109; // r3
  int v110; // r0
  int v111; // r1
  int v112; // t1
  char *v113; // r3
  unsigned __int8 *v114; // r2
  int v115; // r0
  int v116; // r1
  int v117; // t1
  int v118; // r0
  int v119; // r1
  int v120; // r2
  char *v121; // r3
  unsigned __int8 *v122; // r2
  int v123; // r0
  int v124; // r1
  int v125; // t1
  const char *v126; // r3
  unsigned __int8 *v127; // r2
  int v128; // r0
  int v129; // r1
  int v130; // t1
  int v131; // r1
  int v132; // r2
  const char *v133; // r3
  unsigned __int8 *v134; // r2
  int v135; // r0
  int v136; // r1
  int v137; // t1
  int v138; // r1
  int v139; // r2
  int v140; // [sp+Ch] [bp-1040h]
  int v141; // [sp+10h] [bp-103Ch]
  __int64 v142; // [sp+18h] [bp-1034h]
  int v143; // [sp+18h] [bp-1034h]
  int v144; // [sp+20h] [bp-102Ch] BYREF
  int v145; // [sp+24h] [bp-1028h]
  int v146; // [sp+28h] [bp-1024h]
  const char *v147; // [sp+34h] [bp-1018h] BYREF
  unsigned int v148; // [sp+38h] [bp-1014h] BYREF
  unsigned __int64 v149; // [sp+40h] [bp-100Ch] BYREF
  _QWORD v150[512]; // [sp+48h] [bp-1004h] BYREF

  v4 = dword_475848;
  v5 = qword_47584C;
  v6 = a2 + 1;
  a2[1] = dword_475848;
  *((_QWORD *)a2 + 1) = v5;
  v7 = sub_16F654(v4);
  ((void (__fastcall *)(int))loc_1E2770)(v7);
  v8 = 11;
  v9 = dword_488C94;
  a2[5] = 11;
  a2[13] = -1;
  a2[4] = v9;
  a2[6] = 0;
  a2[11] = 0;
  a2[10] = 0;
  switch ( *(_BYTE *)a1 )
  {
    case 'N':
      a2[5] = 13;
      v8 = qword_46BBCC;
      v20 = dword_46BBD4;
      *(_QWORD *)v6 = qword_46BBCC;
      a2[3] = v20;
      goto LABEL_14;
    case 'S':
      goto LABEL_17;
    case 'T':
      v21 = (char *)(a1 + 3);
      v141 = 0;
      v140 = 0;
      v147 = (const char *)(a1 + 3);
      break;
    case 'W':
    case 'X':
      v10 = sub_99188((unsigned __int8 *)(a1 + 1), (unsigned int *)&v149);
      if ( *(_BYTE *)a1 == 87 )
      {
        HIDWORD(v67) = v149;
        LODWORD(v67) = 0;
        *(_QWORD *)(a2 + 5) = v67;
      }
      else
      {
        v11 = v149;
        a2[5] = 2;
        v12 = v11 > 0x97;
        if ( v11 <= 0x97 )
          a2[6] = v11;
        else
          HIDWORD(v11) = 143;
        if ( v12 )
          a2[6] = HIDWORD(v11);
      }
      v13 = ps_getpid_0((int)&qword_4878EC);
      if ( !*v10 )
        goto LABEL_13;
      if ( *v10 != 59 )
        goto LABEL_79;
      if ( v10[1] )
      {
        if ( strncmp((const char *)v10 + 1, "process:", 8u) )
LABEL_79:
          sub_946E0("unknown stop reply packet: %s", (const char *)a1);
        sub_99188(v10 + 9, (unsigned int *)v150);
        v13 = v150[0];
      }
LABEL_13:
      sub_98F50(&v144, v13);
      v8 = v144;
      v14 = v145;
      v15 = v146;
      *v6 = v144;
      a2[2] = v14;
      a2[3] = v15;
      goto LABEL_14;
    case 'w':
      a2[5] = 15;
      v33 = sub_99188((unsigned __int8 *)(a1 + 1), (unsigned int *)v150);
      a2[6] = v150[0];
      if ( *v33 != 59 )
        sub_946E0("stop reply packet badly formatted: %s", (const char *)a1);
      sub_1E13D4((int)&v144, v33 + 1, 0);
      v8 = v144;
      v34 = v145;
      v35 = v146;
      *v6 = v144;
      a2[2] = v34;
      a2[3] = v35;
      goto LABEL_14;
    default:
      goto LABEL_14;
  }
  while ( 1 )
  {
    v22 = (unsigned __int8)*v21;
    if ( !*v21 )
      break;
    v23 = strchr(v21, 58);
    v24 = (unsigned __int8 *)v23;
    if ( !v23 )
      sub_946E0("Malformed packet(a) (missing colon): %s\nPacket: '%s'\n", v21, (const char *)a1);
    if ( v23 == v21 )
      sub_946E0("Malformed packet(a) (missing register number): %s\nPacket: '%s'\n", v21, (const char *)a1);
    if ( v23 <= v21 )
      goto LABEL_59;
    switch ( v22 )
    {
      case 't':
        v25 = "thread";
        v26 = v21;
        while ( 1 )
        {
          v29 = *(unsigned __int8 *)++v25;
          v28 = v29;
          if ( v26 == v23 - 1 )
            break;
          v27 = (unsigned __int8)*++v26;
          if ( v27 != v28 )
            goto LABEL_59;
        }
        if ( !v28 )
        {
          sub_1E13D4((int)&v144, (unsigned __int8 *)v23 + 1, (unsigned __int8 **)&v147);
          v8 = v144;
          v30 = v145;
          v31 = v146;
          v32 = v147;
          *v6 = v144;
          a2[2] = v30;
          a2[3] = v31;
          goto LABEL_38;
        }
        goto LABEL_59;
      case 's':
        v36 = (unsigned __int8 *)(v21 + 1);
        v37 = "syscall_entry";
        v38 = (unsigned __int8 *)(v21 + 1);
        while ( 1 )
        {
          v41 = *(unsigned __int8 *)++v37;
          v40 = v41;
          if ( v24 <= v38 )
            break;
          v39 = *v38++;
          if ( v39 != v40 )
            goto LABEL_51;
        }
        if ( !v40 )
        {
          v42 = 8;
LABEL_49:
          a2[5] = v42;
          v8 = (int)sub_99188(v24 + 1, (unsigned int *)v150);
          v32 = (const char *)v8;
          v147 = (const char *)v8;
          a2[6] = v150[0];
          goto LABEL_38;
        }
        if ( v24 > (unsigned __int8 *)v21 )
        {
LABEL_51:
          v43 = "syscall_return";
          v44 = (unsigned __int8 *)(v21 + 1);
          while ( 1 )
          {
            v47 = *(unsigned __int8 *)++v43;
            v46 = v47;
            if ( v24 <= v44 )
              break;
            v45 = *v44++;
            if ( v45 != v46 )
              goto LABEL_56;
          }
          if ( !v46 )
          {
            v42 = 9;
            goto LABEL_49;
          }
          if ( v24 > (unsigned __int8 *)v21 )
          {
LABEL_56:
            v48 = "swbreak";
            while ( 1 )
            {
              v50 = *(unsigned __int8 *)++v48;
              v49 = v50;
              if ( v24 <= v36 )
                break;
              v51 = *v36++;
              if ( v51 != v49 )
                goto LABEL_59;
            }
            if ( !v49 )
            {
              a2[11] = 1;
              if ( ((int (__fastcall *)(int, unsigned __int8 *))loc_1E2198)(79, v36) != 1 )
                sub_946E0("Unexpected swbreak stop reason");
LABEL_75:
              v8 = strchrnul(v24 + 1, 59);
              v32 = (const char *)v8;
              v147 = (const char *)v8;
              goto LABEL_38;
            }
          }
        }
        goto LABEL_59;
      case 'w':
        v68 = "watch";
        v69 = (unsigned __int8 *)(v21 + 1);
        while ( 1 )
        {
          v72 = *(unsigned __int8 *)++v68;
          v71 = v72;
          if ( v69 >= v24 )
            goto LABEL_86;
          v70 = *v69++;
          if ( v70 != v71 )
            goto LABEL_59;
        }
      case 'r':
        v73 = (unsigned __int8 *)(v21 + 1);
        v74 = "rwatch";
        v75 = (unsigned __int8 *)(v21 + 1);
        while ( 1 )
        {
          v78 = *(unsigned __int8 *)++v74;
          v77 = v78;
          if ( v24 <= v75 )
            break;
          v76 = *v75++;
          if ( v76 != v77 )
            goto LABEL_95;
        }
        if ( !v77 )
        {
LABEL_87:
          a2[11] = 3;
          v8 = (int)sub_99188(v24 + 1, &v148);
          v32 = (const char *)v8;
          v147 = (const char *)v8;
          a2[12] = v148;
          goto LABEL_38;
        }
        if ( v24 > (unsigned __int8 *)v21 )
        {
LABEL_95:
          v79 = "replaylog";
          while ( 1 )
          {
            v82 = *(unsigned __int8 *)++v79;
            v81 = v82;
            if ( v24 <= v73 )
              break;
            v80 = *v73++;
            if ( v80 != v81 )
              goto LABEL_59;
          }
          if ( !v81 )
          {
            v83 = 12;
LABEL_101:
            a2[5] = v83;
            v8 = strchrnul(v24 + 1, 59);
            v32 = (const char *)v8;
            v147 = (const char *)v8;
            goto LABEL_38;
          }
        }
LABEL_59:
        v52 = (unsigned __int8 *)&unk_3D5B67;
        v53 = (unsigned __int8 *)v21;
        v54 = (unsigned __int8 *)v21;
        while ( 1 )
        {
          v56 = *++v52;
          v55 = v56;
          if ( v24 <= v54 )
            break;
          v57 = *v54++;
          if ( v57 != v55 )
            goto LABEL_62;
        }
        if ( !v55 )
        {
          v83 = 7;
          goto LABEL_101;
        }
LABEL_62:
        v58 = "-exec";
        v59 = (unsigned __int8 *)v21;
        while ( 1 )
        {
          v61 = (unsigned __int8)*++v58;
          v60 = v61;
          if ( v24 <= v59 )
            break;
          v62 = *v59++;
          if ( v62 != v60 )
            goto LABEL_65;
        }
        if ( !v60 )
        {
          v88 = v24 + 1;
          v141 = 1;
          v89 = sub_99188(v88, (unsigned int *)&v149);
          v90 = v89 - v88;
          v147 = (const char *)v89;
          sub_991F8(v88, v150, (v89 - v88) / 2);
          *((_BYTE *)v150 + v90 / 2) = 0;
          v8 = sub_327254(v150);
          a2[6] = v8;
          a2[5] = 6;
          v32 = v147;
          goto LABEL_38;
        }
LABEL_65:
        v63 = "-create";
        while ( 1 )
        {
          v65 = (unsigned __int8)*++v63;
          v64 = v65;
          if ( v24 <= v53 )
            break;
          v66 = *v53++;
          if ( v66 != v64 )
            goto LABEL_68;
        }
        if ( !v64 )
        {
          v83 = 14;
          goto LABEL_101;
        }
LABEL_68:
        if ( !v141 )
        {
          if ( v24 != sub_99188((unsigned __int8 *)v21, (unsigned int *)v150) )
          {
            v8 = strchrnul(v24 + 1, 59);
            v147 = (const char *)v8;
            goto LABEL_71;
          }
          if ( a2[1] == dword_475848 && a2[2] == (_DWORD)qword_47584C )
          {
            v94 = a2[3];
            if ( v94 != HIDWORD(qword_47584C) )
            {
              if ( v140 )
                goto LABEL_120;
              goto LABEL_127;
            }
            v118 = sub_338BD4(v24 + 1, ";thread:");
            if ( v118 )
            {
              sub_1E13D4((int)&v144, (unsigned __int8 *)(v118 + 8), 0);
              v119 = v145;
              v120 = v146;
              *v6 = v144;
            }
            else
            {
              v119 = *(_DWORD *)(a2[4] + 64);
              v120 = *(_DWORD *)(a2[4] + 68);
              *v6 = *(_DWORD *)(a2[4] + 60);
            }
            a2[2] = v119;
            a2[3] = v120;
            if ( v140 )
              goto LABEL_120;
            if ( a2[1] == dword_475848 && a2[2] == (_DWORD)qword_47584C )
            {
              v94 = a2[3];
LABEL_127:
              if ( v94 == HIDWORD(qword_47584C) )
                goto LABEL_128;
            }
          }
          else if ( v140 )
          {
            goto LABEL_120;
          }
          v107 = sub_183A88(*v6, a2[2], a2[3]);
          if ( v107 )
          {
            a2[9] = *(_DWORD *)(v107 + 168);
            v140 = ((int (*)(void))loc_1E2770)();
LABEL_120:
            v91 = a2[9];
            v92 = 0;
            v142 = v150[0];
            while ( 1 )
            {
              if ( ((int (__fastcall *)(int))loc_166E9C)(v91) <= v92 )
              {
                v106 = sub_98B08(v150[0], SHIDWORD(v150[0]));
                sub_946E0("Remote sent bad register number %s: %s\nPacket: '%s'\n", v106, v147, (const char *)a1);
              }
              v93 = *(_DWORD *)(v140 + 4) + 24 * v92;
              if ( v142 == *(_QWORD *)(v93 + 8) )
                break;
              ++v92;
            }
            v95 = *(_DWORD *)(v93 + 4);
            v96 = v24 + 1;
            v143 = v93;
            v97 = ((int (__fastcall *)(_DWORD, unsigned int))loc_1DD420)(a2[9], v95);
            v98 = sub_93028(v97);
            v99 = a2[9];
            v147 = (const char *)v96;
            v100 = ((int (__fastcall *)(int, _DWORD))loc_1DD420)(v99, *(_DWORD *)(v143 + 4));
            v101 = (int)sub_991F8(v96, v98, v100);
            v102 = a2[9];
            v103 = *(_DWORD *)(v143 + 4);
            v147 += 2 * v101;
            v8 = ((int (__fastcall *)(int, int))loc_1DD420)(v102, v103);
            if ( v101 < v8 )
              v8 = sub_946B0("Remote reply is too short: %s", a1);
            v104 = (unsigned int *)a2[10];
            if ( !v104 || v104[1] == *v104 )
              goto LABEL_137;
            while ( *v104 >= v104[1] )
            {
              sub_94700(
                (int)"remote.c",
                6996,
                "%s: Assertion `%s' failed.",
                "cached_reg_t* VEC_cached_reg_t_quick_push(VEC_cached_reg_t*, const cached_reg_t*, const char*, unsigned int)",
                "quick_push");
LABEL_137:
              v8 = (int)sub_99EB8(v104, 1, 8, 8);
              v104 = (unsigned int *)v8;
              a2[10] = v8;
            }
            v105 = *v104 + 1;
            *v104 = v105;
            v104[2 * v105] = v95;
            v104[2 * v105 + 1] = (unsigned int)v98;
LABEL_71:
            v32 = v147;
            goto LABEL_38;
          }
        }
LABEL_128:
        v8 = strchrnul(v24 + 1, 59) + 1;
        v147 = (const char *)v8;
        v21 = (char *)v8;
        break;
      default:
        switch ( v22 )
        {
          case 'a':
            v84 = "awatch";
            v85 = (unsigned __int8 *)(v21 + 1);
            while ( 1 )
            {
              v86 = *(unsigned __int8 *)++v84;
              v71 = v86;
              if ( v24 <= v85 )
                break;
              v87 = *v85++;
              if ( v87 != v71 )
                goto LABEL_59;
            }
LABEL_86:
            if ( !v71 )
              goto LABEL_87;
            goto LABEL_59;
          case 'h':
            v108 = "hwbreak";
            v109 = (unsigned __int8 *)(v21 + 1);
            while ( 1 )
            {
              v112 = *(unsigned __int8 *)++v108;
              v111 = v112;
              if ( v24 <= v109 )
                break;
              v110 = *v109++;
              if ( v110 != v111 )
                goto LABEL_59;
            }
            if ( !v111 )
            {
              a2[11] = 2;
              if ( ((int (__fastcall *)(int, _DWORD, const char *))loc_1E2198)(80, 0, v108) != 1 )
                sub_946E0("Unexpected hwbreak stop reason");
              goto LABEL_75;
            }
            goto LABEL_59;
          case 'l':
            v113 = "library";
            v114 = (unsigned __int8 *)(v21 + 1);
            while ( 1 )
            {
              v117 = (unsigned __int8)*++v113;
              v116 = v117;
              if ( v24 <= v114 )
                break;
              v115 = *v114++;
              if ( v115 != v116 )
                goto LABEL_59;
            }
            if ( !v116 )
            {
              v83 = 3;
              goto LABEL_101;
            }
            goto LABEL_59;
          case 'c':
            v121 = "core";
            v122 = (unsigned __int8 *)(v21 + 1);
            while ( 1 )
            {
              v125 = (unsigned __int8)*++v121;
              v124 = v125;
              if ( v24 <= v122 )
                break;
              v123 = *v122++;
              if ( v123 != v124 )
                goto LABEL_59;
            }
            if ( v124 )
              goto LABEL_59;
            v8 = (int)sub_99188(v24 + 1, (unsigned int *)v150);
            v32 = (const char *)v8;
            v147 = (const char *)v8;
            a2[13] = v150[0];
            break;
          case 'f':
            v126 = "fork";
            v127 = (unsigned __int8 *)(v21 + 1);
            while ( 1 )
            {
              v130 = *(unsigned __int8 *)++v126;
              v129 = v130;
              if ( v24 <= v127 )
                break;
              v128 = *v127++;
              if ( v128 != v129 )
                goto LABEL_59;
            }
            if ( v129 )
              goto LABEL_59;
            sub_1E13D4((int)&v144, v24 + 1, (unsigned __int8 **)&v147);
            v8 = v144;
            v131 = v145;
            v132 = v146;
            v32 = v147;
            a2[6] = v144;
            a2[7] = v131;
            a2[8] = v132;
            a2[5] = 4;
            break;
          case 'v':
            v133 = "vfork";
            v134 = (unsigned __int8 *)(v21 + 1);
            while ( 1 )
            {
              v137 = *(unsigned __int8 *)++v133;
              v136 = v137;
              if ( v24 <= v134 )
                break;
              v135 = *v134++;
              if ( v135 != v136 )
                goto LABEL_59;
            }
            if ( v136 )
              goto LABEL_59;
            sub_1E13D4((int)&v144, v24 + 1, (unsigned __int8 **)&v147);
            v8 = v144;
            v138 = v145;
            v139 = v146;
            v32 = v147;
            a2[6] = v144;
            a2[7] = v138;
            a2[8] = v139;
            a2[5] = 5;
            break;
          default:
            goto LABEL_59;
        }
LABEL_38:
        if ( *v32 != 59 )
          sub_946E0("Remote register badly formatted: %s\nhere: %s", (const char *)a1, v32);
        v21 = (char *)(v32 + 1);
        v147 = v21;
        break;
    }
  }
  if ( a2[5] == 11 )
  {
LABEL_17:
    a2[5] = 1;
    v17 = sub_990E4(*(unsigned __int8 *)(a1 + 1));
    v18 = sub_990E4(*(unsigned __int8 *)(a1 + 2)) + 16 * v17;
    if ( v18 <= 0x97 )
      a2[6] = v18;
    else
      v19 = 143;
    if ( v18 > 0x97 )
      a2[6] = v19;
    result = sub_232950(v18);
    if ( result )
    {
LABEL_23:
      result = sub_98F78(a2 + 1, &dword_475848);
      if ( result )
        sub_946E0("No process or thread specified in stop reply: %s", (const char *)a1);
    }
  }
  else
  {
LABEL_14:
    result = sub_232950(v8);
    if ( result )
      goto LABEL_23;
  }
  return result;
}
