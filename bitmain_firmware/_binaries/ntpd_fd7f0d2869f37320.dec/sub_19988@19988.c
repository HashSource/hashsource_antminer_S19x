int sub_19988()
{
  int v0; // r0
  int v1; // r6
  __int16 *v2; // r11
  __int16 *v3; // r10
  int ***v4; // r8
  int *v5; // r1
  int v6; // r3
  int v7; // r4
  int v8; // r1
  int v9; // r5
  __int16 *v10; // r0
  __int16 *v11; // r7
  int v12; // r10
  size_t v13; // r2
  size_t v14; // r4
  unsigned int v15; // r6
  __int16 v16; // r4
  int v17; // r7
  unsigned int v18; // r5
  int v19; // r5
  const __int16 *v20; // r2
  int v21; // r5
  int v22; // r7
  const char *v23; // r0
  int ***v24; // r4
  int v25; // r5
  int v26; // r3
  int v27; // r2
  unsigned int v28; // r2
  int v29; // r2
  int v30; // r3
  int v31; // r12
  __int16 i; // r3
  unsigned int v33; // r3
  int v34; // r3
  int v35; // r6
  int v36; // t1
  int v37; // r3
  bool v38; // zf
  int v39; // r4
  int v40; // r1
  int v41; // t1
  __int16 *v43; // r7
  int v44; // r4
  int v45; // t1
  int v46; // r0
  int v47; // r3
  const char *v48; // r0
  int v49; // r3
  _DWORD *v50; // r0
  _DWORD *v51; // r0
  _DWORD *v52; // r0
  int **v53; // r3
  int **v54; // r4
  __int16 v55; // r5
  int v56; // r0
  _DWORD *v57; // r0
  int v58; // r4
  int v59; // r7
  __int16 v60; // r6
  int **v61; // r5
  int v62; // r0
  _DWORD *v63; // r0
  int v64; // r4
  __int16 v65; // r6
  int **v66; // r5
  int v67; // r0
  _DWORD *v68; // r0
  int v69; // r0
  int v70; // r4
  int v71; // r0
  int v72; // r0
  __int16 v73; // r6
  int **v74; // r5
  int v75; // r7
  int v76; // r0
  _DWORD *v77; // r0
  int v78; // r0
  int v79; // r4
  int v80; // r0
  int v81; // r0
  __int16 v82; // r6
  int **v83; // r5
  int v84; // r7
  int v85; // r0
  _DWORD *v86; // r0
  int **v87; // r4
  _DWORD *v88; // r0
  int **v89; // r0
  int v90; // r5
  int v91; // r0
  _DWORD *v92; // r0
  _DWORD *v93; // r0
  _DWORD *v94; // r0
  _DWORD *v95; // r4
  _DWORD *v96; // r0
  __int64 v97; // r0
  _DWORD *v98; // r0
  _DWORD *v99; // r0
  int **v100; // r0
  int v101; // r4
  unsigned int v102; // r2
  int v103; // r0
  int v104; // r4
  int v105; // r0
  int v106; // r0
  _DWORD *v107; // r0
  _DWORD *v108; // r0
  _DWORD *v109; // r0
  _DWORD *v110; // r0
  _DWORD *v111; // r0
  _DWORD *v112; // r0
  _DWORD *v113; // r1
  _DWORD *v114; // r0
  int v115; // r0
  _DWORD *v116; // r0
  unsigned __int64 v117; // kr00_8
  _DWORD *v118; // r0
  _DWORD *v119; // r4
  _DWORD *v120; // r0
  const char *v121; // r0
  const char *v122; // r0
  int v123; // r0
  const char *v124; // r4
  unsigned int v125; // [sp+10h] [bp-93Ch]
  char *v126; // [sp+1Ch] [bp-930h]
  int v127; // [sp+1Ch] [bp-930h]
  int v128; // [sp+1Ch] [bp-930h]
  int v129; // [sp+1Ch] [bp-930h]
  _BYTE *src; // [sp+20h] [bp-92Ch]
  int v131; // [sp+28h] [bp-924h]
  int **v132; // [sp+30h] [bp-91Ch]
  int v133; // [sp+38h] [bp-914h]
  int v134; // [sp+3Ch] [bp-910h]
  void *ptr; // [sp+68h] [bp-8E4h] BYREF
  int v136; // [sp+6Ch] [bp-8E0h] BYREF
  _BYTE v137[8]; // [sp+70h] [bp-8DCh] BYREF
  _BYTE v138[1600]; // [sp+200h] [bp-74Ch] BYREF
  _BYTE v139[124]; // [sp+844h] [bp-108h] BYREF
  char v140[128]; // [sp+8C4h] [bp-88h] BYREF

  ptr = v139;
  v136 = 128;
  if ( yydebug )
    fwrite("Starting parse\n", 1u, 0xFu, stderr);
  v0 = (int)v137;
  v1 = 0;
  v2 = (__int16 *)v137;
  v3 = (__int16 *)v137;
  v131 = 0;
  yynerrs = 0;
  src = v138;
  yychar = -2;
  v125 = 200;
  v4 = (int ***)v138;
  v5 = (int *)&unk_900BC;
  while ( 1 )
  {
    *v3 = v1;
    v6 = 2 * (v125 + 0x7FFFFFFF);
    if ( v3 < &v2[v6 / 2u] )
      goto LABEL_42;
    v7 = v3 - v2 + 1;
    if ( v125 >= 0x3E8 )
      goto LABEL_99;
    v8 = v6 + 2;
    if ( (unsigned int)(v6 + 2) >= 0x3E8 )
      v8 = 1000;
    v125 = v8;
    v9 = 2 * v8;
    v10 = (__int16 *)sub_64B04(0, 10 * v8 + 7, 0, 0);
    v11 = v10;
    if ( !v10 )
      goto LABEL_99;
    v12 = v7;
    v13 = 2 * v7;
    v14 = 8 * v7;
    memcpy(v10, v2, v13);
    v126 = (char *)v11 + ((v9 + 7) & 0xFFFFFFF8);
    v0 = (int)memcpy(v126, src, v14);
    if ( v2 != (__int16 *)v137 )
      free(v2);
    v3 = &v11[v12 - 1];
    v4 = (int ***)&v126[v14 - 8];
    if ( yydebug )
      break;
    if ( v3 >= &v11[v9 / 2u - 1] )
      goto LABEL_228;
    v2 = v11;
    src = (char *)v11 + ((v9 + 7) & 0xFFFFFFF8);
LABEL_14:
    if ( v1 == 216 )
    {
      v39 = 0;
      goto LABEL_66;
    }
    v15 = 2 * v1;
    v16 = asc_8F658[v15 / 2];
    if ( v16 == -215 )
    {
LABEL_25:
      v20 = "\v";
      v21 = *(unsigned __int16 *)((char *)&unk_905EC + v15);
      if ( *(_WORD *)((char *)&unk_905EC + v15) )
        goto LABEL_26;
      v30 = yychar;
      if ( yychar == -2 )
      {
        v21 = -2;
      }
      else
      {
        if ( (unsigned int)yychar > 0x1C9 )
          v21 = 2;
        else
          v20 = (__int16 *)("\v" + yychar);
        if ( (unsigned int)yychar <= 0x1C9 )
          v21 = *((unsigned __int8 *)v20 + 2200);
      }
      if ( v131 )
      {
        if ( v131 == 3 )
        {
          if ( yychar > 0 )
          {
            sub_19418((int)"Error: discarding", v21);
            yychar = -2;
          }
          else if ( !yychar )
          {
            v39 = 1;
            goto LABEL_83;
          }
        }
      }
      else
      {
        ++yynerrs;
        v46 = sub_195D8(&v136, (_BYTE **)&ptr, v3, v21);
        v47 = v46;
        if ( v46 )
        {
          if ( v46 == 1 )
          {
            if ( ptr != v139 )
              free(ptr);
            ptr = (void *)sub_64B04(0, v136, 0, 0);
            if ( !ptr )
            {
              v136 = 128;
              ptr = v139;
              sub_198AC("syntax error");
LABEL_99:
              v39 = 2;
              sub_198AC("memory exhausted");
              goto LABEL_66;
            }
            v47 = sub_195D8(&v136, (_BYTE **)&ptr, v3, v21);
            v48 = (const char *)ptr;
          }
          else
          {
            v48 = "syntax error";
          }
          v129 = v47;
          sub_198AC(v48);
          if ( v129 == 2 )
            goto LABEL_99;
        }
        else
        {
          sub_198AC((const char *)ptr);
        }
      }
      v31 = v15;
      for ( i = v16; ; i = asc_8F658[v35] )
      {
        if ( i != -215 )
        {
          v33 = i + 1;
          if ( v33 <= 0x296 )
          {
            v34 = 2 * v33;
            v5 = (int *)*(__int16 *)((char *)&unk_8F9C0 + v34);
            if ( v5 == (int *)((char *)&dword_0 + 1) )
            {
              v37 = *(__int16 *)((char *)&unk_900BC + v34);
              if ( v37 > 0 )
                break;
            }
          }
        }
        if ( v3 == v2 )
        {
          v39 = 1;
          goto LABEL_66;
        }
        v4 -= 2;
        sub_19418((int)"Error: popping", *(unsigned __int16 *)((char *)&word_90A9C[326] + v31));
        v36 = *--v3;
        v35 = v36;
        if ( yydebug )
          sub_192C0(v2, (unsigned int)v3);
        v31 = 2 * v35;
      }
      v1 = v37;
      v0 = (int)v4;
      v4 += 2;
      v38 = yydebug == 0;
      *(double *)(v0 + 8) = yylval;
      if ( !v38 )
      {
        _fprintf_chk(stderr, 1, "%s ", "Shifting");
        sub_19370(stderr, word_90A9C[v1 + 326]);
        v0 = fputc(10, stderr);
      }
      v131 = 3;
      goto LABEL_39;
    }
    v0 = yychar;
    if ( yychar == -2 )
    {
      if ( yydebug )
        fwrite("Reading a token: ", 1u, 0x11u, stderr);
      v0 = sub_1C834();
      yychar = v0;
      if ( v0 > 0 )
      {
LABEL_18:
        if ( v0 <= 457 )
        {
          v0 += (int)"\v";
          v17 = *(unsigned __int8 *)(v0 + 2200);
        }
        else
        {
          v17 = 2;
        }
        if ( yydebug )
        {
          _fprintf_chk(stderr, 1, "%s ", "Next token is");
          sub_19370(stderr, v17);
          v0 = fputc(10, stderr);
        }
        goto LABEL_23;
      }
    }
    else if ( yychar > 0 )
    {
      goto LABEL_18;
    }
    v17 = yydebug;
    yychar = 0;
    if ( yydebug )
    {
      v17 = 0;
      v0 = fwrite("Now at end of input.\n", 1u, 0x15u, stderr);
    }
LABEL_23:
    v18 = v16 + v17;
    if ( v18 > 0x296 )
      goto LABEL_25;
    v19 = 2 * v18;
    v127 = *(__int16 *)((char *)&unk_8F9C0 + v19);
    if ( v127 != v17 )
      goto LABEL_25;
    v49 = *(__int16 *)((char *)&unk_900BC + v19);
    v1 = v49;
    if ( v49 <= 0 )
    {
      v21 = -v49;
LABEL_26:
      v22 = 1 - (unsigned __int8)aFilegenNolinkR[v21 - 3300];
      v133 = (unsigned __int8)aFilegenNolinkR[v21 - 3300];
      v128 = (int)v4[2 * v22];
      v132 = v4[2 * v22 + 1];
      if ( yydebug )
      {
        v134 = v21;
        v0 = _fprintf_chk(stderr, 1, "Reducing stack by rule %d (line %lu):\n", v21 - 1, word_90A9C[v21]);
        if ( v133 )
        {
          v43 = &v3[v22];
          v44 = 0;
          do
          {
            _fprintf_chk(stderr, 1, "   $%d = ", ++v44);
            v45 = *v43++;
            sub_19370(stderr, word_90A9C[v45 + 326]);
            v0 = fputc(10, stderr);
          }
          while ( v133 != v44 );
        }
      }
      else
      {
        v134 = v21;
      }
      switch ( v21 )
      {
        case 5:
          v115 = sub_1C704(v0);
          sub_65D40(
            3,
            "syntax error in %s line %d, column %d",
            (const char *)(v115 + 48),
            *(_DWORD *)(v115 + 40),
            *(_DWORD *)(v115 + 44));
          break;
        case 20:
          v114 = (_DWORD *)sub_F5FC((int)*(v4 - 4), (int)*(v4 - 2), *v4);
          unk_10846C = sub_EEF0(unk_10846C, v114);
          break;
        case 27:
          v128 = sub_F490((int)*v4, (int)*(v4 - 2));
          break;
        case 28:
          v128 = sub_F490((int)*v4, 0);
          break;
        case 29:
          v128 = 2;
          break;
        case 30:
          v128 = 10;
          break;
        case 31:
          v128 = 0;
          break;
        case 32:
        case 72:
        case 81:
        case 112:
        case 157:
        case 163:
        case 175:
        case 189:
        case 197:
        case 214:
        case 258:
        case 261:
        case 287:
        case 294:
        case 309:
        case 314:
          v128 = (int)sub_EEF0(*(v4 - 2), *v4);
          break;
        case 36:
        case 116:
        case 199:
          goto LABEL_115;
        case 45:
        case 159:
        case 165:
        case 178:
        case 191:
        case 259:
          goto LABEL_120;
        case 46:
          v128 = (int)sub_F250((int)*(v4 - 2), (int)*v4);
          break;
        case 53:
        case 73:
        case 180:
        case 181:
          goto LABEL_131;
        case 55:
          v113 = (_DWORD *)sub_F91C(*v4);
          if ( v113 )
            unk_108470 = sub_EEF0(unk_108470, v113);
          break;
        case 58:
          unk_108474 = 1;
          break;
        case 59:
          unk_108478 = sub_EF88(unk_108478, *v4);
          break;
        case 60:
          unk_10847C = sub_EF88(unk_10847C, *v4);
          break;
        case 61:
          dword_1084F8 = (int)*v4;
          break;
        case 62:
        case 230:
          v50 = sub_F1E0((int)*(v4 - 2), (int)*v4);
          dword_1084E8 = sub_EEF0(dword_1084E8, v50);
          break;
        case 63:
          unk_1084B0 = *v4;
          break;
        case 64:
          ++unk_1084B4;
          unk_1084B8 = sub_EF88(unk_1084B8, *v4);
          break;
        case 65:
          unk_1084BC = *v4;
          break;
        case 66:
          unk_1084C0 = *v4;
          break;
        case 67:
          unk_1084C4 = *v4;
          break;
        case 68:
          unk_1084C8 = *v4;
          break;
        case 69:
          unk_1084CC = sub_F038(unk_1084CC, (void (**)(void *))destroy_attr_val);
          unk_1084CC = sub_EF88(unk_1084CC, *v4);
          break;
        case 70:
          unk_1084D0 = *v4;
          break;
        case 71:
          v128 = 0;
          break;
        case 74:
          v128 = 0;
          unk_1084C8 = *v4;
          sub_65D40(4, "'crypto revoke %d' is deprecated, please use 'revoke %d' instead.", unk_1084C8, unk_1084C8);
          break;
        case 80:
          unk_108480 = sub_EF88(unk_108480, *v4);
          break;
        case 82:
        case 158:
        case 164:
        case 176:
        case 190:
        case 198:
        case 215:
        case 262:
        case 288:
        case 295:
        case 310:
        case 315:
          v128 = (int)sub_EEF0(0, *v4);
          break;
        case 83:
        case 84:
        case 85:
        case 177:
        case 216:
          v128 = sub_F168((int)*(v4 - 2));
          break;
        case 86:
          v128 = (int)sub_F1E0(267, (int)*v4);
          break;
        case 98:
          unk_108484 = sub_EF88(unk_108484, *v4);
          break;
        case 99:
          if ( sub_1C69C(v0, v5) )
          {
            unk_108488 = *v4;
          }
          else
          {
            free(*v4);
            sub_198AC("statsdir remote configuration ignored");
          }
          break;
        case 100:
          v93 = (_DWORD *)sub_FA00((int)*(v4 - 2), (int)*v4);
          unk_10848C = sub_EEF0(unk_10848C, v93);
          break;
        case 101:
        case 139:
        case 276:
        case 285:
          v95 = *(v4 - 2);
          v96 = (_DWORD *)sub_F3D0((int)*v4);
          v128 = (int)sub_EEF0(v95, v96);
          break;
        case 102:
        case 277:
        case 286:
          v94 = (_DWORD *)sub_F3D0((int)*v4);
          v128 = (int)sub_EEF0(0, v94);
          break;
        case 111:
          v128 = 0;
          break;
        case 113:
          if ( sub_1C69C(v0, v5) )
          {
LABEL_131:
            v128 = (int)sub_F338((int)*(v4 - 2), (int)*v4);
          }
          else
          {
            v128 = 0;
            free(*v4);
            sub_198AC("filegen file remote config ignored");
          }
          break;
        case 114:
          if ( sub_1C69C(v0, v5) )
            goto LABEL_120;
          v128 = 0;
          sub_198AC("filegen type remote config ignored");
          break;
        case 115:
          if ( sub_1C69C(v0, v5) )
            goto LABEL_115;
          v128 = 0;
          if ( *v4 == (int **)((char *)&dword_150 + 1) )
            v23 = "filegen link remote config ignored";
          else
            v23 = "filegen nolink remote config ignored";
          sub_198AC(v23);
          break;
        case 128:
          unk_108490 = sub_EF88(unk_108490, *v4);
          break;
        case 129:
          unk_108494 = sub_EF88(unk_108494, *v4);
          break;
        case 130:
          v64 = (int)*(v4 - 4);
          v65 = *((_WORD *)v4 - 4);
          v66 = *v4;
          v67 = sub_1C704(v0);
          v68 = (_DWORD *)sub_FA68(v64, 0, v65, (int)v66, *(_DWORD *)(v67 + 16));
          unk_108498 = sub_EEF0(unk_108498, v68);
          break;
        case 131:
          v58 = (int)*(v4 - 8);
          v59 = (int)*(v4 - 4);
          v60 = *((_WORD *)v4 - 4);
          v61 = *v4;
          v62 = sub_1C704(v0);
          v63 = (_DWORD *)sub_FA68(v58, v59, v60, (int)v61, *(_DWORD *)(v62 + 16));
          unk_108498 = sub_EEF0(unk_108498, v63);
          break;
        case 132:
          v54 = *v4;
          v55 = *((_WORD *)v4 - 4);
          v56 = sub_1C704(v0);
          v57 = (_DWORD *)sub_FA68(0, 0, v55, (int)v54, *(_DWORD *)(v56 + 16));
          unk_108498 = sub_EEF0(unk_108498, v57);
          break;
        case 133:
          v78 = sub_64C8C("0.0.0.0");
          v79 = sub_F490(v78, 2);
          v80 = sub_64C8C("0.0.0.0");
          v81 = sub_F490(v80, 2);
          v82 = *((_WORD *)v4 - 4);
          v83 = *v4;
          v84 = v81;
          v85 = sub_1C704(v81);
          v86 = (_DWORD *)sub_FA68(v79, v84, v82, (int)v83, *(_DWORD *)(v85 + 16));
          unk_108498 = sub_EEF0(unk_108498, v86);
          break;
        case 134:
          v69 = sub_64C8C("::");
          v70 = sub_F490(v69, 10);
          v71 = sub_64C8C("::");
          v72 = sub_F490(v71, 10);
          v73 = *((_WORD *)v4 - 4);
          v74 = *v4;
          v75 = v72;
          v76 = sub_1C704(v72);
          v77 = (_DWORD *)sub_FA68(v70, v75, v73, (int)v74, *(_DWORD *)(v76 + 16));
          unk_108498 = sub_EEF0(unk_108498, v77);
          break;
        case 135:
          v87 = *v4;
          v88 = (_DWORD *)sub_F3D0((int)*(v4 - 4));
          v89 = (int **)sub_EEF0(v87, v88);
          LOWORD(v87) = *((_WORD *)v4 - 4);
          *v4 = v89;
          v90 = (int)v89;
          v91 = sub_1C704(v89);
          v92 = (_DWORD *)sub_FA68(0, 0, (__int16)v87, v90, *(_DWORD *)(v91 + 16));
          unk_108498 = sub_EEF0(unk_108498, v92);
          break;
        case 136:
          v128 = -1;
          break;
        case 137:
          v53 = *v4;
          if ( (unsigned int)*v4 + 1 > 0x65 )
          {
            v123 = sub_1C704(v0);
            sub_65D40(
              3,
              "Unreasonable ippeerlimit value (%d) in %s line %d, column %d.  Using 0.",
              *v4,
              (const char *)(v123 + 48),
              *(_DWORD *)(v123 + 40),
              *(_DWORD *)(v123 + 44));
            v53 = 0;
            *v4 = 0;
          }
          v128 = (int)v53;
          break;
        case 138:
          v128 = 0;
          break;
        case 174:
          v52 = (_DWORD *)sub_FC14((int)*(v4 - 2), (int)*v4);
          unk_10849C = sub_EEF0(unk_10849C, v52);
          break;
        case 179:
          if ( (unsigned int)*v4 > 0x10 )
          {
            v128 = 0;
            sub_198AC("fudge factor: stratum value not in [0..16], ignored");
          }
          else
          {
LABEL_120:
            v128 = (int)sub_F1E0((int)*(v4 - 2), (int)*v4);
          }
          break;
        case 188:
          unk_1084A0 = sub_EF88(unk_1084A0, *v4);
          break;
        case 195:
          unk_1084A8 = sub_EF88(unk_1084A8, *v4);
          break;
        case 196:
          unk_1084AC = sub_EF88(unk_1084AC, *v4);
          break;
        case 200:
          if ( sub_1C69C(v0, v5) )
          {
LABEL_115:
            v128 = (int)sub_F1E0(446, (int)*v4);
          }
          else
          {
            v128 = 0;
            v122 = (const char *)sub_1C300(*v4);
            sub_6D00C(v140, 128, "enable/disable %s remote configuration ignored", v122);
            sub_198AC(v140);
          }
          break;
        case 213:
          unk_1084A4 = sub_EF88(unk_1084A4, *v4);
          break;
        case 229:
          v51 = (_DWORD *)sub_F168((int)*(v4 - 2));
          dword_1084E8 = sub_EEF0(dword_1084E8, v51);
          break;
        case 231:
          goto LABEL_180;
        case 232:
          if ( sub_1C69C(v0, v5) )
          {
LABEL_180:
            v112 = sub_F338((int)*(v4 - 2), (int)*v4);
            dword_1084E8 = sub_EEF0(dword_1084E8, v112);
          }
          else
          {
            free(*v4);
            v121 = (const char *)sub_1C300(*(v4 - 2));
            sub_6D00C(v140, 64, "%s remote config ignored", v121);
            sub_198AC(v140);
          }
          break;
        case 233:
          if ( sub_1C69C(v0, v5) )
          {
            if ( (unsigned int)sub_1C624() <= 5 )
            {
              v124 = (const char *)sub_64CFC(*(v4 - 2));
              if ( !sub_1C52C(v124, "r") )
              {
                _fprintf_chk(stderr, 1, "getconfig: Couldn't open <%s>\n", v124);
                sub_65D40(3, "getconfig: Couldn't open <%s>", v124);
              }
            }
            else
            {
              fwrite("getconfig: Maximum include file level exceeded.\n", 1u, 0x30u, stderr);
              sub_65D40(3, "getconfig: Maximum include file level exceeded.");
            }
            free(*(v4 - 2));
          }
          else
          {
            free(*(v4 - 2));
            sub_198AC("remote includefile ignored");
          }
          break;
        case 234:
          sub_1C48C(v0);
          break;
        case 236:
          unk_1084D4 = sub_EF88(unk_1084D4, *v4);
          break;
        case 237:
          unk_1084D8 = sub_EF88(unk_1084D8, *v4);
          break;
        case 238:
          unk_1084DC = sub_EEF0(unk_1084DC, *v4);
          break;
        case 239:
          v111 = (_DWORD *)sub_FC14((int)*(v4 - 2), (int)*v4);
          dword_1084E4 = sub_EEF0(dword_1084E4, v111);
          break;
        case 240:
          dword_1084E0 = sub_EF88(dword_1084E0, *v4);
          break;
        case 245:
          sub_198AC("Built without LEAP_SMEAR support.");
          break;
        case 251:
          if ( sub_1C69C(v0, v5) )
          {
            v110 = sub_F338(290, (int)*v4);
            dword_1084E8 = sub_EEF0(dword_1084E8, v110);
          }
          else
          {
            free(*v4);
            sub_198AC("driftfile remote configuration ignored");
          }
          break;
        case 252:
          if ( sub_1C69C(v0, v5) )
          {
            v108 = sub_F338(290, (int)*(v4 - 2));
            dword_1084E8 = sub_EEF0(dword_1084E8, v108);
            v109 = (_DWORD *)sub_F168(441);
            dword_1084E8 = sub_EEF0(dword_1084E8, v109);
            sub_65D40(
              4,
              "'driftfile FILENAME WanderValue' is deprecated, please use separate 'driftfile FILENAME' and 'nonvolatile "
              "WanderValue' lines instead.");
          }
          else
          {
            free(*(v4 - 2));
            sub_198AC("driftfile remote configuration ignored");
          }
          break;
        case 253:
          if ( sub_1C69C(v0, v5) )
          {
            v106 = sub_64C8C(byte_99528);
            v107 = sub_F338(290, v106);
            dword_1084E8 = sub_EEF0(dword_1084E8, v107);
          }
          else
          {
            sub_198AC("driftfile remote configuration ignored");
          }
          break;
        case 254:
          v128 = (int)sub_FAE8((const char *)*(v4 - 6), (int)*(v4 - 2), (int)*v4);
          break;
        case 256:
          v128 = 0;
          break;
        case 257:
          v128 = 0;
          break;
        case 260:
          v104 = (int)*(v4 - 2);
          v105 = sub_64C8C((*v4)[1]);
          v128 = (int)sub_F338(v104, v105);
          sub_F55C(*v4);
          break;
        case 263:
          v100 = *v4;
          v101 = *(unsigned __int8 *)*v4;
          v102 = (unsigned __int8)(v101 - 43);
          if ( v102 <= 0x12 && ((unsigned int)&loc_40004 & (1 << v102)) != 0 )
            v100 = (int **)((char *)v100 + 1);
          else
            v101 = 61;
          v103 = sub_64C8C(v100);
          v128 = (int)sub_F338(v101, v103);
          free(*v4);
          break;
        case 264:
          v99 = (_DWORD *)sub_FB6C((unsigned int)*v4, (int)*(v4 - 2));
          dword_1084EC = sub_EEF0(dword_1084EC, v99);
          break;
        case 265:
          LODWORD(v97) = 0;
          HIDWORD(v97) = *v4;
          v98 = (_DWORD *)sub_FB6C(v97, (int)*(v4 - 2));
          dword_1084EC = sub_EEF0(dword_1084EC, v98);
          break;
        case 275:
          dword_1084F0 = sub_EF88(dword_1084F0, *v4);
          break;
        case 289:
          v128 = (int)sub_F1E0(105, (int)*v4);
          break;
        case 291:
          v128 = (int)sub_F2C0(45, (int)*(v4 - 6), (int)*(v4 - 2));
          break;
        case 292:
          v119 = *(v4 - 2);
          v120 = (_DWORD *)sub_F430((int)*v4);
          v128 = (int)sub_EEF0(v119, v120);
          break;
        case 293:
          v118 = (_DWORD *)sub_F430((int)*v4);
          v128 = (int)sub_EEF0(0, v118);
          break;
        case 296:
          if ( (unsigned int)*v4 > 1 )
          {
            v128 = 1;
            sub_198AC("Integer value is not boolean (0 or 1). Assuming 1");
          }
          else
          {
            v128 = (int)*v4;
          }
          break;
        case 297:
          v128 = 1;
          break;
        case 298:
          v128 = 0;
          break;
        case 299:
          *(double *)&v117 = (double)(int)*v4;
          v132 = (int **)HIDWORD(v117);
          v128 = v117;
          break;
        case 301:
          v128 = sub_67E5C(*v4);
          free(*v4);
          break;
        case 302:
          v116 = (_DWORD *)sub_FC7C((int)*(v4 - 4), (int)*(v4 - 2));
          dword_1084F4 = sub_EEF0(dword_1084F4, v116);
          old_config_style = 1;
          break;
        case 303:
          old_config_style = 0;
          break;
        case 304:
        case 317:
          v128 = (int)sub_EEF0(*(v4 - 4), *(v4 - 2));
          break;
        case 305:
        case 318:
          v128 = (int)sub_EEF0(0, *(v4 - 2));
          break;
        case 306:
        case 319:
          v128 = sub_F168((int)*(v4 - 4));
          break;
        case 311:
          v128 = 0;
          break;
        case 312:
          v128 = (int)*(v4 - 2);
          v132 = *(v4 - 1);
          break;
        case 313:
          v128 = (int)*v4;
          break;
        case 316:
          v128 = 0;
          break;
        default:
          break;
      }
      if ( yydebug )
      {
        _fprintf_chk(stderr, 1, "%s ", "-> $$ =");
        v25 = word_90A9C[v134 + 762];
        sub_19370(stderr, v25);
        fputc(10, stderr);
        v24 = &v4[-2 * (__int16)v133];
        v3 -= (__int16)v133;
        if ( yydebug )
          sub_192C0(v2, (unsigned int)v3);
      }
      else
      {
        v24 = &v4[-2 * (__int16)v133];
        v3 -= (__int16)v133;
        v25 = word_90A9C[v134 + 762];
      }
      v4 = v24 + 2;
      v26 = v25 - 208;
      v0 = *v3;
      v27 = (__int16)word_90A9C[v26 + 1088];
      v24[2] = (int **)v128;
      v5 = elf_hash_bucket + 218;
      v28 = v27 + v0;
      v24[3] = v132;
      if ( v28 <= 0x296 && (v29 = 2 * v28, v5 = (int *)*(__int16 *)((char *)&unk_8F9C0 + v29), v5 == (int *)v0) )
        v1 = *(__int16 *)((char *)&unk_900BC + v29);
      else
        v1 = (__int16)word_90A9C[v26 + 1196];
      goto LABEL_39;
    }
    if ( v131 )
      --v131;
    if ( yydebug )
    {
      _fprintf_chk(stderr, 1, "%s ", "Shifting");
      sub_19370(stderr, v127);
      v0 = fputc(10, stderr);
    }
    v5 = &yychar;
    v4 += 2;
    yychar = -2;
    *(double *)v4 = yylval;
LABEL_39:
    ++v3;
  }
  v0 = _fprintf_chk(stderr, 1, "Stack size increased to %lu\n", v125);
  if ( v3 < &v11[v9 / 2u - 1] )
  {
    v2 = v11;
    src = (char *)v11 + ((v9 + 7) & 0xFFFFFFF8);
LABEL_42:
    if ( yydebug )
      v0 = _fprintf_chk(stderr, 1, "Entering state %d\n", v1);
    goto LABEL_14;
  }
LABEL_228:
  v2 = v11;
  v39 = 1;
LABEL_66:
  v30 = yychar;
  if ( yychar == -2 )
    goto LABEL_71;
  if ( (unsigned int)yychar > 0x1C9 )
  {
    v40 = 2;
    goto LABEL_70;
  }
LABEL_83:
  v40 = *((unsigned __int8 *)&asc_8F658[1100] + v30);
LABEL_70:
  sub_19418((int)"Cleanup: discarding lookahead", v40);
LABEL_71:
  if ( yydebug )
    sub_192C0(v2, (unsigned int)v3);
  while ( v2 != v3 )
  {
    v41 = *v3--;
    sub_19418((int)"Cleanup: popping", word_90A9C[v41 + 326]);
  }
  if ( v2 != (__int16 *)v137 )
    free(v2);
  if ( ptr != v139 )
    free(ptr);
  return v39;
}
