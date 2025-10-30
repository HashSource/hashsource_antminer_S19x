int sub_1973C()
{
  int v0; // r3
  int v1; // r6
  char *v2; // r0
  __int16 *v3; // r11
  int *v4; // r1
  int *v5; // r9
  __int16 *v6; // r10
  unsigned int v7; // r6
  unsigned int v8; // r5
  unsigned int v9; // r4
  int v10; // r3
  int v11; // r7
  int v12; // r4
  const __int16 *v13; // r2
  int v14; // r4
  int v15; // r7
  const char *v16; // r0
  __int16 *v17; // r5
  int *v18; // r9
  int v19; // r6
  int v20; // r6
  int v21; // r2
  int v22; // r3
  unsigned int v23; // r3
  int v24; // r3
  int v25; // r3
  int v26; // r9
  int v27; // r4
  __int16 *v28; // r0
  __int16 *v29; // r7
  int v30; // r5
  size_t v31; // r10
  size_t v32; // r9
  char *v33; // r4
  int v34; // r3
  int v35; // r3
  unsigned int v36; // r5
  int v37; // r5
  int v38; // r5
  int v39; // t1
  int v40; // r4
  bool v41; // zf
  int v42; // r4
  __int16 *v43; // r8
  int v44; // r1
  int v45; // t1
  int v47; // r3
  int v48; // r5
  __int16 *v49; // r4
  int v50; // r0
  int v51; // r3
  const char *v52; // r0
  __int16 *v53; // r9
  __int16 *v54; // r11
  int v55; // r0
  _DWORD *v56; // r0
  int **v57; // r3
  int v58; // r0
  int **v59; // r4
  _DWORD *v60; // r0
  _DWORD *v61; // r0
  int v62; // r5
  int v63; // r0
  _DWORD *v64; // r0
  int v65; // r0
  int v66; // r4
  int v67; // r0
  int v68; // r5
  int **v69; // r6
  int v70; // r0
  _DWORD *v71; // r0
  int v72; // r0
  int v73; // r4
  int v74; // r0
  int v75; // r5
  int **v76; // r6
  int v77; // r0
  _DWORD *v78; // r0
  __int16 v79; // r4
  int **v80; // r5
  int v81; // r0
  _DWORD *v82; // r0
  int v83; // r4
  int v84; // r5
  int **v85; // r6
  int v86; // r0
  _DWORD *v87; // r0
  _DWORD *v88; // r0
  unsigned __int64 v89; // kr00_8
  _DWORD *v90; // r0
  _DWORD *v91; // r4
  _DWORD *v92; // r0
  int v93; // r4
  __int16 v94; // r6
  int **v95; // r5
  int v96; // r0
  _DWORD *v97; // r0
  _DWORD *v98; // r0
  _DWORD *v99; // r4
  _DWORD *v100; // r0
  _DWORD *v101; // r0
  int **v102; // r0
  int v103; // r3
  int v104; // r4
  int v105; // r0
  int v106; // r4
  int v107; // r0
  _DWORD *v108; // r0
  _DWORD *v109; // r0
  _DWORD *v110; // r0
  _DWORD *v111; // r0
  _DWORD *v112; // r1
  int v113; // r0
  _DWORD *v114; // r0
  _DWORD *v115; // r0
  _DWORD *v116; // r0
  _DWORD *v117; // r0
  _DWORD *v118; // r0
  _DWORD *v119; // r0
  int **v120; // r1
  _DWORD *v121; // r0
  int **v122; // r1
  _DWORD *v123; // r0
  const char *v124; // r0
  const char *v125; // r0
  const char *v126; // r4
  unsigned int v127; // [sp+14h] [bp-938h]
  char *src; // [sp+18h] [bp-934h]
  int v129; // [sp+1Ch] [bp-930h]
  int v130; // [sp+1Ch] [bp-930h]
  __int16 *v131; // [sp+1Ch] [bp-930h]
  int v132; // [sp+1Ch] [bp-930h]
  int v133; // [sp+24h] [bp-928h]
  char *v134; // [sp+28h] [bp-924h]
  int v135; // [sp+30h] [bp-91Ch]
  __int16 v136; // [sp+58h] [bp-8F4h]
  __int16 v137; // [sp+58h] [bp-8F4h]
  __int16 v138; // [sp+58h] [bp-8F4h]
  int v139; // [sp+5Ch] [bp-8F0h]
  void *ptr; // [sp+68h] [bp-8E4h] BYREF
  int v141; // [sp+6Ch] [bp-8E0h] BYREF
  _WORD v142[4]; // [sp+70h] [bp-8DCh] BYREF
  char v143; // [sp+78h] [bp-8D4h] BYREF
  _BYTE v144[1600]; // [sp+200h] [bp-74Ch] BYREF
  _BYTE v145[124]; // [sp+844h] [bp-108h] BYREF
  char v146[128]; // [sp+8C4h] [bp-88h] BYREF

  ptr = v145;
  v141 = 128;
  v0 = yydebug;
  if ( yydebug )
  {
    fwrite("Starting parse\n", 1u, 0xFu, stderr);
    v0 = yydebug;
  }
  v1 = 0;
  v2 = &v143;
  v133 = 0;
  yynerrs = 0;
  v3 = v142;
  v4 = &yychar;
  v142[0] = 0;
  v127 = 200;
  v5 = (int *)v144;
  src = v144;
  yychar = -2;
  v6 = v142;
  if ( v0 )
    goto LABEL_39;
  while ( 1 )
  {
    if ( v1 == 216 )
    {
      v42 = 0;
      v43 = v6;
      goto LABEL_64;
    }
    v7 = 2 * v1;
    v8 = asc_8E108[v7 / 2];
    v9 = v8;
    if ( v8 == -215 )
    {
LABEL_14:
      v13 = "\v";
      v14 = *(unsigned __int16 *)((char *)&unk_8F09C + v7);
      if ( *(_WORD *)((char *)&unk_8F09C + v7) )
        goto LABEL_15;
      v34 = yychar;
      if ( yychar == -2 )
      {
        v14 = -2;
      }
      else
      {
        if ( (unsigned int)yychar > 0x1C9 )
          v14 = 2;
        else
          v13 = (__int16 *)("\v" + yychar);
        if ( (unsigned int)yychar <= 0x1C9 )
          v14 = *((unsigned __int8 *)v13 + 2200);
      }
      if ( v133 )
      {
        if ( v133 == 3 )
        {
          if ( yychar > 0 )
          {
            sub_1919C("Error: discarding", v14);
            yychar = -2;
          }
          else if ( !yychar )
          {
            v42 = 1;
            v43 = v6;
            goto LABEL_84;
          }
        }
      }
      else
      {
        ++yynerrs;
        v50 = sub_19348(&v141, (_BYTE **)&ptr, v6, v14);
        v51 = v50;
        if ( v50 )
        {
          if ( v50 == 1 )
          {
            if ( ptr != v145 )
              free(ptr);
            ptr = (void *)sub_63BA4(0, v141, 0, 0);
            if ( !ptr )
            {
              v53 = v3;
              v54 = v6;
              ptr = v145;
              v141 = 128;
              sub_19664("syntax error");
              goto LABEL_106;
            }
            v51 = sub_19348(&v141, (_BYTE **)&ptr, v6, v14);
            v52 = (const char *)ptr;
          }
          else
          {
            v52 = "syntax error";
          }
          v132 = v51;
          sub_19664(v52);
          if ( v132 == 2 )
            goto LABEL_105;
        }
        else
        {
          sub_19664((const char *)ptr);
        }
      }
      v35 = v7;
      while ( 1 )
      {
        if ( v8 != -215 )
        {
          v36 = v8 + 1;
          if ( v36 <= 0x296 )
          {
            v37 = 2 * v36;
            if ( *(_WORD *)((char *)&unk_8E470 + v37) == 1 && *(__int16 *)((char *)&unk_8EB6C + v37) > 0 )
              break;
          }
        }
        if ( v3 == v6 )
        {
          v3 = v6;
          v42 = 1;
          v43 = v6;
          goto LABEL_64;
        }
        v5 -= 2;
        sub_1919C("Error: popping", *(unsigned __int16 *)((char *)&word_8F54C[326] + v35));
        v39 = *--v6;
        v38 = v39;
        if ( yydebug )
          sub_19024(v3, (unsigned int)v6);
        v35 = 2 * v38;
        v8 = asc_8E108[v38];
      }
      v40 = *(__int16 *)((char *)&unk_8EB6C + v37);
      v2 = (char *)(v5 + 2);
      v41 = yydebug == 0;
      *((double *)v5 + 1) = yylval;
      v5 += 2;
      if ( v41 )
      {
        v17 = v6;
        v1 = v40;
        v133 = 3;
      }
      else
      {
        v1 = v40;
        v17 = v6;
        v133 = 3;
        _fprintf_chk(stderr, 1, "%s ", "Shifting");
        sub_190F4(stderr, word_8F54C[v40 + 326]);
        v2 = (char *)fputc(10, stderr);
      }
      goto LABEL_27;
    }
    v2 = (char *)yychar;
    v10 = yydebug;
    if ( yychar == -2 )
    {
      if ( yydebug )
        fwrite("Reading a token: ", 1u, 0x11u, stderr);
      v2 = (char *)sub_1C5E8();
      v10 = yydebug;
      yychar = (int)v2;
    }
    if ( (int)v2 <= 0 )
    {
      v11 = 0;
      yychar = 0;
      if ( v10 )
        v2 = (char *)fwrite("Now at end of input.\n", 1u, 0x15u, stderr);
      else
        v11 = 0;
    }
    else if ( (int)v2 <= 457 )
    {
      v2 = "\v" + (_DWORD)v2;
      v11 = (unsigned __int8)v2[2200];
      v9 = v8 + v11;
      if ( v10 )
        goto LABEL_82;
    }
    else
    {
      v11 = 2;
      v9 = v8 + 2;
      if ( v10 )
      {
LABEL_82:
        _fprintf_chk(stderr, 1, "%s ", "Next token is");
        sub_190F4(stderr, v11);
        v2 = (char *)fputc(10, stderr);
      }
    }
    if ( v9 > 0x296 )
      goto LABEL_14;
    v12 = 2 * v9;
    v129 = *(__int16 *)((char *)&unk_8E470 + v12);
    if ( v129 != v11 )
      goto LABEL_14;
    v47 = *(__int16 *)((char *)&unk_8EB6C + v12);
    v1 = v47;
    if ( v47 <= 0 )
    {
      v14 = -v47;
LABEL_15:
      v15 = (unsigned __int8)aFilegenNolinkR[v14 - 3288];
      v130 = v5[2 * (1 - v15)];
      v134 = (char *)v5[2 * (1 - v15) + 1];
      if ( yydebug )
      {
        v135 = v14;
        v2 = (char *)_fprintf_chk(stderr, 1, "Reducing stack by rule %d (line %lu):\n", v14 - 1, word_8F54C[v14]);
        if ( v15 )
        {
          v139 = v14;
          v48 = 0;
          v49 = &v6[-v15];
          do
          {
            ++v48;
            ++v49;
            _fprintf_chk(stderr, 1, "   $%d = ", v48);
            sub_190F4(stderr, word_8F54C[v49[(__int16)v15 - v15] + 326]);
            v2 = (char *)fputc(10, stderr);
          }
          while ( v15 != v48 );
          v14 = v139;
        }
      }
      else
      {
        v135 = v14;
      }
      switch ( v14 )
      {
        case 5:
          v55 = sub_1C4B8();
          sub_64E00(
            3,
            "syntax error in %s line %d, column %d",
            (const char *)(v55 + 48),
            *(_DWORD *)(v55 + 40),
            *(_DWORD *)(v55 + 44));
          break;
        case 20:
          v123 = (_DWORD *)sub_F4B0(*(v5 - 4), *(v5 - 2), (int **)*v5);
          unk_10744C = sub_EDB0(unk_10744C, v123);
          break;
        case 27:
          v130 = sub_F348(*v5, *(v5 - 2));
          break;
        case 28:
          v130 = sub_F348(*v5, 0);
          break;
        case 29:
          v130 = 2;
          break;
        case 30:
          v130 = 10;
          break;
        case 31:
        case 71:
        case 111:
        case 257:
          v130 = 0;
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
          v130 = (int)sub_EDB0((_DWORD *)*(v5 - 2), (_DWORD *)*v5);
          break;
        case 36:
        case 116:
        case 199:
          goto LABEL_186;
        case 45:
        case 159:
        case 165:
        case 178:
        case 191:
        case 259:
          goto LABEL_130;
        case 46:
          v130 = (int)sub_F108(*(v5 - 2), *v5);
          break;
        case 53:
        case 73:
        case 180:
        case 181:
          goto LABEL_157;
        case 55:
          v112 = (_DWORD *)sub_F7BC((_DWORD *)*v5);
          if ( v112 )
            unk_107450 = sub_EDB0(unk_107450, v112);
          break;
        case 58:
          unk_107454 = 1;
          break;
        case 59:
          unk_107458 = sub_EE48(unk_107458, (_DWORD *)*v5);
          break;
        case 60:
          unk_10745C = sub_EE48(unk_10745C, (_DWORD *)*v5);
          break;
        case 61:
          dword_1074D8 = *v5;
          break;
        case 62:
        case 230:
          v111 = sub_F098(*(v5 - 2), *v5);
          dword_1074C8 = sub_EDB0(dword_1074C8, v111);
          break;
        case 63:
          unk_107490 = *v5;
          break;
        case 64:
          v120 = (int **)*v5;
          ++unk_107494;
          unk_107498 = sub_EE48(unk_107498, v120);
          break;
        case 65:
          unk_10749C = *v5;
          break;
        case 66:
          unk_1074A0 = *v5;
          break;
        case 67:
          unk_1074A4 = *v5;
          break;
        case 68:
          unk_1074A8 = *v5;
          break;
        case 69:
          v121 = (_DWORD *)sub_EEF0(unk_1074AC, (void (**)(void *))destroy_attr_val);
          v122 = (int **)*v5;
          unk_1074AC = v121;
          unk_1074AC = sub_EE48(v121, v122);
          break;
        case 70:
          unk_1074B0 = *v5;
          break;
        case 74:
          v130 = 0;
          unk_1074A8 = *v5;
          sub_64E00(4, "'crypto revoke %d' is deprecated, please use 'revoke %d' instead.", unk_1074A8, unk_1074A8);
          break;
        case 80:
          unk_107460 = sub_EE48(unk_107460, (_DWORD *)*v5);
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
          v130 = (int)sub_EDB0(0, (_DWORD *)*v5);
          break;
        case 83:
        case 84:
        case 85:
        case 177:
        case 216:
          v130 = sub_F020(*(v5 - 2));
          break;
        case 86:
          v130 = (int)sub_F098(267, *v5);
          break;
        case 98:
          unk_107464 = sub_EE48(unk_107464, (_DWORD *)*v5);
          break;
        case 99:
          if ( sub_1C450(v2, v4) )
          {
            unk_107468 = *v5;
          }
          else
          {
            free((void *)*v5);
            sub_19664("statsdir remote configuration ignored");
          }
          break;
        case 100:
          v101 = (_DWORD *)sub_F898(*(v5 - 2), *v5);
          unk_10746C = sub_EDB0(unk_10746C, v101);
          break;
        case 101:
        case 139:
        case 276:
        case 285:
          v99 = (_DWORD *)*(v5 - 2);
          v100 = (_DWORD *)sub_F288(*v5);
          v130 = (int)sub_EDB0(v99, v100);
          break;
        case 102:
        case 277:
        case 286:
          v98 = (_DWORD *)sub_F288(*v5);
          v130 = (int)sub_EDB0(0, v98);
          break;
        case 113:
          if ( sub_1C450(v2, v4) )
          {
LABEL_157:
            v130 = (int)sub_F1F0(*(v5 - 2), *v5);
          }
          else
          {
            v130 = 0;
            free((void *)*v5);
            sub_19664("filegen file remote config ignored");
          }
          break;
        case 114:
          if ( sub_1C450(v2, v4) )
            goto LABEL_130;
          v130 = 0;
          sub_19664("filegen type remote config ignored");
          break;
        case 115:
          if ( sub_1C450(v2, v4) )
            goto LABEL_186;
          v130 = 0;
          if ( *v5 == 337 )
            v16 = "filegen link remote config ignored";
          else
            v16 = "filegen nolink remote config ignored";
          sub_19664(v16);
          break;
        case 128:
          unk_107470 = sub_EE48(unk_107470, (_DWORD *)*v5);
          break;
        case 129:
          unk_107474 = sub_EE48(unk_107474, (_DWORD *)*v5);
          break;
        case 130:
          v93 = *(v5 - 4);
          v94 = *((_WORD *)v5 - 4);
          v95 = (int **)*v5;
          v96 = sub_1C4B8();
          v97 = (_DWORD *)sub_F900(v93, 0, v94, (int)v95, *(_DWORD *)(v96 + 16));
          unk_107478 = sub_EDB0(unk_107478, v97);
          break;
        case 131:
          v83 = *(v5 - 8);
          v84 = *(v5 - 4);
          v138 = *((_WORD *)v5 - 4);
          v85 = (int **)*v5;
          v86 = sub_1C4B8();
          v87 = (_DWORD *)sub_F900(v83, v84, v138, (int)v85, *(_DWORD *)(v86 + 16));
          unk_107478 = sub_EDB0(unk_107478, v87);
          break;
        case 132:
          v79 = *((_WORD *)v5 - 4);
          v80 = (int **)*v5;
          v81 = sub_1C4B8();
          v82 = (_DWORD *)sub_F900(0, 0, v79, (int)v80, *(_DWORD *)(v81 + 16));
          unk_107478 = sub_EDB0(unk_107478, v82);
          break;
        case 133:
          v72 = sub_63D08("0.0.0.0");
          v73 = sub_F348(v72, 2);
          v74 = sub_63D08("0.0.0.0");
          v75 = sub_F348(v74, 2);
          v76 = (int **)*v5;
          v137 = *((_WORD *)v5 - 4);
          v77 = sub_1C4B8();
          v78 = (_DWORD *)sub_F900(v73, v75, v137, (int)v76, *(_DWORD *)(v77 + 16));
          unk_107478 = sub_EDB0(unk_107478, v78);
          break;
        case 134:
          v65 = sub_63D08("::");
          v66 = sub_F348(v65, 10);
          v67 = sub_63D08("::");
          v68 = sub_F348(v67, 10);
          v69 = (int **)*v5;
          v136 = *((_WORD *)v5 - 4);
          v70 = sub_1C4B8();
          v71 = (_DWORD *)sub_F900(v66, v68, v136, (int)v69, *(_DWORD *)(v70 + 16));
          unk_107478 = sub_EDB0(unk_107478, v71);
          break;
        case 135:
          v59 = (int **)*v5;
          v60 = (_DWORD *)sub_F288(*(v5 - 4));
          v61 = sub_EDB0(v59, v60);
          *v5 = (int)v61;
          v62 = (int)v61;
          LOWORD(v59) = *((_WORD *)v5 - 4);
          v63 = sub_1C4B8();
          v64 = (_DWORD *)sub_F900(0, 0, (__int16)v59, v62, *(_DWORD *)(v63 + 16));
          unk_107478 = sub_EDB0(unk_107478, v64);
          break;
        case 136:
          v130 = -1;
          break;
        case 137:
          v57 = (int **)*v5;
          if ( (unsigned int)(*v5 + 1) > 0x65 )
          {
            v58 = sub_1C4B8();
            sub_64E00(
              3,
              "Unreasonable ippeerlimit value (%d) in %s line %d, column %d.  Using 0.",
              *v5,
              (const char *)(v58 + 48),
              *(_DWORD *)(v58 + 40),
              *(_DWORD *)(v58 + 44));
            v57 = 0;
            *v5 = 0;
          }
          v130 = (int)v57;
          break;
        case 138:
          v130 = 0;
          break;
        case 174:
          v56 = (_DWORD *)sub_FAAC(*(v5 - 2), *v5);
          unk_10747C = sub_EDB0(unk_10747C, v56);
          break;
        case 179:
          if ( (unsigned int)*v5 > 0x10 )
          {
            v130 = 0;
            sub_19664("fudge factor: stratum value not in [0..16], ignored");
          }
          else
          {
LABEL_130:
            v130 = (int)sub_F098(*(v5 - 2), *v5);
          }
          break;
        case 188:
          unk_107480 = sub_EE48(unk_107480, (_DWORD *)*v5);
          break;
        case 195:
          unk_107488 = sub_EE48(unk_107488, (_DWORD *)*v5);
          break;
        case 196:
          unk_10748C = sub_EE48(unk_10748C, (_DWORD *)*v5);
          break;
        case 200:
          if ( sub_1C450(v2, v4) )
          {
LABEL_186:
            v130 = (int)sub_F098(446, *v5);
          }
          else
          {
            v130 = 0;
            v124 = (const char *)sub_1C0BC(*v5);
            sub_6C054(v146, 128, "enable/disable %s remote configuration ignored", v124);
            sub_19664(v146);
          }
          break;
        case 213:
          unk_107484 = sub_EE48(unk_107484, (_DWORD *)*v5);
          break;
        case 229:
          v110 = (_DWORD *)sub_F020(*(v5 - 2));
          dword_1074C8 = sub_EDB0(dword_1074C8, v110);
          break;
        case 231:
          goto LABEL_181;
        case 232:
          if ( sub_1C450(v2, v4) )
          {
LABEL_181:
            v109 = sub_F1F0(*(v5 - 2), *v5);
            dword_1074C8 = sub_EDB0(dword_1074C8, v109);
          }
          else
          {
            free((void *)*v5);
            v125 = (const char *)sub_1C0BC(*(v5 - 2));
            sub_6C054(v146, 64, "%s remote config ignored", v125);
            sub_19664(v146);
          }
          break;
        case 233:
          if ( sub_1C450(v2, v4) )
          {
            if ( (unsigned int)sub_1C3DC() <= 5 )
            {
              v126 = (const char *)sub_63D78(*(v5 - 2));
              if ( !sub_1C2E8(v126, "r") )
              {
                _fprintf_chk(stderr, 1, "getconfig: Couldn't open <%s>\n", v126);
                sub_64E00(3, "getconfig: Couldn't open <%s>", v126);
              }
            }
            else
            {
              fwrite("getconfig: Maximum include file level exceeded.\n", 1u, 0x30u, stderr);
              sub_64E00(3, "getconfig: Maximum include file level exceeded.");
            }
            free((void *)*(v5 - 2));
          }
          else
          {
            free((void *)*(v5 - 2));
            sub_19664("remote includefile ignored");
          }
          break;
        case 234:
          sub_1C24C();
          break;
        case 236:
          unk_1074B4 = sub_EE48(unk_1074B4, (_DWORD *)*v5);
          break;
        case 237:
          unk_1074B8 = sub_EE48(unk_1074B8, (_DWORD *)*v5);
          break;
        case 238:
          unk_1074BC = sub_EDB0(unk_1074BC, (_DWORD *)*v5);
          break;
        case 239:
          v108 = (_DWORD *)sub_FAAC(*(v5 - 2), *v5);
          unk_1074C4 = sub_EDB0(unk_1074C4, v108);
          break;
        case 240:
          unk_1074C0 = sub_EE48(unk_1074C0, (_DWORD *)*v5);
          break;
        case 245:
          sub_19664("Built without LEAP_SMEAR support.");
          break;
        case 251:
          if ( sub_1C450(v2, v4) )
          {
            v117 = sub_F1F0(290, *v5);
            dword_1074C8 = sub_EDB0(dword_1074C8, v117);
          }
          else
          {
            free((void *)*v5);
            sub_19664("driftfile remote configuration ignored");
          }
          break;
        case 252:
          if ( sub_1C450(v2, v4) )
          {
            v115 = sub_F1F0(290, *(v5 - 2));
            dword_1074C8 = sub_EDB0(dword_1074C8, v115);
            v116 = (_DWORD *)sub_F020(441);
            dword_1074C8 = sub_EDB0(dword_1074C8, v116);
            sub_64E00(
              4,
              "'driftfile FILENAME WanderValue' is deprecated, please use separate 'driftfile FILENAME' and 'nonvolatile "
              "WanderValue' lines instead.");
          }
          else
          {
            free((void *)*(v5 - 2));
            sub_19664("driftfile remote configuration ignored");
          }
          break;
        case 253:
          if ( sub_1C450(v2, v4) )
          {
            v113 = sub_63D08(byte_97F7C);
            v114 = sub_F1F0(290, v113);
            dword_1074C8 = sub_EDB0(dword_1074C8, v114);
          }
          else
          {
            sub_19664("driftfile remote configuration ignored");
          }
          break;
        case 254:
          v130 = (int)sub_F980((const char *)*(v5 - 6), *(v5 - 2), *v5);
          break;
        case 256:
        case 298:
          v130 = 0;
          break;
        case 260:
          v106 = *(v5 - 2);
          v107 = sub_63D08(*(_DWORD *)(*v5 + 4));
          v130 = (int)sub_F1F0(v106, v107);
          sub_F410((_DWORD *)*v5);
          break;
        case 263:
          v102 = (int **)*v5;
          v103 = *(unsigned __int8 *)*v5;
          if ( v103 == 45 || v103 == 61 || v103 == 43 )
          {
            v102 = (int **)((char *)v102 + 1);
            v104 = *(unsigned __int8 *)*v5;
          }
          else
          {
            v104 = 61;
          }
          v105 = sub_63D08(v102);
          v130 = (int)sub_F1F0(v104, v105);
          free((void *)*v5);
          break;
        case 264:
          v118 = sub_FA04(*v5, 0, *(v5 - 2));
          dword_1074CC = sub_EDB0(dword_1074CC, v118);
          break;
        case 265:
          v119 = sub_FA04(0, *v5, *(v5 - 2));
          dword_1074CC = sub_EDB0(dword_1074CC, v119);
          break;
        case 275:
          dword_1074D0 = sub_EE48(dword_1074D0, (_DWORD *)*v5);
          break;
        case 289:
          v130 = (int)sub_F098(105, *v5);
          break;
        case 291:
          v130 = (int)sub_F178(45, *(v5 - 6), *(v5 - 2));
          break;
        case 292:
          v91 = (_DWORD *)*(v5 - 2);
          v92 = (_DWORD *)sub_F2E8(*v5);
          v130 = (int)sub_EDB0(v91, v92);
          break;
        case 293:
          v90 = (_DWORD *)sub_F2E8(*v5);
          v130 = (int)sub_EDB0(0, v90);
          break;
        case 296:
          if ( (unsigned int)*v5 > 1 )
          {
            v130 = 1;
            sub_19664("Integer value is not boolean (0 or 1). Assuming 1");
          }
          else
          {
            v130 = *v5;
          }
          break;
        case 297:
          v130 = 1;
          break;
        case 299:
          *(double *)&v89 = (double)*v5;
          v134 = (char *)HIDWORD(v89);
          v130 = v89;
          break;
        case 301:
          v130 = sub_66EA4(*v5);
          free((void *)*v5);
          break;
        case 302:
          v88 = (_DWORD *)sub_FB14(*(v5 - 4), *(v5 - 2));
          dword_1074D4 = sub_EDB0(dword_1074D4, v88);
          old_config_style = 1;
          break;
        case 303:
          old_config_style = 0;
          break;
        case 304:
        case 317:
          v130 = (int)sub_EDB0((_DWORD *)*(v5 - 4), (_DWORD *)*(v5 - 2));
          break;
        case 305:
        case 318:
          v130 = (int)sub_EDB0(0, (_DWORD *)*(v5 - 2));
          break;
        case 306:
        case 319:
          v130 = sub_F020(*(v5 - 4));
          break;
        case 311:
          v130 = 0;
          break;
        case 312:
          v130 = *(v5 - 2);
          v134 = (char *)*(v5 - 1);
          break;
        case 313:
          v130 = *v5;
          break;
        case 316:
          v130 = 0;
          break;
        default:
          break;
      }
      v17 = &v6[-(__int16)v15];
      v18 = &v5[-2 * (__int16)v15];
      v19 = word_8F54C[v135 + 762];
      if ( yydebug )
      {
        _fprintf_chk(stderr, 1, "%s ", "-> $$ =");
        sub_190F4(stderr, v19);
        fputc(10, stderr);
        if ( yydebug )
          sub_19024(v3, (unsigned int)v17);
      }
      v20 = v19 - 208;
      v21 = *v17;
      v5 = v18 + 2;
      v2 = v134;
      v22 = (__int16)word_8F54C[v20 + 1088];
      *v5 = v130;
      v5[1] = (int)v134;
      v23 = v22 + v21;
      if ( v23 <= 0x296 && (v24 = 2 * v23, *(__int16 *)((char *)&unk_8E470 + v24) == v21) )
        v1 = *(__int16 *)((char *)&unk_8EB6C + v24);
      else
        v1 = (__int16)word_8F54C[v20 + 1196];
      goto LABEL_27;
    }
    if ( v133 )
      --v133;
    if ( yydebug )
    {
      _fprintf_chk(stderr, 1, "%s ", "Shifting");
      sub_190F4(stderr, v129);
      v2 = (char *)fputc(10, stderr);
    }
    v17 = v6;
    v5 += 2;
    yychar = -2;
    *(double *)v5 = yylval;
LABEL_27:
    v4 = (int *)v127;
    v6 = v17 + 1;
    v17[1] = v1;
    v25 = 2 * (v127 + 0x7FFFFFFF);
    if ( v17 + 1 < &v3[v25 / 2u] )
    {
      v33 = src;
      v131 = v3;
      goto LABEL_38;
    }
    v26 = v6 - v3 + 1;
    if ( v127 >= 0x3E8
      || ((unsigned int)(v25 + 2) >= 0x3E8 ? (v27 = 1000) : (v27 = v25 + 2),
          v127 = v27,
          v28 = (__int16 *)sub_63BA4(0, 10 * v27 + 7, 0, 0),
          (v29 = v28) == 0) )
    {
LABEL_105:
      v53 = v3;
      v54 = v6;
LABEL_106:
      v43 = v54;
      v42 = 2;
      v3 = v53;
      sub_19664("memory exhausted");
      goto LABEL_64;
    }
    v30 = v27;
    v31 = v26;
    v32 = 8 * v26;
    v131 = v28;
    v33 = (char *)v28 + ((2 * v27 + 7) & 0xFFFFFFF8);
    memcpy(v28, v3, v31 * 2);
    v2 = (char *)memcpy(v33, src, v32);
    if ( v3 != v142 )
      free(v3);
    v6 = &v29[v31 - 1];
    v5 = (int *)&v33[v32 - 8];
    if ( yydebug )
      v2 = (char *)_fprintf_chk(stderr, 1, "Stack size increased to %lu\n", v127);
    if ( v6 >= &v29[v30 - 1] )
      break;
LABEL_38:
    src = v33;
    v3 = v131;
    if ( yydebug )
LABEL_39:
      v2 = (char *)_fprintf_chk(stderr, 1, "Entering state %d\n", v1);
  }
  v42 = 1;
  v43 = v6;
  v3 = v29;
LABEL_64:
  v34 = yychar;
  if ( yychar == -2 )
    goto LABEL_69;
  if ( (unsigned int)yychar > 0x1C9 )
  {
    v44 = 2;
    goto LABEL_68;
  }
LABEL_84:
  v44 = *((unsigned __int8 *)&asc_8E108[1100] + v34);
LABEL_68:
  sub_1919C("Cleanup: discarding lookahead", v44);
LABEL_69:
  if ( yydebug )
    sub_19024(v3, (unsigned int)v43);
  while ( v43 != v3 )
  {
    v45 = *v43--;
    sub_1919C("Cleanup: popping", word_8F54C[v45 + 326]);
  }
  if ( v3 != v142 )
    free(v3);
  if ( ptr != v145 )
    free(ptr);
  return v42;
}
