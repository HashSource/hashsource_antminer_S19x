unsigned int __fastcall sub_10DE90(_DWORD *a1, _DWORD *a2, int a3, unsigned int *a4, int *a5, char a6)
{
  _DWORD *v8; // r5
  __int64 v9; // r0
  int v10; // r4
  int v11; // r8
  __int64 v12; // r0
  int v13; // r3
  int v14; // r2
  unsigned int v15; // r11
  int v16; // r3
  __int64 v17; // r0
  unsigned __int64 v18; // r6
  char v19; // r3
  int v20; // r1
  int v21; // r4
  int v22; // r1
  int v23; // r3
  char v24; // r2
  int *v25; // r5
  int *v26; // r3
  int v27; // r0
  bool v28; // zf
  unsigned __int64 v29; // r2
  int v30; // r0
  const char *v31; // r6
  char v32; // r4
  int v33; // r2
  __int64 v34; // r0
  int v35; // r0
  int v36; // r3
  int v37; // r12
  __int64 v38; // r0
  int v39; // r6
  int v40; // r0
  int v41; // r0
  int v42; // r2
  int v43; // r3
  int v44; // r0
  unsigned int v45; // r12
  char v46; // r2
  char *v47; // lr
  int v48; // r3
  int v49; // r2
  char v50; // t1
  unsigned int v51; // r10
  char v52; // r3
  int v53; // r3
  int v54; // r3
  char *v55; // r1
  _DWORD **v56; // r0
  unsigned __int8 *v58; // r4
  int v59; // r1
  _DWORD *v60; // r0
  unsigned int v61; // r5
  size_t v62; // r4
  char *v63; // r0
  char *v64; // lr
  char *v65; // lr
  void *v66; // r0
  int v67; // r1
  _DWORD *v68; // r0
  int v69; // r3
  int v70; // r4
  bool v71; // zf
  __int64 v72; // r4
  int v73; // r1
  int v74; // r3
  char v75; // r2
  int v76; // r3
  int v77; // r0
  bool v78; // zf
  int v79; // r3
  unsigned int v80; // r5
  bool v81; // cc
  size_t v82; // r6
  unsigned __int8 *v83; // r4
  int v84; // r3
  unsigned __int8 *v85; // r12
  __int64 v86; // r2
  char v87; // lr
  char v88; // t1
  unsigned int v89; // r8
  unsigned __int8 v90; // r5
  unsigned __int8 *v91; // lr
  __int64 v92; // r0
  unsigned int v93; // r4
  int v94; // r6
  unsigned __int8 v95; // t1
  unsigned int v96; // r8
  int v97; // r12
  int v98; // r3
  int v99; // r3
  __int64 v100; // r2
  char v101; // r12
  char v102; // t1
  unsigned int v103; // r8
  int v104; // r0
  unsigned __int8 *v105; // lr
  int v106; // r1
  int v107; // r0
  char v108; // r12
  char v109; // t1
  unsigned int v110; // r8
  const char *v111; // r8
  int v112; // r3
  int v113; // t1
  int v114; // t1
  char v115; // r3
  __int64 v116; // r0
  int v117; // [sp+8h] [bp-44h]
  const char *v119; // [sp+10h] [bp-3Ch]
  int v120; // [sp+10h] [bp-3Ch]
  int v122; // [sp+18h] [bp-34h]
  int v123; // [sp+20h] [bp-2Ch]
  int v124; // [sp+24h] [bp-28h]
  _DWORD *v125; // [sp+28h] [bp-24h]
  _DWORD *v126; // [sp+2Ch] [bp-20h]
  int v127; // [sp+2Ch] [bp-20h]
  int v128; // [sp+2Ch] [bp-20h]
  int v129; // [sp+30h] [bp-1Ch]
  int v130; // [sp+30h] [bp-1Ch]
  unsigned __int8 *v131; // [sp+34h] [bp-18h]
  _DWORD v132[2]; // [sp+44h] [bp-8h] BYREF

  if ( a3 )
  {
    v122 = 0;
    v123 = 0;
    v124 = 0;
  }
  else
  {
    v123 = -1;
    v122 = -1;
    v124 = -1;
  }
  v117 = 0;
  while ( 1 )
  {
    v8 = a2 + 1;
    v9 = sub_1B7250(a1[1]);
    v10 = *a1;
    v11 = v9;
    v12 = (unsigned int)(*(int (__fastcall **)(_DWORD *, _DWORD))(*(_DWORD *)(*a1 + 4) + 40))(a2, HIDWORD(v9));
    if ( (_DWORD)v12 == -1 )
    {
      v13 = *(_DWORD *)(v10 + 4);
      v8 = a2 + 3;
      v70 = 12;
      LODWORD(v12) = (*(int (__fastcall **)(_DWORD *))(v13 + 28))(a2 + 1);
      v132[0] = 12;
    }
    else
    {
      v70 = 4;
      v132[0] = 4;
    }
    v14 = a1[2];
    v15 = (unsigned int)v8 + v12;
    if ( (unsigned int)((unsigned int)v8 + v12) > v14 + a1[3] )
      goto LABEL_35;
    if ( !v12 )
      goto LABEL_47;
    v16 = *a1;
    if ( v70 == 12 )
    {
      v119 = (const char *)(v8 + 2);
      v17 = ((__int64 (__fastcall *)(_DWORD *))*(_DWORD *)(*(_DWORD *)(v16 + 4) + 28))(v8);
      v18 = v17;
      v71 = HIDWORD(v17) == v124;
      v19 = a6;
      if ( HIDWORD(v17) == v124 )
        v71 = (_DWORD)v17 == v123;
      if ( !v71 )
        goto LABEL_11;
LABEL_67:
      if ( (v19 & 1) == 0 )
        goto LABEL_156;
      v72 = (int)a2 - a1[2];
      if ( sub_10DD70(a4, (int)v72) )
        goto LABEL_47;
      LODWORD(v18) = a1[1];
      v73 = *(_DWORD *)(v18 + 64);
      v74 = *(_DWORD *)(v18 + 60);
      v75 = v73 - v74;
      if ( (unsigned int)(v73 - v74) <= 0x47 )
      {
        obstack_newchunk((struct obstack *)(v18 + 48), 72);
        v74 = *(_DWORD *)(v18 + 60);
        v73 = *(_DWORD *)(v18 + 64);
      }
      HIDWORD(v18) = *(_DWORD *)(v18 + 56);
      v76 = v74 + 72;
      v77 = *(_DWORD *)(v18 + 72);
      *(_DWORD *)(v18 + 60) = v76;
      v78 = v76 == HIDWORD(v18);
      if ( v76 == HIDWORD(v18) )
        v75 = *(_BYTE *)(v18 + 88);
      v79 = (v76 + v77) & ~v77;
      *(_DWORD *)(v18 + 60) = v79;
      if ( v78 )
        *(_BYTE *)(v18 + 88) = v75 | 2;
      if ( v79 - *(_DWORD *)(v18 + 52) > (unsigned int)(v73 - *(_DWORD *)(v18 + 52)) )
      {
        v79 = v73;
        *(_DWORD *)(v18 + 60) = v73;
      }
      *(_DWORD *)(v18 + 56) = v79;
      *(_QWORD *)(HIDWORD(v18) + 8) = v72;
      *(_DWORD *)(HIDWORD(v18) + 40) = 0;
      *(_BYTE *)(HIDWORD(v18) + 52) = 0;
      *(_BYTE *)(HIDWORD(v18) + 65) = 0;
      v80 = *(unsigned __int8 *)v119;
      v125 = (_DWORD *)v80;
      v81 = v80 > 1;
      if ( v80 != 1 )
        v81 = v80 - 3 > 1;
      if ( v81 )
        goto LABEL_34;
      *(_BYTE *)(HIDWORD(v18) + 66) = v80;
      *(_DWORD *)(HIDWORD(v18) + 48) = v119 + 1;
      v82 = strlen(++v119);
      v83 = (unsigned __int8 *)&v119[v82 + 1];
      if ( !strncmp(v119, "armcc", 5u) )
        v119 += v82;
      if ( *v119 == 101 && v119[1] == 104 )
      {
        v119 += 2;
        v104 = ((int (__fastcall *)(int))loc_1665F4)(v11);
        v80 = *(unsigned __int8 *)(HIDWORD(v18) + 66);
        v83 += v104 / 8;
      }
      if ( v80 <= 3 )
      {
        *(_DWORD *)(HIDWORD(v18) + 56) = ((int (__fastcall *)(int))loc_166718)(v11);
        *(_BYTE *)(HIDWORD(v18) + 67) = 0;
      }
      else
      {
        v84 = *v83;
        v83 += 2;
        *(_DWORD *)(HIDWORD(v18) + 56) = v84;
        *(_BYTE *)(HIDWORD(v18) + 67) = *(v83 - 1);
      }
      *(_DWORD *)(HIDWORD(v18) + 60) = a3
                                     ? ((int (__fastcall *)(int))loc_1665F4)(v11) / 8
                                     : *(_DWORD *)(HIDWORD(v18) + 56);
      if ( v15 <= (unsigned int)v83 )
        goto LABEL_34;
      v85 = v83 + 1;
      v86 = *v83 & 0x7F;
      if ( (*v83 & 0x80) == 0 )
        goto LABEL_95;
      v87 = 0;
      v129 = v11;
      v126 = a2;
      do
      {
        v87 += 7;
        if ( (unsigned __int8 *)v15 == v85 )
        {
LABEL_92:
          a2 = v126;
          goto LABEL_34;
        }
        v88 = *v85++;
        v89 = v88 & 0x7F;
        LODWORD(v86) = v86 | (v89 << v87);
        HIDWORD(v86) |= (v89 << (v87 - 32)) | (v89 >> (32 - v87));
      }
      while ( v88 < 0 );
      v11 = v129;
      if ( v83 == v85 )
        goto LABEL_34;
LABEL_96:
      *(_QWORD *)(HIDWORD(v18) + 16) = v86;
      if ( v15 <= (unsigned int)v85 )
        goto LABEL_34;
      v90 = *v85;
      v91 = v85 + 1;
      v92 = *v85 & 0x7F;
      if ( (*v85 & 0x80) != 0 )
      {
        v93 = 7;
        v130 = v11;
        v131 = v85;
        v126 = a2;
        do
        {
          if ( (unsigned __int8 *)v15 == v91 )
            goto LABEL_92;
          v95 = *v91++;
          v90 = v95;
          v96 = v95 & 0x7F;
          v97 = v92 | (v96 << v93);
          v98 = (v96 << (v93 - 32)) | (v96 >> (32 - v93));
          v93 += 7;
          LODWORD(v92) = v97;
          v99 = v98 | HIDWORD(v92);
          HIDWORD(v92) = v99;
        }
        while ( (v95 & 0x80) != 0 );
        v94 = v97;
        v11 = v130;
        v85 = v131;
        v127 = v99;
        if ( v93 > 0x3F )
        {
          if ( v91 == v131 )
            goto LABEL_34;
          goto LABEL_107;
        }
      }
      else
      {
        v127 = 0;
        LOBYTE(v93) = 7;
        v94 = v90 & 0x7F;
      }
      if ( (v90 & 0x40) != 0 )
      {
        LODWORD(v92) = -(1 << v93) | v94;
        HIDWORD(v92) = ((unsigned __int64)-__SPAIR64__((1 << (v93 - 32)) | (1u >> (32 - v93)), 1 << v93) >> 32) | v127;
      }
      if ( v91 == v85 || !v91 )
        goto LABEL_34;
LABEL_107:
      *(_QWORD *)(HIDWORD(v18) + 24) = v92;
      if ( v125 == (_DWORD *)1 )
      {
        v58 = v91 + 1;
        v100 = *v91;
        *(_QWORD *)(HIDWORD(v18) + 32) = v100;
        goto LABEL_119;
      }
      if ( v15 > (unsigned int)v91 )
      {
        v58 = v91 + 1;
        v100 = *v91 & 0x7F;
        if ( (*v91 & 0x80) != 0 )
        {
          v101 = 0;
          v128 = v11;
          v125 = a2;
          do
          {
            v101 += 7;
            if ( (unsigned __int8 *)v15 == v58 )
            {
LABEL_113:
              a2 = v125;
              goto LABEL_34;
            }
            v102 = *v58++;
            v103 = v102 & 0x7F;
            LODWORD(v100) = v100 | (v103 << v101);
            HIDWORD(v100) |= (v103 << (v101 - 32)) | (v103 >> (32 - v101));
          }
          while ( v102 < 0 );
          v11 = v128;
          if ( v58 != v91 )
            goto LABEL_148;
        }
        else if ( v58 != v91 && v91 != (unsigned __int8 *)-1 )
        {
LABEL_148:
          *(_QWORD *)(HIDWORD(v18) + 32) = v100;
LABEL_119:
          *(_QWORD *)(HIDWORD(v18) + 32) = sub_10D970(v11, v100, a3);
          v28 = *v119 == 122;
          *(_BYTE *)(HIDWORD(v18) + 64) = v28;
          if ( !v28 )
            goto LABEL_129;
          if ( v15 > (unsigned int)v58 )
          {
            v105 = v58 + 1;
            v106 = 0;
            v107 = *v58 & 0x7F;
            if ( (*v58 & 0x80) != 0 )
            {
              v108 = 0;
              v125 = a2;
              do
              {
                v108 += 7;
                if ( (unsigned __int8 *)v15 == v105 )
                  goto LABEL_113;
                v109 = *v105++;
                v110 = v109 & 0x7F;
                v107 |= v110 << v108;
                v106 |= (v110 << (v108 - 32)) | (v110 >> (32 - v108));
              }
              while ( v109 < 0 );
              if ( v105 != v58 )
              {
LABEL_128:
                v58 = v105;
                *(_DWORD *)(HIDWORD(v18) + 40) = &v105[v107];
                ++v119;
LABEL_129:
                v111 = v119;
LABEL_130:
                v113 = *(unsigned __int8 *)v111++;
                v112 = v113;
                if ( v113 )
                {
                  while ( 1 )
                  {
                    switch ( v112 )
                    {
                      case 'L':
                        ++v58;
                        goto LABEL_130;
                      case 'R':
                        v115 = *v58++;
                        *(_BYTE *)(HIDWORD(v18) + 52) = v115;
                        goto LABEL_130;
                      case 'P':
                        HIDWORD(v116) = *v58 & 0x7F;
                        LODWORD(v116) = a1;
                        sub_10D9B8(v116, *(_DWORD *)(HIDWORD(v18) + 60), (int)(v58 + 1), v132, 0);
                        v58 += v132[0] + 1;
                        goto LABEL_130;
                    }
                    if ( v112 != 83 )
                      break;
                    *(_BYTE *)(HIDWORD(v18) + 65) = 1;
                    v114 = *(unsigned __int8 *)v111++;
                    v112 = v114;
                    if ( !v114 )
                      goto LABEL_44;
                  }
                  if ( *(_DWORD *)(HIDWORD(v18) + 40) )
                    v58 = *(unsigned __int8 **)(HIDWORD(v18) + 40);
                }
LABEL_44:
                v59 = *a4;
                v60 = (_DWORD *)a4[1];
                *(_DWORD *)(HIDWORD(v18) + 40) = v58;
                *(_DWORD *)(HIDWORD(v18) + 44) = v15;
                *(_DWORD *)HIDWORD(v18) = a1;
                if ( v59 > 0 && *(_QWORD *)(v60[v59 - 1] + 8) >= *(_QWORD *)(HIDWORD(v18) + 8) )
                {
                  v17 = sub_94700(
                          (int)"dwarf2-frame.c",
                          1667,
                          "%s: Assertion `%s' failed.",
                          "void add_cie(dwarf2_cie_table*, dwarf2_cie*)",
                          "n < 1 || cie_table->entries[n - 1]->cie_pointer < cie->cie_pointer");
LABEL_156:
                  sub_946E0("Found a CIE when not expecting it.", HIDWORD(v17));
                }
                v61 = v59 + 1;
                v62 = 4 * (v59 + 1);
                v63 = (char *)sub_93050(v60, v62);
                a4[1] = (unsigned int)v63;
                *(_DWORD *)&v63[v62 - 4] = HIDWORD(v18);
                *a4 = v61;
LABEL_47:
                if ( !v15 )
                  goto LABEL_34;
                goto LABEL_48;
              }
            }
            else if ( v58 != (unsigned __int8 *)-1 )
            {
              goto LABEL_128;
            }
          }
          goto LABEL_34;
        }
      }
      goto LABEL_34;
    }
    v119 = (const char *)(v8 + 1);
    v18 = (unsigned int)(*(int (__fastcall **)(_DWORD *))(*(_DWORD *)(v16 + 4) + 40))(v8);
    v19 = a6;
    if ( (_DWORD)v18 == v122 )
      goto LABEL_67;
LABEL_11:
    if ( (v19 & 2) == 0 )
      sub_946E0("Found an FDE when not expecting it.");
    if ( a3 )
    {
      if ( v70 == 12 )
        v20 = 8;
      else
        v20 = 4;
      v18 = (unsigned __int64)&v119[-a1[2] - v18 - (unsigned int)v20];
    }
    if ( (unsigned int)a1[3] <= v18 )
      goto LABEL_34;
    v21 = a1[1];
    v22 = *(_DWORD *)(v21 + 64);
    v23 = *(_DWORD *)(v21 + 60);
    v24 = v22 - v23;
    if ( (unsigned int)(v22 - v23) <= 0x17 )
    {
      obstack_newchunk((struct obstack *)(v21 + 48), 24);
      v23 = *(_DWORD *)(v21 + 60);
      v22 = *(_DWORD *)(v21 + 64);
    }
    v25 = *(int **)(v21 + 56);
    v26 = (int *)(v23 + 24);
    v27 = *(_DWORD *)(v21 + 72);
    *(_DWORD *)(v21 + 60) = v26;
    v28 = v26 == v25;
    if ( v26 == v25 )
      v24 = *(_BYTE *)(v21 + 88);
    HIDWORD(v29) = ((unsigned int)v26 + v27) & ~v27;
    *(_DWORD *)(v21 + 60) = HIDWORD(v29);
    if ( v28 )
      *(_BYTE *)(v21 + 88) = v24 | 2;
    LODWORD(v29) = v18;
    if ( HIDWORD(v29) - *(_DWORD *)(v21 + 52) > (unsigned int)(v22 - *(_DWORD *)(v21 + 52)) )
    {
      HIDWORD(v29) = v22;
      *(_DWORD *)(v21 + 60) = v22;
    }
    *(_DWORD *)(v21 + 56) = HIDWORD(v29);
    HIDWORD(v29) = HIDWORD(v18);
    v30 = sub_10DD70(a4, v29);
    *v25 = v30;
    if ( !v30 )
    {
      sub_10DE90(a1, a1[2] + v18, a3, a4, a5, 1);
      v30 = sub_10DD70(a4, v18);
      *v25 = v30;
      if ( !v30 )
      {
        sub_94700(
          (int)"dwarf2-frame.c",
          2032,
          "%s: Assertion `%s' failed.",
          "const gdb_byte* decode_frame_entry_1(comp_unit*, const gdb_byte*, int, dwarf2_cie_table*, dwarf2_fde_table*, eh_frame_type)",
          "fde->cie != NULL");
LABEL_95:
        if ( !v85 )
          goto LABEL_34;
        goto LABEL_96;
      }
    }
    v31 = v119;
    v32 = 0;
    v33 = *(_DWORD *)(v30 + 60);
    HIDWORD(v34) = *(unsigned __int8 *)(v30 + 52);
    LODWORD(v34) = a1;
    v120 = sub_10D9B8(v34, v33, (int)v119, v132, 0);
    v35 = ((int (__fastcall *)(int, int))loc_16A938)(v11, v120);
    v36 = *v25;
    v37 = v132[0];
    v25[1] = v35;
    LODWORD(v38) = a1;
    v39 = (int)&v31[v37];
    HIDWORD(v38) = *(_BYTE *)(v36 + 52) & 0xF;
    v40 = sub_10D9B8(v38, *(_DWORD *)(v36 + 60), v39, v132, 0);
    v25[2] = v40;
    v41 = ((int (__fastcall *)(int, int))loc_16A938)(v11, v120 + v40);
    v42 = *v25;
    v43 = v132[0];
    v44 = v41 - v25[1];
    v25[2] = v44;
    v45 = v39 + v43;
    if ( !*(_BYTE *)(v42 + 64) )
      break;
    if ( v15 <= v45 )
      goto LABEL_34;
    v46 = *(_BYTE *)(v39 + v43);
    v47 = (char *)(v45 + 1);
    v48 = 0;
    v28 = (v46 & 0x80) == 0;
    v49 = v46 & 0x7F;
    if ( !v28 )
    {
      v125 = a1;
      while ( 1 )
      {
        v32 += 7;
        if ( (char *)v15 == v47 )
          break;
        v50 = *v47++;
        v51 = v50 & 0x7F;
        v49 |= v51 << v32;
        v48 |= (v51 << (v32 - 32)) | (v51 >> (32 - v32));
        if ( (v50 & 0x80) == 0 )
        {
          a1 = v125;
          goto LABEL_57;
        }
      }
      a1 = v125;
      goto LABEL_34;
    }
LABEL_57:
    v64 = &v47[-v45];
    if ( v64 )
    {
      v65 = &v64[v45];
      if ( v65 )
      {
        v45 = (unsigned int)&v65[v49];
        if ( v15 >= (unsigned int)&v65[v49] )
          break;
      }
    }
LABEL_34:
    v14 = a1[2];
LABEL_35:
    v52 = (_BYTE)a2 - v14;
    if ( v117 )
    {
      if ( v117 == 2 )
        goto LABEL_38;
LABEL_37:
      v53 = v52 & 7;
      if ( !v53 )
      {
LABEL_38:
        v15 = v14 + a1[3];
        if ( dword_47AC88 <= 0 )
          return v15;
        v54 = a1[4];
        v55 = "Corrupt data in %s:%s";
        LOWORD(v56) = (unsigned __int16)&off_46D334;
        goto LABEL_40;
      }
      v117 = 2;
      a2 = (_DWORD *)((char *)a2 + 8 - v53);
    }
    else
    {
      if ( (((_BYTE)a2 - (_BYTE)v14) & 3) == 0 )
        goto LABEL_37;
      v117 = 1;
      a2 = (_DWORD *)((char *)a2 + 4 - (v52 & 3));
    }
  }
  v25[3] = v45;
  v25[4] = v15;
  *((_BYTE *)v25 + 20) = a3;
  if ( !v44 )
    goto LABEL_47;
  v66 = (void *)a5[1];
  v67 = *a5 + 1;
  *a5 = v67;
  v68 = sub_93050(v66, 4 * v67);
  v69 = *a5;
  a5[1] = (int)v68;
  v68[v69 - 1] = v25;
  if ( !v15 )
    goto LABEL_34;
LABEL_48:
  if ( v117 == 1 )
  {
    if ( dword_47AC88 > 0 )
    {
      v55 = "Corrupt data in %s:%s; align 4 workaround apparently succeeded";
      v54 = a1[4];
      LOWORD(v56) = -11468;
      goto LABEL_40;
    }
  }
  else if ( v117 == 2 && dword_47AC88 > 0 )
  {
    v55 = "Corrupt data in %s:%s; align 8 workaround apparently succeeded";
    v54 = a1[4];
    LOWORD(v56) = -11468;
LABEL_40:
    HIWORD(v56) = (unsigned int)&off_46D334 >> 16;
    sub_F43B4(v56, v55, **(_DWORD **)(v54 + 148), *(_DWORD *)v54);
  }
  return v15;
}
