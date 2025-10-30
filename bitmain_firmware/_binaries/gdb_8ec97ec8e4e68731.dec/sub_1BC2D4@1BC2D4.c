int __fastcall sub_1BC2D4(int a1, int *a2, _DWORD *a3, int a4)
{
  int v5; // r8
  int *v8; // r2
  int v9; // r10
  _DWORD *v10; // r0
  int v11; // r0
  const char *v12; // r8
  int v13; // r0
  int v14; // r10
  int v16; // r6
  int v17; // r0
  int v18; // r7
  _DWORD *v19; // r0
  int v20; // r6
  _DWORD *v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r3
  _DWORD *v25; // r2
  int *v26; // r1
  int v27; // r6
  int v28; // r4
  __int64 v29; // r0
  _BOOL4 v30; // r2
  _DWORD *v31; // r0
  int v32; // r7
  _DWORD *v33; // r6
  int v34; // r0
  int v35; // r0
  int v36; // r0
  int v37; // r1
  int v38; // r0
  int v39; // r8
  _DWORD *v40; // r0
  int v41; // r0
  int v42; // r1
  int v43; // r4
  int v44; // r4
  __int64 v45; // r0
  int v46; // r0
  int v47; // r0
  _DWORD *v48; // r6
  int v49; // r4
  int v50; // r0
  int v51; // r9
  int v52; // r0
  int v53; // r1
  __int64 v54; // r4
  int v55; // r0
  int v56; // r11
  int v57; // r0
  int v58; // r1
  int v59; // r8
  int v60; // r9
  _DWORD *v61; // r0
  _DWORD *v62; // r5
  _DWORD *v63; // r0
  int v64; // r0
  int v65; // r11
  _DWORD *v67; // r0
  int v68; // r3
  int v69; // r4
  int v70; // r6
  char *v71; // r3
  char *v72; // r2
  int v73; // r1
  __int64 v74; // r6
  int v75; // r0
  __int64 v76; // r0
  int v77; // r8
  void *v78; // r9
  const void *v79; // r0
  int v80; // r7
  _DWORD *v81; // r0
  int v82; // r0
  unsigned int v83; // r3
  bool v84; // cc
  int v85; // r6
  _BOOL4 v86; // r10
  int v87; // r0
  int v88; // r4
  unsigned int v89; // r3
  size_t v90; // r6
  _DWORD *v91; // r3
  int v92; // r5
  _DWORD *v93; // r0
  int v94; // r0
  int v95; // r1
  int v96; // r3
  int v97; // r11
  int v98; // r8
  int v99; // r0
  unsigned int v100; // r3
  int *v101; // r3
  int v102; // r2
  int v103; // r5
  int *v104; // r12
  int *v105; // r1
  int v106; // r0
  int *v107; // r3
  int v108; // t1
  int i; // r5
  void *v110; // r6
  int v111; // r0
  int v112; // r1
  int v113; // r4
  int v114; // r0
  int v115; // r0
  unsigned int v116; // r3
  int *v117; // r3
  int v118; // r2
  int v119; // r0
  int *v120; // r2
  int v121; // r3
  _DWORD *v122; // r8
  void *v123; // r0
  int v124; // r10
  size_t v125; // r0
  int v126; // r0
  const char *v127; // r12
  int *v128; // r1
  int v129; // r2
  int v130; // t1
  int v131; // r3
  const char *v132; // r2
  int v133; // t1
  int v134; // [sp+8h] [bp-ACh]
  int v135; // [sp+10h] [bp-A4h]
  int v136; // [sp+24h] [bp-90h] BYREF
  __int64 v137; // [sp+28h] [bp-8Ch] BYREF
  __int64 v138; // [sp+30h] [bp-84h] BYREF
  __int64 v139; // [sp+38h] [bp-7Ch] BYREF
  __int64 v140; // [sp+40h] [bp-74h] BYREF
  __int64 v141; // [sp+48h] [bp-6Ch] BYREF
  __int64 v142; // [sp+50h] [bp-64h] BYREF
  __int64 v143; // [sp+58h] [bp-5Ch] BYREF
  __int64 v144; // [sp+60h] [bp-54h] BYREF
  __int64 v145; // [sp+68h] [bp-4Ch] BYREF
  _DWORD v146[17]; // [sp+70h] [bp-44h] BYREF

  v5 = *a3;
  v136 = 0;
  v8 = &a2[4 * v5];
  v9 = v8[4];
  switch ( v9 )
  {
    case 9:
    case 10:
      *a3 = v5 + 1;
      v136 = sub_14C9EC(0, a2, a3, a4);
      if ( a4 == 1 )
      {
        sub_14C9EC(0, a2, a3, 1);
LABEL_21:
        sub_1780B4();
        return sub_26DAF4(*(_DWORD *)(v36 + 12), v37, 1, 0);
      }
      v16 = *a3;
      v17 = sub_14C9EC(0, a2, a3, 2);
      *a3 = v16;
      v18 = v17;
      v19 = (_DWORD *)sub_26BC70(v136);
      v20 = sub_171258(v19);
      v21 = (_DWORD *)sub_26BC70(v18);
      v22 = sub_171258(v21);
      if ( (**(_DWORD **)(v20 + 24) & 0x100FF) != 0x10002 && (**(_DWORD **)(v22 + 24) & 0x100FF) != 0x10002 )
      {
        v23 = sub_25DC1C(v136);
        if ( v9 == 10 )
        {
          if ( !v23 )
          {
            sub_14C9EC(0, a2, a3, 1);
            LODWORD(v29) = sub_19462C(*a2, a2[1]);
            v30 = 1;
            v28 = v29;
            return sub_26DAF4(v28, HIDWORD(v29), v30, 0);
          }
          v24 = a4;
          v25 = a3;
          v26 = a2;
        }
        else
        {
          if ( v23 )
          {
            sub_14C9EC(0, a2, a3, 1);
            LODWORD(v29) = sub_19462C(*a2, a2[1]);
            v30 = 0;
            v28 = v29;
            return sub_26DAF4(v28, HIDWORD(v29), v30, 0);
          }
          v24 = a4;
          v25 = a3;
          v26 = a2;
        }
        v27 = sub_14C9EC(0, v26, v25, v24);
        v28 = sub_19462C(*a2, a2[1]);
        v29 = sub_25DC1C(v27);
        v30 = v29 == 0;
        return sub_26DAF4(v28, HIDWORD(v29), v30, 0);
      }
      v50 = sub_14C9EC(0, a2, a3, a4);
      return sub_1BC170(a2, v136, v50, v9);
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
      *a3 = v5 + 1;
      v136 = sub_14C9EC(0, a2, a3, a4);
      v46 = sub_26BC70(v136);
      v47 = sub_14C9EC(v46, a2, a3, a4);
      if ( a4 == 1 )
        goto LABEL_21;
      return sub_1BC170(a2, v136, v47, v9);
    case 21:
      *a3 = v5 + 1;
      v136 = sub_14C9EC(0, a2, a3, a4);
      v48 = (_DWORD *)sub_26BC70(v136);
      v49 = sub_14C9EC((int)v48, a2, a3, a4);
      if ( (unsigned int)(a4 - 1) <= 1 )
        return v136;
      if ( sub_26C1D4(v136) && *(_DWORD *)nullsub_31(v136) != 3 )
        v49 = sub_1BC080(v48, v49);
      return ((int (__fastcall *)(int, int))loc_265548)(v136, v49);
    case 35:
      *a3 = v5 + 1;
      v136 = sub_14C9EC(0, a2, a3, a4);
      v31 = (_DWORD *)sub_26BC70(v136);
      v32 = sub_171258(v31);
      if ( (**(_DWORD **)(v32 + 24) & ((unsigned int)off_100FC + 3)) != 0x10002 )
      {
        if ( (unsigned int)sub_25DC1C(v136) )
        {
          sub_14C9EC(0, a2, a3, 1);
          return sub_14C9EC(0, a2, a3, a4);
        }
        else
        {
          v14 = sub_14C9EC(0, a2, a3, a4);
          sub_14C9EC(0, a2, a3, 1);
        }
        return v14;
      }
      v59 = sub_14C9EC(0, a2, a3, a4);
      v60 = sub_14C9EC(0, a2, a3, a4);
      v61 = (_DWORD *)sub_26BC70(v59);
      v62 = (_DWORD *)sub_171258(v61);
      v63 = (_DWORD *)sub_26BC70(v60);
      v64 = sub_171258(v63);
      v65 = v64;
      if ( (((unsigned int)off_100FC + 3) & *(_DWORD *)v62[6]) == 0x10002
        || (**(_DWORD **)(v64 + 24) & ((unsigned int)off_100FC + 3)) != 65538 )
      {
        v60 = sub_1BC080(v62, v60);
        v114 = sub_26BC70(v60);
        v68 = v62[6];
        v65 = v114;
      }
      else
      {
        v59 = sub_1BC080((_DWORD *)v64, v59);
        v67 = (_DWORD *)sub_26BC70(v59);
        v68 = v67[6];
        v62 = v67;
      }
      v69 = sub_171258(*(_DWORD **)(v68 + 20));
      v70 = sub_171258(*(_DWORD **)(*(_DWORD *)(v65 + 24) + 20));
      if ( sub_171B30(v32, &v137, &v140) && sub_171B30((int)v62, &v138, &v141) && sub_171B30(v65, &v139, &v142) )
      {
        v71 = *(char **)(v69 + 24);
        v72 = *(char **)(v70 + 24);
        if ( *v71 != *v72
          || *(_DWORD *)(v69 + 20) != *(_DWORD *)(v70 + 20)
          || (((unsigned __int8)v71[1] ^ (unsigned __int8)v72[1]) & 1) != 0
          || v138 != v139
          || v141 != v142 )
        {
          sub_946E0("Cannot perform operation on vectors with different types");
        }
        if ( v138 != v137 || v141 != v140 )
          sub_946E0("Cannot perform conditional operation on vectors with different sizes");
        v14 = sub_26BB80(v62);
        v73 = HIDWORD(v137);
        if ( (((unsigned __int64)(v140 - v137) >> 32) & 0x80000000) == 0LL )
        {
          v74 = 0;
          v134 = v59;
          v135 = v60;
          do
          {
            v75 = sub_25CE0C(v136, v73, v74, HIDWORD(v74));
            v76 = sub_25DC1C(v75);
            if ( (_DWORD)v76 )
              LODWORD(v76) = v135;
            else
              LODWORD(v76) = v134;
            v77 = sub_25CE0C(v76, HIDWORD(v76), v74, HIDWORD(v74));
            v78 = (void *)(sub_26E954(v14) + *(_DWORD *)(v69 + 20) * v74);
            v79 = (const void *)sub_26E738(v77);
            memcpy(v78, v79, *(_DWORD *)(v69 + 20));
            ++v74;
            v73 = HIDWORD(v137);
          }
          while ( v140 - v137 >= v74 );
        }
        return v14;
      }
      goto LABEL_170;
    case 52:
      v33 = (_DWORD *)v8[8];
      *a3 = v5 + 2;
      v34 = sub_14C9EC((int)v33, a2, a3, a4);
      v136 = v34;
      if ( a4 != 1 )
        return sub_1BC080(v33, v34);
      goto LABEL_21;
    case 53:
      *a3 = v5 + 1;
      v35 = sub_14C9EC(0, a2, a3, 2);
      v33 = (_DWORD *)sub_26BC70(v35);
      v34 = sub_14C9EC((int)v33, a2, a3, a4);
      v136 = v34;
      if ( a4 == 1 )
        goto LABEL_21;
      return sub_1BC080(v33, v34);
    case 59:
      *a3 = v5 + 1;
      v38 = sub_14C9EC(0, a2, a3, a4);
      v39 = v38;
      v136 = v38;
      if ( a4 == 1 )
        goto LABEL_21;
      v40 = (_DWORD *)sub_26BC70(v38);
      v41 = sub_171258(v40);
      v42 = *(_DWORD *)(v41 + 24);
      v43 = v41;
      if ( (int *)(((unsigned int)off_100FC + 3) & *(_DWORD *)v42) == (int *)((char *)&dword_10000 + 2) )
      {
        v51 = sub_171258(*(_DWORD **)(v42 + 20));
        if ( sub_171B30(v43, &v143, v146) )
        {
          v52 = sub_1BACD4(a2[1], 8, *(_DWORD *)(v51 + 20), 0, v146[0] + 1 - v143);
          v14 = sub_26BB80(v52);
          v53 = HIDWORD(v143);
          if ( (((unsigned __int64)(*(_QWORD *)v146 - v143) >> 32) & 0x80000000) == 0LL )
          {
            v54 = 0;
            do
            {
              v55 = sub_25CE0C(v39, v53, v54, HIDWORD(v54));
              v56 = sub_25DC1C(v55);
              v57 = sub_26E954(v14);
              v58 = v56;
              if ( v56 )
                v58 = 1;
              memset((void *)(v57 + *(_DWORD *)(v51 + 20) * v54++), -v58, *(_DWORD *)(v51 + 20));
              v53 = HIDWORD(v143);
            }
            while ( *(_QWORD *)v146 - v143 >= v54 );
          }
          return v14;
        }
LABEL_170:
        sub_946E0("Could not determine the vector bounds");
      }
      v44 = sub_19462C(*a2, a2[1]);
      v45 = sub_25DC1C(v39);
      return sub_26DAF4(v44, HIDWORD(v45), v45, (int)v45 >> 31);
    case 81:
      *a3 = v5 + 1;
      *a3 += 3 + (((unsigned int)sub_26725C(v8[8], v8[9]) + 16) >> 4);
      v136 = sub_14C9EC(0, a2, a3, a4);
      v10 = (_DWORD *)sub_26BC70(v136);
      v11 = sub_171258(v10);
      if ( a4 == 1 )
        goto LABEL_21;
      v12 = (const char *)&a2[4 * v5 + 12];
      if ( (**(_DWORD **)(v11 + 24) & 0x100FF) != 0x10002 )
      {
        v13 = sub_2624C8(&v136, 0, v12, 0, "structure");
        v14 = v13;
        if ( a4 == 2 )
        {
          v113 = sub_26BC70(v13);
          nullsub_31(v14);
          return sub_260DBC(v113);
        }
        return v14;
      }
      v80 = v136;
      v81 = (_DWORD *)sub_26BC70(v136);
      v82 = sub_171258(v81);
      if ( !sub_171B30(v82, &v144, &v145) )
        goto LABEL_170;
      v83 = (v145 - v144) & 0xFFFFFFF7;
      v84 = v83 > 7;
      if ( v83 != 7 )
        v84 = (unsigned int)(v145 - v144 - 1) > 2;
      v85 = v145 - v144 + 1;
      v86 = v84;
      if ( v84 )
        sub_946E0("Invalid OpenCL vector size");
      v87 = strcmp(v12, "lo");
      if ( !v87 )
      {
        if ( v85 == 3 )
        {
          v90 = 2;
          v88 = 2;
LABEL_79:
          v91 = v146;
          do
            *v91++ = v87++;
          while ( v87 < v88 );
          goto LABEL_81;
        }
        v88 = v85 / 2;
        v89 = v85 / 2 - 1;
        v90 = v85 / 2;
        v86 = v89 > 3 && ((v90 - 8) & 0xFFFFFFF7) != 0;
        if ( v88 > 0 )
          goto LABEL_79;
LABEL_81:
        if ( v86 )
          goto LABEL_147;
        v92 = a2[1];
        v93 = (_DWORD *)sub_26BC70(v80);
        v94 = sub_171258(v93);
        v96 = *(_DWORD *)(v94 + 24);
        v97 = v94;
        v98 = *(_DWORD *)(v96 + 20);
        if ( v88 == 1 )
        {
          if ( a4 == 2 )
            return sub_260DBC(*(_DWORD *)(v96 + 20));
          else
            return sub_25CE0C(v80, v95, v146[0], v146[0] >> 31);
        }
        else
        {
          v103 = sub_1BACD4(
                   v92,
                   **(char **)(v98 + 24),
                   *(_DWORD *)(v98 + 20),
                   *(_BYTE *)(*(_DWORD *)(v98 + 24) + 1) & 1,
                   v88);
          if ( !v103 )
            v103 = sub_1721F4((_DWORD *)v98, v88);
          ((void (__fastcall *)(int, int, int, _DWORD))loc_170478)(
            *(_DWORD *)(v97 + 16) & 1,
            (*(_DWORD *)(v97 + 16) >> 1) & 1,
            v103,
            0);
          if ( a4 == 2 )
          {
            return sub_26BB80(v103);
          }
          else if ( *(_DWORD *)nullsub_31(v80) )
          {
            if ( v88 > 0 )
            {
              v104 = &v146[1];
              v105 = &v146[v88];
              while ( v104 != v105 )
              {
                v106 = *(v104++ - 1);
                if ( *(v104 - 1) == v106 )
                {
LABEL_106:
                  v14 = sub_26BB80(v103);
                  goto LABEL_107;
                }
                v107 = v104;
                while ( v105 != v107 )
                {
                  v108 = *v107++;
                  if ( v108 == v106 )
                    goto LABEL_106;
                }
              }
            }
            v122 = sub_93094(1u, 0x10u);
            *v122 = 1;
            v122[1] = v88;
            v123 = sub_93094(v90, 4u);
            v122[2] = v123;
            memcpy(v123, v146, 4 * v90);
            sub_26C1F0(v80);
            v122[3] = v80;
            return sub_26BBF8(v103, &unk_3C9A80, v122);
          }
          else
          {
            v14 = sub_26BB80(v103);
            if ( v88 > 0 )
            {
LABEL_107:
              for ( i = 0; i < v88; ++i )
              {
                v110 = (void *)(sub_26E954(v14) + *(_DWORD *)(v98 + 20) * i);
                v111 = sub_26E978(v80);
                v112 = v146[i];
                memcpy(v110, (const void *)(v111 + v112 * *(_DWORD *)(v98 + 20)), *(_DWORD *)(v98 + 20));
              }
            }
          }
        }
        return v14;
      }
      v99 = strcmp(v12, "hi");
      if ( v99 )
      {
        v115 = strcmp(v12, "even");
        if ( v115 )
        {
          v119 = strcmp(v12, "odd");
          if ( v119 )
          {
            v124 = strncasecmp(v12, (const char *)&word_3DDC78, 1u);
            v125 = strlen(v12);
            if ( !v124 )
            {
              v126 = v125 - 1;
              v88 = v126;
              if ( v126 <= 0 )
                goto LABEL_147;
              v127 = v12;
              v128 = v146;
              while ( 1 )
              {
                v130 = *(unsigned __int8 *)++v127;
                v129 = v130;
                v131 = v130 - 48;
                if ( (unsigned __int8)(v130 - 48) > 9u )
                {
                  if ( (unsigned int)(v129 - 65) > 5 )
                  {
                    if ( (unsigned int)(v129 - 97) > 5 )
                    {
                      v146[v124] = -1;
                      goto LABEL_147;
                    }
                    v131 = v129 - 87;
                  }
                  else
                  {
                    v131 = v129 - 55;
                  }
                }
                *v128++ = v131;
                if ( v85 <= v131 )
                  goto LABEL_147;
                if ( v126 == ++v124 )
                {
                  v90 = v126;
                  v86 = (unsigned int)(v126 - 1) > 3 && ((v126 - 8) & 0xFFFFFFF7) != 0;
                  goto LABEL_81;
                }
              }
            }
            if ( !v125 )
LABEL_147:
              sub_946E0("Invalid OpenCL vector component accessor %s", v12);
            v88 = 0;
            v132 = v12 - 1;
            do
            {
              v133 = *(unsigned __int8 *)++v132;
              switch ( v133 )
              {
                case 'w':
                  if ( v85 <= 3 )
                    goto LABEL_147;
                  v146[v88] = 3;
                  break;
                case 'x':
                  v146[v88] = 0;
                  break;
                case 'y':
                  v146[v88] = 1;
                  break;
                case 'z':
                  if ( v85 <= 2 )
                    goto LABEL_147;
                  v146[v88] = 2;
                  break;
                default:
                  goto LABEL_147;
              }
              ++v88;
            }
            while ( v88 != v125 );
          }
          else
          {
            if ( v85 == 3 )
            {
              v88 = 2;
            }
            else
            {
              v88 = v85 / 2;
              if ( v85 / 2 <= 0 )
                goto LABEL_147;
            }
            v120 = v146;
            v121 = 1;
            do
            {
              ++v119;
              *v120++ = v121;
              v121 += 2;
            }
            while ( v88 > v119 );
          }
          v90 = v88;
          v86 = (unsigned int)(v88 - 1) > 3 && ((v88 - 8) & 0xFFFFFFF7) != 0;
          goto LABEL_81;
        }
        if ( v85 == 3 )
        {
          v90 = 2;
          v88 = 2;
        }
        else
        {
          v88 = v85 / 2;
          v116 = v85 / 2 - 1;
          v90 = v85 / 2;
          v86 = v116 > 3 && ((v90 - 8) & 0xFFFFFFF7) != 0;
          if ( v88 <= 0 )
            goto LABEL_81;
        }
        v117 = v146;
        do
        {
          v118 = 2 * v115++;
          *v117++ = v118;
        }
        while ( v115 < v88 );
        goto LABEL_81;
      }
      if ( v85 == 3 )
      {
        v90 = 2;
        v88 = 2;
      }
      else
      {
        v88 = v85 / 2;
        v100 = v85 / 2 - 1;
        v90 = v85 / 2;
        v86 = v100 > 3 && ((v90 - 8) & 0xFFFFFFF7) != 0;
        if ( v88 <= 0 )
          goto LABEL_81;
      }
      v101 = v146;
      do
      {
        v102 = v88 + v99++;
        *v101++ = v102;
      }
      while ( v99 < v88 );
      goto LABEL_81;
    default:
      return sub_E80B4(a1, a2, a3, a4);
  }
}
