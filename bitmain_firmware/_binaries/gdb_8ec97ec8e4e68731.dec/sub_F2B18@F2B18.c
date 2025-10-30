int __fastcall sub_F2B18(_DWORD *a1, int a2)
{
  int v2; // r7
  _DWORD *v4; // r4
  int v5; // r0
  int v6; // r3
  int v7; // r2
  int v8; // r6
  unsigned int v9; // r11
  int v10; // lr
  int v11; // r1
  int v12; // r8
  int v13; // r12
  int v14; // r7
  void *v15; // r0
  int v16; // r2
  const char *v17; // r4
  _BOOL4 v18; // r0
  int v19; // r1
  int v20; // r10
  int v21; // r4
  int v22; // r4
  int v23; // r1
  __int64 v24; // r0
  int v25; // r1
  int v26; // r3
  int v27; // r0
  unsigned int v28; // r2
  int v29; // r6
  int v30; // r1
  char *v31; // r7
  int *v32; // r7
  char *v33; // r3
  unsigned int v34; // r2
  _DWORD *i; // r8
  _DWORD *j; // r7
  int k; // r0
  int v38; // r4
  unsigned int v39; // r3
  int v40; // r3
  char *v41; // r11
  int *v42; // r0
  unsigned __int8 *v43; // r10
  unsigned __int8 *v44; // r11
  int *v45; // r3
  int v46; // r2
  int v47; // r2
  int v48; // r11
  unsigned __int8 **v49; // r12
  unsigned __int8 *v50; // r2
  int v51; // r3
  unsigned __int8 v52; // r1
  unsigned int v53; // r1
  int v54; // r10
  int v55; // r0
  int v56; // r3
  char v57; // r2
  void *v58; // r1
  int v59; // r12
  void *v60; // r3
  bool v61; // zf
  int v62; // r3
  int v63; // r3
  int v64; // r0
  int *v65; // r3
  int v66; // r4
  const char *v67; // r7
  const char *v68; // t1
  char *v69; // r1
  char v70; // r2
  const char *v71; // t1
  int v72; // r4
  char *v74; // r7
  int v75; // r3
  bool v76; // zf
  int v77; // r0
  int v78; // r7
  int v79; // r8
  bool v80; // zf
  int v81; // r12
  int v82; // r1
  unsigned int v83; // r0
  int v84; // r2
  int v85; // r7
  int v86; // r3
  int v87; // r8
  int v88; // r7
  char *v89; // r7
  int v90; // r3
  int v91; // r0
  char *v92; // r7
  size_t v93; // r2
  int *v94; // r8
  _BOOL4 v95; // r3
  int v96; // r1
  int v97; // r7
  size_t v98; // r0
  size_t v99; // r4
  _BOOL4 v100; // r3
  char **v101; // r0
  int v102; // r0
  int v103; // r1
  int v104; // r12
  unsigned int v105; // r2
  int v106; // r3
  int v107; // r3
  int v108; // r7
  int v109; // r0
  int *v110; // r7
  int v111; // r0
  int v112; // r0
  int v113; // r0
  __int64 v114; // r0
  unsigned __int8 **v115; // [sp+10h] [bp-CCh]
  int v116; // [sp+10h] [bp-CCh]
  unsigned int v117; // [sp+10h] [bp-CCh]
  char *v118; // [sp+14h] [bp-C8h]
  char *v119; // [sp+14h] [bp-C8h]
  size_t n; // [sp+18h] [bp-C4h]
  int na; // [sp+18h] [bp-C4h]
  unsigned __int8 **v122; // [sp+1Ch] [bp-C0h]
  char *v123; // [sp+20h] [bp-BCh]
  char *v124; // [sp+20h] [bp-BCh]
  int v125; // [sp+24h] [bp-B8h]
  int *v126; // [sp+24h] [bp-B8h]
  unsigned int v127; // [sp+28h] [bp-B4h]
  int v128; // [sp+2Ch] [bp-B0h]
  unsigned int v129; // [sp+2Ch] [bp-B0h]
  int v130; // [sp+30h] [bp-ACh]
  int v131; // [sp+34h] [bp-A8h]
  int v132; // [sp+38h] [bp-A4h]
  int v133; // [sp+3Ch] [bp-A0h]
  int v134; // [sp+40h] [bp-9Ch]
  void *v135; // [sp+44h] [bp-98h]
  const char *v136; // [sp+48h] [bp-94h]
  int *v138; // [sp+50h] [bp-8Ch]
  int v139; // [sp+54h] [bp-88h]
  int v140; // [sp+58h] [bp-84h]
  int v141; // [sp+64h] [bp-78h] BYREF
  _DWORD v142[3]; // [sp+68h] [bp-74h] BYREF
  unsigned int v143; // [sp+74h] [bp-68h]
  _BYTE v144[16]; // [sp+78h] [bp-64h] BYREF
  _DWORD v145[6]; // [sp+88h] [bp-54h] BYREF
  char *s1; // [sp+A0h] [bp-3Ch] BYREF
  char *v147; // [sp+A4h] [bp-38h]
  char *v148; // [sp+A8h] [bp-34h]
  int v149; // [sp+ACh] [bp-30h]
  int v150; // [sp+B0h] [bp-2Ch]
  int v151; // [sp+B4h] [bp-28h]
  int v152; // [sp+B8h] [bp-24h]
  char *v153[3]; // [sp+BCh] [bp-20h] BYREF
  int v154; // [sp+C8h] [bp-14h]
  int v155; // [sp+CCh] [bp-10h]
  int v156; // [sp+D0h] [bp-Ch]
  int v157; // [sp+D4h] [bp-8h]

  v2 = a1[9];
  v4 = *(_DWORD **)(v2 + 160);
  v134 = v2;
  v136 = *(const char **)v2;
  v5 = sub_1B6B24(a1, dword_4789C4);
  v6 = v4[13];
  v7 = v4[14];
  v8 = v4[4];
  v9 = *(_DWORD *)(v2 + 124);
  v10 = v4[11];
  v11 = v4[10];
  v12 = v4[12];
  dword_4789F4 = v4[9];
  v13 = v4[15];
  v131 = v5;
  dword_4789F8 = v10;
  dword_4789AC[0] = v13;
  dword_4789E8 = v2;
  v14 = v8 + v9 * v6;
  dword_478A08 = v11;
  dword_4789E0 = v6;
  dword_4789EC = v7;
  dword_478A04 = v12;
  v15 = sub_93028(v6 + v7);
  v16 = v4[13];
  dword_4789E4 = (int)v15;
  dword_4789F0 = (int)v15 + v16;
  v135 = sub_9253C((int)sub_2589B8, (int)&dword_4789E4);
  v17 = **(const char ***)(a1[9] + 4);
  v18 = !strncmp(v17, "pe", 2u) || strncmp(v17, "epoc-pe", 7u) == 0;
  dword_4789FC = v18;
  *(_QWORD *)v131 = 0;
  *(_QWORD *)(v131 + 8) = 0;
  if ( v9 )
  {
    sub_2ADCFC(v134, sub_F1338, v131);
    sub_9253C((int)sub_F13F0, 0);
    v20 = *(_DWORD *)v131;
    v21 = *(_DWORD *)(v131 + 8);
    dword_478C0C = v20;
    v22 = v21 - v20;
    dword_478C10 = v22;
    if ( dword_4789B4 )
      free((void *)dword_4789B4);
    dword_4789B4 = 0;
    if ( v22 )
    {
      if ( sub_2A8A04(v134, v19, v20, v20 >> 31, 0) < 0
        || (dword_4789B4 = (int)sub_93028(v22 + dword_4789AC[0]), v22 != sub_2A87D8(dword_4789B4, v22, v134)) )
      {
        sub_946E0("\"%s\": error reading line numbers.", v136);
      }
      memset((void *)(dword_4789B4 + v22), 0, dword_4789AC[0]);
    }
  }
  sub_9253C((int)sub_F13C8, 0);
  if ( dword_4789B0 )
    free((void *)dword_4789B0);
  dword_4789B0 = 0;
  if ( v14 )
  {
    if ( sub_2A8A04(v134, v23, v14, v14 >> 31, 0) < 0 )
      goto LABEL_249;
    v97 = sub_2A87D8(v153, 4, v134);
    v98 = (*(int (__fastcall **)(char **))(*(_DWORD *)(dword_4789E8 + 4) + 76))(v153);
    v99 = v98;
    v100 = v98 <= 3;
    if ( v97 != 4 )
      v100 = 1;
    if ( !v100 )
    {
      v101 = (char **)sub_93028(v98);
      dword_4789B0 = (int)v101;
      *v101 = v153[0];
      if ( v99 != 4 && (v99 - 4 != sub_2A87D8(v101 + 1, v99 - 4, v134) || *(_BYTE *)(dword_4789B0 + v99 - 1)) )
LABEL_249:
        sub_946E0("\"%s\": can't get string table", v136);
    }
  }
  sub_1B2570(v144, a1);
  v24 = sub_1B7250(a1);
  v130 = v24;
  sub_2A8A04(a1[9], HIDWORD(v24), 0, 0, 0);
  if ( sub_2A8A04(a1[9], v25, v8, v8 >> 31, 0) < 0 )
    goto LABEL_277;
  v26 = a1[9];
  dword_4789C0 = (int)a1;
  dword_478A00 = v9;
  dword_4789DC = v26;
  sub_E6538(0);
  memset(&unk_478A10, 0, 0x1FCu);
  if ( dword_4789BC )
    free((void *)dword_4789BC);
  dword_4789B8 = 160;
  dword_4789BC = (int)sub_93094(0xA0u, 4u);
  sub_F1430((int)a1, (int)"");
  v27 = (int)&dword_4788E0;
  v28 = 0;
  v29 = -1;
  dword_478988 = 0;
  v127 = 0;
  v123 = 0;
  v133 = 0;
  v132 = 0;
  n = 0;
  v125 = 0;
  v118 = "";
LABEL_15:
  if ( v9 > v28 )
  {
    while ( 1 )
    {
      sub_258BD4(v27);
      ((void (__fastcall *)(char **, _DWORD *, int *))loc_F1614)(&s1, dword_478C2C, &dword_478C14);
      if ( v147 == (char *)v29 && v150 != 103 )
      {
        if ( sub_E6824() )
          ((void (__fastcall *)(_DWORD))loc_F15C0)(a1[38]);
        sub_F1430((int)a1, (int)"_globals_");
        *(_DWORD *)(dword_4788E0 + 20) = 13;
        sub_E6538((int)"_globals_");
        dword_4789C8 = 0;
        dword_4789CC = 0;
      }
      v61 = sub_E6824() == 0;
      v30 = dword_4789F8;
      v27 = v152;
      if ( v61 && ((dword_4789F8 | dword_4789F4) & v152) != 0 && v151 == -2 )
      {
        sub_E6538((int)v118);
        v27 = v152;
        v30 = dword_4789F8;
        dword_4789C8 = 0;
        dword_4789CC = 0;
      }
      if ( (v30 & v27) == 2 << dword_478A08 )
      {
        if ( v150 != 13 )
        {
          v91 = sub_F1548((int)&s1, (int)a1);
          v92 = (char *)v149;
          ((void (__fastcall *)(_BYTE *, char **, int, int, int))loc_F28D0)(v144, &s1, v149, 1, v91);
          v123 = v92;
          v153[0] = s1;
          v153[1] = v147;
          v153[2] = v148;
          v154 = v149;
          v127 = dword_478C1C;
          v155 = v150;
          v156 = v151;
          v157 = v152;
          *(_DWORD *)dword_478C44 = dword_478C2C[0];
          dword_478C48 = dword_478C2C[1];
          unk_478C4C = dword_478C2C[2];
          unk_478C50 = dword_478C2C[3];
          unk_478C54 = unk_478C3C;
          unk_478C58 = unk_478C40;
          dword_478C5C = dword_478C14;
          dword_478C60 = dword_478C18;
          unk_478C64 = dword_478C1C;
          unk_478C68 = unk_478C20;
          v27 = unk_478C24;
          v28 = dword_478988;
          unk_478C6C = unk_478C24;
          unk_478C70 = unk_478C28;
          goto LABEL_15;
        }
        goto LABEL_113;
      }
      if ( v150 == 103 )
      {
        v29 = v149;
        if ( (int)v148 <= 0 )
        {
          v118 = "";
LABEL_158:
          v27 = sub_E6824();
          if ( v27 )
          {
            ((void (__fastcall *)(_DWORD))loc_F15C0)(a1[38]);
            v27 = sub_F1430((int)a1, (int)v118);
          }
          v28 = dword_478988;
          v125 = 1;
          goto LABEL_15;
        }
        if ( dword_478C14 )
        {
          strncpy(byte_478C74, (const char *)&dword_478C14, 0xEu)[14] = 0;
          goto LABEL_190;
        }
        v93 = strlen((const char *)(dword_4789B0 + dword_478C18));
        if ( v93 < 0x2000 )
        {
          memcpy(byte_478C74, (const void *)(dword_4789B0 + dword_478C18), v93 + 1);
LABEL_190:
          v118 = (char *)sub_3245A4(byte_478C74);
          goto LABEL_158;
        }
        sub_94700((int)"coffread.c", 1398, "coff file name too long");
LABEL_281:
        sub_94700((int)"coffread.c", 1184, "sect_index_text not initialized");
LABEL_282:
        sub_94700((int)"coffread.c", 1147, "sect_index_text not initialized");
LABEL_283:
        sub_94700((int)"coffread.c", 1513, "sect_index_text not initialized");
LABEL_284:
        sub_946E0("Bad coff function information.");
      }
      if ( v150 > 103 )
      {
        if ( v150 == 131 )
          goto LABEL_127;
        if ( v150 <= 131 )
        {
          if ( v150 <= 106 )
            goto LABEL_171;
          if ( v150 != 130 )
            goto LABEL_113;
          goto LABEL_131;
        }
        if ( v150 == 150 )
          goto LABEL_131;
        if ( v150 > 150 )
        {
          if ( v150 == 151 )
            goto LABEL_127;
          if ( v150 == 255 )
            goto LABEL_171;
LABEL_113:
          v27 = (int)sub_F2438(&s1, &dword_478C14, a1);
          goto LABEL_114;
        }
        if ( v150 != 134 )
          goto LABEL_113;
        goto LABEL_127;
      }
      if ( v150 == 6 )
        break;
      if ( v150 <= 6 )
      {
        if ( v150 != 3 )
        {
          if ( v150 == 5 )
            goto LABEL_171;
          if ( v150 != 2 )
            goto LABEL_113;
LABEL_131:
          if ( !v151 )
            goto LABEL_114;
          if ( v151 != -1 )
          {
            v142[0] = v151;
            v141 = 0;
            v77 = a1[9];
            v142[1] = &v141;
            sub_2ADCFC(v77, sub_F1320, v142);
            v78 = v141;
            v79 = sub_F1548((int)&s1, (int)a1);
            v80 = v150 == 150;
            if ( v150 != 150 )
              v80 = v150 == 2;
            v116 = v149;
            v81 = v80;
            if ( v150 == 130 )
              v82 = v81 | 1;
            else
              v82 = v81;
            v83 = v150 & 0xFFFFFF7F;
            if ( v82 )
            {
LABEL_142:
              if ( v79 == -1 )
                goto LABEL_276;
              v128 = *(_DWORD *)(a1[36] + 4 * v79);
LABEL_144:
              v84 = *(_DWORD *)(v78 + 20);
              if ( (v84 & 0x10) != 0 )
              {
                if ( v81 )
                {
                  v85 = 1;
                }
                else if ( v150 == 130 )
                {
                  v85 = 1;
                }
                else
                {
                  v85 = 8;
                }
LABEL_150:
                v116 = ((int (__fastcall *)(int, int))loc_169FA0)(v130, v149);
LABEL_151:
                v27 = ((int (__fastcall *)(_BYTE *, char **, int, int, int))loc_F28D0)(v144, &s1, v116, v85, v79);
LABEL_152:
                if ( v27 )
                  v27 = ((int (__fastcall *)(int, int, int))loc_16A7B8)(v130, v150, v27);
                if ( ((dword_4789F4 | dword_4789F8) & v152) != 0 )
                {
                  v27 = (int)sub_F2438(&s1, &dword_478C14, a1);
                  *(_WORD *)(v27 + 22) = v79;
                  *(_QWORD *)(v27 + 8) = (unsigned int)(v116 + v128);
                  v28 = dword_478988;
                  goto LABEL_15;
                }
                goto LABEL_114;
              }
            }
            else
            {
              if ( !dword_4789FC )
              {
                v128 = 0;
                goto LABEL_144;
              }
              if ( v150 == 3 )
                goto LABEL_142;
              v84 = *(_DWORD *)(v78 + 20);
              if ( (v84 & 0x10) != 0 )
              {
                v128 = 0;
                v85 = 8;
                goto LABEL_150;
              }
              v128 = 0;
            }
            if ( (v84 & 3) == 3 )
            {
              if ( v83 == 2 )
                v85 = 4;
              else
                v85 = 9;
            }
            else
            {
              v85 = v84 & 1;
              if ( (v84 & 1) != 0 )
              {
                if ( v83 == 2 )
                  v85 = 5;
                else
                  v85 = 10;
              }
            }
            goto LABEL_151;
          }
          v79 = sub_F1548((int)&s1, (int)a1);
          v116 = v149;
          v128 = 0;
          v27 = ((int (__fastcall *)(_BYTE *, char **, int, int, int))loc_F28D0)(v144, &s1, v149, 6, v79);
          goto LABEL_152;
        }
LABEL_127:
        v74 = s1;
        v75 = (unsigned __int8)*s1;
        if ( v75 != 46 )
        {
LABEL_128:
          v27 &= v30 | dword_4789F4;
          v76 = v75 == 76;
          if ( v75 == 76 )
            v76 = v27 == 0;
          if ( v76 )
          {
            v27 = strncmp(v74, "LI%", 3u);
            if ( !v27 )
              goto LABEL_114;
            v27 = strncmp(v74, "LF%", 3u);
            if ( !v27 )
              goto LABEL_114;
            v27 = strncmp(v74, "LC%", 3u);
            if ( !v27 )
              goto LABEL_114;
            v27 = strncmp(v74, "LP%", 3u);
            if ( !v27 )
              goto LABEL_114;
            v27 = strncmp(v74, "LPB%", 4u);
            if ( !v27 )
              goto LABEL_114;
            v27 = strncmp(v74, "LBB%", 4u);
            if ( !v27 )
              goto LABEL_114;
            v27 = strncmp(v74, "LBE%", 4u);
            if ( !v27 )
              goto LABEL_114;
            v27 = strncmp(v74, "LPBX%", 5u);
            if ( !v27 )
              goto LABEL_114;
          }
          goto LABEL_131;
        }
LABEL_163:
        v27 = strcmp(v74, ".text");
        if ( !v27 && v125 )
        {
          v86 = a1[38];
          if ( v86 == -1 )
          {
            v114 = sub_94700((int)"coffread.c", 950, "sect_index_text not initialized");
            if ( v153[0] )
              ((void (__fastcall *)(char *, _DWORD))loc_1625A8)(v153[0], HIDWORD(v114));
            v113 = sub_1B2584(v144);
            sub_338FFC(v113);
          }
          v87 = dword_478C14;
          v88 = v149 + *(_DWORD *)(a1[36] + 4 * v86);
          v27 = sub_E6538((int)v118);
          dword_4789C8 = v88;
          dword_4789CC = v88 + v87;
          v125 = 0;
          v28 = dword_478988;
          goto LABEL_15;
        }
        goto LABEL_114;
      }
      if ( v150 == 14 )
        goto LABEL_171;
      if ( v150 <= 14 )
      {
        if ( v150 == 7 )
        {
LABEL_171:
          if ( dword_47AC88 > 0 )
            v27 = sub_F43B4(&off_46D334, "Bad n_sclass for symbol %s", s1);
          goto LABEL_114;
        }
        goto LABEL_113;
      }
      if ( v150 == 100 )
      {
        v89 = s1;
        if ( !strcmp(s1, ".bb") )
        {
          v90 = a1[38];
          if ( v90 != -1 )
          {
            v27 = (int)sub_E637C(++n, v149 + *(_DWORD *)(a1[36] + 4 * v90));
            goto LABEL_114;
          }
          sub_94700((int)"coffread.c", 1157, "sect_index_text not initialized");
LABEL_276:
          sub_94700((int)"coffread.c", 1015, "Section index is uninitialized");
LABEL_277:
          v112 = sub_1B87A8(a1);
          sub_258B04(v112);
        }
        v27 = strcmp(v89, ".eb");
        if ( !v27 )
        {
          if ( dword_478974 > 0 )
          {
            v27 = ((int (*)(void))loc_E6400)();
            v94 = (int *)v27;
            if ( n == *(_DWORD *)(v27 + 28) )
            {
              if ( dword_4788E8 && dword_478974 > 0 )
              {
                v96 = a1[38];
                if ( v96 == -1 )
                  goto LABEL_281;
                v27 = (int)sub_E5CB4(
                             0,
                             &dword_4788E8,
                             *(char **)(v27 + 8),
                             0,
                             *(_DWORD *)(v27 + 20),
                             v149 + *(_DWORD *)(a1[36] + 4 * v96));
              }
              --n;
              v28 = dword_478988;
              dword_4788E8 = *v94;
              goto LABEL_15;
            }
            v28 = dword_478988;
            if ( dword_47AC88 <= 0 )
            {
              --n;
              goto LABEL_15;
            }
            v27 = sub_F43B4(&off_46D334, "Mismatched .eb symbol ignored starting at symnum %d", dword_478988);
            --n;
          }
          else if ( dword_47AC88 > 0 )
          {
            v27 = sub_F43B4(
                    &off_46D334,
                    "`.eb' symbol without matching `.bb' symbol ignored starting at symnum %d",
                    v147);
          }
        }
LABEL_114:
        v28 = dword_478988;
        goto LABEL_15;
      }
      if ( v150 != 101 )
        goto LABEL_113;
      v31 = s1;
      if ( strcmp(s1, ".bf") )
      {
        v27 = strcmp(v31, ".ef");
        if ( v27 )
          goto LABEL_114;
        if ( !dword_478980 )
          goto LABEL_284;
        if ( dword_478974 <= 0 )
        {
          if ( dword_47AC88 <= 0 )
            goto LABEL_182;
          v27 = sub_F43B4(&off_46D334, "`.ef' symbol without matching `.bf' symbol ignored starting at symnum %d", v147);
          v28 = dword_478988;
          dword_478980 = 0;
          goto LABEL_15;
        }
        v27 = ((int (*)(void))loc_E6400)();
        v95 = v27 == 0;
        v139 = v27;
        if ( dword_478974 > 0 )
          v95 = 1;
        if ( v95 )
        {
          if ( dword_47AC88 <= 0 )
          {
LABEL_182:
            v28 = dword_478988;
            dword_478980 = 0;
          }
          else
          {
            v27 = sub_F43B4(&off_46D334, "Unmatched .ef symbol(s) ignored starting at symnum %d", v147);
            v28 = dword_478988;
            dword_478980 = 0;
          }
          goto LABEL_15;
        }
        if ( v148 == (char *)1 )
        {
          v129 = (unsigned __int16)dword_478C18;
          if ( (unsigned __int16)dword_478C18 != 1 )
            goto LABEL_255;
          v110 = (int *)dword_4788E0;
          v111 = ((int (__fastcall *)(int, int))loc_169FA0)(v130, v133);
          sub_E6044(v110, v132, v111);
        }
        else
        {
          if ( dword_47AC88 > 0 )
            sub_F43B4(&off_46D334, "`.ef' symbol %d has no aux entry", v147);
          v129 = 0x7FFFFFFF;
LABEL_255:
          v102 = sub_1B7250(a1);
          v103 = dword_4789B4;
          v140 = v102;
          if ( dword_4789B4 )
          {
            v104 = dword_478C0C;
            v105 = v127;
            if ( (int)v127 >= dword_478C0C )
            {
              v106 = dword_478C10;
            }
            else
            {
              if ( dword_47AC88 > 0 )
                sub_F43B4(&off_46D334, "Line number pointer %ld lower than start of line numbers", v127);
              v106 = dword_478C10;
              if ( v127 > dword_478C10 )
                goto LABEL_260;
              v104 = dword_478C0C;
              v103 = dword_4789B4;
              v105 = v127 + dword_478C0C;
            }
            v117 = v103 + v105 - v104 + dword_4789AC[0];
            while ( v117 <= v103 + v106 )
            {
              (*(void (**)(void))(*(_DWORD *)(*(_DWORD *)(dword_4789E8 + 4) + 444) + 8))();
              v107 = a1[38];
              v117 += dword_4789AC[0];
              if ( !v143 || v143 > v129 )
                goto LABEL_261;
              if ( v107 == -1 )
                goto LABEL_283;
              v108 = v132 - 1 + v143;
              v138 = (int *)dword_4788E0;
              v109 = ((int (__fastcall *)(int, int))loc_169FA0)(v140, v142[2] + *(_DWORD *)(a1[36] + 4 * v107));
              sub_E6044(v138, v108, v109);
              v103 = dword_4789B4;
              v106 = dword_478C10;
            }
          }
        }
LABEL_260:
        v107 = a1[38];
LABEL_261:
        if ( v107 != -1 )
        {
          v27 = (int)sub_E5CB4(
                       *(_DWORD *)(v139 + 12),
                       &dword_4788E8,
                       *(char **)(v139 + 8),
                       0,
                       *(_DWORD *)(v139 + 20),
                       v154 + dword_478C60 + *(_DWORD *)(a1[36] + 4 * v107));
          v28 = dword_478988;
          dword_478980 = 0;
          goto LABEL_15;
        }
        goto LABEL_282;
      }
      dword_478980 = 1;
      if ( v148 != (char *)1 && dword_47AC88 > 0 )
        sub_F43B4(&off_46D334, "`.bf' symbol %d has no aux entry", v147);
      v132 = (unsigned __int16)dword_478C18;
      v133 = v149;
      v32 = sub_E637C(0, (int)v123);
      if ( *(_DWORD *)dword_478C44 )
      {
        strncpy(dest, dword_478C44, 8u);
        v33 = dest;
        byte_4789D8 = 0;
      }
      else
      {
        v33 = (char *)(dword_4789B0 + dword_478C48);
      }
      v153[0] = v33;
      v27 = (int)sub_F2438(v153, &dword_478C5C, a1);
      v34 = dword_478988;
      v32[3] = v27;
      n = 0;
      if ( v9 <= v34 )
        goto LABEL_34;
    }
    if ( dword_478980 )
      goto LABEL_114;
    v74 = s1;
    v75 = (unsigned __int8)*s1;
    if ( v75 != 46 )
      goto LABEL_128;
    goto LABEL_163;
  }
LABEL_34:
  if ( !v9 && dword_4789FC )
    ((void (__fastcall *)(_BYTE *, _DWORD *))loc_F06E8)(v144, a1);
  if ( sub_E6824() )
    ((void (__fastcall *)(_DWORD))loc_F15C0)(a1[38]);
  for ( i = (_DWORD *)a1[5]; i; i = (_DWORD *)*i )
  {
    for ( j = (_DWORD *)i[3]; j; j = (_DWORD *)*j )
    {
      for ( k = sub_C28A8(*(_DWORD **)(*(_DWORD *)(j[1] + 32) + 12), v145); ; k = sub_C28E4((int)v145) )
      {
        v38 = k;
        if ( !k )
          break;
        v39 = *(unsigned __int8 *)(k + 32);
        if ( *((_DWORD *)off_46DBB8 + 4 * (v39 >> 3)) == 8 && (v39 & 7) == 1 )
        {
          v40 = *(_DWORD *)(*(_DWORD *)(k + 24) + 24);
          if ( *(_BYTE *)v40 == 1 )
          {
            if ( *(_DWORD *)(*(_DWORD *)(v40 + 20) + 20) )
            {
              v41 = *(char **)k;
              v119 = *(char **)k;
              v42 = &dword_4789AC[sub_E645C(*(char **)k)];
              v43 = (unsigned __int8 *)v42[25];
              if ( v43 )
              {
                v126 = v42;
                v115 = 0;
                v124 = v41 + 1;
                do
                {
                  v44 = (unsigned __int8 *)*((_DWORD *)v43 + 2);
                  if ( *v119 == **(_BYTE **)v43 && !strcmp(v124, (const char *)(*(_DWORD *)v43 + 1)) )
                  {
                    v45 = (int *)v115;
                    v46 = *(_DWORD *)(v38 + 24);
                    if ( v115 )
                      v115[2] = v44;
                    else
                      v45 = v126;
                    v47 = *(_DWORD *)(v46 + 24);
                    if ( !v115 )
                      v45[25] = (int)v44;
                    v48 = *(_DWORD *)(v47 + 20);
                    v49 = *(unsigned __int8 ***)(*(_DWORD *)(*((_DWORD *)v43 + 6) + 24) + 20);
                    v50 = v49[6];
                    v51 = *(__int16 *)(*(_DWORD *)(v48 + 24) + 4);
                    v122 = v49;
                    v52 = v50[2];
                    v49[5] = *(unsigned __int8 **)(v48 + 20);
                    *((_WORD *)v50 + 2) = v51;
                    v61 = (v52 & 0x10) == 0;
                    v53 = 24 * v51;
                    na = 24 * v51;
                    if ( v61 )
                    {
                      v58 = sub_93028(na);
                    }
                    else
                    {
                      v54 = *((_DWORD *)v50 + 4);
                      v55 = *(_DWORD *)(v54 + 64);
                      v56 = *(_DWORD *)(v54 + 60);
                      if ( v53 > v55 - v56 )
                      {
                        obstack_newchunk((struct obstack *)(v54 + 48), v53);
                        v56 = *(_DWORD *)(v54 + 60);
                        v55 = *(_DWORD *)(v54 + 64);
                      }
                      v57 = na;
                      v58 = *(void **)(v54 + 56);
                      v59 = *(_DWORD *)(v54 + 72);
                      v60 = (void *)(v56 + na);
                      v61 = v60 == v58;
                      *(_DWORD *)(v54 + 60) = v60;
                      if ( v60 == v58 )
                        v57 = *(_BYTE *)(v54 + 88);
                      v62 = ((unsigned int)v60 + v59) & ~v59;
                      *(_DWORD *)(v54 + 60) = v62;
                      if ( v61 )
                        *(_BYTE *)(v54 + 88) = v57 | 2;
                      if ( v62 - *(_DWORD *)(v54 + 52) > (unsigned int)(v55 - *(_DWORD *)(v54 + 52)) )
                      {
                        v62 = v55;
                        *(_DWORD *)(v54 + 60) = v55;
                      }
                      *(_DWORD *)(v54 + 56) = v62;
                    }
                    v43 = (unsigned __int8 *)v122;
                    v63 = *(_DWORD *)(v48 + 24);
                    *((_DWORD *)v122[6] + 6) = v58;
                    memcpy(v58, *(const void **)(v63 + 24), na);
                    v64 = *(_DWORD *)(*(_DWORD *)(v48 + 24) + 8);
                    if ( v64 )
                    {
                      v43 = v122[6];
                      if ( *((_DWORD *)v43 + 2) )
                      {
                        free(*((void **)v43 + 2));
                        v64 = *(_DWORD *)(*(_DWORD *)(v48 + 24) + 8);
                        v43 = v122[6];
                      }
                      *((_DWORD *)v43 + 2) = sub_327254(v64);
                    }
                    v65 = (int *)v115;
                    if ( v115 )
                      v43 = v115[2];
                    else
                      v65 = v126;
                    if ( !v115 )
                      v43 = (unsigned __int8 *)v65[25];
                  }
                  else
                  {
                    v115 = (unsigned __int8 **)v43;
                    v43 = v44;
                  }
                }
                while ( v43 );
              }
            }
          }
        }
      }
    }
  }
  dword_4789C0 = 0;
  sub_1B2CF4(v144);
  if ( dword_4789FC )
  {
    v66 = *(_DWORD *)(a1[10] + 80);
    v67 = *(const char **)v66;
    if ( *(_DWORD *)v66 )
    {
      while ( 1 )
      {
        if ( (*(_BYTE *)(v66 + 32) & 0xF) != 4 )
          goto LABEL_84;
        if ( !strncmp(v67, "_imp_", 5u) )
        {
          v69 = (char *)(v67 + 5);
LABEL_90:
          if ( !v69 )
            goto LABEL_84;
          if ( *(_BYTE *)(*(_DWORD *)(a1[9] + 4) + 24) && *v69 == *(_BYTE *)(*(_DWORD *)(a1[9] + 4) + 24) )
            ++v69;
          sub_1B141C((int)v153, v69);
          if ( !v153[0] )
            goto LABEL_84;
          v70 = v153[0][32];
          if ( (v70 & 0xF) == 1 )
            v153[0][32] = v70 & 0xF0 | 7;
          v71 = *(const char **)(v66 + 48);
          v66 += 48;
          v67 = v71;
          if ( !v71 )
            break;
        }
        else
        {
          if ( !strncmp(v67, "__imp_", 6u) )
          {
            v69 = (char *)(v67 + 6);
            goto LABEL_90;
          }
LABEL_84:
          v68 = *(const char **)(v66 + 48);
          v66 += 48;
          v67 = v68;
          if ( !v68 )
            break;
        }
      }
    }
  }
  if ( (a1[3] & 0x80) == 0 )
    sub_2ADCFC(v134, sub_F29E8, v131);
  if ( *(_DWORD *)(v131 + 24) )
  {
    if ( !*(_DWORD *)(v131 + 28) )
      sub_946E0(
        "The debugging information in `%s' is corrupted.\nThe file has a `.stabs' section, but no `.stabstr' section.",
        v136);
    sub_2A8A04(v134, 0, *(_DWORD *)(v134 + 24), *(_DWORD *)(v134 + 28), 0);
    sub_109040(
      a1,
      *(_DWORD *)(v131 + 16),
      *(_DWORD *)(v131 + 20),
      *(_DWORD *)(v131 + 24),
      *(_DWORD *)(*(_DWORD *)(v131 + 28) + 80),
      *(_DWORD *)(*(_DWORD *)(v131 + 28) + 84),
      *(_DWORD *)(*(_DWORD *)(v131 + 28) + 36));
  }
  if ( sub_12AFCC(a1, 0) )
    sub_131924(a1);
  sub_10FDC4(a1);
  if ( !sub_1B7A54(a1) )
  {
    v72 = sub_E4674((int)a1);
    if ( !v72 )
      v72 = sub_21258C(a1);
    sub_9253C((int)sub_F13B0, v72);
    if ( v72 )
    {
      sub_21278C(v153, v72);
      sub_213778(v153[0], v72, a2, a1);
      if ( v153[0] )
        ((void (*)(void))loc_1625A8)();
    }
  }
  sub_92620(v135);
  return sub_1B2584(v144);
}
