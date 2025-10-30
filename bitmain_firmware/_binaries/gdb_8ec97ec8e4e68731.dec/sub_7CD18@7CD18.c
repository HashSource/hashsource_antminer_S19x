int sub_7CD18()
{
  int v0; // r2
  int v1; // r9
  char *v2; // r4
  char *v3; // r11
  _DWORD *v4; // r5
  unsigned int v5; // r10
  unsigned int v6; // r6
  unsigned int v7; // r8
  int v8; // r3
  int v9; // r0
  int v10; // r8
  char *v11; // r9
  __int64 v12; // r0
  int v13; // r8
  __int64 v14; // r2
  char *v15; // lr
  int v16; // t1
  unsigned int v17; // r6
  int v18; // r6
  char *v19; // r8
  int v20; // r1
  int v21; // r2
  int v22; // r3
  int v23; // r1
  _DWORD *v24; // r12
  int v25; // r1
  int v26; // r2
  int v27; // r3
  _DWORD *v28; // r12
  int v29; // r1
  int v30; // r3
  int v31; // r5
  size_t v32; // r4
  size_t v33; // r5
  char *v34; // r8
  _BYTE *v35; // r0
  _BYTE *v36; // r3
  int v37; // r5
  _DWORD *v39; // r6
  int v40; // r1
  unsigned int v41; // r9
  int v42; // r9
  int v43; // r6
  int v44; // r6
  int v45; // r1
  int v46; // r0
  char *v47; // r8
  _DWORD *v48; // r6
  int v49; // r0
  int v50; // r0
  int v51; // r0
  int v52; // r0
  int v53; // r2
  int v54; // r0
  _DWORD *v55; // r0
  int v56; // r2
  char *v57; // r2
  char **v58; // r1
  int v59; // r2
  int v60; // r0
  char *v61; // r2
  char **v62; // r0
  char *v63; // r1
  char *v64; // r0
  int v65; // r2
  int v66; // r1
  _DWORD *v67; // r2
  _DWORD *v68; // r0
  bool v69; // zf
  int v70; // r1
  int v71; // r0
  int v72; // r0
  int v73; // r0
  int v74; // r0
  int v75; // r0
  int v76; // r0
  int v77; // r0
  int v78; // r0
  int v79; // r12
  int v80; // r1
  int v81; // r0
  int v82; // r0
  int v83; // r0
  int v84; // r0
  int v85; // r0
  int v86; // r0
  int v87; // r1
  int v88; // r0
  int v89; // r0
  char *v90; // r0
  int v91; // r4
  int v92; // r0
  int v93; // r0
  int v94; // r0
  int v95; // r0
  bool v96; // zf
  int v97; // r0
  int v98; // r0
  int v99; // r0
  int v100; // r0
  int v101; // r0
  int v102; // r0
  int v103; // r0
  int v104; // r1
  int v105; // r0
  int v106; // r0
  int v107; // r0
  int v108; // r3
  int v109; // r0
  int v110; // r0
  int v111; // r0
  int v112; // r0
  int v113; // r0
  int v114; // r0
  int v115; // r0
  int v116; // r0
  _DWORD *v117; // r12
  int v118; // lr
  int *v119; // r3
  int v120; // r0
  int v121; // r1
  int v122; // r2
  int v123; // r3
  int v124; // r0
  int v125; // r0
  _DWORD *v126; // r12
  int v127; // lr
  int *v128; // r3
  int v129; // r0
  int v130; // r1
  int v131; // r2
  int v132; // r3
  int v133; // r0
  int v134; // r0
  int v135; // r0
  int v136; // r0
  int v137; // r0
  int v138; // r0
  int v139; // r0
  int v140; // r0
  int v141; // r0
  _DWORD *v142; // r0
  _DWORD *v143; // r0
  int v144; // r0
  int v145; // r0
  int v146; // r0
  int v147; // r5
  int v148; // r0
  int v149; // r0
  int v150; // r0
  int v151; // r0
  int v152; // r0
  int v153; // r0
  int v154; // r0
  int v155; // r0
  int v156; // r0
  int *v157; // r4
  int v158; // r0
  int *v159; // r9
  int v160; // r0
  int *v161; // r6
  int v162; // r0
  char *v163; // r1
  _DWORD *v164; // r0
  _DWORD *v165; // r0
  int *v166; // r9
  char *v167; // r1
  int v168; // r0
  int v169; // r5
  int v170; // r0
  int v171; // r0
  int v172; // r0
  int v173; // r0
  int v174; // r6
  int v175; // r0
  _BYTE *src; // [sp+10h] [bp-28h]
  _BYTE *srca; // [sp+10h] [bp-28h]
  int v178; // [sp+14h] [bp-24h]
  int v179; // [sp+18h] [bp-20h]
  char *v180; // [sp+20h] [bp-18h]
  int v181; // [sp+24h] [bp-14h]
  int v182; // [sp+28h] [bp-10h]
  char *v183; // [sp+2Ch] [bp-Ch]
  int v184; // [sp+30h] [bp-8h]
  char *v185; // [sp+34h] [bp-4h]
  _WORD ptr[200]; // [sp+38h] [bp+0h] BYREF
  _BYTE v187[4804]; // [sp+1C8h] [bp+190h] BYREF

  dword_474F84 = 0;
  v0 = -2;
  v1 = 0;
  v178 = 0;
  ptr[0] = 0;
  v2 = (char *)ptr;
  dword_474F88 = -2;
  v3 = (char *)ptr;
  v4 = v187;
  v5 = 200;
  src = v187;
  v184 = -1431655765;
  while ( 1 )
  {
    v6 = word_3655CC[v1];
    v7 = v6;
    if ( v6 == -187 )
      break;
    v8 = (int)&dword_474F58;
    v9 = dword_474F88;
    if ( dword_474F88 == -2 )
    {
      v9 = sub_7BA58();
      v8 = (int)&dword_474F58;
      dword_474F88 = v9;
    }
    if ( v9 <= 0 )
    {
      v0 = 0;
      dword_474F88 = 0;
    }
    else
    {
      if ( v9 >= 308 )
        v7 = v6 + 2;
      else
        v8 = 21700;
      if ( v9 >= 308 )
        v0 = 2;
      else
        HIWORD(v8) = 54;
      if ( v9 < 308 )
      {
        v0 = *(unsigned __int8 *)(v8 + v9 + 916);
        v7 = v6 + v0;
      }
    }
    if ( v7 > 0x471 )
      break;
    v10 = 2 * v7;
    if ( *(__int16 *)((char *)&unk_36598C + v10) != v0 )
      break;
    v1 = *(unsigned __int16 *)((char *)&unk_366270 + v10);
    if ( !*(_WORD *)((char *)&unk_366270 + v10) )
    {
      v19 = v2;
      v39 = v4;
      HIDWORD(v14) = v4[6];
      v181 = v4[9];
      v179 = v4[7];
      LODWORD(v14) = v4[8];
      v183 = (char *)v4[10];
      v180 = (char *)v14;
      LODWORD(v14) = -75;
      v182 = v4[11];
LABEL_52:
      v40 = *(__int16 *)v19;
      v39[6] = HIDWORD(v14);
      v4 = v39 + 6;
      v41 = v40 + v1;
      v39[7] = v179;
      v39[8] = v180;
      v39[9] = v181;
      v39[10] = v183;
      v39[11] = v182;
      if ( v41 <= 0x471 && (v42 = 2 * v41, *(__int16 *)((char *)&unk_36598C + v42) == v40) )
        v1 = *(unsigned __int16 *)((char *)&unk_366270 + v42);
      else
        v1 = word_366EBC[(_DWORD)v14];
      goto LABEL_37;
    }
    v24 = v4 + 6;
    v4 += 6;
    v19 = v2;
    if ( v178 )
      --v178;
    dword_474F88 = -2;
    v25 = unk_474F70;
    v26 = unk_474F74;
    v27 = unk_474F78;
    *v24 = dword_474F6C;
    v24[1] = v25;
    v24[2] = v26;
    v24[3] = v27;
    v28 = v24 + 4;
    v29 = unk_474F80;
    *v28 = unk_474F7C;
    v28[1] = v29;
LABEL_37:
    v2 = v19 + 2;
    v30 = 2 * (v5 + 0x7FFFFFFF);
    *((_WORD *)v19 + 1) = v1;
    v0 = (int)&v3[v30];
    if ( v19 + 2 >= &v3[v30] )
    {
      v31 = ((v2 - v3) >> 1) + 1;
      if ( v5 > 0x270F )
      {
        v2 = v3;
        if ( dword_474F64 )
        {
          v37 = 2;
        }
        else
        {
          dword_474F64 = (int)"memory exhausted";
          v37 = 2;
          dword_474F68 = dword_474F60;
        }
        goto LABEL_48;
      }
      v5 = v30 + 2;
      if ( (unsigned int)(v30 + 2) >= 0x2710 )
        v5 = 10000;
      v32 = 2 * v31;
      v33 = 24 * v31;
      v34 = (char *)sub_93028(26 * v5 + 23);
      memcpy(v34, v3, v32);
      v35 = memcpy(
              &v34[24 * ((unsigned int)(((2 * v5 + 23) * (unsigned __int64)(unsigned int)v184) >> 32) >> 4)],
              src,
              v33);
      v0 = (int)ptr;
      v36 = v35;
      if ( v3 != (char *)ptr )
      {
        srca = v35;
        free(v3);
        v36 = srca;
      }
      v2 = &v34[v32 - 2];
      v4 = &v36[v33 - 24];
      if ( v2 >= &v34[2 * v5 - 2] )
      {
        v2 = v34;
        v37 = 1;
        goto LABEL_49;
      }
      v3 = v34;
      src = v36;
    }
    if ( v1 == 84 )
    {
      v2 = v3;
      v37 = 0;
      goto LABEL_48;
    }
  }
  v11 = (char *)&byte_3674BC[v1];
  HIDWORD(v12) = (unsigned __int8)*(v11 - 2408);
  if ( *(v11 - 2408) )
  {
    v13 = byte_3674BC[HIDWORD(v12) - 2080];
    LODWORD(v12) = &v4[6 * (1 - v13)];
    HIDWORD(v14) = *(_DWORD *)v12;
    v179 = *(_DWORD *)(v12 + 4);
    v180 = *(char **)(v12 + 8);
    v181 = *(_DWORD *)(v12 + 12);
    v15 = *(char **)(v12 + 16);
    LODWORD(v12) = *(_DWORD *)(v12 + 20);
    v183 = v15;
    v182 = v12;
    switch ( HIDWORD(v12) )
    {
      case 2:
        v39 = v4 - 6;
        v19 = v2 - 2;
        v1 = -187;
        LODWORD(v14) = 1;
        dword_474F8C = *v4;
        break;
      case 6:
      case 0x58:
      case 0x5F:
        v43 = 3 * v13;
        v19 = &v2[-2 * v13];
        v39 = &v4[-2 * v43];
        v14 = (unsigned int)byte_3674BC[HIDWORD(v12) - 1884] - 75;
        v1 = word_366E24[(_DWORD)v14];
        break;
      case 7:
        v19 = v2 - 4;
        v39 = v4 - 12;
        HIDWORD(v14) = *v4;
        v1 = -66;
        LODWORD(v14) = 3;
        break;
      case 8:
        v19 = v2 - 4;
        v39 = v4 - 12;
        HIDWORD(v14) = *v4;
        v1 = -187;
        *(_DWORD *)v4[1] = *(v4 - 6);
        LODWORD(v14) = 4;
        break;
      case 9:
        v86 = ((int (__fastcall *)(int, _DWORD, _DWORD, _DWORD))loc_7B794)(3, *(v4 - 12), *(v4 - 6), HIDWORD(v14));
        v39 = v4 - 18;
        v87 = v86;
        v19 = v2 - 6;
        if ( *v4 )
          goto LABEL_153;
        HIDWORD(v14) = v86;
        v1 = -187;
        LODWORD(v14) = 4;
        break;
      case 0xA:
        v98 = ((int (__fastcall *)(int, _DWORD, _DWORD, _DWORD))loc_7B794)(3, *(v4 - 12), *(v4 - 6), HIDWORD(v14));
        v39 = v4 - 18;
        v87 = v98;
        v19 = v2 - 6;
        if ( *v4 )
        {
LABEL_153:
          v1 = -187;
          v88 = ((int (__fastcall *)(int, int))loc_7B794)(2, v87);
          LODWORD(v14) = 4;
          HIDWORD(v14) = v88;
        }
        else
        {
          HIDWORD(v14) = v98;
          v1 = -187;
          LODWORD(v14) = 4;
        }
        break;
      case 0xB:
        v19 = v2 - 4;
        v39 = v4 - 12;
        if ( *v4 )
        {
          v1 = -187;
          v97 = ((int (__fastcall *)(int, _DWORD, _DWORD, _DWORD))loc_7B794)(2, *(v4 - 6), *v4, HIDWORD(v14));
          LODWORD(v14) = 4;
          HIDWORD(v14) = v97;
        }
        else
        {
          HIDWORD(v14) = *(v4 - 6);
          v1 = -187;
          LODWORD(v14) = 4;
        }
        break;
      case 0xC:
        LODWORD(v14) = v4[1];
        v96 = (_DWORD)v14 == 0;
        if ( (_DWORD)v14 )
        {
          HIDWORD(v14) = *(v4 - 5);
          HIDWORD(v12) = *v4;
          *(_DWORD *)v14 = *(_DWORD *)HIDWORD(v14);
        }
        LODWORD(v14) = v4[2];
        if ( !v96 )
          *(_DWORD *)HIDWORD(v14) = HIDWORD(v12);
        if ( (_DWORD)v14 )
          HIDWORD(v14) = ((int (__fastcall *)(int, _DWORD, _DWORD, _DWORD))loc_7B794)(3, *(v4 - 6), v14, HIDWORD(v14));
        else
          HIDWORD(v14) = *(v4 - 6);
        v19 = v2 - 4;
        v39 = v4 - 12;
        v1 = -187;
        if ( v4[4] )
          HIDWORD(v14) = ((int (__fastcall *)(int, _DWORD))loc_7B794)(2, HIDWORD(v14));
        LODWORD(v14) = 4;
        break;
      case 0xD:
        v19 = v2 - 4;
        v39 = v4 - 12;
        HIDWORD(v14) = ((int (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD))loc_7B794)(*(v4 - 6), *v4, 0, HIDWORD(v14));
        v1 = -187;
        LODWORD(v14) = 5;
        break;
      case 0xE:
        v19 = v2 - 8;
        v39 = v4 - 24;
        v1 = -187;
        HIDWORD(v14) = ((int (__fastcall *)(int, _DWORD, _DWORD, _DWORD))loc_7B794)(11, *(v4 - 12), *v4, HIDWORD(v14));
        LODWORD(v14) = 5;
        break;
      case 0xF:
        v39 = v4 - 12;
        v19 = v2 - 4;
        v1 = -187;
        HIDWORD(v14) = sub_7B670("new");
        LODWORD(v14) = 6;
        break;
      case 0x10:
        v39 = v4 - 12;
        v19 = v2 - 4;
        v1 = -187;
        HIDWORD(v14) = sub_7B670("delete ");
        LODWORD(v14) = 6;
        break;
      case 0x11:
        v39 = v4 - 24;
        v19 = v2 - 8;
        v1 = -187;
        HIDWORD(v14) = sub_7B670("new[]");
        LODWORD(v14) = 6;
        break;
      case 0x12:
        v39 = v4 - 24;
        v19 = v2 - 8;
        v1 = -187;
        HIDWORD(v14) = sub_7B670("delete[] ");
        LODWORD(v14) = 6;
        break;
      case 0x13:
        v39 = v4 - 12;
        v19 = v2 - 4;
        v1 = -187;
        HIDWORD(v14) = sub_7B670("+");
        LODWORD(v14) = 6;
        break;
      case 0x14:
        v39 = v4 - 12;
        v19 = v2 - 4;
        v1 = -187;
        HIDWORD(v14) = sub_7B670((char *)&word_3C1464);
        LODWORD(v14) = 6;
        break;
      case 0x15:
        v39 = v4 - 12;
        v19 = v2 - 4;
        v1 = -187;
        HIDWORD(v14) = sub_7B670("*");
        LODWORD(v14) = 6;
        break;
      case 0x16:
        v39 = v4 - 12;
        v19 = v2 - 4;
        v1 = -187;
        HIDWORD(v14) = sub_7B670((char *)&word_398974);
        LODWORD(v14) = 6;
        break;
      case 0x17:
        v39 = v4 - 12;
        v19 = v2 - 4;
        v1 = -187;
        HIDWORD(v14) = sub_7B670("%");
        LODWORD(v14) = 6;
        break;
      case 0x18:
        v39 = v4 - 12;
        v19 = v2 - 4;
        v1 = -187;
        HIDWORD(v14) = sub_7B670("^");
        LODWORD(v14) = 6;
        break;
      case 0x19:
        v39 = v4 - 12;
        v19 = v2 - 4;
        v1 = -187;
        HIDWORD(v14) = sub_7B670("&");
        LODWORD(v14) = 6;
        break;
      case 0x1A:
        v39 = v4 - 12;
        v19 = v2 - 4;
        v1 = -187;
        HIDWORD(v14) = sub_7B670("|");
        LODWORD(v14) = 6;
        break;
      case 0x1B:
        v39 = v4 - 12;
        v19 = v2 - 4;
        v1 = -187;
        HIDWORD(v14) = sub_7B670("~");
        LODWORD(v14) = 6;
        break;
      case 0x1C:
        v39 = v4 - 12;
        v19 = v2 - 4;
        v1 = -187;
        HIDWORD(v14) = sub_7B670("!");
        LODWORD(v14) = 6;
        break;
      case 0x1D:
        v39 = v4 - 12;
        v19 = v2 - 4;
        v1 = -187;
        HIDWORD(v14) = sub_7B670((char *)&word_3FDE24);
        LODWORD(v14) = 6;
        break;
      case 0x1E:
        v39 = v4 - 12;
        v19 = v2 - 4;
        v1 = -187;
        HIDWORD(v14) = sub_7B670((char *)&word_364FA4);
        LODWORD(v14) = 6;
        break;
      case 0x1F:
        v39 = v4 - 12;
        v19 = v2 - 4;
        v1 = -187;
        HIDWORD(v14) = sub_7B670(">");
        LODWORD(v14) = 6;
        break;
      case 0x20:
        v39 = v4 - 12;
        v19 = v2 - 4;
        v1 = -187;
        HIDWORD(v14) = sub_7B670((char *)*v4);
        LODWORD(v14) = 6;
        break;
      case 0x21:
        v39 = v4 - 12;
        v19 = v2 - 4;
        v1 = -187;
        HIDWORD(v14) = sub_7B670((char *)&dword_364FA8);
        LODWORD(v14) = 6;
        break;
      case 0x22:
        v39 = v4 - 12;
        v19 = v2 - 4;
        v1 = -187;
        HIDWORD(v14) = sub_7B670((char *)&dword_3CE920);
        LODWORD(v14) = 6;
        break;
      case 0x23:
        v39 = v4 - 12;
        v19 = v2 - 4;
        v1 = -187;
        HIDWORD(v14) = sub_7B670((char *)&dword_364FAC);
        LODWORD(v14) = 6;
        break;
      case 0x24:
        v39 = v4 - 12;
        v19 = v2 - 4;
        v1 = -187;
        HIDWORD(v14) = sub_7B670((char *)&dword_364FB0);
        LODWORD(v14) = 6;
        break;
      case 0x25:
        v39 = v4 - 12;
        v19 = v2 - 4;
        v1 = -187;
        HIDWORD(v14) = sub_7B670((char *)&dword_364FB4);
        LODWORD(v14) = 6;
        break;
      case 0x26:
        v39 = v4 - 12;
        v19 = v2 - 4;
        v1 = -187;
        HIDWORD(v14) = sub_7B670((char *)&dword_364FB8);
        LODWORD(v14) = 6;
        break;
      case 0x27:
        v39 = v4 - 12;
        v19 = v2 - 4;
        v1 = -187;
        HIDWORD(v14) = sub_7B670((char *)&dword_364FBC);
        LODWORD(v14) = 6;
        break;
      case 0x28:
        v39 = v4 - 12;
        v19 = v2 - 4;
        v1 = -187;
        HIDWORD(v14) = sub_7B670((char *)&dword_364FC0);
        LODWORD(v14) = 6;
        break;
      case 0x29:
        v39 = v4 - 12;
        v19 = v2 - 4;
        v1 = -187;
        HIDWORD(v14) = sub_7B670((char *)&dword_364FC4);
        LODWORD(v14) = 6;
        break;
      case 0x2A:
        v39 = v4 - 12;
        v19 = v2 - 4;
        v1 = -187;
        HIDWORD(v14) = sub_7B670("--");
        LODWORD(v14) = 6;
        break;
      case 0x2B:
        v39 = v4 - 12;
        v19 = v2 - 4;
        v1 = -187;
        HIDWORD(v14) = sub_7B670((char *)&word_3D7D40);
        LODWORD(v14) = 6;
        break;
      case 0x2C:
        v39 = v4 - 18;
        v19 = v2 - 6;
        v1 = -187;
        HIDWORD(v14) = sub_7B670("->*");
        LODWORD(v14) = 6;
        break;
      case 0x2D:
        v39 = v4 - 12;
        v19 = v2 - 4;
        v1 = -187;
        HIDWORD(v14) = sub_7B670((char *)&dword_364FCC);
        LODWORD(v14) = 6;
        break;
      case 0x2E:
        v39 = v4 - 18;
        v19 = v2 - 6;
        v1 = -187;
        HIDWORD(v14) = sub_7B670("()");
        LODWORD(v14) = 6;
        break;
      case 0x2F:
        v39 = v4 - 18;
        v19 = v2 - 6;
        v1 = -187;
        HIDWORD(v14) = sub_7B670((char *)&dword_433230);
        LODWORD(v14) = 6;
        break;
      case 0x30:
        v39 = v4 - 12;
        v19 = v2 - 4;
        v1 = 3;
        HIDWORD(v14) = ((int (__fastcall *)(int, _DWORD, _DWORD, _DWORD))loc_7B794)(52, *v4, 0, HIDWORD(v14));
        LODWORD(v14) = 7;
        break;
      case 0x31:
        v19 = v2 - 4;
        v39 = v4 - 12;
        HIDWORD(v14) = *(v4 - 6);
        v1 = -187;
        v50 = *v4 + 8;
        *(_DWORD *)(*(v4 - 5) + 12) = *v4;
        LODWORD(v14) = 8;
        v179 = v50;
        break;
      case 0x32:
        LODWORD(v14) = 8;
        v39 = v4 - 6;
        HIDWORD(v14) = *v4;
        v19 = v2 - 2;
        v1 = -187;
        v179 = *v4 + 8;
        break;
      case 0x33:
        v19 = v2 - 6;
        v39 = v4 - 18;
        HIDWORD(v14) = *(v4 - 6);
        v1 = -187;
        v49 = *v4 + 8;
        *(_DWORD *)(*(v4 - 5) + 12) = *v4;
        LODWORD(v14) = 8;
        v179 = v49;
        break;
      case 0x34:
        LODWORD(v14) = 8;
        v39 = v4 - 12;
        HIDWORD(v14) = *v4;
        v19 = v2 - 4;
        v1 = -187;
        v179 = *v4 + 8;
        break;
      case 0x36:
        v19 = v2 - 8;
        v39 = v4 - 24;
        v1 = -20;
        HIDWORD(v14) = ((int (__fastcall *)(int, _DWORD, _DWORD, _DWORD))loc_7B794)(
                         4,
                         *(v4 - 18),
                         *(v4 - 6),
                         HIDWORD(v14));
        LODWORD(v14) = 9;
        break;
      case 0x37:
        v47 = (char *)*v4;
        v48 = sub_7B5F0();
        if ( !sub_319D88(v48, 2, v47) )
        {
          v12 = sub_94700(
                  "cp-name-parser.y",
                  218,
                  "%s: Assertion `%s' failed.",
                  "demangle_component* make_dtor(gnu_v3_dtor_kinds, demangle_component*)",
                  "i");
LABEL_270:
          LODWORD(v12) = "unsigned long long";
LABEL_271:
          v175 = ((int (__fastcall *)(_DWORD, _DWORD))loc_7B738)(v12, HIDWORD(v12));
          goto LABEL_272;
        }
        HIDWORD(v14) = v48;
        v19 = v2 - 4;
        v39 = v4 - 12;
        v1 = -20;
        LODWORD(v14) = 9;
        break;
      case 0x39:
        v19 = v2 - 4;
        v39 = v4 - 12;
        HIDWORD(v14) = *v4;
        v1 = -187;
        LODWORD(v14) = 10;
        break;
      case 0x3A:
      case 0x3C:
        v39 = v4 - 12;
        v19 = v2 - 4;
        HIDWORD(v14) = *(v4 - 6);
        v1 = -1;
        *(_DWORD *)(*(v4 - 5) + 12) = *v4;
        LODWORD(v14) = 11;
        break;
      case 0x41:
        v19 = v2 - 4;
        v39 = v4 - 12;
        HIDWORD(v14) = *v4;
        v1 = 15;
        LODWORD(v14) = 13;
        break;
      case 0x42:
        v39 = v4 - 12;
        v19 = v2 - 4;
        HIDWORD(v14) = *(v4 - 6);
        v1 = 1;
        *(_DWORD *)(*(v4 - 5) + 12) = *v4;
        LODWORD(v14) = 14;
        break;
      case 0x44:
      case 0x46:
        v19 = v2 - 4;
        v39 = v4 - 12;
        HIDWORD(v14) = ((int (__fastcall *)(int, _DWORD, _DWORD, _DWORD))loc_7B794)(1, *(v4 - 6), 0, HIDWORD(v14));
        v179 = HIDWORD(v14);
        v1 = 0;
        LODWORD(v14) = 15;
        break;
      case 0x45:
      case 0x47:
        v44 = *(v4 - 11);
        v45 = *(v4 - 6);
        v19 = v2 - 6;
        v1 = 0;
        v185 = (char *)*(v4 - 12);
        v46 = ((int (__fastcall *)(int, int, _DWORD))loc_7B794)(1, v45, 0);
        LODWORD(v14) = 15;
        *(_DWORD *)(v44 + 12) = v46;
        v179 = v46;
        v39 = v4 - 18;
        HIDWORD(v14) = v185;
        break;
      case 0x48:
        v19 = v2 - 8;
        v39 = v4 - 24;
        v1 = 150;
        HIDWORD(v14) = ((int (__fastcall *)(int, _DWORD, _DWORD, _DWORD))loc_7B794)(
                         4,
                         *(v4 - 18),
                         *(v4 - 6),
                         HIDWORD(v14));
        LODWORD(v14) = 16;
        break;
      case 0x49:
        v39 = v4 - 6;
        HIDWORD(v14) = ((int (__fastcall *)(int, _DWORD, _DWORD, _DWORD))loc_7B794)(47, *v4, 0, HIDWORD(v14));
        v179 = HIDWORD(v14) + 12;
        v19 = v2 - 2;
        v1 = 149;
        LODWORD(v14) = 17;
        break;
      case 0x4A:
        v166 = (int *)*(v4 - 11);
        v39 = v4 - 18;
        v167 = (char *)*v4;
        v185 = (char *)*(v4 - 12);
        v19 = v2 - 6;
        v168 = ((int (__fastcall *)(int, char *, _DWORD))loc_7B794)(47, v167, 0);
        *v166 = v168;
        v179 = v168 + 12;
        v1 = 149;
        LODWORD(v14) = 17;
        HIDWORD(v14) = v185;
        break;
      case 0x4C:
        v19 = v2 - 4;
        v39 = v4 - 12;
        HIDWORD(v14) = *v4;
        v1 = 31;
        *(_DWORD *)v4[1] = *(v4 - 6);
        LODWORD(v14) = 18;
        break;
      case 0x4D:
        v165 = sub_7B670("&");
        v39 = v4 - 12;
        v19 = v2 - 4;
        v1 = 31;
        HIDWORD(v14) = ((int (__fastcall *)(int, _DWORD *, _DWORD))loc_7B794)(54, v165, *v4);
        LODWORD(v14) = 18;
        break;
      case 0x4E:
        v19 = v2 - 8;
        v164 = sub_7B670("&");
        v39 = v4 - 24;
        v1 = 31;
        HIDWORD(v14) = ((int (__fastcall *)(int, _DWORD *, _DWORD))loc_7B794)(54, v164, *(v4 - 6));
        LODWORD(v14) = 18;
        break;
      case 0x50:
        v39 = v4 - 6;
        HIDWORD(v14) = ((int (__fastcall *)(int, _DWORD, _DWORD, _DWORD))loc_7B794)(46, *v4, 0, HIDWORD(v14));
        v179 = HIDWORD(v14) + 12;
        v19 = v2 - 2;
        v1 = -187;
        LODWORD(v14) = 19;
        break;
      case 0x51:
        v39 = v4 - 12;
        v163 = (char *)*v4;
        v19 = v2 - 4;
        v1 = -187;
        *(_DWORD *)v4[1] = *(v4 - 6);
        HIDWORD(v14) = ((int (__fastcall *)(int, char *, _DWORD))loc_7B794)(46, v163, 0);
        v179 = HIDWORD(v14) + 12;
        LODWORD(v14) = 19;
        break;
      case 0x52:
        v161 = (int *)*(v4 - 11);
        v162 = ((int (__fastcall *)(int, _DWORD, _DWORD, _DWORD))loc_7B794)(46, *v4, 0, HIDWORD(v14));
        *v161 = v162;
        v179 = v162 + 12;
        v19 = v2 - 6;
        HIDWORD(v14) = *(v4 - 12);
        v39 = v4 - 18;
        v1 = -187;
        LODWORD(v14) = 19;
        break;
      case 0x53:
        v159 = (int *)*(v4 - 17);
        v19 = v2 - 8;
        v39 = v4 - 24;
        *(_DWORD *)v4[1] = *(v4 - 6);
        v160 = ((int (__fastcall *)(int, _DWORD, _DWORD))loc_7B794)(46, *v4, 0);
        *v159 = v160;
        v179 = v160 + 12;
        v1 = -187;
        HIDWORD(v14) = *(v4 - 18);
        LODWORD(v14) = 19;
        break;
      case 0x54:
        v19 = v2 - 6;
        v39 = v4 - 18;
        v156 = ((int (__fastcall *)(char *))loc_7B738)("...");
        v157 = (int *)*(v4 - 11);
        v158 = ((int (__fastcall *)(int, int, _DWORD))loc_7B794)(46, v156, 0);
        *v157 = v158;
        v179 = v158 + 12;
        v1 = -187;
        HIDWORD(v14) = *(v4 - 12);
        LODWORD(v14) = 19;
        break;
      case 0x55:
        v154 = ((int (__fastcall *)(int, _DWORD, _DWORD, _DWORD))loc_7B794)(41, 0, *(v4 - 12), HIDWORD(v14));
        v39 = v4 - 24;
        v19 = v2 - 8;
        v179 = v154 + 8;
        v1 = -25;
        v155 = sub_7B800(v154, *v4, 1);
        LODWORD(v14) = 20;
        HIDWORD(v14) = v155;
        break;
      case 0x56:
        v152 = ((int (__fastcall *)(int, _DWORD))loc_7B794)(41, 0);
        v39 = v4 - 24;
        v19 = v2 - 8;
        v179 = v152 + 8;
        v1 = -25;
        v153 = sub_7B800(v152, *v4, 1);
        LODWORD(v14) = 20;
        HIDWORD(v14) = v153;
        break;
      case 0x57:
        v150 = ((int (__fastcall *)(int, _DWORD))loc_7B794)(41, 0);
        v39 = v4 - 18;
        v19 = v2 - 6;
        v179 = v150 + 8;
        v1 = -25;
        v151 = sub_7B800(v150, *v4, 1);
        LODWORD(v14) = 20;
        HIDWORD(v14) = v151;
        break;
      case 0x5A:
        v39 = v4 - 6;
        v19 = v2 - 2;
        v1 = -187;
        v14 = 0x200000016LL;
        break;
      case 0x5B:
        v39 = v4 - 6;
        v19 = v2 - 2;
        v1 = -187;
        v14 = 0x400000016LL;
        break;
      case 0x5C:
        v39 = v4 - 6;
        v19 = v2 - 2;
        v1 = -187;
        v14 = 0x100000016LL;
        break;
      case 0x5E:
        v39 = v4 - 12;
        v19 = v2 - 4;
        v1 = 234;
        LODWORD(v14) = 23;
        HIDWORD(v14) = *(v4 - 6) | *v4;
        break;
      case 0x60:
        v39 = v4 - 6;
        v19 = v2 - 2;
        v1 = 205;
        v14 = 0x1000000018LL;
        break;
      case 0x61:
        v39 = v4 - 6;
        v19 = v2 - 2;
        v1 = 205;
        v14 = 0x2000000018LL;
        break;
      case 0x62:
        v39 = v4 - 6;
        v19 = v2 - 2;
        v1 = 205;
        v14 = 0x100000018LL;
        break;
      case 0x63:
        v39 = v4 - 6;
        v19 = v2 - 2;
        v1 = 205;
        v14 = 0x400000018LL;
        break;
      case 0x64:
        v39 = v4 - 6;
        v19 = v2 - 2;
        v1 = 205;
        v14 = 0x200000018LL;
        break;
      case 0x66:
        v108 = *(v4 - 6);
        v39 = v4 - 12;
        v19 = v2 - 4;
        v1 = -187;
        if ( (v108 & *v4 & 4) != 0 )
          HIDWORD(v14) = v108 | 8;
        else
          HIDWORD(v14) = v108 | *v4;
        LODWORD(v14) = 25;
        break;
      case 0x67:
        switch ( *v4 )
        {
          case 0:
          case 0x10:
            LODWORD(v12) = "int";
            goto LABEL_271;
          case 1:
            LODWORD(v12) = "char";
            goto LABEL_271;
          case 2:
          case 0x12:
            LODWORD(v12) = "short";
            goto LABEL_271;
          case 4:
          case 0x14:
            LODWORD(v12) = "long";
            goto LABEL_271;
          case 0xC:
          case 0x1C:
            LODWORD(v12) = "long long";
            goto LABEL_271;
          case 0x11:
            LODWORD(v12) = "signed char";
            goto LABEL_271;
          case 0x20:
            LODWORD(v12) = "unsigned int";
            goto LABEL_271;
          case 0x21:
            LODWORD(v12) = "unsigned char";
            goto LABEL_271;
          case 0x22:
            LODWORD(v12) = "unsigned short";
            goto LABEL_271;
          case 0x24:
            LODWORD(v12) = "unsigned long";
            goto LABEL_271;
          case 0x2C:
            goto LABEL_270;
          default:
            v175 = 0;
            break;
        }
LABEL_272:
        HIDWORD(v14) = v175;
        v39 = v4 - 6;
        v19 = v2 - 2;
        v1 = 213;
        LODWORD(v14) = 26;
        break;
      case 0x68:
        v39 = v4 - 6;
        v19 = v2 - 2;
        v1 = 213;
        HIDWORD(v14) = ((int (__fastcall *)(char *))loc_7B738)("float");
        LODWORD(v14) = 26;
        break;
      case 0x69:
        v39 = v4 - 6;
        v19 = v2 - 2;
        v1 = 213;
        HIDWORD(v14) = ((int (__fastcall *)(char *))loc_7B738)("double");
        LODWORD(v14) = 26;
        break;
      case 0x6A:
        v39 = v4 - 12;
        v19 = v2 - 4;
        v1 = 213;
        HIDWORD(v14) = ((int (__fastcall *)(const char *))loc_7B738)("long double");
        LODWORD(v14) = 26;
        break;
      case 0x6B:
        v39 = v4 - 6;
        v19 = v2 - 2;
        v1 = 213;
        HIDWORD(v14) = ((int (__fastcall *)(const char *))loc_7B738)("bool");
        LODWORD(v14) = 26;
        break;
      case 0x6C:
        v39 = v4 - 6;
        v19 = v2 - 2;
        v1 = 213;
        HIDWORD(v14) = ((int (__fastcall *)(const char *))loc_7B738)("wchar_t");
        LODWORD(v14) = 26;
        break;
      case 0x6D:
        v39 = v4 - 6;
        v19 = v2 - 2;
        v1 = 213;
        HIDWORD(v14) = ((int (__fastcall *)(char *))loc_7B738)("void");
        LODWORD(v14) = 26;
        break;
      case 0x6E:
        v106 = ((int (__fastcall *)(int, _DWORD))loc_7B794)(34, 0);
        v39 = v4 - 12;
        v19 = v2 - 4;
        v179 = v106 + 8;
        v1 = -17;
        v107 = sub_7B800(v106, *v4, 0);
        LODWORD(v14) = 27;
        HIDWORD(v14) = v107;
        break;
      case 0x6F:
        v39 = v4 - 6;
        HIDWORD(v14) = ((int (__fastcall *)(int, _DWORD))loc_7B794)(35, 0);
        v179 = HIDWORD(v14) + 8;
        v19 = v2 - 2;
        v1 = -17;
        LODWORD(v14) = 27;
        break;
      case 0x70:
        v39 = v4 - 6;
        HIDWORD(v14) = ((int (__fastcall *)(int, _DWORD))loc_7B794)(36, 0);
        v179 = HIDWORD(v14) + 8;
        v19 = v2 - 2;
        v1 = -17;
        LODWORD(v14) = 27;
        break;
      case 0x71:
        v125 = ((int (__fastcall *)(int, _DWORD, _DWORD, _DWORD))loc_7B794)(43, *(v4 - 12), 0, HIDWORD(v14));
        v126 = (_DWORD *)*(v4 - 11);
        v179 = v125 + 12;
        v127 = v125;
        v19 = v2 - 6;
        v1 = -17;
        v128 = (int *)v126[2];
        v129 = *v128;
        v130 = v128[1];
        v131 = v128[2];
        v132 = v128[3];
        *v126 = v129;
        v126[1] = v130;
        v126[2] = v131;
        v126[3] = v132;
        v39 = v4 - 18;
        v133 = sub_7B800(v127, *v4, 0);
        LODWORD(v14) = 27;
        HIDWORD(v14) = v133;
        break;
      case 0x72:
        v116 = ((int (__fastcall *)(int, _DWORD, _DWORD, _DWORD))loc_7B794)(43, *(v4 - 12), 0, HIDWORD(v14));
        v117 = (_DWORD *)*(v4 - 11);
        v179 = v116 + 12;
        v118 = v116;
        v19 = v2 - 8;
        v1 = -17;
        v119 = (int *)v117[2];
        v120 = *v119;
        v121 = v119[1];
        v122 = v119[2];
        v123 = v119[3];
        *v117 = v120;
        v117[1] = v121;
        v117[2] = v122;
        v117[3] = v123;
        v39 = v4 - 24;
        v124 = sub_7B800(v118, *v4, 0);
        LODWORD(v14) = 27;
        HIDWORD(v14) = v124;
        break;
      case 0x73:
        v39 = v4 - 12;
        v19 = v2 - 4;
        v1 = -98;
        HIDWORD(v14) = ((int (__fastcall *)(int, _DWORD))loc_7B794)(42, 0);
        LODWORD(v14) = 28;
        break;
      case 0x74:
        v19 = v2 - 6;
        v39 = v4 - 18;
        v1 = -98;
        HIDWORD(v14) = ((int (__fastcall *)(int, _DWORD, _DWORD, _DWORD))loc_7B794)(42, *(v4 - 6), 0, HIDWORD(v14));
        LODWORD(v14) = 28;
        break;
      case 0x75:
      case 0x79:
        v19 = v2 - 4;
        v39 = v4 - 12;
        HIDWORD(v14) = sub_7B800(*(v4 - 6), *v4, 0);
        v1 = 196;
        LODWORD(v14) = 29;
        break;
      case 0x77:
      case 0x7B:
        v19 = v2 - 6;
        v39 = v4 - 18;
        v1 = 196;
        v75 = sub_7B800(*(v4 - 6), *((_BYTE *)v4 - 48) | *(_BYTE *)v4, 0);
        LODWORD(v14) = 29;
        HIDWORD(v14) = v75;
        break;
      case 0x78:
      case 0x7C:
        v19 = v2 - 4;
        v39 = v4 - 12;
        v1 = 196;
        v74 = sub_7B800(*v4, *(v4 - 6), 0);
        LODWORD(v14) = 29;
        HIDWORD(v14) = v74;
        break;
      case 0x7D:
        v19 = v2 - 6;
        v39 = v4 - 18;
        HIDWORD(v14) = sub_7B800(*(v4 - 6), *v4, 0);
        v1 = 196;
        LODWORD(v14) = 29;
        break;
      case 0x7E:
        v19 = v2 - 4;
        v39 = v4 - 12;
        HIDWORD(v14) = *v4;
        v1 = 196;
        LODWORD(v14) = 29;
        break;
      case 0x7F:
        v19 = v2 - 8;
        v39 = v4 - 24;
        v1 = 196;
        v73 = sub_7B800(*(v4 - 6), *((_BYTE *)v4 - 72) | *(_BYTE *)v4, 0);
        LODWORD(v14) = 29;
        HIDWORD(v14) = v73;
        break;
      case 0x80:
        v19 = v2 - 6;
        v39 = v4 - 18;
        v1 = 196;
        v72 = sub_7B800(*v4, *(v4 - 12), 0);
        LODWORD(v14) = 29;
        HIDWORD(v14) = v72;
        break;
      case 0x81:
        v181 = 0;
        v19 = v2 - 2;
        v180 = 0;
        v39 = v4 - 6;
        v179 = v4[1];
        v1 = -18;
        HIDWORD(v14) = *v4;
        LODWORD(v14) = 30;
        break;
      case 0x82:
        v19 = v2 - 4;
        v66 = v4[2];
        v39 = v4 - 12;
        v67 = (_DWORD *)v4[1];
        v1 = -18;
        v183 = (char *)v4[4];
        v68 = (_DWORD *)v4[5];
        v69 = v66 == 0;
        if ( v66 )
          *v67 = v66;
        v70 = *(v4 - 6);
        v182 = (int)v68;
        if ( !v69 )
          v68 = (_DWORD *)v4[3];
        HIDWORD(v14) = *v4;
        if ( !v69 )
          v67 = v68;
        v181 = 0;
        v180 = 0;
        v71 = *(v4 - 5);
        *v67 = v70;
        LODWORD(v14) = 30;
        v179 = v71;
        break;
      case 0x83:
        v64 = (char *)v4[2];
        v19 = v2 - 2;
        v39 = v4 - 6;
        v180 = v64;
        v1 = -18;
        if ( v64 )
        {
          v65 = v4[3];
          *(_DWORD *)v4[1] = v64;
          v179 = v65;
          LODWORD(v14) = 30;
          v180 = 0;
        }
        else
        {
          LODWORD(v14) = 30;
        }
        v181 = 0;
        break;
      case 0x84:
        v63 = (char *)*(v4 - 4);
        v19 = v2 - 6;
        v39 = v4 - 18;
        HIDWORD(v14) = *(v4 - 6);
        v180 = v63;
        LODWORD(v14) = *(v4 - 5);
        v183 = (char *)*(v4 - 2);
        if ( v63 )
        {
          *(_DWORD *)v14 = v63;
          v1 = -16;
          v180 = 0;
          v181 = 0;
          LODWORD(v14) = 31;
          v179 = *(v4 - 3);
          v182 = 1;
        }
        else
        {
          v179 = v14;
          v182 = 1;
          v1 = -16;
          LODWORD(v14) = 31;
          v181 = 0;
        }
        break;
      case 0x85:
        v59 = *(v4 - 4);
        v60 = *(v4 - 1);
        v19 = v2 - 4;
        if ( v59 )
          HIDWORD(v12) = *(v4 - 3);
        v182 = *(v4 - 1);
        if ( v59 )
        {
          v179 = HIDWORD(v12);
          *(_DWORD *)*(v4 - 5) = v59;
        }
        v39 = v4 - 12;
        v61 = (char *)*v4;
        if ( v60 )
        {
          v62 = (char **)v179;
          v1 = -16;
          v179 = v4[1];
          v182 = 0;
          *v62 = v61;
        }
        else
        {
          v180 = (char *)*v4;
          v1 = -16;
          v181 = v4[1];
        }
        LODWORD(v14) = 31;
        break;
      case 0x86:
        v57 = (char *)*v4;
        v58 = (char **)*(v4 - 5);
        v19 = v2 - 4;
        v182 = 0;
        v39 = v4 - 12;
        v181 = 0;
        *v58 = v57;
        v1 = -16;
        v179 = (int)(v57 + 12);
        LODWORD(v14) = 31;
        v180 = 0;
        break;
      case 0x87:
        v39 = v4 - 6;
        HIDWORD(v14) = *v4;
        v19 = v2 - 2;
        v182 = 0;
        v1 = -16;
        v181 = 0;
        v180 = 0;
        v179 = HIDWORD(v14) + 12;
        LODWORD(v14) = 31;
        break;
      case 0x88:
        v56 = v4[1];
        v183 = 0;
        v19 = v2 - 2;
        v181 = 0;
        v39 = v4 - 6;
        v180 = 0;
        v1 = 158;
        v179 = v56;
        LODWORD(v14) = 32;
        HIDWORD(v14) = *v4;
        break;
      case 0x89:
        v14 = *(_QWORD *)(v4 + 1);
        v19 = v2 - 4;
        v39 = v4 - 12;
        v1 = 158;
        v180 = (char *)v4[2];
        v181 = v4[3];
        v183 = (char *)v4[4];
        v182 = v4[5];
        HIDWORD(v14) = *(v4 - 6);
        if ( (_DWORD)v14 )
        {
          *(_DWORD *)v14 = HIDWORD(v14);
          HIDWORD(v14) = *v4;
        }
        v179 = *(v4 - 5);
        LODWORD(v14) = 32;
        break;
      case 0x8A:
        v19 = v2 - 2;
        HIDWORD(v14) = *v4;
        v39 = v4 - 6;
        v1 = 158;
        v179 = v4[1];
        LODWORD(v14) = v4[2];
        v183 = 0;
        v180 = (char *)v14;
        v181 = v4[3];
        LODWORD(v14) = 32;
        break;
      case 0x8B:
        v53 = *(v4 - 16);
        v19 = v2 - 8;
        v39 = v4 - 24;
        v54 = *(v4 - 13);
        v183 = (char *)*v4;
        if ( v53 )
        {
          v179 = *(v4 - 15);
          *(_DWORD *)*(v4 - 17) = v53;
        }
        if ( v54 )
        {
          v55 = (_DWORD *)v179;
          v1 = 158;
          v179 = *(v4 - 11);
          *v55 = *(v4 - 12);
        }
        else
        {
          v180 = (char *)*(v4 - 12);
          v1 = 158;
          v181 = *(v4 - 11);
        }
        LODWORD(v14) = 32;
        break;
      case 0x8C:
        v39 = v4 - 12;
        v19 = v2 - 4;
        v179 = 0;
        v1 = 158;
        v183 = (char *)*v4;
        v180 = (char *)*(v4 - 6);
        v181 = *(v4 - 5);
        v14 = 32;
        break;
      case 0x8E:
        v19 = v2 - 4;
        v39 = v4 - 12;
        HIDWORD(v14) = *v4;
        v1 = -129;
        *(_DWORD *)v4[1] = *(v4 - 6);
        LODWORD(v14) = 33;
        break;
      case 0x8F:
        v19 = v2 - 4;
        v39 = v4 - 12;
        v52 = *(v4 - 5);
        v1 = -106;
        HIDWORD(v14) = *v4;
        *(_DWORD *)v4[1] = *(v4 - 6);
        LODWORD(v14) = 34;
        v179 = v52;
        break;
      case 0x91:
        v19 = v2 - 6;
        HIDWORD(v14) = *(v4 - 6);
        v39 = v4 - 18;
        v1 = -187;
        v179 = *(v4 - 5);
        LODWORD(v14) = 35;
        break;
      case 0x92:
        v19 = v2 - 4;
        v39 = v4 - 12;
        v51 = v4[1];
        v1 = -187;
        HIDWORD(v14) = *(v4 - 6);
        *(_DWORD *)*(v4 - 5) = *v4;
        LODWORD(v14) = 35;
        v179 = v51;
        break;
      case 0x93:
        v19 = v2 - 4;
        v39 = v4 - 12;
        HIDWORD(v14) = *(v4 - 6);
        v1 = -187;
        v85 = *v4 + 12;
        *(_DWORD *)*(v4 - 5) = *v4;
        LODWORD(v14) = 35;
        v179 = v85;
        break;
      case 0x94:
        v39 = v4 - 6;
        HIDWORD(v14) = ((int (__fastcall *)(int, _DWORD, _DWORD, _DWORD))loc_7B794)(3, *v4, 0, HIDWORD(v14));
        v179 = HIDWORD(v14) + 12;
        v19 = v2 - 2;
        v1 = -187;
        LODWORD(v14) = 35;
        break;
      case 0x95:
        v19 = v2 - 4;
        v39 = v4 - 12;
        v84 = *(v4 - 5);
        v1 = 134;
        HIDWORD(v14) = *v4;
        *(_DWORD *)v4[1] = *(v4 - 6);
        LODWORD(v14) = 36;
        v179 = v84;
        break;
      case 0x96:
        v39 = v4 - 6;
        HIDWORD(v14) = ((int (__fastcall *)(int, _DWORD, _DWORD, _DWORD))loc_7B794)(3, *v4, 0, HIDWORD(v14));
        v179 = HIDWORD(v14) + 12;
        v19 = v2 - 2;
        v1 = 134;
        LODWORD(v14) = 36;
        break;
      case 0x98:
        v82 = ((int (__fastcall *)(int, _DWORD, _DWORD, _DWORD))loc_7B794)(3, *(v4 - 18), *(v4 - 12), HIDWORD(v14));
        v39 = v4 - 24;
        v19 = v2 - 8;
        v1 = 134;
        v179 = *(v4 - 11);
        v83 = ((int (__fastcall *)(int, int, _DWORD))loc_7B794)(2, v82, *v4);
        LODWORD(v14) = 36;
        HIDWORD(v14) = v83;
        break;
      case 0x99:
        v79 = *(v4 - 11);
        v19 = v2 - 8;
        v80 = *(v4 - 18);
        v1 = 134;
        *(_DWORD *)*(v4 - 17) = *(v4 - 12);
        v39 = v4 - 24;
        v179 = v79;
        v81 = ((int (__fastcall *)(int, int, _DWORD))loc_7B794)(2, v80, *v4);
        LODWORD(v14) = 36;
        HIDWORD(v14) = v81;
        break;
      case 0x9A:
        v19 = v2 - 8;
        v39 = v4 - 24;
        v78 = *(v4 - 11);
        v1 = -187;
        HIDWORD(v14) = *(v4 - 6);
        *(_DWORD *)*(v4 - 5) = *(v4 - 12);
        LODWORD(v14) = 37;
        v179 = v78;
        break;
      case 0x9B:
        v19 = v2 - 4;
        v39 = v4 - 12;
        v77 = v4[1];
        v1 = -187;
        HIDWORD(v14) = *(v4 - 6);
        *(_DWORD *)*(v4 - 5) = *v4;
        LODWORD(v14) = 37;
        v179 = v77;
        break;
      case 0x9C:
        v19 = v2 - 4;
        v39 = v4 - 12;
        HIDWORD(v14) = *(v4 - 6);
        v1 = -187;
        v76 = *v4 + 12;
        *(_DWORD *)*(v4 - 5) = *v4;
        LODWORD(v14) = 37;
        v179 = v76;
        break;
      case 0x9D:
        v19 = v2 - 4;
        HIDWORD(v14) = ((int (__fastcall *)(int, _DWORD, _DWORD, _DWORD))loc_7B794)(3, *(v4 - 6), *v4, HIDWORD(v14));
        v39 = v4 - 12;
        v1 = -187;
        v179 = v4[1];
        LODWORD(v14) = 37;
        break;
      case 0x9E:
        v19 = v2 - 4;
        v39 = v4 - 12;
        v1 = -187;
        v179 = *v4 + 12;
        v134 = ((int (__fastcall *)(int, _DWORD))loc_7B794)(3, *(v4 - 6));
        LODWORD(v14) = 37;
        HIDWORD(v14) = v134;
        break;
      case 0x9F:
        v19 = v2 - 6;
        HIDWORD(v14) = *(v4 - 6);
        v39 = v4 - 18;
        v1 = -6;
        LODWORD(v14) = 38;
        break;
      case 0xA1:
        sub_7B904(">", *(v4 - 12), *v4);
        v19 = v2 - 6;
        v39 = v4 - 18;
        HIDWORD(v14) = v144;
        v1 = -186;
        LODWORD(v14) = 39;
        break;
      case 0xA2:
        v143 = sub_7B670("&");
        v39 = v4 - 12;
        v19 = v2 - 4;
        v1 = -186;
        HIDWORD(v14) = ((int (__fastcall *)(int, _DWORD *, _DWORD))loc_7B794)(54, v143, *v4);
        LODWORD(v14) = 39;
        break;
      case 0xA3:
        v19 = v2 - 8;
        v142 = sub_7B670("&");
        v39 = v4 - 24;
        v1 = -186;
        HIDWORD(v14) = ((int (__fastcall *)(int, _DWORD *, _DWORD))loc_7B794)(54, v142, *(v4 - 6));
        LODWORD(v14) = 39;
        break;
      case 0xA4:
        v39 = v4 - 12;
        sub_7B940((char *)&word_3C1464);
        v19 = v2 - 4;
        v1 = -6;
        HIDWORD(v14) = v146;
        LODWORD(v14) = 38;
        break;
      case 0xA5:
        v39 = v4 - 12;
        sub_7B940("!");
        v19 = v2 - 4;
        v1 = -6;
        HIDWORD(v14) = v145;
        LODWORD(v14) = 38;
        break;
      case 0xA6:
        v39 = v4 - 12;
        sub_7B940("~");
        v19 = v2 - 4;
        v1 = -6;
        HIDWORD(v14) = v105;
        LODWORD(v14) = 38;
        break;
      case 0xA7:
        HIDWORD(v14) = *v4;
        v19 = v2 - 8;
        v104 = *(v4 - 12);
        v39 = v4 - 24;
        if ( (unsigned int)(*(_DWORD *)*v4 - 60) > 1 )
        {
          v185 = (char *)*v4;
          v1 = -6;
          v172 = ((int (__fastcall *)(int, int, _DWORD))loc_7B794)(51, v104, 0);
          v173 = ((int (__fastcall *)(int, int, char *))loc_7B794)(54, v172, v185);
          LODWORD(v14) = 38;
          HIDWORD(v14) = v173;
        }
        else
        {
          *(_DWORD *)(HIDWORD(v14) + 8) = v104;
          v1 = -6;
          LODWORD(v14) = 38;
        }
        break;
      case 0xA8:
      case 0xA9:
      case 0xAA:
        v19 = v2 - 14;
        v100 = ((int (__fastcall *)(int, _DWORD, _DWORD, _DWORD))loc_7B794)(51, *(v4 - 24), 0, HIDWORD(v14));
        v39 = v4 - 42;
        v1 = -6;
        HIDWORD(v14) = ((int (__fastcall *)(int, int, _DWORD))loc_7B794)(54, v100, *(v4 - 6));
        LODWORD(v14) = 38;
        break;
      case 0xAB:
        sub_7B904("*", *(v4 - 12), *v4);
        v19 = v2 - 6;
        v39 = v4 - 18;
        HIDWORD(v14) = v99;
        v1 = -6;
        LODWORD(v14) = 38;
        break;
      case 0xAC:
        sub_7B904((char *)&word_398974, *(v4 - 12), *v4);
        v19 = v2 - 6;
        v39 = v4 - 18;
        HIDWORD(v14) = v102;
        v1 = -6;
        LODWORD(v14) = 38;
        break;
      case 0xAD:
        sub_7B904("%", *(v4 - 12), *v4);
        v19 = v2 - 6;
        v39 = v4 - 18;
        HIDWORD(v14) = v101;
        v1 = -6;
        LODWORD(v14) = 38;
        break;
      case 0xAE:
        sub_7B904("+", *(v4 - 12), *v4);
        v19 = v2 - 6;
        v39 = v4 - 18;
        HIDWORD(v14) = v103;
        v1 = -6;
        LODWORD(v14) = 38;
        break;
      case 0xAF:
        sub_7B904((char *)&word_3C1464, *(v4 - 12), *v4);
        v19 = v2 - 6;
        v39 = v4 - 18;
        HIDWORD(v14) = v109;
        v1 = -6;
        LODWORD(v14) = 38;
        break;
      case 0xB0:
        sub_7B904((char *)&dword_364FA8, *(v4 - 12), *v4);
        v19 = v2 - 6;
        v39 = v4 - 18;
        HIDWORD(v14) = v141;
        v1 = -6;
        LODWORD(v14) = 38;
        break;
      case 0xB1:
        sub_7B904((char *)&dword_3CE920, *(v4 - 12), *v4);
        v19 = v2 - 6;
        v39 = v4 - 18;
        HIDWORD(v14) = v140;
        v1 = -6;
        LODWORD(v14) = 38;
        break;
      case 0xB2:
        sub_7B904((char *)&dword_364FAC, *(v4 - 12), *v4);
        v19 = v2 - 6;
        v39 = v4 - 18;
        HIDWORD(v14) = v139;
        v1 = -6;
        LODWORD(v14) = 38;
        break;
      case 0xB3:
        sub_7B904((char *)&dword_364FB0, *(v4 - 12), *v4);
        v19 = v2 - 6;
        v39 = v4 - 18;
        HIDWORD(v14) = v138;
        v1 = -6;
        LODWORD(v14) = 38;
        break;
      case 0xB4:
        sub_7B904((char *)&dword_364FB4, *(v4 - 12), *v4);
        v19 = v2 - 6;
        v39 = v4 - 18;
        HIDWORD(v14) = v137;
        v1 = -6;
        LODWORD(v14) = 38;
        break;
      case 0xB5:
        sub_7B904((char *)&dword_364FB8, *(v4 - 12), *v4);
        v19 = v2 - 6;
        v39 = v4 - 18;
        HIDWORD(v14) = v136;
        v1 = -6;
        LODWORD(v14) = 38;
        break;
      case 0xB6:
        sub_7B904((char *)&word_364FA4, *(v4 - 12), *v4);
        v19 = v2 - 6;
        v39 = v4 - 18;
        HIDWORD(v14) = v135;
        v1 = -6;
        LODWORD(v14) = 38;
        break;
      case 0xB7:
        sub_7B904("&", *(v4 - 12), *v4);
        v19 = v2 - 6;
        v39 = v4 - 18;
        HIDWORD(v14) = v113;
        v1 = -6;
        LODWORD(v14) = 38;
        break;
      case 0xB8:
        sub_7B904("^", *(v4 - 12), *v4);
        v19 = v2 - 6;
        v39 = v4 - 18;
        HIDWORD(v14) = v112;
        v1 = -6;
        LODWORD(v14) = 38;
        break;
      case 0xB9:
        sub_7B904("|", *(v4 - 12), *v4);
        v19 = v2 - 6;
        v39 = v4 - 18;
        HIDWORD(v14) = v111;
        v1 = -6;
        LODWORD(v14) = 38;
        break;
      case 0xBA:
        sub_7B904((char *)&dword_364FBC, *(v4 - 12), *v4);
        v19 = v2 - 6;
        v39 = v4 - 18;
        HIDWORD(v14) = v110;
        v1 = -6;
        LODWORD(v14) = 38;
        break;
      case 0xBB:
        sub_7B904((char *)&dword_364FC0, *(v4 - 12), *v4);
        v19 = v2 - 6;
        v39 = v4 - 18;
        HIDWORD(v14) = v115;
        v1 = -6;
        LODWORD(v14) = 38;
        break;
      case 0xBC:
        sub_7B904((char *)&dword_364FCC, *(v4 - 12), *v4);
        v19 = v2 - 6;
        v39 = v4 - 18;
        HIDWORD(v14) = v114;
        v1 = -6;
        LODWORD(v14) = 38;
        break;
      case 0xBD:
        sub_7B904(".", *(v4 - 12), *v4);
        v19 = v2 - 6;
        v39 = v4 - 18;
        HIDWORD(v14) = v95;
        v1 = -6;
        LODWORD(v14) = 38;
        break;
      case 0xBE:
        v19 = v2 - 10;
        v90 = (char *)sub_7B670("?");
        v91 = *(v4 - 24);
        v39 = v4 - 30;
        v185 = v90;
        v1 = -6;
        v92 = ((int (__fastcall *)(int, _DWORD, _DWORD))loc_7B794)(59, *(v4 - 12), *v4);
        v93 = ((int (__fastcall *)(int, int, int))loc_7B794)(58, v91, v92);
        v94 = ((int (__fastcall *)(int, char *, int))loc_7B794)(57, v185, v93);
        LODWORD(v14) = 38;
        HIDWORD(v14) = v94;
        break;
      case 0xC1:
        v19 = v2 - 8;
        sub_7B940("sizeof ");
        v39 = v4 - 24;
        HIDWORD(v14) = v89;
        v1 = -6;
        LODWORD(v14) = 38;
        break;
      case 0xC2:
        v39 = v4 - 6;
        v169 = ((int (__fastcall *)(char *, int))loc_7B6D4)("1", 1);
        v19 = v2 - 2;
        v170 = ((int (__fastcall *)(const char *))loc_7B738)("bool");
        v1 = -6;
        v171 = ((int (__fastcall *)(int, int, int))loc_7B794)(60, v170, v169);
        LODWORD(v14) = 38;
        HIDWORD(v14) = v171;
        break;
      case 0xC3:
        v39 = v4 - 6;
        v147 = ((int (__fastcall *)(char *, int))loc_7B6D4)("0", 1);
        v19 = v2 - 2;
        v148 = ((int (__fastcall *)(const char *))loc_7B738)("bool");
        v1 = -6;
        v149 = ((int (__fastcall *)(int, int, int))loc_7B794)(60, v148, v147);
        LODWORD(v14) = 38;
        HIDWORD(v14) = v149;
        break;
      default:
        v174 = 3 * v13;
        v19 = &v2[-2 * v13];
        v39 = &v4[-2 * v174];
        LODWORD(v14) = byte_3674BC[HIDWORD(v12) - 1884] - 75;
        v1 = word_366E24[(_DWORD)v14];
        break;
    }
    goto LABEL_52;
  }
  if ( v178 )
  {
    if ( v178 != 3 )
      goto LABEL_25;
    if ( dword_474F88 > 0 )
    {
      dword_474F88 = -2;
      goto LABEL_25;
    }
    if ( dword_474F88 )
      goto LABEL_25;
    v2 = v3;
    v37 = 1;
  }
  else
  {
    ++dword_474F84;
    if ( !dword_474F64 )
    {
      dword_474F64 = (int)"syntax error";
      dword_474F68 = dword_474F60;
    }
    while ( 1 )
    {
LABEL_25:
      if ( v6 != -187 )
      {
        v17 = v6 + 1;
        if ( v17 <= 0x471 )
        {
          v18 = 2 * v17;
          if ( *(_WORD *)((char *)&unk_36598C + v18) == 1 )
          {
            v1 = *(unsigned __int16 *)((char *)&unk_366270 + v18);
            if ( *(_WORD *)((char *)&unk_366270 + v18) )
            {
              v178 = 3;
              v4 += 6;
              v19 = v2;
              v20 = unk_474F70;
              v21 = unk_474F74;
              v22 = unk_474F78;
              *v4 = dword_474F6C;
              v4[1] = v20;
              v4[2] = v21;
              v4[3] = v22;
              v23 = unk_474F80;
              v4[4] = unk_474F7C;
              v4[5] = v23;
              goto LABEL_37;
            }
          }
        }
      }
      if ( v2 == v3 )
        break;
      v16 = *((__int16 *)v2 - 1);
      v2 -= 2;
      v4 -= 6;
      v6 = word_3655CC[v16];
    }
    v37 = 1;
  }
LABEL_48:
  if ( v2 == (char *)ptr )
    return v37;
LABEL_49:
  free(v2);
  return v37;
}
