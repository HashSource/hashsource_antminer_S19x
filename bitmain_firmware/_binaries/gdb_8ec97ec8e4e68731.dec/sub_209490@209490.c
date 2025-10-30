int __fastcall sub_209490(int *a1, unsigned __int8 **a2, int a3, int a4)
{
  unsigned __int8 *v6; // r4
  int v7; // r3
  int v8; // t1
  unsigned __int8 *v9; // r5
  unsigned __int8 *v10; // r0
  char *v11; // r0
  int v12; // r10
  void *v13; // r9
  int v14; // r7
  void *v15; // r4
  unsigned __int8 *v16; // r3
  unsigned __int8 *v17; // r5
  int v18; // t1
  char *v19; // r3
  int v20; // r2
  _BYTE *v21; // r0
  unsigned __int8 *v22; // r3
  int v23; // r2
  int v24; // r2
  unsigned __int8 *v25; // r0
  unsigned __int8 *v26; // r5
  int v27; // r2
  int v28; // r3
  unsigned __int8 *v29; // r0
  bool v30; // zf
  int v31; // r3
  int v32; // r0
  int result; // r0
  __int16 v34; // r0
  int v35; // r3
  int v36; // r3
  unsigned __int8 *v37; // r0
  bool v38; // zf
  const char *v39; // r10
  int v40; // r0
  int v41; // r3
  int v42; // r3
  size_t v43; // r5
  int v44; // r4
  int v45; // r1
  int v46; // r3
  char v47; // r2
  void *v48; // r0
  void *v49; // r3
  int v50; // r12
  bool v51; // zf
  int v52; // r3
  int v53; // r2
  __int16 *v54; // r3
  int v55; // r2
  int v56; // r3
  bool v57; // zf
  int v58; // r3
  int v59; // r9
  _DWORD *v60; // r10
  int v61; // r5
  int v62; // r4
  _BYTE *v63; // r0
  int v64; // r0
  int v65; // r3
  int v66; // r3
  int v67; // r9
  int v68; // r2
  int v69; // r5
  int v70; // r3
  char v71; // r1
  void *v72; // r12
  void *v73; // r3
  int v74; // r0
  bool v75; // zf
  int v76; // r3
  _DWORD *v77; // r5
  int v78; // r0
  int v79; // r1
  int v80; // r2
  int v81; // r3
  int v82; // r3
  int v83; // r3
  unsigned __int8 *v84; // r0
  _BYTE *v85; // r1
  unsigned __int8 *v86; // r2
  int v87; // t1
  char *v88; // r0
  char *v89; // r9
  const char *v90; // r0
  size_t v91; // r0
  void *v92; // r3
  size_t v93; // r5
  int v94; // r2
  int v95; // r3
  int v96; // r1
  int v97; // r0
  bool v98; // zf
  int v99; // r3
  int v100; // r3
  _DWORD *v101; // r9
  int v102; // r0
  int v103; // r2
  int v104; // r5
  int v105; // r3
  void *v106; // r1
  void *v107; // r3
  int v108; // r12
  bool v109; // zf
  int v110; // r3
  _DWORD *v111; // r5
  bool v112; // zf
  char *v113; // lr
  int v114; // r1
  int v115; // r2
  int v116; // r3
  _DWORD *v117; // r12
  _DWORD *v118; // lr
  int v119; // r3
  char *s; // [sp+10h] [bp-12Ch]
  char *sa; // [sp+10h] [bp-12Ch]
  size_t v122; // [sp+18h] [bp-124h]
  int v123; // [sp+18h] [bp-124h]
  void *v124; // [sp+1Ch] [bp-120h]
  int v126; // [sp+24h] [bp-118h]
  struct obstack *v128; // [sp+30h] [bp-10Ch]
  struct obstack *v129; // [sp+30h] [bp-10Ch]
  char src[4]; // [sp+38h] [bp-104h] BYREF

  v126 = 0;
  while ( 2 )
  {
    v6 = *a2;
    v7 = **a2;
    if ( v7 == 59 )
      goto LABEL_81;
LABEL_5:
    while ( v7 != 58 )
    {
      v8 = *++v6;
      v7 = v8;
    }
    if ( v6[1] != 58 )
      goto LABEL_81;
    v124 = sub_93094(1u, 0x10u);
    v9 = v6 + 2;
    sub_9253C((int)sub_205D28, (int)v124);
    v10 = *a2;
    if ( **a2 != 111 || v10[1] != 112 )
      goto LABEL_9;
    if ( sub_10A844(v10[2]) )
    {
      *a2 = v9;
      v83 = v6[2];
      if ( v83 != 92 )
      {
        if ( v83 != 63 )
        {
LABEL_145:
          if ( v83 == 46 )
          {
            v85 = &unk_46DB6F;
LABEL_148:
            v88 = sub_93330(&unk_46DB6C, v85 - (_BYTE *)&unk_46DB6C);
            *a2 = v9 + 1;
            s = v88;
            goto LABEL_10;
          }
LABEL_146:
          v85 = &unk_46DB6F;
          v86 = v9 + 1;
          do
          {
            *v85++ = v83;
            v9 = v86;
            v87 = *v86++;
            LOBYTE(v83) = v87;
          }
          while ( v87 != 46 );
          goto LABEL_148;
        }
        if ( v6[3] )
          goto LABEL_146;
      }
      v84 = (unsigned __int8 *)off_478984(a4);
      *a2 = v84;
      v9 = v84;
      v83 = *v84;
      goto LABEL_145;
    }
    v10 = *a2;
LABEL_9:
    v11 = sub_93330(v10, v6 - v10);
    *a2 = v9;
    s = v11;
LABEL_10:
    v12 = 0;
    v13 = 0;
    v14 = 0;
    *((_DWORD *)v124 + 1) = s;
    while ( 1 )
    {
      v15 = sub_93094(1u, 0x14u);
      sub_9253C((int)sub_205D28, (int)v15);
      if ( v12 )
      {
        v16 = *a2;
        *((_DWORD *)v15 + 2) = v12;
      }
      else
      {
        v31 = **a2;
        if ( v31 == 92 || v31 == 63 && !(*a2)[1] )
          *a2 = (unsigned __int8 *)off_478984(a4);
        v32 = sub_2067B4(a2, (struct obstack *)a4);
        v16 = *a2;
        v12 = v32;
        *((_DWORD *)v15 + 2) = v32;
        if ( *v16 != 58 )
          return 0;
      }
      v17 = v16 + 1;
      *a2 = v16 + 1;
      if ( v16[1] != 59 )
      {
        do
          v18 = *++v17;
        while ( v18 != 59 );
      }
      v19 = *(char **)(v12 + 24);
      v20 = *v19;
      if ( v20 == 7 )
      {
        *v19 = 15;
      }
      else if ( v20 != 15 )
      {
        sub_94700(
          (int)"stabsread.c",
          2395,
          "%s: Assertion `%s' failed.",
          "int read_member_functions(field_info*, const char**, type*, objfile*)",
          "TYPE_CODE (new_sublist->fn_field.type) == TYPE_CODE_METHOD");
        goto LABEL_189;
      }
      if ( (v19[1] & 4) != 0 )
      {
        if ( !((int (__fastcall *)(int))loc_1708E0)(v12) )
          ((void (__fastcall *)(_DWORD, int))loc_1709C4)(*((_DWORD *)v15 + 2), a3);
        *((_BYTE *)v15 + 16) |= 0x20u;
      }
      v21 = sub_93330(*a2, v17 - *a2);
      v22 = v17 + 2;
      *((_DWORD *)v15 + 1) = v21;
      *a2 = v17 + 2;
      v23 = v17[1];
      if ( v23 == 48 )
      {
        *((_BYTE *)v15 + 16) |= 4u;
        v24 = v17[2];
        if ( v24 == 92 )
          goto LABEL_23;
      }
      else
      {
        if ( v23 == 49 )
          *((_BYTE *)v15 + 16) |= 8u;
        v24 = v17[2];
        if ( v24 == 92 )
          goto LABEL_23;
      }
      if ( v24 != 63 )
        goto LABEL_24;
      if ( !v17[3] )
      {
LABEL_23:
        v25 = (unsigned __int8 *)off_478984(a4);
        *a2 = v25;
        v22 = v25;
        v24 = *v25;
LABEL_24:
        switch ( v24 )
        {
          case '*':
          case '.':
          case '?':
            break;
          case 'A':
            ++v22;
            *((_BYTE *)v15 + 16) &= 0xFCu;
            break;
          case 'B':
            ++v22;
            *((_BYTE *)v15 + 16) = *((_BYTE *)v15 + 16) & 0xFC | 1;
            break;
          case 'C':
            ++v22;
            *((_BYTE *)v15 + 16) = *((_BYTE *)v15 + 16) & 0xFC | 2;
            break;
          case 'D':
            ++v22;
            *((_BYTE *)v15 + 16) |= 3u;
            break;
          default:
            if ( dword_47AC88 > 0 )
            {
              sub_F43B4(&off_46D334, "const/volatile indicator missing, got '%c'", v24);
              v22 = *a2;
            }
            break;
        }
      }
      v26 = v22 + 1;
      *a2 = v22 + 1;
      v27 = *v22;
      if ( v27 == 46 )
        goto LABEL_31;
      if ( v27 == 63 )
      {
        v39 = (const char *)*((_DWORD *)v15 + 1);
        v122 = strlen(s);
        *((_WORD *)v15 + 9) = 1;
        if ( !strncmp(v39, s, v122) && v39[v122] == 95 && v39[v122 + 1] == 95 )
        {
          v12 = 0;
        }
        else
        {
          v12 = 0;
          *((_BYTE *)v15 + 16) |= 0x20u;
        }
        goto LABEL_32;
      }
      if ( v27 != 42 )
      {
        if ( dword_47AC88 > 0 )
        {
          sub_F43B4(&off_46D334, "member function type missing, got '%c'", v27);
          v26 = *a2;
        }
LABEL_31:
        v12 = 0;
        *((_WORD *)v15 + 9) = 0;
        *((_DWORD *)v15 + 3) = 0;
        goto LABEL_32;
      }
      v34 = sub_2058D4(a2, 59, (int *)src, 0);
      v35 = *(_DWORD *)src;
      *((_WORD *)v15 + 9) = v34 + 2;
      if ( v35 )
        return 0;
      v26 = *a2;
      v36 = **a2;
      if ( v36 == 92 )
        goto LABEL_56;
      if ( v36 != 63 )
        goto LABEL_57;
      if ( !v26[1] )
      {
LABEL_56:
        v37 = (unsigned __int8 *)off_478984(a4);
        *a2 = v37;
        v26 = v37;
        v36 = *v37;
LABEL_57:
        v38 = v36 == 0;
        if ( v36 )
          v38 = v36 == 59;
        if ( v38 )
        {
          v12 = 0;
          *((_DWORD *)v15 + 3) = 0;
          goto LABEL_32;
        }
      }
      v40 = sub_2067B4(a2, (struct obstack *)a4);
      v26 = *a2;
      v12 = v40;
      if ( **a2 != 58 )
      {
        *((_DWORD *)v15 + 3) = v40;
        if ( *v26 != 59 )
          return 0;
        ++v26;
        v12 = 0;
        *a2 = v26;
      }
LABEL_32:
      *(_DWORD *)v15 = v13;
      ++v14;
      v28 = *v26;
      if ( v28 == 92 )
        goto LABEL_33;
      if ( v28 == 63 )
      {
        if ( v26[1] )
          goto LABEL_37;
LABEL_33:
        v29 = (unsigned __int8 *)off_478984(a4);
        *a2 = v29;
        v26 = v29;
        v28 = *v29;
      }
      v30 = v28 == 0;
      if ( v28 )
        v30 = v28 == 59;
      if ( v30 )
        break;
LABEL_37:
      v13 = v15;
    }
    *a2 = v26 + 1;
    v41 = v26[1];
    if ( v41 == 92 || v41 == 63 && !v26[2] )
      *a2 = (unsigned __int8 *)off_478984(a4);
    if ( sub_25BD2C((int)s, "__base_ctor ") && sub_25BD2C((int)s, "__base_dtor ") )
    {
      if ( strcmp(s, "__deleting_dtor") )
      {
        v59 = 0;
        v60 = v15;
        v129 = (struct obstack *)v15;
        v61 = 0;
        v62 = 0;
        v123 = 0;
        do
        {
          v63 = (_BYTE *)v60[1];
          if ( (v60[4] & 0x20) != 0 )
            v61 = 1;
          if ( *v63 == 95 && v63[1] == 90 )
            v62 = 1;
          v64 = sub_FC524();
          v60 = (_DWORD *)*v60;
          if ( v64 )
            v65 = v123;
          else
            ++v59;
          if ( v64 )
            v123 = v65 + 1;
        }
        while ( v60 );
        v66 = v59;
        v67 = v62;
        v15 = v129;
        v128 = (struct obstack *)(a4 + 48);
        if ( v123 )
        {
          if ( v66 )
          {
            v101 = sub_93094(1u, 0x10u);
            sub_9253C((int)sub_205D28, (int)v101);
            v102 = sub_16351C(a4 + 48, "~", *((_DWORD *)v124 + 1), 0);
            v103 = *(_DWORD *)(a4 + 64);
            v101[1] = v102;
            v104 = 16 * v123;
            v105 = *(_DWORD *)(a4 + 60);
            if ( 16 * v123 > (unsigned int)(v103 - v105) )
            {
              obstack_newchunk((struct obstack *)(a4 + 48), v104);
              v103 = *(_DWORD *)(a4 + 64);
              v105 = *(_DWORD *)(a4 + 60);
            }
            v106 = *(void **)(a4 + 56);
            v107 = (void *)(v105 + v104);
            v108 = *(_DWORD *)(a4 + 72);
            *(_DWORD *)(a4 + 60) = v107;
            v109 = v107 == v106;
            v101[3] = v106;
            if ( v107 == v106 )
              LOBYTE(v102) = *(_BYTE *)(a4 + 88);
            v110 = ((unsigned int)v107 + v108) & ~v108;
            *(_DWORD *)(a4 + 60) = v110;
            if ( v109 )
              *(_BYTE *)(a4 + 88) = v102 | 2;
            if ( v110 - *(_DWORD *)(a4 + 52) > (unsigned int)(v103 - *(_DWORD *)(a4 + 52)) )
              *(_DWORD *)(a4 + 60) = v103;
            v111 = v15;
            *(_DWORD *)(a4 + 56) = *(_DWORD *)(a4 + 60);
            memset(v106, 0, 16 * v123);
            sa = 0;
            do
            {
              if ( sub_FC524() )
              {
                v112 = v60 == 0;
                v113 = sa;
                v114 = v111[2];
                v115 = v111[3];
                v116 = v111[4];
                ++sa;
                v117 = (_DWORD *)(v101[3] + 16 * (_DWORD)v113);
                v118 = (_DWORD *)*v111;
                *v117 = v111[1];
                v117[1] = v114;
                v117[2] = v115;
                v117[3] = v116;
                if ( v60 )
                  *v60 = v118;
                else
                  v15 = v118;
                v60 = v111;
                if ( !v112 )
                  v118 = (_DWORD *)*v111;
                v111 = v118;
              }
              else
              {
                v111 = (_DWORD *)*v111;
              }
            }
            while ( v111 );
            v119 = *a1;
            ++v126;
            *a1 = (int)v101;
            *v101 = v119;
            v101[2] = v123;
            v14 -= v123;
            goto LABEL_124;
          }
          if ( !v67 )
          {
            if ( **((_BYTE **)v124 + 1) == 126 )
            {
LABEL_123:
              if ( !v61 )
              {
                if ( sub_3102B0(*((_DWORD *)v124 + 1), src, 2) || sub_3102B0(*((_DWORD *)v124 + 1), src, 0) )
                {
                  v91 = strlen(src);
                  v92 = *(void **)(a4 + 60);
                  v93 = v91;
                  if ( *(_DWORD *)(a4 + 64) - (int)v92 < v91 + 1 )
                  {
                    obstack_newchunk((struct obstack *)(a4 + 48), v91 + 1);
                    v92 = *(void **)(a4 + 60);
                  }
                  memcpy(v92, src, v93);
                  v94 = *(_DWORD *)(a4 + 60);
                  *(_DWORD *)(a4 + 60) = v94 + v93 + 1;
                  *(_BYTE *)(v94 + v93) = 0;
                  v95 = *(_DWORD *)(a4 + 60);
                  v96 = *(_DWORD *)(a4 + 56);
                  v97 = *(_DWORD *)(a4 + 64);
                  v98 = v96 == v95;
                  if ( v96 == v95 )
                    LOBYTE(v94) = *(_BYTE *)(a4 + 88);
                  v99 = (v95 + *(_DWORD *)(a4 + 72)) & ~*(_DWORD *)(a4 + 72);
                  *(_DWORD *)(a4 + 60) = v99;
                  if ( v98 )
                    *(_BYTE *)(a4 + 88) = v94 | 2;
                  if ( v99 - *(_DWORD *)(a4 + 52) > (unsigned int)(v97 - *(_DWORD *)(a4 + 52)) )
                    *(_DWORD *)(a4 + 60) = v97;
                  v100 = *(_DWORD *)(a4 + 60);
                  *((_DWORD *)v124 + 1) = v96;
                  *(_DWORD *)(a4 + 56) = v100;
                }
                free(s);
              }
            }
            else
            {
              *((_DWORD *)v124 + 1) = sub_16351C(a4 + 48, "~", s, 0);
              free(s);
            }
LABEL_124:
            v68 = *(_DWORD *)(a4 + 64);
            v69 = 16 * v14;
            v70 = *(_DWORD *)(a4 + 60);
            v71 = v68 - v70;
            if ( 16 * v14 > (unsigned int)(v68 - v70) )
            {
              obstack_newchunk(v128, 16 * v14);
              v70 = *(_DWORD *)(a4 + 60);
              v68 = *(_DWORD *)(a4 + 64);
            }
            v72 = *(void **)(a4 + 56);
            v73 = (void *)(v70 + v69);
            v74 = *(_DWORD *)(a4 + 72);
            *(_DWORD *)(a4 + 60) = v73;
            v75 = v73 == v72;
            if ( v73 == v72 )
              v71 = *(_BYTE *)(a4 + 88);
            v76 = ((unsigned int)v73 + v74) & ~v74;
            *(_DWORD *)(a4 + 60) = v76;
            if ( v75 )
              v71 |= 2u;
            *((_DWORD *)v124 + 3) = v72;
            if ( v75 )
              *(_BYTE *)(a4 + 88) = v71;
            if ( v76 - *(_DWORD *)(a4 + 52) > (unsigned int)(v68 - *(_DWORD *)(a4 + 52)) )
            {
              v76 = v68;
              *(_DWORD *)(a4 + 60) = v68;
            }
            *(_DWORD *)(a4 + 56) = v76;
            memset(v72, 0, 16 * v14);
            if ( v15 )
            {
              v77 = (_DWORD *)(*((_DWORD *)v124 + 3) + v69);
              do
              {
                v78 = *((_DWORD *)v15 + 1);
                v79 = *((_DWORD *)v15 + 2);
                v80 = *((_DWORD *)v15 + 3);
                v81 = *((_DWORD *)v15 + 4);
                v77 -= 4;
                v15 = *(void **)v15;
                *v77 = v78;
                v77[1] = v79;
                v77[2] = v80;
                v77[3] = v81;
              }
              while ( v15 );
            }
            v82 = *a1;
            ++v126;
            *((_DWORD *)v124 + 2) = v14;
            *a1 = (int)v124;
            *(_DWORD *)v124 = v82;
            continue;
          }
        }
        else if ( !v67 )
        {
          goto LABEL_123;
        }
        v89 = (char *)*((_DWORD *)v15 + 1);
        v90 = (const char *)sub_100C40(v89);
        v17 = (unsigned __int8 *)v90;
        if ( !v90 )
        {
          if ( dword_47AC88 > 0 )
            sub_F43B4(&off_46D334, "Method has bad physname %s\n", v89);
          goto LABEL_124;
        }
        if ( !strcmp(v90, *((const char **)v124 + 1)) )
        {
          free(v17);
          goto LABEL_124;
        }
LABEL_189:
        *((_DWORD *)v124 + 1) = v17;
        free(s);
        goto LABEL_124;
      }
    }
    else if ( !s )
    {
      continue;
    }
    break;
  }
  free(s);
  v6 = *a2;
  v7 = **a2;
  if ( v7 != 59 )
    goto LABEL_5;
LABEL_81:
  if ( !v126 )
    return 1;
  sub_173008(a3);
  v42 = *(_DWORD *)(a3 + 24);
  v43 = 12 * v126;
  if ( (*(_BYTE *)(v42 + 2) & 0x10) != 0 )
  {
    v44 = *(_DWORD *)(v42 + 16);
    v45 = *(_DWORD *)(v44 + 64);
    v46 = *(_DWORD *)(v44 + 60);
    v47 = v45 - v46;
    if ( v45 - v46 < v43 )
    {
      obstack_newchunk((struct obstack *)(v44 + 48), 12 * v126);
      v46 = *(_DWORD *)(v44 + 60);
      v45 = *(_DWORD *)(v44 + 64);
    }
    v48 = *(void **)(v44 + 56);
    v49 = (void *)(v46 + v43);
    v50 = *(_DWORD *)(v44 + 72);
    *(_DWORD *)(v44 + 60) = v49;
    v51 = v49 == v48;
    if ( v49 == v48 )
      v47 = *(_BYTE *)(v44 + 88);
    v52 = ((unsigned int)v49 + v50) & ~v50;
    *(_DWORD *)(v44 + 60) = v52;
    if ( v51 )
      *(_BYTE *)(v44 + 88) = v47 | 2;
    if ( v52 - *(_DWORD *)(v44 + 52) > (unsigned int)(v45 - *(_DWORD *)(v44 + 52)) )
    {
      v52 = v45;
      *(_DWORD *)(v44 + 60) = v45;
    }
    *(_DWORD *)(v44 + 56) = v52;
  }
  else
  {
    v48 = sub_93028(12 * v126);
  }
  v53 = *(_DWORD *)(a3 + 24);
  if ( (*(_WORD *)(v53 + 2) & 0x380) == 0x80 )
    v54 = *(__int16 **)(v53 + 28);
  else
    v54 = &word_3B4A2C;
  *((_DWORD *)v54 + 8) = v48;
  memset(v48, 0, v43);
  result = 1;
  v55 = *(_DWORD *)(a3 + 24);
  v56 = *(_WORD *)(v55 + 2) & 0x380;
  v57 = v56 == 128;
  if ( v56 == 128 )
    v58 = *(_DWORD *)(v55 + 28);
  else
    v58 = 18988;
  if ( !v57 )
    HIWORD(v58) = 59;
  *(_WORD *)(v58 + 4) = v126;
  return result;
}
