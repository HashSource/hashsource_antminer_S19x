char *__fastcall sub_12735C(const char ***a1, int a2, unsigned int a3, int a4, __int64 a5, char *s)
{
  int v7; // r5
  __int64 v10; // r6
  int v11; // r0
  const char **v12; // r10
  int v13; // r6
  int *v14; // r7
  __int64 v15; // r0
  _BYTE *v16; // r0
  char v17; // r3
  bool v18; // r2
  int v19; // r6
  char *v20; // r6
  unsigned int v21; // r3
  unsigned __int64 v23; // r0
  int v24; // r11
  __int64 v25; // r0
  int v26; // r0
  int v27; // r6
  int v28; // r7
  int (*v29)(void); // r3
  __int64 v31; // r0
  int v32; // r6
  char *v33; // r3
  int v34; // r0
  size_t v35; // r0
  char v36; // r2
  __int64 v37; // r0
  __int64 v38; // r0
  int v39; // r6
  char *v40; // r9
  __int64 v41; // r2
  int v42; // r11
  int v43; // lr
  char v44; // t1
  unsigned int v45; // r6
  char *v46; // r0
  _DWORD *v47; // r0
  int *v48; // r7
  int v49; // r0
  _DWORD *v50; // r0
  int v51; // r6
  unsigned int v52; // r7
  __int64 v53; // r0
  _BYTE *v54; // r0
  char v55; // r3
  int v56; // r6
  unsigned int v57; // r8
  __int64 v58; // r2
  int v59; // r10
  int v60; // r12
  char v61; // t1
  unsigned int v62; // r10
  char *v63; // lr
  int v64; // r6
  int v65; // r2
  int v66; // r12
  int v67; // r0
  char v68; // r1
  char v69; // t1
  unsigned int v70; // r8
  int v71; // r3
  __int64 v72; // r0
  int v73; // r2
  char v74; // t1
  unsigned int v75; // r8
  unsigned int v76; // r10
  char *v77; // r12
  int v78; // r11
  int v79; // r2
  char v80; // t1
  unsigned int v81; // r4
  int v82; // r7
  int v83; // r0
  const char **v84; // r6
  int v85; // r2
  const char **v86; // r8
  const char *v87; // r12
  unsigned int v88; // r3
  bool v89; // cf
  int v90; // r2
  const char *v91; // r0
  unsigned __int64 v92; // r0
  const char *v93; // r3
  int v94; // r6
  char v95; // r2
  _BYTE *v96; // r0
  char v97; // r3
  int v98; // r6
  int *v99; // r7
  int v100; // r0
  int v101; // r2
  int v102; // r3
  int v103; // r9
  int *v104; // r0
  char *v105; // lr
  int v106; // r8
  int v107; // r7
  int v108; // r12
  char v109; // t1
  unsigned int v110; // r4
  int v111; // r0
  int v112; // r0
  int v113; // r0
  char *v114; // r10
  int v115; // r12
  char v116; // lr
  char v117; // t1
  unsigned int v118; // r4
  int v119; // r0
  const char *v120; // r1
  int v121; // r0
  const char *v122; // r1
  int v123; // [sp+10h] [bp-1Ch]
  unsigned int v124; // [sp+10h] [bp-1Ch]
  int v125; // [sp+10h] [bp-1Ch]
  const char *v126; // [sp+18h] [bp-14h]
  int v127; // [sp+1Ch] [bp-10h]
  int v128; // [sp+1Ch] [bp-10h]
  int v129; // [sp+1Ch] [bp-10h]
  int v130; // [sp+1Ch] [bp-10h]
  int v131[2]; // [sp+24h] [bp-8h] BYREF

  v7 = (int)a1[1];
  v10 = a5;
  v11 = sub_1B7250(*(_DWORD *)v7);
  v12 = *a1;
  *(_WORD *)(a2 + 2) = *(_WORD *)(a2 + 2) & 0x8000 | a3 & 0x7FFF;
  if ( a3 == 17 )
  {
    v101 = *(_DWORD *)(v7 + 32);
    v20 = s + 1;
    v102 = (unsigned __int8)*s;
    *(_DWORD *)(a2 + 12) = 0;
    *(_DWORD *)(a2 + 8) = v102 + v101;
    goto LABEL_86;
  }
  if ( a3 > 0x11 )
  {
    if ( a3 == 25 )
    {
      v20 = s;
      *(_QWORD *)(a2 + 8) = 1;
      return v20;
    }
    if ( a3 > 0x19 )
    {
      if ( a3 == 33 )
      {
        *(_QWORD *)(a2 + 8) = a5;
        return s;
      }
      if ( a3 > 0x21 )
      {
        if ( a3 == 7938 )
        {
          if ( a1[2] )
          {
            LOBYTE(v76) = *s & 0x7F;
            if ( (*s & 0x80) == 0 )
              LODWORD(v10) = 1;
            v124 = (unsigned __int8)v76;
            if ( *s < 0 )
            {
              v76 = (unsigned __int8)v76;
              v77 = s + 1;
              v78 = 0;
              v79 = 0;
              v127 = a2;
              do
              {
                v80 = *v77++;
                v79 += 7;
                v81 = v80 & 0x7F;
                LODWORD(v10) = v77 - s;
                v76 |= v81 << v79;
                v78 |= (v81 << (v79 - 32)) | (v81 >> (32 - v79));
              }
              while ( v80 < 0 );
              a2 = v127;
              v124 = v76;
            }
            v131[0] = v10;
            v82 = *(_DWORD *)(dword_4872D8 + 344);
            v83 = sub_1B87A8(v82);
            v84 = a1[2];
            v126 = (const char *)v83;
            v85 = *(_DWORD *)(v82 + 36);
            v86 = a1[1];
            if ( !*((_BYTE *)v84 + 148) )
            {
              v130 = *(_DWORD *)(v82 + 36);
              ((void (__fastcall *)(int, const char **))loc_11FFD0)(v82, v84 + 33);
              v85 = v130;
            }
            if ( !*((_BYTE *)v84 + 168) )
            {
              v129 = v85;
              ((void (__fastcall *)(int, const char **))loc_11FFD0)(v82, v84 + 38);
              v85 = v129;
            }
            if ( !v84[34] )
              sub_946E0(
                "%s used without .debug_str.dwo section in CU at offset 0x%x [in module %s]",
                "DW_FORM_GNU_str_index",
                v86[8],
                v126);
            v87 = v84[39];
            if ( !v87 )
              sub_946E0(
                "%s used without .debug_str_offsets.dwo section in CU at offset 0x%x [in module %s]",
                "DW_FORM_GNU_str_index",
                v86[8],
                v126);
            v88 = (unsigned int)v86[5];
            v89 = 1;
            if ( is_mul_ok(v124, v88) )
              v89 = v88 * v124 >= (unsigned int)v84[40];
            if ( v89 )
              sub_946E0(
                "%s pointing outside of .debug_str_offsets.dwo section in CU at offset 0x%x [in module %s]",
                "DW_FORM_GNU_str_index",
                v86[8],
                v126);
            v90 = *(_DWORD *)(v85 + 4);
            v91 = &v87[v88 * v124];
            if ( v88 == 4 )
              v92 = (unsigned int)(*(int (__fastcall **)(const char *))(v90 + 40))(v91);
            else
              LODWORD(v92) = (*(int (__fastcall **)(const char *))(v90 + 28))(v91);
            if ( (unsigned int)v84[35] <= v92 )
              sub_946E0(
                "Offset from %s pointing outside of .debug_str.dwo section in CU at offset 0x%x [in module %s]",
                "DW_FORM_GNU_str_index",
                v86[8],
                v126);
            v93 = v84[34];
            v94 = v131[0];
            v95 = *(_BYTE *)(a2 + 3) & 0x7F;
            *(_DWORD *)(a2 + 8) = &v93[v92];
            *(_BYTE *)(a2 + 3) = v95;
            v20 = &s[v94];
            goto LABEL_48;
          }
          v111 = 7938;
LABEL_152:
          v121 = sub_321640(v111);
          v122 = "DW_FORM_<unknown>";
          if ( v121 )
            v122 = (const char *)v121;
          sub_946E0("Dwarf Error: %s found in non-DWO CU [in module %s]", v122, *v12);
        }
        if ( a3 > 0x1F02 )
        {
          if ( a3 != 7968 )
          {
            if ( a3 == 7969 )
            {
LABEL_11:
              v13 = (int)(v12 + 1);
LABEL_12:
              v14 = sub_126E78();
              LODWORD(v15) = sub_11E4C0(*v12, v13, (int)s, *(_DWORD *)(v7 + 20));
              v131[0] = *(_DWORD *)(v7 + 20);
              v16 = sub_121E74((int)v14, v15);
              v17 = *(_BYTE *)(a2 + 3);
              v18 = 0;
              v19 = v131[0];
              *(_DWORD *)(a2 + 8) = v16;
              *(_BYTE *)(a2 + 3) = v17 & 0x7F;
              v20 = &s[v19];
              goto LABEL_13;
            }
LABEL_145:
            v119 = sub_321640(a3);
            v120 = "DW_FORM_<unknown>";
            if ( v119 )
              v120 = (const char *)v119;
            sub_946E0("Dwarf Error: Cannot handle %s in DWARF reader [in module %s]", v120, *v12);
          }
          goto LABEL_52;
        }
        if ( a3 != 7937 )
          goto LABEL_145;
        if ( !a1[2] )
        {
          v111 = 7937;
          goto LABEL_152;
        }
        v112 = sub_122EAC((unsigned __int8 *)(v7 + 14), (__int64 *)(v7 + 176), s, v131);
        v39 = v131[0];
        *(_DWORD *)(a2 + 8) = v112;
LABEL_64:
        v20 = &s[v39];
        goto LABEL_48;
      }
      if ( a3 != 31 )
      {
        if ( a3 > 0x1F )
        {
LABEL_47:
          v20 = s + 8;
          *(_QWORD *)(a2 + 8) = ((__int64 (*)(void))*((_DWORD *)v12[1] + 7))();
          goto LABEL_48;
        }
        if ( a3 != 30 )
          goto LABEL_145;
        v20 = s + 16;
        v47 = (_DWORD *)sub_11C998(v7);
        *v47 = 16;
        v47[1] = s;
        *(_DWORD *)(a2 + 8) = v47;
LABEL_48:
        if ( (*(_BYTE *)(*(_DWORD *)(v7 + 136) + 10) & 8) == 0 )
          return v20;
        v18 = a3 == 6;
LABEL_14:
        v21 = *(_WORD *)(a2 + 2) & 0x7FFF;
        if ( v21 < 0x10 || v21 > 0x15 && v21 != 7968 )
          goto LABEL_18;
        goto LABEL_17;
      }
      if ( (*(_BYTE *)(*(_DWORD *)(v7 + 136) + 10) & 8) != 0 )
        goto LABEL_11;
      v96 = sub_12183C(v12, (int)s, v7 + 8, v131);
      v97 = *(_BYTE *)(a2 + 3);
      v18 = 0;
      v98 = v131[0];
      *(_DWORD *)(a2 + 8) = v96;
      *(_BYTE *)(a2 + 3) = v97 & 0x7F;
      v20 = &s[v98];
LABEL_13:
      if ( (*(_BYTE *)(*(_DWORD *)(v7 + 136) + 10) & 8) == 0 )
        goto LABEL_18;
      goto LABEL_14;
    }
    if ( a3 != 21 )
    {
      if ( a3 <= 0x15 )
      {
        if ( a3 == 19 )
        {
          v28 = *(_DWORD *)(v7 + 32);
          v29 = (int (*)(void))*((_DWORD *)v12[1] + 10);
          v20 = s + 4;
        }
        else
        {
          if ( a3 > 0x13 )
          {
            v52 = *(_DWORD *)(v7 + 32);
            v20 = s + 8;
            *(_QWORD *)(a2 + 8) = v52 + ((__int64 (*)(void))*((_DWORD *)v12[1] + 7))();
            goto LABEL_48;
          }
          v28 = *(_DWORD *)(v7 + 32);
          v29 = (int (*)(void))*((_DWORD *)v12[1] + 13);
          v20 = s + 2;
        }
        *(_DWORD *)(a2 + 8) = v28 + v29();
        *(_DWORD *)(a2 + 12) = 0;
        goto LABEL_48;
      }
      if ( a3 == 23 )
      {
LABEL_52:
        LODWORD(v31) = sub_11E4C0(*v12, (int)(v12 + 1), (int)s, *(_DWORD *)(v7 + 20));
        v32 = *(_DWORD *)(v7 + 20);
        *(_QWORD *)(a2 + 8) = v31;
        v131[0] = v32;
        v20 = &s[v32];
        goto LABEL_48;
      }
      if ( a3 <= 0x17 )
      {
        v40 = s + 1;
        v41 = *s & 0x7F;
        if ( *s < 0 )
        {
          v43 = 0;
          do
          {
            v44 = *v40++;
            v43 += 7;
            v45 = v44 & 0x7F;
            LODWORD(v41) = v41 | (v45 << v43);
            HIDWORD(v41) |= (v45 << (v43 - 32)) | (v45 >> (32 - v43));
          }
          while ( v44 < 0 );
          v42 = v40 - s;
          LODWORD(v10) = a5;
        }
        else
        {
          v42 = 1;
        }
        v131[0] = v42;
        v123 = v41;
        if ( (_DWORD)v41 == 33 )
        {
          v113 = 0;
          v114 = v40;
          v10 = 0;
          v115 = 0;
          v128 = a2;
          do
          {
            v117 = *v114++;
            v116 = v117;
            ++v113;
            v118 = v117 & 0x7F;
            LODWORD(v10) = v10 | (v118 << v115);
            HIDWORD(v41) = (v118 << (v115 - 32)) | (v118 >> (32 - v115));
            v115 += 7;
            HIDWORD(v10) |= HIDWORD(v41);
          }
          while ( v117 < 0 );
          a2 = v128;
          if ( v115 <= 63 && (v116 & 0x40) != 0 )
          {
            v41 = -__SPAIR64__((1 << (v115 - 32)) | (1u >> (32 - v115)), 1 << v115);
            v10 |= -__SPAIR64__((1 << (v115 - 32)) | (1u >> (32 - v115)), 1 << v115);
          }
          v40 += v113;
          v131[0] = v113;
        }
        v20 = (char *)sub_12735C((int)a1, a2, v123, SHIDWORD(v41), v10, SHIDWORD(v10), v40);
        v18 = v123 == 6;
        goto LABEL_13;
      }
LABEL_127:
      v103 = 0;
      v104 = (int *)sub_11C998(v7);
      v105 = s + 1;
      v106 = *s & 0x7F;
      if ( *s < 0 )
      {
        v108 = 0;
        v125 = a2;
        do
        {
          v109 = *v105++;
          v108 += 7;
          v110 = v109 & 0x7F;
          v107 = v105 - s;
          v106 |= v110 << v108;
          v103 |= (v110 << (v108 - 32)) | (v110 >> (32 - v108));
        }
        while ( v109 < 0 );
        a2 = v125;
      }
      else
      {
        v107 = 1;
      }
      v131[0] = v107;
      v20 = &v105[v106];
      *v104 = v106;
      v18 = 0;
      v104[1] = (int)v105;
      *(_DWORD *)(a2 + 8) = v104;
      goto LABEL_13;
    }
    v57 = *(_DWORD *)(v7 + 32);
    v20 = s + 1;
    v58 = *s & 0x7F;
    if ( *s < 0 )
    {
      v60 = 0;
      do
      {
        v61 = *v20++;
        v60 += 7;
        v62 = v61 & 0x7F;
        LODWORD(v58) = v58 | (v62 << v60);
        HIDWORD(v58) |= (v62 << (v60 - 32)) | (v62 >> (32 - v60));
      }
      while ( v61 < 0 );
      v57 = *(_DWORD *)(v7 + 32);
      v59 = v20 - s;
    }
    else
    {
      v59 = 1;
    }
    v131[0] = v59;
    *(_QWORD *)(a2 + 8) = v58 + v57;
LABEL_86:
    if ( (*(_BYTE *)(*(_DWORD *)(v7 + 136) + 10) & 8) == 0 )
      return v20;
    v18 = 0;
LABEL_17:
    *(_WORD *)(a2 + 2) = *(_WORD *)(a2 + 2) & 0x8000 | 0x1F20;
LABEL_18:
    if ( *(_WORD *)a2 == 11 && v18 )
    {
      v23 = *(_QWORD *)(a2 + 8);
      if ( v23 > 0xFFFFFFFE )
      {
        if ( dword_47AC88 > 0 )
        {
          v46 = sub_98B08(v23, SHIDWORD(v23));
          sub_F43B4(&off_46D334, "Suspicious DW_AT_byte_size value treated as zero instead of %s", v46);
        }
        *(_QWORD *)(a2 + 8) = 0;
      }
    }
    return v20;
  }
  if ( a3 == 9 )
    goto LABEL_127;
  if ( a3 <= 9 )
  {
    if ( a3 == 5 )
    {
      v20 = s + 2;
      *(_DWORD *)(a2 + 8) = (*((int (**)(void))v12[1] + 13))();
      *(_DWORD *)(a2 + 12) = 0;
      goto LABEL_48;
    }
    if ( a3 <= 5 )
    {
      if ( a3 == 3 )
      {
        v99 = (int *)sub_11C998(v7);
        v100 = (*((int (__fastcall **)(char *))v12[1] + 13))(s);
        *v99 = v100;
        v99[1] = (int)(s + 2);
        v20 = &s[v100 + 2];
        *(_DWORD *)(a2 + 8) = v99;
      }
      else if ( a3 > 3 )
      {
        v48 = (int *)sub_11C998(v7);
        v49 = (*((int (__fastcall **)(char *))v12[1] + 10))(s);
        *v48 = v49;
        v48[1] = (int)(s + 4);
        v20 = &s[v49 + 4];
        *(_DWORD *)(a2 + 8) = v48;
      }
      else
      {
        if ( a3 != 1 )
          goto LABEL_145;
        v24 = v11;
        HIDWORD(v25) = v12 + 1;
        LODWORD(v25) = *v12;
        *(_DWORD *)(a2 + 8) = sub_11E3C0(v25, (int)s, v7, v131);
        v26 = ((int (__fastcall *)(int))loc_16A938)(v24);
        v27 = v131[0];
        *(_DWORD *)(a2 + 8) = v26;
        v20 = &s[v27];
      }
      goto LABEL_48;
    }
    if ( a3 == 7 )
      goto LABEL_47;
    if ( a3 > 7 )
    {
      v33 = (char *)(unsigned __int8)*s;
      if ( *s )
      {
        v35 = strlen(s);
        v33 = s;
        v34 = v35 + 1;
        v131[0] = v34;
      }
      else
      {
        v34 = 1;
        v131[0] = 1;
      }
      v36 = *(_BYTE *)(a2 + 3);
      *(_DWORD *)(a2 + 8) = v33;
      v20 = &s[v34];
      *(_BYTE *)(a2 + 3) = v36 & 0x7F;
      goto LABEL_48;
    }
    v20 = s + 4;
    *(_DWORD *)(a2 + 8) = (*((int (**)(void))v12[1] + 10))();
    *(_DWORD *)(a2 + 12) = 0;
    v18 = 1;
    goto LABEL_13;
  }
  if ( a3 == 13 )
  {
    v63 = s;
    v64 = 0;
    v65 = 0;
    v66 = 0;
    v67 = 0;
    do
    {
      v69 = *v63++;
      v68 = v69;
      ++v64;
      v70 = v69 & 0x7F;
      v66 |= v70 << v65;
      v71 = (v70 << (v65 - 32)) | (v70 >> (32 - v65));
      v65 += 7;
      v67 |= v71;
    }
    while ( v69 < 0 );
    if ( v65 <= 63 && (v68 & 0x40) != 0 )
    {
      v66 |= -(1 << v65);
      v67 |= (unsigned __int64)-__SPAIR64__((1 << (v65 - 32)) | (1u >> (32 - v65)), 1 << v65) >> 32;
    }
    *(_DWORD *)(a2 + 8) = v66;
    *(_DWORD *)(a2 + 12) = v67;
    return &s[v64];
  }
  else
  {
    if ( a3 <= 0xD )
    {
      if ( a3 > 0xA )
      {
        v20 = s + 1;
        *(_QWORD *)(a2 + 8) = (unsigned __int8)*s;
        return v20;
      }
      v50 = (_DWORD *)sub_11C998(v7);
      v51 = (unsigned __int8)*s;
      *v50 = v51;
      v20 = &s[v51 + 1];
      v50[1] = s + 1;
      *(_DWORD *)(a2 + 8) = v50;
      goto LABEL_48;
    }
    if ( a3 != 15 )
    {
      if ( a3 > 0xF )
      {
        HIDWORD(v37) = v12 + 1;
        LODWORD(v37) = *v12;
        if ( *(_WORD *)(v7 + 12) == 2 )
        {
          *(_DWORD *)(a2 + 8) = sub_11E3C0(v37, (int)s, v7, v131);
          *(_DWORD *)(a2 + 12) = 0;
          v39 = v131[0];
        }
        else
        {
          LODWORD(v38) = sub_11E4C0((const char *)v37, SHIDWORD(v37), (int)s, *(_DWORD *)(v7 + 20));
          v39 = *(_DWORD *)(v7 + 20);
          *(_QWORD *)(a2 + 8) = v38;
          v131[0] = v39;
        }
        goto LABEL_64;
      }
      v13 = (int)(v12 + 1);
      if ( (*(_BYTE *)(*(_DWORD *)(v7 + 136) + 10) & 8) != 0 )
        goto LABEL_12;
      LODWORD(v53) = sub_11E4C0(*v12, (int)(v12 + 1), (int)s, *(_DWORD *)(v7 + 20));
      v131[0] = *(_DWORD *)(v7 + 20);
      v54 = sub_12179C(v12, v53, dword_4872D8 + 140, "DW_FORM_strp", ".debug_str");
      v55 = *(_BYTE *)(a2 + 3);
      v56 = v131[0];
      *(_DWORD *)(a2 + 8) = v54;
      *(_BYTE *)(a2 + 3) = v55 & 0x7F;
      v20 = &s[v56];
      goto LABEL_48;
    }
    v20 = s + 1;
    v72 = *s & 0x7F;
    if ( *s < 0 )
    {
      v73 = 0;
      do
      {
        v74 = *v20++;
        v73 += 7;
        v75 = v74 & 0x7F;
        LODWORD(v72) = v72 | (v75 << v73);
        HIDWORD(v72) |= (v75 << (v73 - 32)) | (v75 >> (32 - v73));
      }
      while ( v74 < 0 );
    }
    *(_QWORD *)(a2 + 8) = v72;
  }
  return v20;
}
