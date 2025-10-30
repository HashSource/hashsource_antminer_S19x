void __fastcall sub_138924(int a1, int a2, int *a3, unsigned int a4, unsigned int a5, int a6)
{
  int v7; // r3
  _DWORD *v8; // r3
  int v9; // r2
  int v10; // r1
  int v11; // r4
  unsigned int v12; // r5
  _DWORD *v13; // r6
  _DWORD *v14; // r9
  __int64 v15; // r0
  const char *v16; // r8
  unsigned int v17; // r3
  int v18; // r0
  char v19; // r10
  bool v20; // zf
  int v21; // r10
  const char *v22; // r10
  const char *v23; // r1
  int v24; // r0
  int v25; // r8
  int v26; // r0
  char v27; // r1
  int v28; // r8
  int v29; // r0
  int v30; // r3
  _DWORD *v31; // r2
  _DWORD *v32; // r3
  int v33; // r12
  bool v34; // zf
  int v35; // r3
  int v36; // r12
  int v37; // r4
  int v38; // r0
  int v39; // r3
  unsigned int v40; // r5
  int v41; // r3
  unsigned int v42; // r11
  int v43; // r10
  int v44; // r1
  int v45; // lr
  _BYTE *v46; // r0
  unsigned int v47; // r3
  int v48; // r1
  int i; // r3
  int v50; // r4
  unsigned int v51; // r1
  unsigned int v52; // lr
  int v53; // r12
  char *v54; // r3
  char v55; // t1
  int v56; // r3
  int v57; // r12
  int v58; // r0
  char *v59; // r2
  char v60; // r1
  char v61; // t1
  char v62; // r3
  char v63; // r2
  char *v64; // r6
  int v65; // r3
  int v66; // r2
  int v67; // r5
  int v68; // r12
  char v69; // t1
  unsigned int v70; // r8
  char v71; // r2
  char *v72; // r6
  int v73; // r3
  int v74; // r2
  int v75; // r5
  int v76; // r12
  char v77; // t1
  unsigned int v78; // r8
  char v79; // r2
  char *v80; // r5
  int v81; // r2
  int v82; // r0
  int v83; // r6
  int v84; // r12
  int v85; // r3
  char v86; // t1
  unsigned int v87; // r8
  unsigned int v88; // r12
  unsigned int v89; // r0
  int v90; // r0
  int v91; // r0
  char v92; // r3
  char *v93; // r12
  unsigned __int8 v94; // r3
  int v95; // r0
  int v96; // r6
  int v97; // lr
  int v98; // r2
  int v99; // r3
  char v100; // t1
  unsigned int v101; // r8
  char v102; // r2
  size_t v103; // r0
  char v104; // r3
  unsigned int v105; // r5
  int v106; // lr
  unsigned __int8 v107; // r3
  int v108; // r0
  int v109; // r8
  int v110; // r12
  int v111; // r2
  int v112; // r3
  char v113; // t1
  unsigned int v114; // r6
  char *v115; // r7
  unsigned __int8 v116; // r3
  int v117; // r0
  int v118; // r6
  int v119; // r12
  int v120; // r2
  int v121; // r3
  char v122; // t1
  unsigned int v123; // r8
  int v124; // r2
  int v125; // r3
  int v126; // r6
  char v127; // t1
  unsigned int v128; // r10
  int v129; // r0
  __int64 v130; // r2
  int v131; // r5
  unsigned int v132; // r7
  unsigned int v133; // r8
  int v134; // r9
  int v135; // r12
  unsigned int v136; // r3
  int v137; // r1
  int v138; // r10
  int v139; // r1
  int v140; // r0
  int v141; // r3
  __int64 v142; // r0
  unsigned int v143; // r6
  _BOOL4 v144; // r3
  int v145; // r3
  int v146; // r2
  unsigned __int8 *v147; // r1
  int v148; // r2
  char v149; // t1
  _DWORD *ptr; // [sp+10h] [bp-84h]
  char *ptra; // [sp+10h] [bp-84h]
  int v154; // [sp+18h] [bp-7Ch]
  _DWORD *v155; // [sp+1Ch] [bp-78h]
  int v156; // [sp+20h] [bp-74h]
  int v158; // [sp+38h] [bp-5Ch]
  int v159; // [sp+40h] [bp-54h]
  unsigned int v160; // [sp+44h] [bp-50h]
  int v161; // [sp+4Ch] [bp-48h]
  int v162; // [sp+54h] [bp-40h] BYREF
  _DWORD v163[2]; // [sp+58h] [bp-3Ch] BYREF
  int v164; // [sp+60h] [bp-34h]
  char v165; // [sp+64h] [bp-30h]
  int v166; // [sp+68h] [bp-2Ch]
  int v167; // [sp+6Ch] [bp-28h]
  int v168; // [sp+70h] [bp-24h]
  char v169; // [sp+74h] [bp-20h]
  int v170; // [sp+78h] [bp-1Ch]
  int *(__fastcall *v171)(int *, int, int); // [sp+84h] [bp-10h]
  char v172; // [sp+8Ch] [bp-8h]

  v7 = *a3;
  ptr = (_DWORD *)*a3;
  if ( a6 )
  {
    v37 = *a3;
    v155 = *(_DWORD **)(v7 + 36);
    v38 = sub_1B7250(v7);
    v39 = *(_DWORD *)(v37 + 152);
    v156 = v38;
    if ( v39 == -1 )
    {
      sub_94700((int)"dwarf2read.c", 20775, "sect_index_text not initialized");
      JUMPOUT(0x1394C0);
    }
    v40 = *(_DWORD *)(a1 + 60);
    v158 = *(_DWORD *)(ptr[36] + 4 * v39);
    if ( v40 < *(_DWORD *)(a1 + 64) )
    {
      v41 = a1;
      v42 = *(_DWORD *)(a1 + 64);
      v43 = v41;
      while ( 1 )
      {
        sub_12C1C4((int)v163, v156, v43, a4 == 0);
        if ( !a4 )
        {
          v44 = *(_DWORD *)(v164 + 48);
          if ( v166 - 1 < (unsigned int)(-1431655765 * ((*(_DWORD *)(v164 + 52) - v44) >> 3)) )
          {
            if ( v44 + 24 * (v166 - 1) )
            {
              v45 = *(_DWORD *)(v43 + 36);
              v46 = *(_BYTE **)(v44 + 24 * (v166 - 1));
              v47 = *(_DWORD *)(v44 + 24 * (v166 - 1) + 4) - 1;
              if ( v47 >= (*(_DWORD *)(v43 + 40) - v45) >> 2 )
                v48 = 0;
              else
                v48 = *(_DWORD *)(v45 + 4 * v47);
              sub_11DB2C(v46, v48);
            }
          }
        }
        for ( i = 0; ; i = v50 )
        {
          LOBYTE(v50) = v42 <= v40 ? i | 1 : (unsigned __int8)i;
          v50 = (unsigned __int8)v50;
          if ( (_BYTE)v50 )
            break;
          v52 = v40 + 1;
          v51 = *(unsigned __int8 *)v40;
          if ( *(unsigned __int8 *)(v43 + 29) <= v51 )
          {
            ++v40;
            sub_12C0EC((int)v163, v51);
          }
          else
          {
            switch ( *(_BYTE *)v40 )
            {
              case 0:
                v79 = *(_BYTE *)(v40 + 1);
                v80 = (char *)(v40 + 2);
                v20 = (v79 & 0x80) == 0;
                LOBYTE(v81) = v79 & 0x7F;
                v82 = (unsigned __int8)v81;
                if ( v20 )
                {
                  v83 = 1;
                }
                else
                {
                  v84 = 0;
                  v83 = 1;
                  v81 = (unsigned __int8)v81;
                  v85 = 0;
                  do
                  {
                    v86 = *v80++;
                    v84 += 7;
                    ++v83;
                    v87 = v86 & 0x7F;
                    v82 = v81 | (v87 << v84);
                    v81 = v82;
                    v85 |= (v87 << (v84 - 32)) | (v87 >> (32 - v84));
                  }
                  while ( v86 < 0 );
                }
                v162 = v83;
                v88 = v52 + v83;
                v154 = v52 + v83 + v82;
                v40 = v52 + v83 + 1;
                switch ( *(_BYTE *)(v52 + v83) )
                {
                  case 1:
                    v50 = 1;
                    v171 = sub_E6044;
                    goto LABEL_115;
                  case 2:
                    LODWORD(v142) = *v155;
                    HIDWORD(v142) = v155 + 1;
                    v143 = sub_11E3C0(v142, v52 + v83 + 1, (int)a3, &v162);
                    v144 = a5 > v143;
                    v40 += v162;
                    if ( v143 )
                      v144 = 0;
                    if ( v144 )
                      sub_12A7B0((int)v163, a3, v40);
                    v165 = 0;
                    v168 = ((int (__fastcall *)(_DWORD, unsigned int, _DWORD))loc_16A9F0)(v163[0], v158 + v143, 0);
                    goto LABEL_115;
                  case 3:
                    if ( *(_BYTE *)(v88 + 1) )
                    {
                      v103 = strlen((const char *)(v52 + v83 + 1)) + 1;
                      v160 = v40;
                      v162 = v103;
                    }
                    else
                    {
                      v160 = *(unsigned __int8 *)(v88 + 1);
                      v162 = 1;
                      v103 = 1;
                    }
                    v104 = *(_BYTE *)(v40 + v103);
                    v105 = v40 + v103;
                    v106 = v105 + 1;
                    v20 = (v104 & 0x80) == 0;
                    v107 = v104 & 0x7F;
                    v108 = v107;
                    if ( v20 )
                    {
                      v109 = 1;
                    }
                    else
                    {
                      v110 = 0;
                      v111 = v107;
                      v112 = 0;
                      do
                      {
                        v113 = *(_BYTE *)v106++;
                        v110 += 7;
                        v114 = v113 & 0x7F;
                        v109 = v106 - v105;
                        v108 = v111 | (v114 << v110);
                        v111 = v108;
                        v112 |= (v114 << (v110 - 32)) | (v114 >> (32 - v110));
                      }
                      while ( v113 < 0 );
                    }
                    v162 = v109;
                    v115 = (char *)(v106 + 1);
                    v159 = v108;
                    v116 = *(_BYTE *)v106 & 0x7F;
                    v117 = v116;
                    if ( (*(_BYTE *)v106 & 0x80) != 0 )
                    {
                      v119 = 0;
                      v120 = v116;
                      v121 = 0;
                      do
                      {
                        v122 = *v115++;
                        v119 += 7;
                        v123 = v122 & 0x7F;
                        v118 = (int)&v115[-v106];
                        v117 = v120 | (v123 << v119);
                        v120 = v117;
                        v121 |= (v123 << (v119 - 32)) | (v123 >> (32 - v119));
                      }
                      while ( v122 < 0 );
                    }
                    else
                    {
                      v118 = 1;
                    }
                    v162 = v118;
                    v40 = (unsigned int)(v115 + 1);
                    v124 = *v115 & 0x7F;
                    if ( (*v115 & 0x80) == 0 )
                      v106 = 1;
                    v125 = 0;
                    if ( *v115 < 0 )
                    {
                      v126 = 0;
                      v161 = v43;
                      do
                      {
                        v127 = *(_BYTE *)v40++;
                        v126 += 7;
                        v128 = v127 & 0x7F;
                        v124 |= v128 << v126;
                        v125 |= (v128 << (v126 - 32)) | (v128 >> (32 - v126));
                      }
                      while ( v127 < 0 );
                      v106 = v40 - (_DWORD)v115;
                      v43 = v161;
                    }
                    v162 = v106;
                    sub_138840(v43, (const char *)v160, v159, v117, v124);
                    goto LABEL_115;
                  case 4:
                    v92 = *(_BYTE *)(v88 + 1);
                    v93 = (char *)(v88 + 2);
                    v20 = (v92 & 0x80) == 0;
                    v94 = v92 & 0x7F;
                    v95 = v94;
                    if ( v20 )
                    {
                      v96 = 1;
                    }
                    else
                    {
                      v97 = 0;
                      v96 = 1;
                      v98 = v94;
                      v99 = 0;
                      do
                      {
                        v100 = *v93++;
                        v97 += 7;
                        ++v96;
                        v101 = v100 & 0x7F;
                        v95 = v98 | (v101 << v97);
                        v98 = v95;
                        v99 |= (v101 << (v97 - 32)) | (v101 >> (32 - v97));
                      }
                      while ( v100 < 0 );
                    }
                    v40 += v96;
                    v162 = v96;
                    v170 = v95;
                    if ( v95 )
                      v102 = v172 | 1;
                    else
                      v102 = v172;
                    v172 = v102;
LABEL_115:
                    if ( v154 != v40 )
                      goto LABEL_116;
                    continue;
                  default:
LABEL_116:
                    a1 = v43;
                    if ( dword_47AC88 <= 0 )
                      goto LABEL_2;
                    sub_F43B4(&off_46D334, "mangled .debug_line section");
                    v8 = (_DWORD *)a4;
                    if ( !a4 )
                      goto LABEL_118;
                    goto LABEL_3;
                }
              case 1:
                ++v40;
                sub_12BEC8((int)v163, 0);
                v170 = 0;
                continue;
              case 2:
                v63 = *(_BYTE *)(v40 + 1);
                v64 = (char *)(v40 + 2);
                v65 = 0;
                v20 = (v63 & 0x80) == 0;
                v66 = v63 & 0x7F;
                if ( v20 )
                {
                  v67 = 1;
                }
                else
                {
                  v68 = 0;
                  v67 = 1;
                  do
                  {
                    v69 = *v64++;
                    v68 += 7;
                    ++v67;
                    v70 = v69 & 0x7F;
                    v66 |= v70 << v68;
                    v65 |= (v70 << (v68 - 32)) | (v70 >> (32 - v68));
                  }
                  while ( v69 < 0 );
                }
                v162 = v67;
                v40 = v52 + v67;
                sub_12BD34((int)v163, v66);
                continue;
              case 3:
                v56 = 0;
                v57 = ~v40;
                v58 = 0;
                v59 = (char *)(v40 + 1);
                do
                {
                  v61 = *v59++;
                  v60 = v61;
                  v58 |= (v61 & 0x7F) << v56;
                  v56 += 7;
                }
                while ( v61 < 0 );
                if ( v56 <= 63 && (v60 & 0x40) != 0 )
                  v58 |= -(1 << v56);
                v162 = (int)&v59[v57];
                v40 = (unsigned int)&v59[v57 + v52];
                v167 += v58;
                if ( v58 )
                {
                  v62 = v170;
                  if ( v170 )
                    v62 = 1;
                  v172 = v62;
                }
                continue;
              case 4:
                v71 = *(_BYTE *)(v40 + 1);
                v72 = (char *)(v40 + 2);
                v73 = 0;
                v20 = (v71 & 0x80) == 0;
                v74 = v71 & 0x7F;
                if ( v20 )
                {
                  v75 = 1;
                }
                else
                {
                  v76 = 0;
                  v75 = 1;
                  do
                  {
                    v77 = *v72++;
                    v76 += 7;
                    ++v75;
                    v78 = v77 & 0x7F;
                    v74 |= v78 << v76;
                    v73 |= (v78 << (v76 - 32)) | (v78 >> (32 - v76));
                  }
                  while ( v77 < 0 );
                }
                v162 = v75;
                v40 = v52 + v75;
                sub_12BD90((int)v163, v74);
                continue;
              case 5:
                v53 = ~v40;
                v54 = (char *)(v40 + 1);
                do
                  v55 = *v54++;
                while ( v55 < 0 );
                v162 = (int)&v54[v53];
                v40 = (unsigned int)&v54[v53 + v52];
                continue;
              case 6:
                ++v40;
                v169 ^= 1u;
                continue;
              case 7:
                goto LABEL_56;
              case 8:
                ++v40;
                sub_12BE5C((int)v163);
                continue;
              case 9:
                v89 = v40 + 1;
                v40 += 3;
                v90 = (*(int (__fastcall **)(unsigned int))(v155[1] + 52))(v89);
                v91 = ((int (__fastcall *)(_DWORD, int, int))loc_16A9F0)(v163[0], v90, 1);
                v165 = 0;
                v168 += v91;
                continue;
              default:
                v145 = *(_DWORD *)(v43 + 32);
                v146 = *(unsigned __int8 *)(v145 + v51);
                v147 = (unsigned __int8 *)(v145 + v51);
                if ( v146 )
                {
                  v148 = 0;
                  do
                  {
                    v40 = v52;
                    do
                      v149 = *(_BYTE *)v40++;
                    while ( v149 < 0 );
                    v162 = v40 - v52;
                    ++v148;
                    v52 = v40;
                  }
                  while ( *v147 > v148 );
                }
                else
                {
LABEL_56:
                  ++v40;
                }
                break;
            }
          }
        }
        if ( !i )
          break;
        sub_12BEC8((int)v163, 1);
        if ( v42 <= v40 )
        {
          a1 = v43;
          goto LABEL_2;
        }
      }
      a1 = v43;
      if ( dword_47AC88 > 0 )
        sub_F43B4(&off_46D334, ".debug_line section has line program sequence without an end");
      sub_12BEC8((int)v163, 1);
    }
  }
LABEL_2:
  v8 = (_DWORD *)a4;
  if ( a4 )
  {
LABEL_3:
    v9 = *(_DWORD *)(a1 + 48);
    v10 = *(_DWORD *)(a1 + 52);
    if ( v9 != v10 )
    {
      v11 = 0;
      v12 = 0;
      v13 = ptr;
      v14 = v8;
      do
      {
        if ( *(_BYTE *)(v9 + v11 + 16) )
        {
          v15 = *(_QWORD *)(a1 + 36);
          v16 = *(const char **)(v9 + v11);
          v17 = *(_DWORD *)(v9 + v11 + 4) - 1;
          if ( v17 >= (HIDWORD(v15) - (int)v15) >> 2 )
            v18 = 0;
          else
            v18 = *(_DWORD *)(v15 + 4 * v17);
          if ( *v16 == 47 )
            goto LABEL_21;
          v19 = a2;
          if ( a2 )
            v19 = 1;
          v20 = a2 == 0;
          if ( !a2 )
            v20 = v18 == 0;
          if ( v20
            || v18
            && ((v16 = (const char *)sub_31E27C(v18, &word_398974, v16), sub_9253C(1165368, (int)v16), *v16 != 47)
              ? (v21 = v19 & 1)
              : (v21 = 0),
                !v21) )
          {
LABEL_21:
            v22 = v16;
          }
          else
          {
            v22 = v16;
            v16 = (const char *)sub_31E27C(a2, &word_398974, v16);
            sub_9253C(1165368, (int)v16);
          }
          v23 = (const char *)v14[1];
          if ( *v23 == 47 || (v24 = v14[3]) == 0 )
          {
            if ( j_strcmp(v16, v23) )
            {
LABEL_25:
              v26 = sub_1D0584(v22, v13);
              v28 = v26;
              if ( **(_BYTE **)(v26 + 4) != 47 )
                *(_DWORD *)(v26 + 12) = v14[3];
              v29 = v13[16];
              v30 = v13[15];
              *(_DWORD *)(v28 + 16) = 0;
              *(_DWORD *)(v28 + 20) = 0;
              if ( (unsigned int)(v29 - v30) <= 3 )
              {
                obstack_newchunk((struct obstack *)(v13 + 12), 4);
                v30 = v13[15];
                v29 = v13[16];
              }
              v31 = (_DWORD *)v13[14];
              v32 = (_DWORD *)(v30 + 4);
              v33 = v13[18];
              v13[15] = v32;
              v34 = v32 == v31;
              if ( v32 == v31 )
                v27 = *((_BYTE *)v13 + 88);
              v35 = ((unsigned int)v32 + v33) & ~v33;
              v13[15] = v35;
              if ( v34 )
                *((_BYTE *)v13 + 88) = v27 | 2;
              v36 = v14[15];
              if ( v35 - v13[13] > (unsigned int)(v29 - v13[13]) )
              {
                v13[15] = v29;
                v35 = v29;
              }
              v13[14] = v35;
              *(_DWORD *)(v28 + 28) = v31;
              *v31 = v14;
              *(_BYTE *)(v28 + 52) = 0;
              *(_DWORD *)(v28 + 64) = 0;
              v9 = *(_DWORD *)(a1 + 48);
              v10 = *(_DWORD *)(a1 + 52);
              *(_DWORD *)(v28 + 36) = 0;
              *(_DWORD *)(v28 + 40) = 0;
              *(_DWORD *)(v28 + 44) = 0;
              *(_DWORD *)(v28 + 48) = 0;
              *(_DWORD *)(v28 + 56) = 0;
              *(_DWORD *)(v28 + 60) = v36;
              *(_DWORD *)(v28 + 32) = 1;
              goto LABEL_5;
            }
          }
          else
          {
            ptra = (char *)sub_31E27C(v24, &word_398974, v14[1]);
            v25 = j_strcmp(v16, ptra);
            free(ptra);
            if ( v25 )
              goto LABEL_25;
          }
          v9 = *(_DWORD *)(a1 + 48);
          v10 = *(_DWORD *)(a1 + 52);
        }
LABEL_5:
        ++v12;
        v11 += 24;
      }
      while ( v12 < -1431655765 * ((v10 - v9) >> 3) );
    }
  }
  else
  {
LABEL_118:
    v129 = ((int (*)(void))loc_E6140)();
    v130 = *(_QWORD *)(a1 + 48);
    v131 = v129;
    if ( (_DWORD)v130 != HIDWORD(v130) )
    {
      v132 = a4;
      v133 = a4;
      do
      {
        v134 = v130 + v132;
        v135 = *(_DWORD *)(a1 + 36);
        v136 = *(_DWORD *)(v130 + v132 + 4) - 1;
        if ( v136 >= (*(_DWORD *)(a1 + 40) - v135) >> 2 )
          v137 = 0;
        else
          v137 = *(_DWORD *)(v135 + 4 * v136);
        sub_11DB2C(*(_BYTE **)(v130 + v132), v137);
        v138 = dword_4788E0;
        v139 = *(_DWORD *)(dword_4788E0 + 24);
        if ( !v139 )
        {
          v140 = sub_212E50(v131, *(_DWORD *)(dword_4788E0 + 4));
          v141 = dword_4788E0;
          *(_DWORD *)(v138 + 24) = v140;
          v139 = *(_DWORD *)(v141 + 24);
        }
        v130 = *(_QWORD *)(a1 + 48);
        ++v133;
        v132 += 24;
        *(_DWORD *)(v134 + 20) = v139;
      }
      while ( v133 < -1431655765 * ((HIDWORD(v130) - (int)v130) >> 3) );
    }
  }
}
