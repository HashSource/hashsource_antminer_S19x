void __fastcall sub_F0484(int a1, char *a2, const char *a3, char *a4, int a5, const char *a6, _DWORD *a7, _DWORD *a8)
{
  const char *v10; // r7
  size_t v12; // r4
  size_t v13; // r0
  int v14; // r0
  int v15; // r10
  int v16; // r5
  int v17; // r4
  char *v18; // r0
  int v19; // r10
  size_t v20; // r0
  size_t v21; // r0
  _DWORD *v22; // r0
  size_t v23; // r10
  char *v24; // r4
  char *v25; // r10
  int v26; // t1
  _DWORD *v27; // r0
  __int64 v28; // r0
  char *v29; // lr
  int v30; // r5
  _BOOL4 v31; // r6
  const char **v32; // r4
  void *v33; // r0
  int v34; // r3
  const char *v35; // r5
  _DWORD *v36; // r3
  int v37; // r0
  int v38; // r5
  int v39; // r0
  int v40; // r7
  int v41; // r5
  unsigned int v42; // r8
  unsigned int v43; // r6
  const char *v44; // r0
  int v45; // r2
  int v46; // r1
  int v47; // r0
  const char *v48; // r8
  const char *v49; // r5
  int v50; // r10
  const char *v51; // r6
  int v52; // r8
  int v53; // r0
  int v54; // r3
  _DWORD *v55; // r8
  int v56; // r7
  int v57; // r9
  int v58; // r1
  int v59; // r9
  unsigned __int8 *v60; // r5
  int v61; // r1
  const char **v62; // r0
  int v63; // r6
  int v64; // r4
  int v65; // r8
  int v66; // r7
  int v67; // r12
  int v68; // r3
  const char *v69; // r10
  const char *v70; // lr
  int v71; // r12
  int v72; // lr
  int v73; // r7
  int v74; // r6
  int v75; // r4
  int v76; // r8
  int v77; // r6
  int v78; // r7
  int v79; // r4
  int v80; // r5
  char *v81; // r0
  unsigned int v82; // r7
  size_t v83; // r1
  unsigned __int8 *v84; // r6
  const char *v85; // r10
  int v86; // r8
  const char *v87; // r4
  char *v88; // r0
  const char *v89; // r3
  const char *v90; // r1
  size_t v91; // r2
  _DWORD *v92; // r0
  int v93; // r5
  const char *v94; // r1
  unsigned int v95; // r4
  int v96; // r3
  _DWORD *v97; // r2
  _DWORD *v98; // r0
  int v99; // r2
  int v100; // r3
  _DWORD *v101; // r0
  _DWORD *v102; // r0
  _DWORD *v103; // r0
  _DWORD *v104; // r0
  int v105; // r0
  int v106; // r8
  int v107; // r0
  unsigned int v108; // r2
  bool v109; // zf
  _DWORD *v110; // r3
  int v111; // r2
  int v112; // [sp+0h] [bp-C4h]
  const char *v113; // [sp+4h] [bp-C0h]
  const char *v114; // [sp+10h] [bp-B4h] BYREF
  int v115; // [sp+14h] [bp-B0h] BYREF
  unsigned int v116; // [sp+18h] [bp-ACh]
  char *v117; // [sp+1Ch] [bp-A8h]
  const char *v118; // [sp+20h] [bp-A4h]
  const char *v119; // [sp+24h] [bp-A0h]
  const char *v120; // [sp+28h] [bp-9Ch]
  size_t v121; // [sp+2Ch] [bp-98h]
  int v122; // [sp+30h] [bp-94h]
  int v123; // [sp+34h] [bp-90h]
  int v124; // [sp+38h] [bp-8Ch]
  void *v125; // [sp+3Ch] [bp-88h]
  const char *v126; // [sp+40h] [bp-84h]
  const char *v127; // [sp+44h] [bp-80h]
  int v128; // [sp+48h] [bp-7Ch]
  unsigned int v129; // [sp+4Ch] [bp-78h]
  _DWORD *v130; // [sp+50h] [bp-74h] BYREF
  _DWORD v131[2]; // [sp+54h] [bp-70h] BYREF
  int v132; // [sp+5Ch] [bp-68h]
  int v133; // [sp+64h] [bp-60h]
  char *v134; // [sp+68h] [bp-5Ch]
  char *v135; // [sp+6Ch] [bp-58h]
  const char *v136; // [sp+70h] [bp-54h]
  char *v137; // [sp+74h] [bp-50h]
  int v138; // [sp+78h] [bp-4Ch]
  int v139; // [sp+7Ch] [bp-48h]
  char *s; // [sp+80h] [bp-44h]
  char *s2; // [sp+84h] [bp-40h]
  int v142; // [sp+94h] [bp-30h] BYREF
  _DWORD v143[2]; // [sp+98h] [bp-2Ch] BYREF
  _DWORD savedregs[9]; // [sp+A4h] [bp-20h] BYREF

  v10 = a3;
  v12 = strlen(a3);
  v13 = strlen(a4);
  sub_93170((char *)v143, v13 + v12 + 2, "%s!%s", v10, a4);
  v14 = sub_1B2488((int)v143, (char *)v143);
  v15 = v143[0];
  if ( v143[0] )
    goto LABEL_2;
  if ( v12 )
  {
    v23 = v12 - 1;
    v24 = (char *)&v142 + 3;
    v25 = (char *)v143 + v23;
    do
    {
      v26 = (unsigned __int8)*++v24;
      *v24 = tolower(v26);
    }
    while ( v25 != v24 );
  }
  v14 = sub_1B2488((int)v143, (char *)v143);
  v15 = v143[0];
  if ( v143[0] )
  {
LABEL_2:
    if ( (unsigned int)dword_4789A8 > 1 )
    {
      v22 = (_DWORD *)sub_242FC8(v14);
      sub_2594B0(
        *v22,
        "Adding forwarded exported symbol \"%s\" in dll \"%s\", pointing to \"%s\"\n",
        a2,
        a6,
        (const char *)v143);
    }
    v16 = *(__int16 *)(v15 + 22);
    v17 = *(_DWORD *)(v15 + 8);
    if ( v16 != -1 )
    {
      v10 = (const char *)(*(_BYTE *)(v15 + 32) & 0xF);
      v15 = *(_DWORD *)(*(_DWORD *)(v143[1] + 144) + 4 * v16);
      if ( a2 && *a2 )
        a4 = (char *)sub_327254(a2);
      else
        a4 = sub_93140("#%d", a5);
      v18 = sub_93140("%s!%s", a6, a4);
      a2 = v18;
      if ( *a8 != -1 )
      {
        v19 = v17 - *(_DWORD *)(*a7 + 4 * *a8) + v15;
        v20 = strlen(v18);
        sub_1B25B4(a1, a2, v20, 1, v19, (int)v10, v16);
        v21 = strlen(a4);
        sub_1B25B4(a1, a4, v21, 1, v19, (int)v10, v16);
        free(a2);
        free(a4);
        return;
      }
      sub_94700((int)"coff-pe-read.c", 268, "sect_index_text not initialized");
    }
    v28 = sub_94700((int)"coff-pe-read.c", 248, "Section index is uninitialized");
    v133 = v17;
    v134 = (char *)v16;
    v135 = a4;
    v136 = v10;
    v137 = a2;
    v138 = a1;
    v139 = v15;
    s = (char *)&savedregs[8];
    s2 = v29;
    v30 = HIDWORD(v28);
    v31 = 1;
    v32 = *(const char ***)(HIDWORD(v28) + 36);
    v122 = HIDWORD(v28);
    v124 = v28;
    v123 = (int)*v32;
    v33 = sub_9253C((int)nullsub_39, 0);
    v34 = *(_DWORD *)(v30 + 36);
    v125 = v33;
    v35 = **(const char ***)(v34 + 4);
    v130 = sub_93094(3u, 0x18u);
    sub_9253C((int)sub_2589B8, (int)&v130);
    v36 = v130;
    v130[5] = ".text";
    v36[9] = 4;
    v36[11] = ".data";
    v36[17] = ".bss";
    v36[15] = 5;
    *v36 = 0;
    v36[2] = 0;
    v36[6] = 0;
    v36[8] = 0;
    v36[12] = 0;
    v36[14] = 0;
    v36[1] = 1;
    v36[7] = 1;
    v36[13] = 1;
    v36[3] = 1;
    if ( !strcmp(v35, "pe-x86-64") )
    {
      if ( !strcmp(v35, "pe-i386") || !strcmp(v35, "pei-i386") || !strcmp(v35, "pe-arm-wince-little") )
      {
LABEL_54:
        v38 = sub_F02BC((int)v32, 60);
        goto LABEL_55;
      }
    }
    else
    {
      v31 = strcmp(v35, "pei-x86-64") == 0;
      if ( !strcmp(v35, "pe-i386") || !strcmp(v35, "pei-i386") || !strcmp(v35, "pe-arm-wince-little") )
        goto LABEL_22;
    }
    if ( strcmp(v35, "pei-arm-wince-little") )
    {
      if ( !v31 )
        goto LABEL_53;
      goto LABEL_54;
    }
LABEL_22:
    v37 = sub_F02BC((int)v32, 60);
    v38 = v37;
    if ( !v31 )
    {
      if ( !sub_F02BC((int)v32, v37 + 116) )
      {
LABEL_53:
        sub_92620(v125);
        return;
      }
      v129 = sub_F02BC((int)v32, v38 + 120);
      v121 = sub_F02BC((int)v32, v38 + 124);
      goto LABEL_25;
    }
LABEL_55:
    if ( !sub_F02BC((int)v32, v38 + 132) )
      goto LABEL_53;
    v129 = sub_F02BC((int)v32, v38 + 136);
    v121 = sub_F02BC((int)v32, v38 + 140);
LABEL_25:
    v128 = sub_F0278((int)v32, v38 + 6);
    v39 = sub_F0278((int)v32, v38 + 20);
    v120 = (const char *)(v39 + v38);
    if ( !v128 )
    {
      if ( !v121 )
        goto LABEL_53;
      v59 = 3;
      v117 = (char *)v128;
      v119 = (const char *)v131;
LABEL_58:
      v60 = (unsigned __int8 *)sub_93028(v121);
      v128 = (int)&v60[-v129];
      sub_9253C((int)sub_F0310, (int)v60);
      sub_2A8A04(v32, v61, v117, 0, 0);
      sub_2A87D8(v60, v121, v32);
      v62 = v32;
      v63 = v60[12] + (v60[13] << 8) + (v60[14] << 16);
      v64 = v60[24] + (v60[25] << 8);
      v65 = v60[32] + (v60[33] << 8);
      v66 = v60[36] + (v60[37] << 8);
      v67 = v60[38];
      v68 = v60[28] + (v60[29] << 8);
      v69 = (const char *)v60[30];
      v123 = v60[15];
      v70 = (const char *)v60[26];
      v126 = v69;
      v71 = v66 + (v67 << 16);
      v127 = v70;
      v72 = v60[34];
      v73 = v60[39];
      v74 = v63 + (v123 << 24);
      v131[0] = v59;
      v75 = v64 + ((_DWORD)v127 << 16);
      v76 = v65 + (v72 << 16) + (v60[35] << 24);
      v127 = (const char *)v60[27];
      v123 = v60[31];
      v126 = (const char *)&v60[v74 - v129];
      v120 = (const char *)(v71 + (v73 << 24));
      v77 = v60[16];
      v78 = v60[18];
      v127 = (const char *)(v75 + ((_DWORD)v127 << 24));
      v79 = v60[17];
      v80 = v60[19];
      v123 = v68 + ((_DWORD)v69 << 16) + (v123 << 24);
      v131[1] = v130;
      sub_2ADCFC(v62, sub_F021C, v119);
      v81 = strrchr(v126, 46);
      if ( v81 )
        *v81 = 0;
      v119 = (const char *)&dword_4789A8;
      if ( dword_4789A8 )
      {
        v101 = (_DWORD *)sub_242FC8(v81);
        v92 = (_DWORD *)sub_2594B0(
                          *v101,
                          "DLL \"%s\" has %ld export entries, base=%ld\n",
                          v126,
                          v127,
                          v77 + (v79 << 8) + (v78 << 16) + (v80 << 24));
        if ( !v127 )
        {
          v118 = 0;
          v121 = 0;
LABEL_82:
          if ( *(_DWORD *)v119 )
          {
            v102 = (_DWORD *)sub_242FC8(v92);
            sub_2594B0(
              *v102,
              "Finished reading \"%s\", exports %ld, forwards %ld, total %ld/%ld.\n",
              v126,
              v121,
              v118,
              &v118[v121],
              v127);
          }
          goto LABEL_53;
        }
      }
      else if ( !v127 )
      {
        goto LABEL_53;
      }
      v82 = 0;
      v83 = v121;
      v84 = (unsigned __int8 *)(v128 + v76);
      v118 = 0;
      v85 = &v120[v128];
      v121 = 0;
      v114 = "Export name \"%s\" ord. %lu, RVA 0x%lx in dll \"%s\" not handled\n";
      v86 = v128;
      v120 = (const char *)(v129 + v83);
      while ( 1 )
      {
        v93 = (unsigned __int8)v85[2 * v82] + ((unsigned __int8)v85[2 * v82 + 1] << 8);
        v94 = (const char *)(*v84 + (v84[1] << 8) + (v84[2] << 16) + (v84[3] << 24));
        v95 = *(unsigned __int8 *)(v86 + v123 + 4 * v93)
            + (*(unsigned __int8 *)(v86 + v123 + 4 * v93 + 1) << 8)
            + (*(unsigned __int8 *)(v86 + v123 + 4 * v93 + 2) << 16)
            + (*(unsigned __int8 *)(v86 + v123 + 4 * v93 + 3) << 24);
        v128 = (int)&v94[v86];
        if ( v129 <= v95 && (unsigned int)v120 > v95 )
        {
          v87 = (const char *)(v86 + v95);
          v88 = strrchr(v87, 46);
          if ( v88 )
          {
            v117 = v88;
            v90 = v87;
            v91 = v88 - v87;
            v115 = v88 - v87;
            v116 = ((unsigned int)&v115 + 3) >> 3;
            v87 = (const char *)&v114;
            strncpy((char *)&v114, v90, v91);
            *(_BYTE *)(v115 + 8 * v116) = 0;
            v89 = v117 + 1;
          }
          else
          {
            v89 = v87;
          }
          v92 = (_DWORD *)sub_F0484(v124, v128, v87, v89, v93, v126, v122 + 144, v122 + 152);
          if ( v92 )
            ++v118;
          goto LABEL_69;
        }
        v92 = v130;
        v96 = 0;
        v97 = v130;
        do
        {
          ++v96;
          if ( v97[1] <= v95 && v97[2] > v95 )
          {
            v94 = (const char *)v128;
            v112 = (int)v97;
            v99 = v95;
            v113 = v126;
            v100 = v93;
LABEL_79:
            ++v121;
            sub_F032C(v124, v94, v99, v100, v112, v113);
            goto LABEL_69;
          }
          v97 += 6;
        }
        while ( v96 != v59 );
        if ( !v94 )
        {
          v99 = v95;
          v112 = (int)v130;
          v113 = v126;
          v100 = v93;
          goto LABEL_79;
        }
        if ( *(_DWORD *)v119 )
        {
          v98 = (_DWORD *)sub_242FC8(v130);
          v92 = (_DWORD *)sub_2594B0(*v98, v114, v128, v93, v95, v126);
        }
LABEL_69:
        ++v82;
        v84 += 4;
        if ( v82 >= (unsigned int)v127 )
          goto LABEL_82;
      }
    }
    v40 = 0;
    v41 = v39 + v38 + 36;
    v127 = ".edata";
    v119 = (const char *)v131;
    do
    {
      v42 = sub_F02BC((int)v32, v41);
      ++v40;
      v43 = v42 + sub_F02BC((int)v32, v41 + 4);
      v44 = (const char *)sub_F02BC((int)v32, v41 + 8);
      v45 = v41 - 12;
      v126 = v44;
      v41 += 40;
      sub_2A8A04(v32, v46, v45, 0, 0);
      sub_2A87D8(v131, 8, v32);
      v47 = strcmp((const char *)v131, v127);
      if ( !v47 )
      {
        if ( v129 != v42 && dword_4789A8 )
        {
          v104 = (_DWORD *)sub_242FC8(0);
          sub_2594B0(
            *v104,
            "Wrong value of export RVA for dll \"%s\": 0x%lx instead of 0x%lx\n",
            (const char *)v123,
            v129,
            v42);
        }
LABEL_34:
        v48 = &v126[v129 - v42];
        goto LABEL_35;
      }
      if ( v129 >= v42 && v43 > v129 )
      {
        if ( dword_4789A8 )
        {
          v103 = (_DWORD *)sub_242FC8(v47);
          sub_2594B0(*v103, "Export RVA for dll \"%s\" is in section \"%s\"\n", (const char *)v123, v119);
        }
        goto LABEL_34;
      }
    }
    while ( v128 != v40 );
    v48 = 0;
LABEL_35:
    if ( !v121 )
      goto LABEL_53;
    v117 = (char *)v48;
    v49 = v120 + 32;
    v126 = ".text";
    v50 = 0;
    v120 = ".data";
    v118 = ".bss";
    v123 = 3;
    v51 = v119;
    while ( 1 )
    {
      v56 = sub_F02BC((int)v32, (int)v49);
      v57 = sub_F02BC((int)v32, (int)(v49 + 4));
      v127 = (const char *)sub_F02BC((int)v32, (int)(v49 + 28));
      sub_2A8A04(v32, v58, v49 - 8, 0, 0);
      sub_2A87D8(v51, 8, v32);
      LOBYTE(v132) = 0;
      v52 = strcmp(v51, v126);
      if ( v52 )
      {
        if ( !strcmp(v51, v120) )
        {
          v52 = 24;
        }
        else
        {
          if ( strcmp(v51, v118) )
          {
            v105 = sub_2AD7AC(v32, v51);
            if ( v105 )
              v116 = *(_DWORD *)(v105 + 8);
            else
              v116 = -1;
            ++v123;
            v106 = 24 * v123 - 24;
            v130 = sub_93050(v130, 24 * v123);
            v107 = sub_327254(v51);
            *(_DWORD *)((char *)v130 + v106 + 20) = v107;
            sub_9253C((int)sub_F0310, v107);
            v108 = v116;
            v109 = ((unsigned __int8)v127 & 0x20) == 0;
            v110 = (_DWORD *)((char *)v130 + v106);
            v110[2] = v56 + v57;
            v110[1] = v57;
            *v110 = 0;
            v110[4] = v108;
            if ( v109 )
            {
              if ( ((unsigned __int8)v127 & 0x40) != 0 )
              {
                v110[3] = 4;
              }
              else
              {
                v111 = (unsigned __int8)v127 & 0x80;
                if ( ((unsigned __int8)v127 & 0x80) != 0 )
                  v111 = 5;
                v110[3] = v111;
              }
            }
            else
            {
              v110[3] = 1;
            }
            goto LABEL_44;
          }
          v52 = 48;
        }
      }
      v53 = sub_2AD7AC(v32, v51);
      if ( v53 )
        v54 = *(_DWORD *)(v53 + 8);
      else
        v54 = -1;
      v55 = (_DWORD *)((char *)v130 + v52);
      v55[2] = v56 + v57;
      v55[1] = v57;
      v55[4] = v54;
LABEL_44:
      ++v50;
      v49 += 40;
      if ( v128 == v50 )
      {
        v59 = v123;
        goto LABEL_58;
      }
    }
  }
  if ( dword_4789A8 )
  {
    v27 = (_DWORD *)sub_242FC8(dword_4789A8);
    sub_2594B0(*v27, "Unable to find function \"%s\" in dll \"%s\", forward of \"%s\" in dll \"%s\"\n", a4, v10, a2, a6);
  }
}
