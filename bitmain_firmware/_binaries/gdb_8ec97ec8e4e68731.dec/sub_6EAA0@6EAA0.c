void __fastcall sub_6EAA0(int a1, int *a2, int a3)
{
  _DWORD *v3; // r4
  int v4; // r2
  unsigned __int64 v5; // r4
  int v6; // r6
  int v7; // r3
  int v8; // r4
  int v9; // r0
  int v10; // r2
  __int64 v11; // r0
  bool v12; // zf
  unsigned __int8 *v13; // r9
  int v14; // r7
  int v15; // r5
  unsigned __int8 *v16; // r8
  int v17; // r7
  unsigned __int8 *v18; // r11
  int v19; // r5
  unsigned __int8 *v20; // r7
  int v21; // r9
  int v22; // r5
  unsigned __int8 *v23; // r10
  int v24; // r9
  int v25; // r5
  unsigned __int8 *v26; // r11
  int v27; // r9
  int v28; // r5
  int v29; // r4
  unsigned __int8 *v30; // r5
  int v31; // r4
  _BOOL4 v32; // r9
  __int64 v33; // r0
  int v34; // r0
  int v35; // r4
  unsigned __int8 *v36; // r7
  unsigned __int64 v37; // r10
  int v38; // r2
  int v39; // r9
  int j; // r7
  int v41; // r4
  int v42; // r0
  char *v43; // r1
  void *v44; // r0
  int v45; // r3
  _BOOL4 v46; // r2
  int v47; // r4
  int v48; // r9
  int v49; // r2
  const char *v50; // r4
  int v51; // r7
  void *v52; // r0
  size_t v53; // r8
  void *v54; // r3
  void *v55; // r0
  int v56; // t1
  int v57; // r0
  int v58; // r8
  void *v59; // r0
  void *v60; // r3
  void *v61; // lr
  _DWORD *v62; // r12
  _DWORD *v63; // r0
  char *v64; // r1
  char *v65; // r3
  int v66; // r9
  unsigned int v67; // r4
  int v68; // r0
  size_t v69; // r8
  unsigned int v70; // r9
  _DWORD *v71; // r7
  _BYTE *v72; // r0
  _BYTE *v73; // r8
  _DWORD *v74; // r3
  size_t v75; // r0
  _DWORD *v76; // r8
  _DWORD *v77; // r2
  _DWORD *v78; // r0
  int v79; // r1
  void *v80; // r3
  _DWORD *v81; // r12
  bool v82; // zf
  _DWORD *v83; // lr
  int v84; // r2
  _DWORD *v85; // r2
  _BYTE *v86; // r1
  bool v87; // zf
  int v88; // r3
  void *v89; // lr
  char *v90; // r1
  char *v91; // r2
  void *v92; // r4
  void *v93; // r2
  void *v94; // lr
  _DWORD *v95; // r7
  _DWORD *v96; // r4
  void *v97; // r0
  char *v98; // r0
  int v99; // r1
  int v100; // r2
  int v101; // r3
  _DWORD *v102; // r0
  _DWORD *v103; // r0
  int v104; // [sp+Ch] [bp-104h]
  _DWORD *i; // [sp+10h] [bp-100h]
  unsigned __int8 *v106; // [sp+14h] [bp-FCh]
  int v107; // [sp+18h] [bp-F8h]
  int v108; // [sp+18h] [bp-F8h]
  unsigned int v109; // [sp+1Ch] [bp-F4h]
  unsigned __int8 *v110; // [sp+20h] [bp-F0h]
  char *v112; // [sp+28h] [bp-E8h]
  char *s; // [sp+2Ch] [bp-E4h]
  int v114; // [sp+30h] [bp-E0h]
  int v115; // [sp+34h] [bp-DCh]
  int v116; // [sp+38h] [bp-D8h]
  unsigned __int8 *v117; // [sp+3Ch] [bp-D4h]
  int v118; // [sp+40h] [bp-D0h]
  int v119; // [sp+44h] [bp-CCh]
  unsigned __int8 *v120; // [sp+4Ch] [bp-C4h]
  int v121; // [sp+50h] [bp-C0h]
  int v122; // [sp+54h] [bp-BCh]
  _DWORD *v123; // [sp+5Ch] [bp-B4h]
  int v125; // [sp+68h] [bp-A8h]
  char *v126; // [sp+6Ch] [bp-A4h]
  char *v127; // [sp+74h] [bp-9Ch]
  char *v128; // [sp+78h] [bp-98h]
  char *v129; // [sp+80h] [bp-90h]
  void *ptr; // [sp+8Ch] [bp-84h] BYREF
  int v131; // [sp+90h] [bp-80h] BYREF
  void *v132; // [sp+94h] [bp-7Ch] BYREF
  void *v133; // [sp+98h] [bp-78h] BYREF
  _DWORD *v134; // [sp+9Ch] [bp-74h] BYREF
  void *src; // [sp+A0h] [bp-70h] BYREF
  char *v136; // [sp+A4h] [bp-6Ch]
  char *v137; // [sp+A8h] [bp-68h]
  void *v138; // [sp+ACh] [bp-64h] BYREF
  void *v139; // [sp+B0h] [bp-60h]
  void *v140; // [sp+B4h] [bp-5Ch]
  void *v141; // [sp+B8h] [bp-58h] BYREF
  _BYTE *v142; // [sp+BCh] [bp-54h]
  _DWORD v143[4]; // [sp+C0h] [bp-50h] BYREF
  void *v144; // [sp+D0h] [bp-40h] BYREF
  void *v145; // [sp+D4h] [bp-3Ch]
  _DWORD v146[14]; // [sp+D8h] [bp-38h] BYREF

  if ( !*(_DWORD *)(a3 + 180) )
  {
    v123 = *(_DWORD **)(a3 + 36);
    for ( i = (_DWORD *)v123[25]; i; i = (_DWORD *)i[3] )
    {
      if ( *(_DWORD *)(i[35] + 4) == 1879048180 )
      {
        if ( !sub_2ADFDC(v123, i, &ptr) && dword_47AC88 > 0 )
          sub_F43B4(&off_46D334, "could not obtain the contents ofsection '%s' in objfile `%s'.", *i, *v123);
        v3 = ptr;
        v106 = (unsigned __int8 *)ptr;
        v104 = sub_1B7250(a3);
        if ( *v3 == 1179599999 )
        {
          v4 = v106[5];
          if ( (unsigned int)(v4 - 1) <= 1 )
          {
            v5 = 0;
            v129 = (char *)(v106 + 32);
            v6 = sub_15C250(v106 + 32, 8, v4 != 2);
            while ( sub_15C250(v106 + 28, 4, v106[5] != 2) > v5 )
            {
              v7 = v6 + 32 * ++v5;
              if ( *(_DWORD *)&v106[v7 - 32] == 3 )
                goto LABEL_12;
            }
            v8 = 0;
            v9 = sub_15C250(v129, 8, v106[5] != 2);
            v10 = v106[5];
            v120 = &v106[v9];
            while ( 2 )
            {
              if ( v8 >= (unsigned __int64)sub_15C250(v106 + 28, 4, v10 != 2) )
                goto LABEL_12;
              v11 = sub_15C250(v120, 4, v106[5] != 2);
              v12 = HIDWORD(v11) == 0;
              v10 = v106[5];
              if ( !HIDWORD(v11) )
                v12 = (_DWORD)v11 == 15;
              if ( !v12 )
              {
LABEL_20:
                ++v8;
LABEL_21:
                v120 += 32;
                continue;
              }
              break;
            }
            v13 = &v106[sub_15C250(v120 + 16, 8, v10 != 2)];
            v14 = sub_15C250(v129, 8, v106[5] != 2);
            v15 = sub_15C250(v13, 4, v106[5] != 2);
            v16 = &v106[v14 + sub_15C250(v106 + 24, 4, v106[5] != 2) * v15];
            v17 = sub_15C250(v129, 8, v106[5] != 2);
            v18 = v13;
            v19 = sub_15C250(v13 + 4, 4, v106[5] != 2);
            v20 = &v106[v17 + sub_15C250(v106 + 24, 4, v106[5] != 2) * v19];
            v21 = sub_15C250(v129, 8, v106[5] != 2);
            v126 = (char *)(v20 + 12);
            v117 = v18;
            v22 = sub_15C250(v18 + 8, 4, v106[5] != 2);
            v23 = &v106[v21 + sub_15C250(v106 + 24, 4, v106[5] != 2) * v22];
            v24 = sub_15C250(v129, 8, v106[5] != 2);
            v25 = sub_15C250(v18 + 12, 4, v106[5] != 2);
            v26 = &v106[v24 + sub_15C250(v106 + 24, 4, v106[5] != 2) * v25];
            v27 = sub_15C250(v129, 8, v106[5] != 2);
            v28 = sub_15C250(v117 + 40, 4, v106[5] != 2);
            v29 = v27 + sub_15C250(v106 + 24, 4, v106[5] != 2) * v28;
            v30 = &v106[sub_15C250(v16 + 16, 8, v106[5] != 2)];
            v121 = sub_15C250(v26 + 16, 8, v106[5] != 2);
            v122 = sub_15C250(&v106[v29 + 16], 8, v106[5] != 2);
            sub_15C250(v23 + 16, 8, v106[5] != 2);
            v31 = sub_15C250(v20 + 12, 4, v106[5] != 2);
            v32 = (unsigned __int64)sub_15C250(v120 + 24, 8, v106[5] != 2) <= 0x2B;
            if ( !v31 )
              v32 = 1;
            if ( v32 )
              goto LABEL_10;
            v33 = sub_15C250(v20 + 24, 8, v106[5] != 2);
            v34 = sub_347F74(v33, HIDWORD(v33), v31, 0);
            v10 = v106[5];
            if ( v34 <= 0 )
            {
              v8 = 1;
              goto LABEL_21;
            }
            v127 = (char *)(v20 + 16);
            v125 = v34 + 1;
            v128 = (char *)(v16 + 24);
            v119 = 1;
            while ( 2 )
            {
              v35 = sub_15C250(v127, 8, v10 != 2);
              v36 = &v106[v35 + sub_15C250(v126, 4, v106[5] != 2) * (v119 - 1)];
              v110 = v36;
              v37 = sub_15C250(v128, 8, v106[5] != 2);
              v107 = sub_15C250(v36 + 34, 2, v106[5] != 2);
              if ( v107 )
              {
                v136 = 0;
                v137 = 0;
                v38 = v106[5];
                src = 0;
                v39 = sub_15C250(v36 + 40, 2, v38 != 2);
                if ( v39 > 0 )
                {
                  for ( j = 0; j < v39; ++j )
                  {
                    while ( 1 )
                    {
                      v144 = *(void **)&v106[4 * j + 4 * sub_15C250(v110 + 36, 4, v106[5] != 2) + v122];
                      v41 = sub_15C250(v110, 8, v106[5] != 2);
                      v42 = sub_15C250(&v144, 4, v106[5] != 2);
                      v43 = v136;
                      v44 = (void *)(v41 + v42);
                      v141 = v44;
                      if ( v136 != v137 )
                        break;
                      sub_6FBCC(&src);
                      if ( v39 <= ++j )
                        goto LABEL_40;
                    }
                    if ( v136 )
                      *(_DWORD *)v136 = v44;
                    v136 = v43 + 4;
                  }
                }
LABEL_40:
                if ( v107 > 0 )
                {
                  v118 = v107 + 1;
                  v108 = 1;
                  while ( 1 )
                  {
                    v45 = v108 + sub_15C250(v110 + 28, 4, v106[5] != 2);
                    v46 = v106[5] != 2;
                    v131 = *(_DWORD *)&v106[4 * v45 - 4 + v121];
                    v116 = sub_15C250(v117 + 16, 4, v46);
                    v112 = (char *)&v30[v116];
                    v115 = sub_15C250(v110 + 12, 4, v106[5] != 2);
                    s = (char *)&v30[v115];
                    v47 = sub_15C250(v110, 8, v106[5] != 2);
                    v114 = v47 + sub_15C250(&v131, 4, v106[5] != 2);
                    v48 = sub_15C250(v110 + 32, 1, v106[5] != 2);
                    v139 = 0;
                    v140 = 0;
                    v49 = v106[5];
                    v138 = 0;
                    v50 = (const char *)&v30[sub_15C250(v110 + 16, 4, v49 != 2)];
                    if ( v48 > 0 )
                    {
                      v51 = 0;
                      v144 = v146;
                      v132 = 0;
                      if ( !v50 )
                        sub_33D0B8("basic_string::_M_construct null not valid");
                      while ( 1 )
                      {
                        v52 = (void *)strlen(v50);
                        v53 = (size_t)v52;
                        v141 = v52;
                        if ( (unsigned int)v52 > 0xF )
                          break;
                        v54 = v144;
                        v12 = v52 == (void *)1;
                        v55 = v144;
                        if ( !v12 )
                        {
                          if ( !v53 )
                            goto LABEL_48;
                          goto LABEL_127;
                        }
                        *(_BYTE *)v144 = *v50;
                        v54 = v144;
LABEL_48:
                        v145 = v141;
                        *((_BYTE *)v141 + (_DWORD)v54) = 0;
                        do
                          v56 = *(unsigned __int8 *)v50++;
                        while ( v56 && v37 > v50 - (const char *)v30 );
                        v57 = sub_1780B4(v104);
                        v134 = *(_DWORD **)(v57 + 16);
                        v58 = sub_92E28(v57);
                        sub_1C4310(&v133, v144, 2);
                        v59 = v132;
                        v60 = v133;
                        v133 = 0;
                        v12 = v132 == 0;
                        v132 = v60;
                        if ( !v12 )
                        {
                          free(v59);
                          if ( v133 )
                            free(v133);
                        }
                        sub_92E40(v58);
                        v61 = v132;
                        if ( v132 && *((_DWORD *)v132 + 4) == 88 )
                          v134 = (_DWORD *)*((_DWORD *)v132 + 8);
                        v62 = v139;
                        if ( v139 == v140 )
                        {
                          sub_6FCBC(&v138, v139, &v134, &v144, &v132);
                          v63 = v144;
                        }
                        else
                        {
                          v63 = v144;
                          if ( v139 )
                          {
                            *(_DWORD *)v139 = v134;
                            v62[1] = v62 + 3;
                            if ( v63 == v146 )
                            {
                              v99 = v146[1];
                              v100 = v146[2];
                              v101 = v146[3];
                              v62[3] = v146[0];
                              v62[4] = v99;
                              v62[5] = v100;
                              v62[6] = v101;
                            }
                            else
                            {
                              v62[1] = v63;
                              v62[3] = v146[0];
                            }
                            v63 = v146;
                            v132 = 0;
                            v62[2] = v145;
                            v144 = v146;
                            v145 = 0;
                            LOBYTE(v146[0]) = 0;
                            v62[7] = v61;
                          }
                          v139 = v62 + 8;
                        }
                        if ( v63 != v146 )
                          sub_339E64(v63);
                        if ( v132 )
                          free(v132);
                        if ( v48 <= ++v51 )
                          goto LABEL_69;
                        v144 = v146;
                        v132 = 0;
                      }
                      v55 = (void *)sub_33B2BC(&v144, &v141, 0);
                      v144 = v55;
                      v146[0] = v141;
LABEL_127:
                      memcpy(v55, v50, v53);
                      v54 = v144;
                      goto LABEL_48;
                    }
LABEL_69:
                    v64 = (char *)src;
                    v65 = v136;
                    v66 = v136 - (_BYTE *)src;
                    v67 = (v136 - (_BYTE *)src) >> 2;
                    if ( v67 )
                    {
                      if ( v67 > 0x3FFFFFFF )
                        sub_33D01C();
                      v68 = sub_9836C(v136 - (_BYTE *)src);
                      v64 = (char *)src;
                      v67 = v68;
                      v65 = v136;
                      v69 = v136 - (_BYTE *)src;
                    }
                    else
                    {
                      v69 = v136 - (_BYTE *)src;
                    }
                    v70 = v67 + v66;
                    if ( v65 != v64 )
                      memmove((void *)v67, v64, v69);
                    v71 = v143;
                    v141 = v143;
                    v109 = v67 + v69;
                    if ( !s )
                      sub_33D0B8("basic_string::_M_construct null not valid");
                    v72 = (_BYTE *)strlen(s);
                    v73 = v72;
                    v144 = v72;
                    if ( (unsigned int)v72 > 0xF )
                      break;
                    if ( v72 == (_BYTE *)1 )
                    {
                      v74 = v143;
                      LOBYTE(v143[0]) = v30[v115];
                      goto LABEL_78;
                    }
                    if ( v72 )
                    {
                      v102 = v143;
                      goto LABEL_134;
                    }
                    v74 = v143;
LABEL_78:
                    v142 = v73;
                    v73[(_DWORD)v74] = 0;
                    v144 = v146;
                    if ( !v112 )
                      sub_33D0B8("basic_string::_M_construct null not valid");
                    v75 = strlen(v112);
                    v76 = (_DWORD *)v75;
                    v134 = (_DWORD *)v75;
                    if ( v75 > 0xF )
                    {
                      v103 = (_DWORD *)sub_33B2BC(&v144, &v134, 0);
                      v144 = v103;
                      v146[0] = v134;
LABEL_136:
                      memcpy(v103, v112, (size_t)v76);
                      v76 = v134;
                      v77 = v144;
                      goto LABEL_82;
                    }
                    if ( v75 != 1 )
                    {
                      if ( !v75 )
                      {
                        v77 = v146;
                        goto LABEL_82;
                      }
                      v103 = v146;
                      goto LABEL_136;
                    }
                    v77 = v146;
                    LOBYTE(v146[0]) = v30[v116];
LABEL_82:
                    v145 = v76;
                    *((_BYTE *)v76 + (_DWORD)v77) = 0;
                    v78 = (_DWORD *)sub_9836C(88);
                    v80 = v141;
                    v81 = v78;
                    v82 = v141 == v143;
                    if ( v141 == v143 )
                      v76 = v143;
                    *v78 = &unk_35D3DC;
                    v83 = v78 + 3;
                    v78[1] = v78 + 3;
                    if ( v82 )
                    {
                      v78 = (_DWORD *)*v76;
                      v79 = v76[1];
                      v84 = v76[2];
                      v80 = (void *)v76[3];
                    }
                    else
                    {
                      v84 = v143[0];
                      v78[1] = v80;
                    }
                    if ( v82 )
                      v81[3] = v78;
                    else
                      v81[3] = v84;
                    if ( v82 )
                      v83[2] = v84;
                    v85 = v144;
                    if ( v82 )
                      v83[1] = v79;
                    v86 = v142;
                    if ( v82 )
                      v83[3] = v80;
                    v87 = v85 == v146;
                    v141 = v143;
                    if ( v85 == v146 )
                      v71 = v146;
                    v142 = 0;
                    LOBYTE(v143[0]) = 0;
                    v81[2] = v86;
                    if ( v85 == v146 )
                    {
                      v78 = (_DWORD *)*v71;
                      v86 = (_BYTE *)v71[1];
                      v85 = (_DWORD *)v71[2];
                      v88 = v71[3];
                    }
                    else
                    {
                      v88 = v146[0];
                    }
                    v81[7] = v81 + 9;
                    if ( v87 )
                    {
                      v81[9] = v78;
                      v81[10] = v86;
                      v81[12] = v88;
                    }
                    else
                    {
                      v81[9] = v88;
                    }
                    if ( v87 )
                      v81[11] = v85;
                    else
                      v81[7] = v85;
                    v89 = v145;
                    v90 = (char *)a2[1];
                    v91 = (char *)a2[2];
                    v81[13] = v114;
                    v12 = v90 == v91;
                    v81[18] = v67;
                    v81[14] = v104;
                    v92 = v139;
                    v81[19] = v109;
                    v81[8] = v89;
                    v93 = v138;
                    v94 = v140;
                    v81[20] = v70;
                    v144 = v81;
                    *v81 = &off_35DF34;
                    v81[15] = v93;
                    v81[16] = v92;
                    v81[17] = v94;
                    v138 = 0;
                    v139 = 0;
                    v140 = 0;
                    *((_BYTE *)v81 + 84) = 0;
                    if ( v12 )
                    {
                      sub_6E384(a2, v90, &v144);
                    }
                    else
                    {
                      if ( v90 )
                        *(_DWORD *)v90 = v81;
                      a2[1] = (int)(v90 + 4);
                    }
                    v95 = v138;
                    v96 = v139;
                    if ( v138 != v139 )
                    {
                      do
                      {
                        v97 = (void *)v95[7];
                        if ( v97 )
                          free(v97);
                        v98 = (char *)v95[1];
                        if ( v98 != (char *)(v95 + 3) )
                          sub_339E64(v98);
                        v95 += 8;
                      }
                      while ( v96 != v95 );
                      v96 = v138;
                    }
                    if ( v96 )
                      sub_339E64(v96);
                    if ( ++v108 == v118 )
                      goto LABEL_121;
                  }
                  v102 = (_DWORD *)sub_33B2BC(&v141, &v144, 0);
                  v141 = v102;
                  v143[0] = v144;
LABEL_134:
                  memcpy(v102, s, (size_t)v73);
                  v73 = v144;
                  v74 = v141;
                  goto LABEL_78;
                }
LABEL_121:
                if ( src )
                  sub_339E64(src);
              }
              v8 = v119;
              v12 = v125 == ++v119;
              v10 = v106[5];
              if ( v12 )
                goto LABEL_20;
              continue;
            }
          }
        }
LABEL_10:
        if ( dword_47AC88 > 0 )
          sub_F43B4(&off_46D334, "skipping section '%s' which does not contain valid DOF data.", (const char *)*i);
LABEL_12:
        if ( ptr )
          free(ptr);
      }
    }
  }
}
