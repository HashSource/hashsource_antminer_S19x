int __fastcall sub_132D94(unsigned __int16 *a1, int *a2)
{
  int v2; // r10
  int v3; // r11
  __int64 v6; // r8
  int v8; // r6
  int v9; // r0
  int v10; // r6
  int v11; // r7
  char *v12; // r0
  int v13; // r3
  int v14; // r6
  int v15; // r0
  int v16; // r6
  int v17; // r6
  int v18; // r6
  int v19; // r6
  int v20; // r7
  int v21; // r0
  unsigned int v22; // r3
  bool v23; // cc
  int v24; // r0
  int v25; // r0
  int v26; // r0
  unsigned __int16 *v27; // r3
  int v28; // r6
  int v29; // r2
  int v30; // r1
  int v31; // r7
  char v32; // r3
  unsigned int v33; // r8
  int v34; // r10
  int v35; // r1
  int v36; // r2
  void *v37; // r3
  void *v38; // r2
  int v39; // r12
  bool v40; // zf
  int v41; // r2
  char *v42; // r3
  char *v43; // r8
  unsigned __int16 *v44; // r6
  int v45; // r3
  int v46; // r7
  int v47; // r0
  int v48; // r1
  int v49; // r3
  char v50; // r2
  char v51; // r2
  int v52; // r0
  int v53; // r1
  int v54; // r6
  int v55; // r0
  int v56; // r7
  int v57; // r0
  int v58; // r0
  int v59; // r6
  int v60; // r8
  int v61; // r0
  int v62; // r7
  int v63; // r0
  int v64; // r7
  int v65; // r0
  int v66; // r7
  int v67; // r8
  int v68; // r0
  int v69; // r6
  char *v70; // r9
  int v71; // r6
  int v72; // r0
  int v73; // r1
  int v74; // r0
  int v75; // r6
  int v76; // r0
  int v77; // r0
  int v78; // r6
  int v79; // r7
  _BYTE *v80; // r3
  int v81; // r0
  __int64 v82; // r0
  int v83; // r7
  int v84; // r6
  int v85; // r3
  int v86; // r0
  const char *v87; // r2
  unsigned int v88; // r3
  int v89; // r1
  int v90; // r0
  unsigned int v91; // r2
  bool v92; // cc
  char *v93; // r3
  int v94; // r2
  int v95; // r0
  int v96; // r0
  int v97; // r0
  int v98; // r1
  int v99; // r2
  bool v100; // cc
  int v101; // r3
  _BOOL4 v102; // r3
  int v103; // r8
  int v104; // r2
  _BOOL4 v105; // r8
  int v106; // r0
  int v107; // r10
  int v108; // r8
  int v109; // r1
  char v110; // r11
  __int64 v111; // r2
  __int64 v112; // r2
  int v113; // r0
  char *v114; // r0
  int v115; // r0
  int v116; // r8
  int v117; // r0
  const char *v118; // r2
  int v119; // r8
  const char *v120; // r0
  int v121; // r4
  const char *v122; // r0
  const char *v123; // r8
  char *v124; // r0
  int v125; // r0
  int v126; // r8
  int v127; // r0
  _BYTE *v128; // r7
  int v129; // r11
  __int64 v130; // r0
  int v131; // r3
  int v132; // r0
  int v133; // r3
  int v134; // r0
  int v135; // r1
  int v136; // r0
  unsigned int s1; // [sp+Ch] [bp-28h]
  const char *s1a; // [sp+Ch] [bp-28h]
  _DWORD v139[2]; // [sp+10h] [bp-24h] BYREF
  __int64 v140; // [sp+18h] [bp-1Ch]
  int v141[2]; // [sp+20h] [bp-14h] BYREF
  __int64 v142; // [sp+28h] [bp-Ch]

  HIDWORD(v6) = sub_11D4EC(*((_DWORD *)a1 + 2), a2[34]);
  if ( HIDWORD(v6) )
    return HIDWORD(v6);
  switch ( *a1 )
  {
    case 1u:
      HIDWORD(v6) = sub_1329FC((int)a1, a2);
      return HIDWORD(v6);
    case 2u:
    case 0x13u:
    case 0x17u:
    case 0x38u:
      HIDWORD(v6) = sub_138200(a1, a2);
      return HIDWORD(v6);
    case 4u:
      HIDWORD(v6) = sub_138510(a1, a2);
      return HIDWORD(v6);
    case 0xFu:
      v44 = (unsigned __int16 *)sub_1B7250(*a2);
      v56 = sub_1345C4(a1, a2);
      HIDWORD(v6) = sub_11D4EC(*((_DWORD *)a1 + 2), a2[34]);
      if ( HIDWORD(v6) )
        return HIDWORD(v6);
      v46 = sub_1700C0(v56);
      v57 = sub_12E694((int)a1, 11, (int)a2);
      if ( v57 )
        LODWORD(v6) = *(_DWORD *)(v57 + 8);
      else
        LODWORD(v6) = *((unsigned __int8 *)a2 + 14);
      v58 = sub_12E694((int)a1, 51, (int)a2);
      if ( !v58 )
      {
        if ( *(_DWORD *)(v46 + 20) != (_DWORD)v6 )
        {
          HIDWORD(v6) = 0;
          goto LABEL_84;
        }
LABEL_88:
        *(_DWORD *)(v46 + 20) = v6;
        HIDWORD(v6) = sub_134FA4(a1, v46, a2);
        return HIDWORD(v6);
      }
      HIDWORD(v6) = *(_DWORD *)(v58 + 8);
      if ( *(_DWORD *)(v46 + 20) == v6 )
        goto LABEL_88;
LABEL_84:
      if ( !((int (__fastcall *)(unsigned __int16 *))loc_16ABA0)(v44) )
      {
        if ( *(_DWORD *)(v46 + 20) != (_DWORD)v6 && dword_47AC88 > 0 )
          sub_F43B4(&off_46D334, "invalid pointer size %d", (_DWORD)v6);
        goto LABEL_88;
      }
      v134 = ((int (__fastcall *)(unsigned __int16 *, _DWORD, _DWORD))loc_16ABEC)(v44, v6, HIDWORD(v6));
      if ( (v134 & 0xFFFFFFCF) == 0 )
      {
        v46 = sub_170464(v46, v134);
        goto LABEL_88;
      }
      sub_94700(
        (int)"dwarf2read.c",
        16872,
        "%s: Assertion `%s' failed.",
        "type* read_tag_pointer_type(die_info*, dwarf2_cu*)",
        "(type_flags & ~TYPE_INSTANCE_FLAG_ADDRESS_CLASS_ALL) == 0");
LABEL_248:
      if ( v46 )
      {
LABEL_68:
        v53 = *(_DWORD *)(HIDWORD(v6) + 24);
      }
      else
      {
LABEL_234:
        v136 = ((int (__fastcall *)(int, int, int, _DWORD))loc_170478)(1, (*(_DWORD *)(v3 + 16) >> 1) & 1, v3, 0);
        v53 = *(_DWORD *)(HIDWORD(v6) + 24);
        v3 = v136;
      }
LABEL_69:
      ++v46;
      *(_DWORD *)(*(_DWORD *)(v53 + 24) + v2 + 12) = v3;
      while ( 1 )
      {
        v44 = (unsigned __int16 *)*((_DWORD *)v44 + 4);
        if ( !v44 )
          break;
        v45 = *v44;
        if ( !*v44 )
          break;
LABEL_61:
        if ( v45 == 5 )
        {
          v47 = sub_12E694((int)v44, 52, (int)a2);
          if ( v47 )
            v48 = *(_DWORD *)(v47 + 8);
          v2 = 24 * v46;
          v49 = *(_DWORD *)(*(_DWORD *)(HIDWORD(v6) + 24) + 24) + 24 * v46;
          v50 = *(_BYTE *)(v49 + 8);
          if ( v47 )
            v51 = v50 & 0xFE | v48 & 1;
          else
            v51 = v50 & 0xFE;
          *(_BYTE *)(v49 + 8) = v51;
          v52 = sub_1345C4(v44, a2);
          v3 = v52;
          if ( a2[16] != 4 )
            goto LABEL_68;
          v53 = *(_DWORD *)(HIDWORD(v6) + 24);
          if ( (*(_DWORD *)(v52 + 16) & 1) != 0 || (*(_BYTE *)(*(_DWORD *)(v53 + 24) + v2 + 8) & 1) == 0 )
            goto LABEL_69;
          v141[0] = (int)a2;
          s1a = sub_12FAF0(v44, a2);
          v135 = sub_12E694((int)a1, 100, (int)a2);
          if ( v135 )
          {
            if ( v44 != (unsigned __int16 *)sub_12E620((int *)a1 + 2, v135, v141) )
              goto LABEL_68;
            goto LABEL_234;
          }
          if ( !s1a )
            goto LABEL_248;
          if ( !strcmp(s1a, (const char *)v6) )
            goto LABEL_234;
          goto LABEL_68;
        }
      }
      return HIDWORD(v6);
    case 0x10u:
      HIDWORD(v6) = sub_1352FC(a1, a2, 18);
      return HIDWORD(v6);
    case 0x12u:
      v59 = *a2;
      v60 = sub_1B7250(*a2);
      v61 = sub_12E694((int)a1, 25, (int)a2);
      if ( v61 || (v61 = sub_12E694((int)a1, 11, (int)a2)) != 0 )
        v62 = *(_DWORD *)(v61 + 8);
      else
        v62 = 1;
      v63 = sub_1780C4(v59);
      v64 = sub_171928(0, *(_DWORD *)(v63 + 12), 1, 0, v62, 0);
      v65 = sub_1945F8(a2[17], v60);
      v9 = sub_17222C(0, v65, v64);
      goto LABEL_6;
    case 0x15u:
    case 0x1Du:
    case 0x2Eu:
      v19 = *a2;
      v20 = sub_1345C4(a1, a2);
      HIDWORD(v6) = sub_11D4EC(*((_DWORD *)a1 + 2), a2[34]);
      if ( HIDWORD(v6) )
        return HIDWORD(v6);
      HIDWORD(v6) = sub_170358(v20);
      v21 = sub_12E694((int)a1, 39, (int)a2);
      if ( v21 && *(_QWORD *)(v21 + 8) )
        goto LABEL_190;
      v22 = a2[16];
      v23 = v22 > 0xB;
      if ( v22 != 11 )
        v23 = v22 - 2 > 1;
      if ( v23 || sub_220480(a2[18]) )
LABEL_190:
        *(_BYTE *)(*(_DWORD *)(HIDWORD(v6) + 24) + 1) |= 0x20u;
      v24 = sub_12E694((int)a1, 54, (int)a2);
      if ( v24 )
      {
        **(_BYTE **)(*(_DWORD *)(HIDWORD(v6) + 24) + 28) = *(_DWORD *)(v24 + 8);
      }
      else
      {
        v127 = a2[18];
        v128 = *(_BYTE **)(*(_DWORD *)(HIDWORD(v6) + 24) + 28);
        if ( v127 && sub_338BD4(v127, "IBM XL C for OpenCL") )
          *v128 = -1;
        else
          *v128 = 1;
      }
      v25 = sub_12E694((int)a1, 135, (int)a2);
      if ( v25 && *(_QWORD *)(v25 + 8) )
        *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(HIDWORD(v6) + 24) + 28) + 1) |= 1u;
      sub_134FA4(a1, HIDWORD(v6), a2);
      if ( !*((_DWORD *)a1 + 3) )
        return HIDWORD(v6);
      v26 = sub_1780C4(v19);
      v27 = (unsigned __int16 *)*((_DWORD *)a1 + 3);
      v28 = *(_DWORD *)v26;
      if ( v27 )
      {
        v29 = *v27;
        v30 = *(_DWORD *)(HIDWORD(v6) + 24);
        if ( *v27 )
        {
          v31 = 0;
          do
          {
            if ( v29 == 5 )
            {
              ++v31;
            }
            else if ( v29 == 24 )
            {
              *(_BYTE *)(v30 + 1) |= 0x80u;
            }
            v27 = (unsigned __int16 *)*((_DWORD *)v27 + 4);
            if ( !v27 )
              break;
            v29 = *v27;
          }
          while ( *v27 );
        }
        else
        {
          v31 = *v27;
        }
      }
      else
      {
        v31 = 0;
        v30 = *(_DWORD *)(HIDWORD(v6) + 24);
      }
      v32 = *(_BYTE *)(v30 + 2);
      *(_WORD *)(v30 + 4) = v31;
      v33 = 24 * v31;
      if ( (v32 & 0x10) != 0 )
      {
        v34 = *(_DWORD *)(v30 + 16);
        v35 = *(_DWORD *)(v34 + 64);
        v36 = *(_DWORD *)(v34 + 60);
        if ( v35 - v36 < v33 )
        {
          obstack_newchunk((struct obstack *)(v34 + 48), 24 * v31);
          v35 = *(_DWORD *)(v34 + 64);
          v36 = *(_DWORD *)(v34 + 60);
        }
        v37 = *(void **)(v34 + 56);
        v38 = (void *)(v36 + v33);
        v39 = *(_DWORD *)(v34 + 72);
        *(_DWORD *)(v34 + 60) = v38;
        v40 = v38 == v37;
        if ( v38 == v37 )
          LOBYTE(v26) = *(_BYTE *)(v34 + 88);
        v41 = ((unsigned int)v38 + v39) & ~v39;
        *(_DWORD *)(v34 + 60) = v41;
        if ( v40 )
          *(_BYTE *)(v34 + 88) = v26 | 2;
        if ( v41 - *(_DWORD *)(v34 + 52) > (unsigned int)(v35 - *(_DWORD *)(v34 + 52)) )
          *(_DWORD *)(v34 + 60) = v35;
        *(_DWORD *)(v34 + 56) = *(_DWORD *)(v34 + 60);
        v42 = (char *)memset(v37, 0, 24 * v31);
      }
      else
      {
        v42 = (char *)sub_930CC(24 * v31);
      }
      *(_DWORD *)(*(_DWORD *)(HIDWORD(v6) + 24) + 24) = v42;
      if ( v31 )
      {
        v43 = &v42[v33];
        do
        {
          *((_DWORD *)v42 + 3) = v28;
          v42 += 24;
        }
        while ( v42 != v43 );
      }
      v44 = (unsigned __int16 *)*((_DWORD *)a1 + 3);
      if ( !v44 )
        return HIDWORD(v6);
      v45 = *v44;
      if ( !*v44 )
        return HIDWORD(v6);
      LODWORD(v6) = "this";
      v46 = 0;
      goto LABEL_61;
    case 0x16u:
      v75 = *a2;
      v76 = sub_1359DC(0, a1, a2);
      HIDWORD(v6) = ((int (__fastcall *)(int, int, _DWORD, int))loc_1734E0)(v75, 23, 0, v76);
      *(_BYTE *)(*(_DWORD *)(HIDWORD(v6) + 24) + 1) |= 8u;
      sub_134FA4(a1, HIDWORD(v6), a2);
      v77 = sub_1345C4(a1, a2);
      if ( HIDWORD(v6) == v77 )
      {
        if ( dword_47AC88 > 0 )
        {
          v121 = *((_DWORD *)a1 + 2);
          v122 = (const char *)sub_1B87A8(v75);
          sub_F43B4(&off_46D334, "Self-referential DW_TAG_typedef - DIE at 0x%x [in module %s]", v121, v122);
        }
        *(_DWORD *)(*(_DWORD *)(HIDWORD(v6) + 24) + 20) = 0;
      }
      else
      {
        *(_DWORD *)(*(_DWORD *)(HIDWORD(v6) + 24) + 20) = v77;
      }
      return HIDWORD(v6);
    case 0x1Eu:
      v71 = *a2;
      if ( !sub_12FAF0(a1, a2) && dword_47AC88 > 0 )
        sub_F43B4(&off_46D334, "DW_TAG_module has no name, offset 0x%x", *((_DWORD *)a1 + 2));
      v72 = v71;
      v73 = 26;
      goto LABEL_100;
    case 0x1Fu:
      v78 = sub_1345C4(a1, a2);
      v79 = sub_134A64(a1, a2);
      HIDWORD(v6) = sub_11D4EC(*((_DWORD *)a1 + 2), a2[34]);
      if ( HIDWORD(v6) )
        return HIDWORD(v6);
      v80 = *(_BYTE **)(sub_171258(v78) + 24);
      v81 = v78;
      if ( *v80 == 15 )
        goto LABEL_206;
      v82 = sub_171258(v78);
      if ( **(_BYTE **)(v82 + 24) == 7 )
      {
        v126 = ((int (__fastcall *)(int, _DWORD))loc_16FD44)(*a2, HIDWORD(v82));
        sub_170C60(
          v126,
          v79,
          *(_DWORD *)(*(_DWORD *)(v78 + 24) + 20),
          *(_DWORD *)(*(_DWORD *)(v78 + 24) + 24),
          *(__int16 *)(*(_DWORD *)(v78 + 24) + 4),
          *(unsigned __int8 *)(*(_DWORD *)(v78 + 24) + 1) >> 7);
        v81 = v126;
LABEL_206:
        v9 = sub_170C40(v81);
      }
      else
      {
        v9 = sub_170BD4(v78, v79);
      }
      goto LABEL_6;
    case 0x20u:
      v54 = sub_1345C4(a1, a2);
      HIDWORD(v6) = sub_11D4EC(*((_DWORD *)a1 + 2), a2[34]);
      if ( HIDWORD(v6) )
        return HIDWORD(v6);
      v10 = sub_171C30(0, v54);
      v55 = sub_12E694((int)a1, 11, (int)a2);
      if ( v55 )
        *(_DWORD *)(v10 + 20) = *(_DWORD *)(v55 + 8);
      goto LABEL_10;
    case 0x21u:
      v83 = sub_1345C4(a1, a2);
      v84 = sub_171258(v83);
      HIDWORD(v6) = sub_11D4EC(*((_DWORD *)a1 + 2), a2[34]);
      if ( HIDWORD(v6) )
        return HIDWORD(v6);
      v85 = a2[16];
      v139[0] = 1;
      v141[0] = 1;
      v142 = 0;
      switch ( v85 )
      {
        case 2:
        case 4:
          v116 = 0;
          goto LABEL_165;
        case 3:
        case 5:
        case 12:
          v103 = *((__int16 *)a2 + 6);
          v104 = 0;
          goto LABEL_148;
        case 7:
          v116 = 1;
LABEL_165:
          v140 = (unsigned int)v116;
          v106 = sub_12E694((int)a1, 34, (int)a2);
          if ( !v106 )
            break;
          goto LABEL_149;
        case 8:
        case 10:
        case 14:
          v103 = *((__int16 *)a2 + 6);
          v104 = 1;
LABEL_148:
          v140 = (unsigned int)v104;
          v105 = v103 > 3;
          v106 = sub_12E694((int)a1, 34, (int)a2);
          if ( v106 )
            goto LABEL_149;
          if ( !v105 )
          {
LABEL_175:
            if ( dword_47AC88 > 0 )
            {
              v119 = *((_DWORD *)a1 + 2);
              v120 = (const char *)sub_1B87A8(*a2);
              sub_F43B4(&off_46D334, "Missing DW_AT_lower_bound - DIE at 0x%x [in module %s]", v119, v120);
            }
          }
          break;
        default:
          v140 = 0;
          v106 = sub_12E694((int)a1, 34, (int)a2);
          if ( !v106 )
            goto LABEL_175;
LABEL_149:
          sub_134AAC(v106, a1, a2, v139);
          break;
      }
      v107 = sub_12E694((int)a1, 47, (int)a2);
      if ( sub_134AAC(v107, a1, a2, v141) )
      {
        v108 = 0;
      }
      else
      {
        v107 = sub_12E694((int)a1, 55, (int)a2);
        v125 = sub_134AAC(v107, a1, a2, v141);
        v108 = v125;
        if ( v125 )
        {
          v108 = v139[0];
          if ( v139[0] == 1 )
          {
            if ( v141[0] == 1 )
            {
              v108 = 0;
              v142 = v140 + v142 - 1;
            }
          }
          else
          {
            v108 = 1;
          }
        }
      }
      if ( **(_BYTE **)(v84 + 24) == 10 )
      {
        v129 = *a2;
        v130 = sub_1B7250(*a2);
        s1 = ((int (__fastcall *)(_DWORD, _DWORD))loc_16666C)(v130, HIDWORD(v130)) / 8;
        v131 = *(_DWORD *)(sub_1780C4(v129) + 12);
        if ( v131 && *(_DWORD *)(v131 + 20) >= s1
          || (v131 = *(_DWORD *)(sub_1780C4(v129) + 16)) != 0 && *(_DWORD *)(v131 + 20) >= s1 )
        {
          v84 = v131;
        }
        else
        {
          v132 = sub_1780C4(v129);
          v133 = *(_DWORD *)(v132 + 20);
          if ( v133 && *(_DWORD *)(v133 + 20) >= s1 )
            v84 = *(_DWORD *)(v132 + 20);
        }
      }
      v109 = 8 * *(_DWORD *)(v84 + 20);
      v110 = v109 - 33;
      LOBYTE(v109) = v109 - 1;
      LODWORD(v111) = 1 << v109;
      HIDWORD(v111) = (1 << v110) | (1u >> (32 - v109));
      v112 = -v111;
      if ( v139[0] == 1 )
      {
        if ( (*(_BYTE *)(*(_DWORD *)(v84 + 24) + 1) & 1) != 0 )
          goto LABEL_156;
        if ( (v112 & v140) != 0 )
          v140 |= v112;
        if ( v141[0] != 1 )
        {
LABEL_156:
          v113 = sub_1717A0(0, v83, v139, v141);
          HIDWORD(v6) = v113;
          if ( v108 )
            *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v113 + 24) + 24) + 32) |= 1u;
          if ( !v107 && a2[16] != 14 )
            *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v113 + 24) + 24) + 16) = 0;
          v114 = sub_12FAF0(a1, a2);
          if ( v114 )
            *(_DWORD *)(*(_DWORD *)(HIDWORD(v6) + 24) + 8) = v114;
          v115 = sub_12E694((int)a1, 11, (int)a2);
          if ( v115 )
            *(_DWORD *)(HIDWORD(v6) + 20) = *(_DWORD *)(v115 + 8);
          sub_134FA4(a1, HIDWORD(v6), a2);
          sub_134A14(HIDWORD(v6), a1, a2);
          return HIDWORD(v6);
        }
      }
      else if ( v141[0] != 1 || (*(_BYTE *)(*(_DWORD *)(v84 + 24) + 1) & 1) != 0 )
      {
        goto LABEL_156;
      }
      if ( (v112 & v142) != 0 )
        v142 |= v112;
      goto LABEL_156;
    case 0x24u:
      v66 = *a2;
      v67 = sub_12E694((int)a1, 62, (int)a2);
      if ( v67 )
        v67 = *(_DWORD *)(v67 + 8);
      v68 = sub_12E694((int)a1, 11, (int)a2);
      v69 = v68;
      if ( v68 )
        v69 = 8 * *(_DWORD *)(v68 + 8);
      v70 = sub_12FAF0(a1, a2);
      if ( !v70 && dword_47AC88 > 0 )
        sub_F43B4(&off_46D334, "DW_AT_name missing from DW_TAG_base_type");
      switch ( v67 )
      {
        case 1:
          v96 = ((int (__fastcall *)(int, int, int, _DWORD))loc_1734E0)(v66, 10, 8, 0);
          v10 = sub_17366C(v66, v69, v70, v96);
          goto LABEL_118;
        case 2:
          v10 = sub_1735BC(v66, v69, 1, v70);
          goto LABEL_118;
        case 3:
          v95 = sub_1224C0(v66, v69 >> 1, 0, (int)v70);
          v10 = sub_173644(v66, v70, v95);
          goto LABEL_118;
        case 4:
          v10 = sub_1224C0(v66, v69, (int)v70, (int)v70);
          goto LABEL_118;
        case 5:
          v10 = sub_173564(v66, v69, 0, v70);
          goto LABEL_118;
        case 6:
          v88 = a2[16];
          v89 = v69;
          v90 = v66;
          v91 = v88 - 7;
          v88 &= ~4u;
          v92 = v88 > 0xA;
          if ( v88 != 10 )
            v92 = v91 > 1;
          v93 = v70;
          if ( v92 )
          {
            v94 = 0;
LABEL_239:
            v10 = sub_173564(v90, v89, v94, v93);
          }
          else
          {
            v10 = sub_173590(v66, v69, 0, v70);
          }
          goto LABEL_118;
        case 7:
          v102 = a2[16] == 7;
          if ( !v70 )
            v102 = 0;
          if ( v102 && !strncmp(v70, "character(", 0xAu) )
          {
            v10 = sub_173590(v66, v69, 1, v70);
          }
          else
          {
            v10 = sub_173564(v66, v69, 1, v70);
LABEL_118:
            if ( !v70 )
            {
LABEL_10:
              HIDWORD(v6) = sub_134FA4(a1, v10, a2);
              return HIDWORD(v6);
            }
          }
          if ( !strcmp(v70, "char") )
            *(_BYTE *)(*(_DWORD *)(v10 + 24) + 1) |= 2u;
          goto LABEL_10;
        case 8:
          v99 = a2[16];
          v90 = v66;
          v100 = (v99 & 0xFFFFFFFB) > 0xA;
          if ( (v99 & 0xFFFFFFFB) != 0xA )
            v100 = (unsigned int)(v99 - 7) > 1;
          v89 = v69;
          v101 = !v100;
          if ( v99 == 12 )
            v101 |= 1u;
          v94 = 1;
          v40 = v101 == 0;
          v93 = v70;
          if ( v40 )
            goto LABEL_239;
          v10 = sub_173590(v66, v69, 1, v70);
          goto LABEL_118;
        case 15:
          v10 = sub_173634(v66, v69, v70);
          goto LABEL_118;
        case 16:
          v97 = sub_1B7250(v66);
          if ( v69 == 16 )
          {
            v98 = *(_DWORD *)(sub_1780B4(v97) + 140);
          }
          else if ( v69 == 32 )
          {
            v98 = *(_DWORD *)(sub_1780B4(v97) + 144);
          }
          else
          {
            if ( dword_47AC88 > 0 )
              sub_F43B4(&off_46D334, "unsupported DW_ATE_UTF bit size: '%d'", v69);
            v98 = sub_173564(v66, v69, 1, v70);
          }
          HIDWORD(v6) = sub_134FA4(a1, v98, a2);
          return HIDWORD(v6);
        default:
          if ( dword_47AC88 > 0 )
          {
            v117 = sub_322B58(v67);
            v118 = "DW_ATE_<unknown>";
            if ( v117 )
              v118 = (const char *)v117;
            sub_F43B4(&off_46D334, "unsupported DW_AT_encoding: '%s'", v118);
          }
          v10 = ((int (__fastcall *)(int, int, int, char *))loc_1734E0)(v66, 14, v69, v70);
          goto LABEL_118;
      }
    case 0x26u:
      v18 = sub_1345C4(a1, a2);
      HIDWORD(v6) = sub_11D4EC(*((_DWORD *)a1 + 2), a2[34]);
      if ( HIDWORD(v6) )
        return HIDWORD(v6);
      if ( **(_BYTE **)(v18 + 24) != 2 )
      {
        v9 = ((int (__fastcall *)(int, int, int, _DWORD))loc_170478)(1, (*(_DWORD *)(v18 + 16) >> 1) & 1, v18, 0);
        goto LABEL_6;
      }
      HIDWORD(v6) = sub_13536C(a1, a2, v18, 1, 0);
      return HIDWORD(v6);
    case 0x35u:
      v17 = sub_1345C4(a1, a2);
      HIDWORD(v6) = sub_11D4EC(*((_DWORD *)a1 + 2), a2[34]);
      if ( HIDWORD(v6) )
        return HIDWORD(v6);
      if ( **(_BYTE **)(v17 + 24) != 2 )
      {
        v9 = ((int (__fastcall *)(int, int, int, _DWORD))loc_170478)(*(_DWORD *)(v17 + 16) & 1, 1, v17, 0);
        goto LABEL_6;
      }
      HIDWORD(v6) = sub_13536C(a1, a2, v17, 0, 1);
      return HIDWORD(v6);
    case 0x37u:
      v16 = sub_1345C4(a1, a2);
      HIDWORD(v6) = sub_11D4EC(*((_DWORD *)a1 + 2), a2[34]);
      if ( HIDWORD(v6) )
        return HIDWORD(v6);
      v9 = sub_170544(v16);
      goto LABEL_6;
    case 0x39u:
      v14 = *a2;
      if ( sub_12E694((int)a1, 84, (int)a2) )
      {
        v141[0] = (int)a2;
        v15 = sub_130BA4((int)a1, v141);
        v9 = sub_132D94(v15, v141[0]);
LABEL_6:
        HIDWORD(v6) = sub_134FA4(a1, v9, a2);
      }
      else
      {
        v123 = sub_130BD4((int)a1, v141, a2);
        v124 = (char *)sub_135408(a1, a2);
        if ( *v124 )
          sub_122248(v14 + 48, v124, v123, 0, a2 + 16);
        v72 = v14;
        v73 = 24;
LABEL_100:
        v74 = ((int (__fastcall *)(int, int, _DWORD))loc_1734E0)(v72, v73, 0);
        *(_DWORD *)(*(_DWORD *)(v74 + 24) + 12) = *(_DWORD *)(*(_DWORD *)(v74 + 24) + 8);
        HIDWORD(v6) = sub_134FA4(a1, v74, a2);
      }
      return HIDWORD(v6);
    case 0x3Bu:
      v10 = ((int (__fastcall *)(int, int, _DWORD))loc_1734E0)(*a2, 10, 0);
      v11 = *(_DWORD *)(v10 + 24);
      v12 = sub_12FAF0(a1, a2);
      v13 = a2[16];
      *(_DWORD *)(v11 + 8) = v12;
      if ( v13 == 14 )
        *(_BYTE *)(*(_DWORD *)(v10 + 24) + 1) |= 4u;
      goto LABEL_10;
    case 0x42u:
      HIDWORD(v6) = sub_1352FC(a1, a2, 19);
      return HIDWORD(v6);
    case 0x47u:
      v8 = sub_1345C4(a1, a2);
      HIDWORD(v6) = sub_11D4EC(*((_DWORD *)a1 + 2), a2[34]);
      if ( HIDWORD(v6) )
        return HIDWORD(v6);
      v9 = sub_170564(v8);
      goto LABEL_6;
    default:
      if ( dword_47AC88 > 0 )
      {
        v86 = sub_320EC4(*a1);
        v87 = "DW_TAG_<unknown>";
        if ( v86 )
          v87 = (const char *)v86;
        sub_F43B4(&off_46D334, "unexpected tag in read_type_die: '%s'", v87);
      }
      return HIDWORD(v6);
  }
}
