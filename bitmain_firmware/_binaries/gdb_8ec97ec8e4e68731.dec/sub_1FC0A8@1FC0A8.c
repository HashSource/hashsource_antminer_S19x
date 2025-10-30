int __fastcall sub_1FC0A8(int a1, int *a2, int *a3, int a4)
{
  _DWORD *v4; // r8
  int *v5; // r4
  int v6; // r7
  int *v8; // r5
  int *v9; // r2
  int v10; // r7
  int v11; // r8
  int v13; // r7
  int v14; // r9
  int v15; // r3
  int v16; // r2
  int v17; // r8
  int v18; // r0
  int v19; // r7
  int v20; // r10
  int v21; // r0
  int v22; // r0
  int v23; // r4
  _DWORD *v24; // r0
  int v25; // r3
  int v26; // r0
  int *v27; // r1
  int v28; // r4
  _BYTE *v29; // r0
  int v30; // r6
  __int64 v31; // r0
  int v32; // r7
  int v33; // r0
  _DWORD *v34; // r3
  int v35; // r2
  int v36; // r3
  char v37; // r2
  int v38; // r3
  int v39; // r9
  int v40; // r0
  int v41; // r3
  int v42; // r7
  int v43; // r4
  int v44; // r6
  int v45; // r1
  int v46; // r0
  int v47; // r3
  const char *v48; // r2
  void *v49; // r0
  __int64 v50; // r0
  __int64 v51; // r0
  const char **v52; // r2
  int v53; // r3
  int v54; // r3
  int v55; // r1
  int v56; // r0
  unsigned int v57; // r7
  int v58; // r8
  const char *v59; // r4
  int v60; // r7
  int v61; // r0
  _DWORD *v62; // r3
  char *v63; // r2
  char *v64; // r12
  int v65; // r0
  int v66; // r4
  int v67; // r0
  int v68; // r6
  int v69; // r0
  int v70; // r0
  int v71; // r7
  int v72; // r0
  __int64 v73; // r0
  int v74; // r4
  char *v75; // r0
  int v76; // r3
  void *v77; // r5
  _DWORD *v78; // r2
  char *v79; // r3
  int v80; // r0
  int v81; // r4
  int v82; // r4
  __int64 v83; // r0
  int v84; // r0
  int v85; // r0
  int v86; // r1
  int v87; // r11
  int v88; // r9
  char *v89; // r0
  int v90; // r3
  char *v91; // r10
  char *v92; // r2
  _BYTE *v93; // r3
  int v94; // r0
  char *v95; // r2
  int v96; // r1
  _BYTE *v97; // r9
  const char *v98; // r0
  size_t v99; // r0
  int v100; // r0
  int v101; // r1
  int *v102; // lr
  int v103; // r12
  int v104; // r2
  int *v105; // r3
  const char *v106; // r7
  bool v107; // zf
  size_t v108; // r2
  void **v109; // r0
  void **v110; // r1
  void **v111; // r2
  void ***v112; // lr
  void **v113; // r12
  void **v114; // r3
  void ***v115; // r7
  bool v116; // zf
  int v117; // r7
  void *v118; // r9
  int v119; // r8
  int v120; // r3
  int v121; // r9
  char *v122; // r11
  int v123; // r7
  _DWORD *v124; // r0
  int v125; // r0
  int v126; // r0
  int v127; // r4
  __int64 v128; // r0
  int v129; // r6
  __int64 v130; // r0
  int v131; // r10
  int v132; // r0
  _BYTE *v133; // r3
  int v134; // r2
  int v135; // r3
  int v136; // r3
  int v137; // r3
  int v138; // r5
  const char *v139; // r6
  const char *v140; // r5
  int v141; // r5
  int v142; // r0
  int v143; // r0
  int v144; // r0
  _DWORD *v145; // r6
  int v146; // r0
  int v147; // r0
  int v148; // r0
  _DWORD *v149; // r4
  _DWORD *v150; // r0
  int v151; // r2
  int v152; // r3
  int v153; // r0
  const char *v154; // r2
  int v155; // [sp+8h] [bp-6Ch]
  int v156; // [sp+8h] [bp-6Ch]
  int v157; // [sp+Ch] [bp-68h]
  int v158; // [sp+Ch] [bp-68h]
  int v159; // [sp+14h] [bp-60h] BYREF
  void *v160[2]; // [sp+18h] [bp-5Ch] BYREF
  _DWORD v161[4]; // [sp+20h] [bp-54h] BYREF
  void *v162; // [sp+30h] [bp-44h] BYREF
  int v163; // [sp+34h] [bp-40h]
  _DWORD v164[4]; // [sp+38h] [bp-3Ch] BYREF
  int v165; // [sp+48h] [bp-2Ch]
  char v166; // [sp+4Ch] [bp-28h]
  void *ptr; // [sp+50h] [bp-24h] BYREF
  int v168; // [sp+54h] [bp-20h]
  _DWORD v169[4]; // [sp+58h] [bp-1Ch] BYREF
  int v170; // [sp+68h] [bp-Ch]
  char v171; // [sp+6Ch] [bp-8h]

  v5 = a3;
  v6 = *a3;
  v8 = a2;
  v9 = &a2[4 * *a3];
  switch ( v9[4] )
  {
    case 23:
      return sub_1FBA84(a2, v5, a4, 0);
    case 46:
      if ( v9[16] != 81 )
        return sub_14E83C(0, a2, v5, a4);
      v87 = v9[8];
      *v5 = v6 + 4;
      v88 = 0;
      *v5 = v6 + 7 + (*((_QWORD *)v9 + 10) + 16LL) / 16;
      LODWORD(v73) = sub_14C9EC(0, a2, v5, a4);
      v11 = v73;
      if ( a4 == 1 )
      {
        while ( v87 > v88 )
        {
          ++v88;
          sub_14C9EC(0, v8, v5, 1);
        }
        return v11;
      }
      v156 = v87 + 1;
      if ( v87 == -1 )
      {
        v91 = 0;
        goto LABEL_101;
      }
      if ( (unsigned int)(v87 + 1) <= 0x3FFFFFFF )
      {
        v89 = (char *)sub_9836C(4 * v156);
        v90 = v87 + 1;
        v91 = v89;
        v92 = v89;
        do
        {
          --v90;
          *(_DWORD *)v92 = 0;
          v92 += 4;
        }
        while ( v90 );
LABEL_101:
        for ( *(_DWORD *)v91 = v11; ; *(_DWORD *)v91 = v11 )
        {
          v93 = *(_BYTE **)(sub_26BC70(v11) + 24);
          v94 = *(_DWORD *)v91;
          if ( *v93 != 1 )
            break;
          v11 = sub_26210C(v94);
        }
        v95 = *(char **)(sub_26BC70(v94) + 24);
        v96 = *v95;
        if ( (unsigned __int8)(v96 - 3) <= 2u )
        {
          v97 = (_BYTE *)*((_DWORD *)v95 + 3);
          if ( v96 != 3 )
          {
            if ( v97 )
            {
LABEL_107:
              v98 = (const char *)*((_DWORD *)v95 + 3);
              v162 = v164;
              v99 = strlen(v98);
              sub_1F955C(&v162, v97, (int)&v97[v99]);
              if ( v163 == 2147483646 || v163 == 0x7FFFFFFF )
                sub_33D184("basic_string::append");
              v100 = sub_33C320(&v162, "::", 2);
              ptr = v169;
              v103 = v100;
              v104 = v100 + 8;
              v105 = *(int **)v100;
              v106 = (const char *)&v8[4 * v6 + 24];
              v107 = *(_DWORD *)v100 == v100 + 8;
              v158 = v100 + 8;
              if ( *(_DWORD *)v100 == v100 + 8 )
                v105 = (int *)(v100 + 8);
              else
                ptr = *(void **)v100;
              if ( v107 )
              {
                v100 = *v105;
                v102 = v169;
                v101 = v105[1];
                v104 = v105[2];
              }
              else
              {
                v105 = *(int **)(v100 + 8);
              }
              if ( v107 )
                v105 = (int *)v105[3];
              else
                v169[0] = v105;
              if ( v107 )
              {
                *v102 = v100;
                v102[1] = v101;
                v102[2] = v104;
                v102[3] = (int)v105;
              }
              v168 = *(_DWORD *)(v103 + 4);
              *(_BYTE *)(v103 + 8) = 0;
              *(_QWORD *)v103 = (unsigned int)v158;
              v108 = strlen(v106);
              if ( 0x7FFFFFFF - v168 < v108 )
                sub_33D184("basic_string::append");
              v109 = (void **)sub_33C320(&ptr, v106, v108);
              v160[0] = v161;
              v113 = v109;
              v115 = (void ***)(v109 + 2);
              v114 = (void **)*v109;
              v116 = *v109 == v109 + 2;
              if ( *v109 == v109 + 2 )
              {
                v109 = *v115;
                v112 = (void ***)v161;
                v111 = v115[2];
                v114 = v115[3];
              }
              else
              {
                v160[0] = *v109;
              }
              if ( v116 )
                v110 = v115[1];
              else
                v114 = (void **)v113[2];
              if ( v116 )
              {
                *v112 = v109;
                v112[1] = v110;
                v112[2] = v111;
                v112[3] = v114;
              }
              else
              {
                v161[0] = v114;
              }
              v160[1] = v113[1];
              *v113 = v115;
              v113[1] = 0;
              *((_BYTE *)v113 + 8) = 0;
              if ( ptr != v169 )
                sub_339E64(ptr);
              if ( v162 != v164 )
                sub_339E64(v162);
              v117 = sub_20F388(0);
              sub_21D6B0(&ptr, v160[0], v117, 1, 0);
              v118 = ptr;
              if ( !ptr )
                sub_946E0("Could not find function named '%s'", (const char *)v160[0]);
              v119 = *((_DWORD *)ptr + 6);
              v120 = *(_DWORD *)(v119 + 24);
              if ( !*(_WORD *)(v120 + 4) )
                sub_946E0("Function '%s' takes no arguments", (const char *)v160[0]);
              if ( **(_BYTE **)(*(_DWORD *)(*(_DWORD *)(v120 + 24) + 12) + 24) == 1 )
                *(_DWORD *)v91 = sub_2616BC(*(_DWORD *)v91);
              v121 = sub_26138C(v118, v117);
              if ( v87 > 0 )
              {
                v122 = v91;
                v123 = 1;
                do
                {
                  ++v123;
                  *((_DWORD *)v122 + 1) = sub_14C9EC(0, v8, v5, a4);
                  v122 += 4;
                }
                while ( v156 != v123 );
              }
              if ( a4 == 2 )
                v124 = (_DWORD *)sub_260DBC(*(_DWORD *)(*(_DWORD *)(v119 + 24) + 20));
              else
                v124 = sub_17E6EC(v121, 0, v156, v91);
              v11 = (int)v124;
              if ( v160[0] != v161 )
                sub_339E64(v160[0]);
              sub_339E64(v91);
              return v11;
            }
LABEL_233:
            sub_946E0("Method call on nameless type");
          }
          if ( !v97 )
            goto LABEL_233;
          if ( *v97 != 40 )
            goto LABEL_107;
        }
        sub_946E0("Method calls only supported on struct or enum types");
      }
      goto LABEL_225;
    case 60:
      *v5 = v6 + 1;
      v22 = sub_14C9EC(0, a2, v5, a4);
      v11 = v22;
      if ( a4 != 1 )
      {
        if ( **(_BYTE **)(sub_26BC70(v22) + 24) == 21 )
        {
          v127 = sub_26BC70(v11);
          v128 = sub_25DC1C(v11);
          return sub_26DAF4(v127, HIDWORD(v128), v128, (int)v128 >> 31);
        }
        else
        {
          return sub_25DD80(v11);
        }
      }
      return v11;
    case 61:
      if ( a4 )
        return sub_14E83C(a1, a2, v5, a4);
      *v5 = v6 + 1;
      v23 = sub_14C9EC(a1, a2, v5, 0);
      v24 = (_DWORD *)sub_26BC70(v23);
      v25 = *(_DWORD *)(sub_171258(v24) + 24);
      if ( *(_BYTE *)v25 != 3 )
        return sub_26210C(v23);
      if ( *(_WORD *)(v25 + 4) != 2 )
        return sub_26210C(v23);
      v138 = *(_DWORD *)(v25 + 24);
      v139 = *(const char **)(v138 + 16);
      if ( strcmp(v139, "vtable") )
      {
        if ( strcmp(v139, "pointer") )
          return sub_26210C(v23);
      }
      v140 = *(const char **)(v138 + 40);
      if ( !strcmp(v140, "vtable") )
      {
        v141 = 1;
      }
      else
      {
        v141 = strcmp(v140, "pointer");
        if ( v141 )
          return sub_26210C(v23);
      }
      v142 = sub_26F824(v23, v141);
      v143 = sub_26EBA8(v142);
      v144 = sub_21DDC8(v143);
      if ( v144 )
      {
        if ( (*(_BYTE *)(v144 + 33) & 0x18) == 0x10 )
        {
          v145 = sub_1700C0(*(_DWORD **)(v144 + 48));
          v146 = sub_26F824(v23, 1 - v141);
          v147 = sub_2647C8(v145, v146);
          if ( v147 )
            v23 = v147;
        }
      }
      return sub_26210C(v23);
    case 62:
      v10 = v6 + 1;
      if ( v9[8] != 23 )
        return sub_14E83C(a1, a2, v5, a4);
      *v5 = v10;
      return sub_1FBA84(a2, v5, a4, 1);
    case 81:
      *v5 = v6 + 1;
      v26 = sub_26725C(v9[8], v9[9]);
      v27 = v8;
      v8 += 4 * v6 + 12;
      *v5 += 3 + ((unsigned int)(v26 + 16) >> 4);
      v160[0] = (void *)sub_14C9EC(0, v27, v5, a4);
      v28 = sub_26BC70(v160[0]);
      v29 = *(_BYTE **)(v28 + 24);
      if ( *v29 != 4 || sub_1F925C((int)v29) )
      {
        v80 = sub_2624C8(v160, 0, v8, 0, "structure");
        v11 = v80;
        v159 = v80;
        if ( a4 == 2 )
        {
          v81 = sub_26BC70(v80);
          nullsub_31(v159);
          return sub_260DBC(v81);
        }
        return v11;
      }
      v163 = 0;
      LOBYTE(v164[0]) = 0;
      v162 = v164;
      v30 = sub_26E978(v160[0]);
      v31 = sub_26BFE0(v160[0]);
      v32 = v31;
      v33 = ((int (__fastcall *)(void *, _DWORD))loc_26C09C)(v160[0], HIDWORD(v31));
      sub_1F98A0((int)&ptr, (int *)(v28 + 24), v30, v32, v33, (int)v160[0]);
      v34 = v164;
      if ( ptr == v169 )
      {
        sub_33B48C(&v162, &ptr);
        v34 = ptr;
      }
      else
      {
        if ( v162 == v164 )
        {
          v162 = ptr;
          v163 = v168;
          v164[0] = v169[0];
        }
        else
        {
          v162 = ptr;
          v163 = v168;
          v35 = v164[0];
          v164[0] = v169[0];
          if ( v164 )
          {
            ptr = v164;
            v169[0] = v35;
            goto LABEL_33;
          }
        }
        ptr = v169;
        v34 = v169;
      }
LABEL_33:
      v168 = 0;
      *(_BYTE *)v34 = 0;
      v36 = v170;
      v166 = v166 & 0xFE | v171 & 1;
      v165 = v170;
      if ( ptr != v169 )
      {
        sub_339E64(ptr);
        v36 = v165;
      }
      v37 = v166;
      if ( (v166 & 1) != 0 )
      {
        if ( v36 == 1 )
          sub_946E0("Could not find field %s of struct variant %s", (const char *)v8, (const char *)v162);
        v38 = *(_DWORD *)(*(_DWORD *)(v28 + 24) + 24) + 24 * v36;
        v39 = *(_DWORD *)(v38 + 12);
        if ( v39 )
        {
          v40 = sub_1FA398(*(_DWORD *)(v38 + 12));
          goto LABEL_39;
        }
LABEL_222:
        sub_946E0(
          "Attempting to access named field %s of tuple variant %s, which has only anonymous fields",
          (const char *)v8,
          (const char *)v162);
      }
      v39 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v28 + 24) + 24) + 24 * v36 + 12);
      if ( !v39 )
        goto LABEL_222;
      v41 = *(_DWORD *)(v39 + 24);
      if ( *(_BYTE *)v41 != 3 )
        goto LABEL_41;
      v40 = sub_1F91A0((int *)(v39 + 24), 1);
LABEL_39:
      if ( v40 )
        goto LABEL_222;
      v37 = v166;
      v41 = *(_DWORD *)(v39 + 24);
LABEL_41:
      v42 = *(__int16 *)(v41 + 4);
      v43 = (v37 & 1) == 0;
      if ( v43 < v42 )
      {
        v44 = *(_DWORD *)(v41 + 24) + 24 * ((v37 & 1) == 0);
        while ( strcmp(*(const char **)(v44 + 16), (const char *)v8) )
        {
          ++v43;
          v44 += 24;
          if ( v43 == v42 )
          {
            v48 = (const char *)v162;
LABEL_190:
            sub_946E0("Could not find field %s of struct variant %s", (const char *)v8, v48);
          }
        }
        v46 = ((int (__fastcall *)(void *, int, _DWORD, _DWORD, int, int))loc_26F358)(v160[0], v45, 0, 0, v43, v39);
        v47 = *(_DWORD *)(v39 + 24);
        v159 = v46;
        v42 = *(__int16 *)(v47 + 4);
      }
      v48 = (const char *)v162;
      if ( v42 == v43 )
        goto LABEL_190;
      if ( v162 == v164 )
        return v159;
      v49 = v162;
LABEL_49:
      sub_339E64(v49);
      return v159;
    case 83:
      v4 = v164;
      *v5 = v6 + 1;
      v50 = *((_QWORD *)v9 + 4);
      v162 = v164;
      v163 = 0;
      LOBYTE(v164[0]) = 0;
      v13 = sub_26725C(v50, HIDWORD(v50));
      *v5 += 2;
      v8 = (int *)sub_14C9EC(0, v8, v5, a4);
      v51 = sub_26BC70(v8);
      v52 = *(const char ***)(v51 + 24);
      v5 = (int *)v51;
      v53 = *(char *)v52;
      if ( v53 == 4 )
        goto LABEL_151;
      if ( v53 != 3 )
        goto LABEL_152;
      v54 = *((__int16 *)v52 + 2);
      if ( (v13 >= v54) | ((unsigned int)v13 >> 31) )
        sub_946E0("Cannot access field %d of %s, there are only %d fields", v13, v52[3], v54);
      if ( !sub_1FA398(v51) )
        sub_946E0(
          "Attempting to access anonymous field %d of %s, which is not a tuple, tuple struct, or tuple-like variant",
          v13,
          *(const char **)(v5[6] + 12));
      goto LABEL_55;
    case 91:
      v56 = sub_26725C(v9[8], v9[9]);
      v57 = v56 & 0xFFFFFFFD;
      *v5 += 3;
      if ( (unsigned int)(v56 - 2) > 1 )
      {
        if ( v57 != 1 )
        {
          if ( a4 == 1 )
            goto LABEL_94;
          goto LABEL_60;
        }
        v60 = sub_14C9EC(0, v8, v5, a4);
        if ( a4 == 1 )
          goto LABEL_94;
        goto LABEL_187;
      }
      v126 = sub_14C9EC(0, v8, v5, a4);
      v58 = v126;
      if ( v57 == 1 )
      {
        v148 = sub_14C9EC(0, v8, v5, a4);
        v60 = v148;
        if ( a4 == 1 )
          goto LABEL_94;
        if ( !v58 )
        {
LABEL_187:
          if ( !v60 )
          {
LABEL_60:
            v58 = 0;
            v59 = "std::ops::RangeFull";
            v60 = 0;
            goto LABEL_61;
          }
          v59 = "std::ops::RangeTo";
          v61 = sub_26BC70(v60);
          v58 = 0;
LABEL_158:
          if ( v61 )
          {
            v62 = (_DWORD *)v61;
LABEL_62:
            if ( v58 )
              v63 = "start";
            else
              v63 = 0;
            if ( v60 )
              v64 = "end";
            else
              v64 = 0;
            v65 = sub_1F8828(v61, (int)v59, (int)v63, (int)v62, (int)v64, v62);
            v66 = v65;
            if ( a4 == 2 )
              return sub_260DBC(v65);
            v67 = sub_2612F8(*(_DWORD *)(v65 + 20));
            v68 = sub_26EB1C(v67);
            ptr = (void *)sub_260F84(v66, v68);
            if ( v58 )
            {
              v69 = sub_2624C8(&ptr, 0, "start", 0, "range");
              ((void (__fastcall *)(int, int))loc_265548)(v69, v58);
            }
            if ( v60 )
            {
              v70 = sub_2624C8(&ptr, 0, "end", 0, "range");
              ((void (__fastcall *)(int, int))loc_265548)(v70, v60);
            }
            return sub_260F84(v66, v68);
          }
LABEL_61:
          v61 = sub_19462C(*v8, v8[1]);
          v62 = 0;
          goto LABEL_62;
        }
        if ( v148 )
        {
          v149 = (_DWORD *)sub_26BC70(v58);
          v150 = (_DWORD *)sub_26BC70(v60);
          if ( !sub_173DD4(v149, v150) )
            sub_946E0("Range expression with different types");
          v59 = "std::ops::Range";
          v61 = sub_26BC70(v58);
          goto LABEL_158;
        }
      }
      else
      {
        if ( a4 == 1 )
          goto LABEL_94;
        if ( !v126 )
        {
          v59 = "std::ops::RangeFull";
          v60 = 0;
          goto LABEL_61;
        }
      }
      v59 = "std::ops::RangeFrom";
      v60 = 0;
      v61 = sub_26BC70(v58);
      goto LABEL_158;
    case 96:
      *v5 = v6 + 1;
      v71 = sub_1FC0A8(0, a2, v5, a4);
      v72 = sub_1FC0A8(0, v8, v5, a4);
      v73 = sub_26EB1C(v72);
      v74 = v73;
      if ( (int)v73 < 0 )
        sub_946E0("Array with negative number of elements", HIDWORD(v73));
      if ( a4 )
      {
        v82 = v73 - 1;
        v83 = sub_26BC70(v71);
        v84 = sub_172140((_DWORD *)v83, SHIDWORD(v83), 0, 0, v82, v82 >> 31);
        return sub_26BB80(v84);
      }
      if ( (_DWORD)v73 )
      {
        if ( (unsigned int)v73 > 0x3FFFFFFF )
LABEL_225:
          sub_33D01C(v73, HIDWORD(v73));
        v75 = (char *)sub_9836C(4 * v73);
        v76 = v74;
        v77 = v75;
        v78 = v75;
        do
        {
          --v76;
          *v78++ = 0;
        }
        while ( v76 );
        if ( v74 )
        {
          v79 = v75 - 4;
          do
          {
            *((_DWORD *)v79 + 1) = v71;
            v79 += 4;
          }
          while ( &v75[4 * v74 - 4] != v79 );
        }
      }
      else
      {
        v77 = 0;
      }
      v11 = sub_26222C(0, v74 - 1, v77);
      v159 = v11;
      if ( v77 )
      {
        sub_339E64(v77);
        return v159;
      }
      return v11;
    case 113:
      v13 = v6 + 1;
      *v5 = v13;
      v155 = v9[8];
      v14 = sub_26725C(v9[12], v9[13]);
      *v5 += 3;
      if ( a4 )
      {
        v157 = 0;
      }
      else
      {
        v13 = v155;
        v125 = sub_2612F8(*(_DWORD *)(v155 + 20));
        v157 = sub_26EB1C(v125);
        v159 = sub_260F84(v155, v157);
      }
      if ( v14 <= 0 )
      {
        if ( (v14 & 1) == 0 )
          goto LABEL_88;
      }
      else
      {
        v15 = *v5 + 1;
        v16 = v8[4 * v15];
        if ( v16 == 114 )
        {
          *v5 = v15;
          v153 = sub_1FC0A8(0, v8, v5, a4);
          if ( !a4 )
            ((void (__fastcall *)(int, int))loc_265548)(v159, v153);
          if ( (--v14 & 1) == 0 )
          {
            if ( !v14 )
              goto LABEL_88;
            v15 = *v5 + 1;
            v16 = v8[4 * v15];
LABEL_11:
            if ( v16 != 89 )
            {
LABEL_221:
              sub_94700(
                (int)"rust-lang.c",
                1740,
                "%s: Assertion `%s' failed.",
                "value* rust_evaluate_subexp(type*, expression*, int*, noside)",
                "exp->elts[*pos].opcode == OP_NAME");
              goto LABEL_222;
            }
            v17 = 0;
            while ( 1 )
            {
              *v5 = v15;
              v18 = sub_26725C(v8[4 * v15 + 4], v8[4 * v15 + 5]);
              v19 = *v5 + 1;
              *v5 += 3 + ((unsigned int)(v18 + 16) >> 4);
              v20 = sub_1FC0A8(0, v8, v5, a4);
              if ( !a4 )
              {
                v21 = sub_2624C8(&v159, 0, &v8[4 * v19 + 4], 0, "structure");
                ((void (__fastcall *)(int, int))loc_265548)(v21, v20);
              }
              v17 += 2;
              if ( v17 >= v14 )
                break;
              v15 = *v5 + 1;
              if ( v8[4 * v15] != 89 )
                goto LABEL_221;
            }
LABEL_88:
            if ( a4 == 1 )
            {
LABEL_94:
              sub_1780B4();
              return sub_26DAF4(*(_DWORD *)(v85 + 12), v86, 1, 0);
            }
            else if ( a4 == 2 )
            {
              return sub_26BB80(v155);
            }
            else
            {
              return sub_260F84(v155, v157);
            }
          }
        }
        else if ( (v14 & 1) == 0 )
        {
          goto LABEL_11;
        }
      }
      sub_94700(
        (int)"rust-lang.c",
        1733,
        "%s: Assertion `%s' failed.",
        "value* rust_evaluate_subexp(type*, expression*, int*, noside)",
        "arglen % 2 == 0");
LABEL_151:
      if ( sub_1F925C((int)v52) )
LABEL_152:
        sub_946E0(
          "Anonymous field access is only allowed on tuples, tuple structs, and tuple-like enum variants",
          HIDWORD(v51));
      v129 = sub_26E978(v8);
      v130 = sub_26BFE0(v8);
      v131 = v130;
      v132 = ((int (__fastcall *)(int *, _DWORD))loc_26C09C)(v8, HIDWORD(v130));
      sub_1F98A0((int)&ptr, v5 + 6, v129, v131, v132, (int)v8);
      v133 = v162;
      if ( ptr == v169 )
      {
        sub_33B48C(&v162, &ptr);
        v133 = ptr;
      }
      else
      {
        if ( v162 == v4 )
        {
          v162 = ptr;
          v163 = v168;
          v164[0] = v169[0];
        }
        else
        {
          v162 = ptr;
          v163 = v168;
          v134 = v164[0];
          v164[0] = v169[0];
          if ( v133 )
          {
            ptr = v133;
            v169[0] = v134;
            goto LABEL_166;
          }
        }
        ptr = v169;
        v133 = v169;
      }
LABEL_166:
      v168 = 0;
      *v133 = 0;
      v135 = v170;
      v166 = v166 & 0xFE | v171 & 1;
      v165 = v170;
      if ( ptr != v169 )
      {
        sub_339E64(ptr);
        v135 = v165;
      }
      if ( (v166 & 1) != 0 )
      {
        if ( v135 == 1 )
        {
          v136 = 0;
        }
        else
        {
          v5 = *(int **)(*(_DWORD *)(v5[6] + 24) + 24 * v135 + 12);
          v136 = *(__int16 *)(v5[6] + 4);
          if ( !((v13 >= v136) | ((unsigned int)v13 >> 31)) )
          {
            v137 = (unsigned __int8)sub_1FA398((int)v5) ^ 1;
            goto LABEL_172;
          }
        }
        v154 = (const char *)v162;
      }
      else
      {
        v5 = *(int **)(*(_DWORD *)(v5[6] + 24) + 24 * v135 + 12);
        v151 = v5[6];
        v152 = *(__int16 *)(v151 + 4);
        if ( !((v13 + 1 >= v152) | ((unsigned int)(v13 + 1) >> 31)) )
        {
          if ( *(_BYTE *)v151 != 3 )
            goto LABEL_173;
          ++v13;
          v137 = (unsigned __int8)sub_1F91A0(v5 + 6, 1) ^ 1;
LABEL_172:
          if ( !v137 )
          {
LABEL_55:
            v159 = ((int (__fastcall *)(int *, int, _DWORD, _DWORD, int, int *))loc_26F358)(v8, v55, 0, 0, v13, v5);
            v49 = v162;
            if ( v162 == v4 )
              return v159;
            goto LABEL_49;
          }
LABEL_173:
          sub_946E0("Variant %s is not a tuple variant", (const char *)v162);
        }
        v154 = (const char *)v162;
        v136 = v152 - 1;
      }
      sub_946E0("Cannot access field %d of variant %s, there are only %d fields", v13, v154, v136);
    default:
      return sub_14E83C(a1, a2, v5, a4);
  }
}
