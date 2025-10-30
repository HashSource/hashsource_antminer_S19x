int __fastcall sub_D6040(int a1, int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  int *v5; // r5
  unsigned int v6; // r6
  unsigned int *v7; // r7
  int *v8; // r8
  int v10; // r10
  const char *v11; // r11
  __int64 v12; // r2
  int v13; // r1
  _DWORD *v14; // r3
  unsigned int v15; // r2
  bool v16; // cc
  unsigned int v17; // r2
  int v19; // r3
  int (__fastcall *v20)(int); // r3
  int v21; // r0
  bool v22; // r0
  int v23; // r3
  int (__fastcall *v24)(int); // r3
  int v25; // r0
  int v26; // r5
  const char *v27; // r0
  int v28; // r0
  int v29; // r2
  int v30; // r3
  int v31; // r2
  _DWORD *v32; // r0
  int v33; // r0
  void *v34; // r5
  int v35; // r0
  int v36; // r3
  char *v37; // r2
  int (__fastcall *v38)(int *); // r3
  unsigned int v39; // r9
  unsigned int v40; // t1
  unsigned int v41; // r3
  bool v42; // cc
  int v43; // r9
  _DWORD *v44; // r2
  unsigned int v45; // r3
  unsigned int v46; // r3
  _DWORD *v47; // t1
  unsigned int v48; // r3
  bool v49; // cc
  void *v50; // r9
  int v51; // r5
  void *v52; // r0
  int v53; // r12
  _BYTE *v54; // r3
  int v55; // r1
  int v56; // r2
  int v57; // r1
  char v58; // t1
  void *v59; // r3
  void *v60; // r5
  void *v61; // r3
  int v62; // r0
  int v63; // r0
  void *v64; // r5
  int v65; // r0
  int v66; // r1
  int v67; // r0
  int v68; // r4
  const char *v69; // r0
  _DWORD *v70; // r6
  _DWORD *v71; // r7
  _DWORD *v72; // t1
  _BYTE *v73; // r3
  char *v74; // r2
  char v75; // t1
  int v76; // r3
  unsigned int v77; // t1
  int v78; // r1
  unsigned int v79; // r2
  bool v80; // cc
  void *v81; // r11
  void *v82; // r11
  int v83; // r2
  unsigned int v84; // r12
  _DWORD *v85; // r0
  unsigned int v86; // r3
  void **v87; // lr
  void **v88; // r2
  _DWORD *v89; // r1
  int v90; // t1
  unsigned int v91; // r3
  bool v92; // cc
  _BOOL4 v93; // r2
  unsigned int v94; // r3
  unsigned int v95; // r2
  unsigned int v96; // r3
  bool v97; // cc
  void **v98; // r2
  void **v99; // t1
  unsigned int v100; // r3
  bool v101; // cc
  void **v102; // t1
  _DWORD *v103; // r3
  unsigned int v104; // r2
  bool v105; // cc
  int v106; // r3
  int v107; // r9
  int v108; // r0
  const char *v109; // r0
  __int64 v110; // r0
  const char *v111; // r3
  bool v112; // zf
  void *v113; // r0
  int *v114; // r0
  char *v115; // r1
  void *v116; // r3
  void *v117; // r6
  int v118; // r0
  bool v119; // zf
  int v120; // r0
  __int64 v121; // r0
  int v124; // [sp+24h] [bp-68h]
  int v126; // [sp+2Ch] [bp-60h]
  unsigned int v127; // [sp+30h] [bp-5Ch]
  char **v128; // [sp+34h] [bp-58h]
  unsigned int v129; // [sp+38h] [bp-54h]
  unsigned int *v130; // [sp+3Ch] [bp-50h]
  int v131; // [sp+40h] [bp-4Ch]
  int v132; // [sp+40h] [bp-4Ch]
  const char *v133; // [sp+44h] [bp-48h]
  int v134; // [sp+4Ch] [bp-40h] BYREF
  const char *v135; // [sp+50h] [bp-3Ch] BYREF
  const char *v136; // [sp+54h] [bp-38h] BYREF
  void *ptr; // [sp+58h] [bp-34h] BYREF
  unsigned int v138; // [sp+5Ch] [bp-30h] BYREF
  void *v139; // [sp+60h] [bp-2Ch] BYREF
  void *v140; // [sp+64h] [bp-28h] BYREF
  char *v141; // [sp+68h] [bp-24h]
  char *i; // [sp+6Ch] [bp-20h]
  void *v143[2]; // [sp+70h] [bp-1Ch] BYREF
  char v144; // [sp+78h] [bp-14h] BYREF
  void *v145; // [sp+7Ch] [bp-10h]

  v10 = 0;
  v124 = 0;
  v11 = 0;
  if ( !sub_CA3B4(a1) || *(_BYTE *)(a1 + 39) && !*(_BYTE *)(a1 + 36) )
    return 0;
  v12 = *(_QWORD *)(a1 + 48);
  v13 = *(_DWORD *)(a1 + 56);
  *(_DWORD *)(a1 + 96) = HIDWORD(v12);
  v14 = *(_DWORD **)(a1 + 16);
  LODWORD(v12) = *(_DWORD *)(v12 + 20);
  *(_DWORD *)(a1 + 100) = v13;
  *(_DWORD *)(a1 + 88) = v12;
  v15 = v14[3];
  v16 = v15 > 0x1E;
  if ( v15 != 30 )
    v16 = v15 - 1 > 1;
  if ( v16 )
    goto LABEL_7;
  v128 = &off_46C048;
  v37 = off_46C048;
  v126 = *(unsigned __int8 *)(a1 + 36);
  *(_DWORD *)(a1 + 132) = *(_DWORD *)(a1 + 128);
  if ( v37 == "auto" )
  {
    v8 = &dword_4899A0;
    if ( !off_489B60(&dword_4899A0) )
      goto LABEL_45;
  }
  else
  {
    v8 = &dword_4899A0;
    if ( v37 == "host" )
      goto LABEL_46;
  }
  if ( off_489B60(&dword_4899A0) )
  {
    v39 = *(_DWORD *)(a1 + 52);
    v127 = sub_CC504(v39);
    if ( v127 )
    {
      v5 = &dword_478348;
      if ( v127 < dword_478368 + 4 * dword_47836C )
      {
        v6 = *(_DWORD *)v127;
        if ( v39 == *(_DWORD *)(*(_DWORD *)v127 + 52) )
        {
          v129 = 0;
          v130 = (unsigned int *)(v127 + 4);
          v7 = (unsigned int *)(v127 + 4);
          goto LABEL_58;
        }
      }
LABEL_114:
      v46 = v5[8] + 4 * v5[9];
      goto LABEL_115;
    }
  }
LABEL_45:
  while ( 2 )
  {
    v126 = *(unsigned __int8 *)(a1 + 36);
LABEL_46:
    v38 = (int (__fastcall *)(int *))v8[113];
    *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 140);
    if ( !v38(&dword_4899A0) || v128[19] != "agent" )
      goto LABEL_48;
    v6 = *(_DWORD *)(a1 + 52);
    v8 = (int *)v6;
    v84 = sub_CC504(v6);
    v129 = v84;
    if ( !v84 )
      goto LABEL_182;
    v5 = &dword_478348;
    v85 = (_DWORD *)dword_47836C;
    v86 = dword_478368 + 4 * dword_47836C;
    if ( v84 >= v86 )
      goto LABEL_182;
    v87 = *(void ***)v84;
    v88 = *(void ***)v84;
    if ( v6 == *(_DWORD *)(*(_DWORD *)v84 + 52) )
    {
      v89 = (_DWORD *)v84;
      v85 = (_DWORD *)(((~v84 + v86) & 0xFFFFFFFC) + v84);
      while ( 1 )
      {
        v91 = *((_DWORD *)v88[4] + 3);
        v92 = v91 > 0x1E;
        if ( v91 != 30 )
          v92 = v91 - 1 > 1;
        if ( !v92 )
        {
          v7 = (unsigned int *)*((_DWORD *)v88[12] + 1);
          v93 = v7 == *(unsigned int **)(*(_DWORD *)(a1 + 48) + 4);
          if ( v91 == 30 )
            v93 = 0;
          if ( v93 )
            break;
        }
        if ( v85 != v89 )
        {
          v90 = v89[1];
          ++v89;
          v88 = (void **)v90;
          if ( v6 == *(_DWORD *)(v90 + 52) )
            continue;
        }
        goto LABEL_146;
      }
LABEL_48:
      v14 = *(_DWORD **)(a1 + 16);
      goto LABEL_49;
    }
LABEL_146:
    v7 = *(unsigned int **)v84;
    if ( (void *)v6 != v87[13] )
      goto LABEL_170;
    v130 = (unsigned int *)(v84 + 4);
    v127 = v84 + 4;
    while ( 1 )
    {
      v95 = v7[4];
      v96 = *(_DWORD *)(v95 + 12);
      v97 = v96 > 0x1E;
      if ( v96 != 30 )
        v97 = v96 - 1 > 1;
      if ( !v97 && *(_DWORD *)(v7[12] + 4) == *(_DWORD *)(*(_DWORD *)(a1 + 48) + 4) )
        break;
LABEL_148:
      v94 = dword_478368 + 4 * dword_47836C;
      if ( v94 > v127 )
      {
        v6 = *(_DWORD *)(a1 + 52);
        v7 = *(unsigned int **)v127;
        v8 = *(int **)(*(_DWORD *)v127 + 52);
        v127 += 4;
        if ( v8 == (int *)v6 )
          continue;
      }
      goto LABEL_168;
    }
    if ( !v126 )
      goto LABEL_155;
    v6 = *(_DWORD *)(v95 + 104);
    v107 = sub_B894C((int)v85);
    if ( v6 )
    {
      v135 = (const char *)v6;
      if ( *(_BYTE *)v6 == 44 )
        v135 = (const char *)++v6;
      v108 = sub_9360C(v6);
      v132 = v108 + 1;
      v135 = (const char *)(v108 + 1);
      if ( *(_BYTE *)v108 != 34 )
        sub_946E0("No format string following the location");
      sub_96C4C(v143, &v135);
      v109 = v135 + 1;
      v133 = v135++;
      if ( *v133 != 34 )
        sub_946E0("Bad format string, non-terminated '\"'.");
      LODWORD(v110) = sub_9360C(v109);
      v135 = (const char *)v110;
      if ( *(_BYTE *)v110 == 44 )
      {
        LODWORD(v110) = v110 + 1;
        v135 = (const char *)v110;
      }
      else if ( *(_BYTE *)v110 )
      {
        goto LABEL_232;
      }
      v135 = (const char *)sub_9360C(v110);
      v140 = 0;
      v111 = v135;
      v141 = 0;
      for ( i = 0; *v135; v111 = v135 )
      {
        v136 = v111;
        v114 = sub_C2574((unsigned int)v8);
        sub_1C427C(&ptr, &v136, v8, v114, 1);
        v115 = v141;
        v113 = 0;
        v116 = ptr;
        ptr = 0;
        v139 = v116;
        if ( v141 == i )
        {
          sub_C0788((char **)&v140, v141, &v139);
          v113 = ptr;
        }
        else
        {
          v112 = v141 == 0;
          if ( v141 )
            *(_DWORD *)v141 = v116;
          else
            v113 = 0;
          if ( !v112 )
            v113 = ptr;
          v141 = v115 + 4;
        }
        v135 = v136;
        if ( *v136 == 44 )
          v135 = v136 + 1;
        if ( v113 )
          free(v113);
      }
      v117 = sub_92E28();
      sub_C032C((int *)&v138, (int)v8, v107, 0, 0, 0, v132, (int)&v133[-v132], (v141 - (_BYTE *)v140) >> 2, (int)v140);
      v118 = (int)v117;
      v6 = v138;
      sub_92E40(v118);
      if ( v140 )
        sub_339E64(v140);
      if ( v145 )
        free(v145);
      v85 = v143[0];
      if ( v143[0] )
        sub_339E64(v143[0]);
      v8 = (int *)v7[8];
      v7[8] = v6;
      if ( !v8 )
        goto LABEL_156;
      goto LABEL_225;
    }
    v8 = (int *)v7[8];
    v7[8] = 0;
    if ( v8 )
    {
LABEL_225:
      sub_C0960((int)v8);
      sub_33AC04(v8);
LABEL_155:
      v6 = v7[8];
LABEL_156:
      if ( !v6 )
        goto LABEL_157;
      goto LABEL_148;
    }
LABEL_157:
    if ( v129 >= dword_478368 + 4 * dword_47836C )
      goto LABEL_182;
    v98 = *(void ***)v129;
    v6 = *(_DWORD *)(a1 + 52);
    v87 = *(void ***)v129;
    if ( v6 != *(_DWORD *)(*(_DWORD *)v129 + 52) )
      goto LABEL_170;
    v6 = 0;
    v7 = (unsigned int *)(v129 + 4);
    do
    {
      v100 = *((_DWORD *)v98[4] + 3);
      v101 = v100 > 0x1E;
      if ( v100 != 30 )
        v101 = v100 - 1 > 1;
      if ( !v101 && *((_DWORD *)v98[12] + 1) == *(_DWORD *)(*(_DWORD *)(a1 + 48) + 4) )
      {
        v8 = (int *)v98[8];
        if ( !v8 )
          goto LABEL_48;
        v98[8] = 0;
        sub_C0960((int)v8);
        sub_33AC04(v8);
      }
      v94 = dword_478368 + 4 * dword_47836C;
      if ( v94 <= (unsigned int)v7 )
        break;
      v99 = (void **)*v7++;
      v98 = v99;
    }
    while ( v99[13] == *(void **)(a1 + 52) );
LABEL_168:
    if ( v129 >= v94 )
      goto LABEL_182;
    v6 = *(_DWORD *)(a1 + 52);
    v87 = *(void ***)v129;
LABEL_170:
    if ( v87[13] == (void *)v6 )
    {
      v6 = a1 + 140;
      v7 = (unsigned int *)(v129 + 4);
      do
      {
        v103 = v87[4];
        if ( v103[26] )
        {
          v104 = v103[3];
          v105 = v104 > 0x1E;
          if ( v104 != 30 )
            v105 = v104 - 1 > 1;
          if ( !v105
            && *((_DWORD *)v87[12] + 1) == *(_DWORD *)(*(_DWORD *)(a1 + 48) + 4)
            && v103[4] == 1
            && *((_BYTE *)v87 + 38) )
          {
            v143[0] = v87[8];
            sub_E01B8(a1 + 140, v143);
          }
        }
        if ( (unsigned int)v7 >= dword_478368 + 4 * dword_47836C )
          break;
        v102 = (void **)*v7++;
        v87 = v102;
      }
      while ( v102[13] == *(void **)(a1 + 52) );
    }
LABEL_182:
    v14 = *(_DWORD **)(a1 + 16);
    *(_DWORD *)(a1 + 152) = 0;
    if ( v14[3] == 30 && v128[22] )
      *(_DWORD *)(a1 + 152) = 1;
LABEL_49:
    *(_BYTE *)(a1 + 36) = 0;
LABEL_7:
    v17 = *(_DWORD *)(a1 + 12);
    if ( v17 <= 1 )
    {
      if ( v14[3] != 2 )
      {
        v28 = sub_1AED14(*(_DWORD *)(a1 + 96));
        if ( v28 )
        {
          v29 = *(_DWORD *)(a1 + 12);
          if ( dword_4788B4 )
          {
            v30 = *(_DWORD *)(v28 + 16) != 1;
            if ( v30 != v29 )
            {
              v31 = dword_4788C4;
              *(_DWORD *)(a1 + 12) = v30;
              if ( !v31 )
              {
                v32 = (_DWORD *)sub_242F8C(v28);
                sub_25A418(*v32, "Note: automatically using hardware breakpoints for read-only addresses.\n");
                dword_4788C4 = 1;
              }
            }
          }
          else if ( !v29 && *(_DWORD *)(v28 + 16) != 1 )
          {
            v66 = *(_DWORD *)(a1 + 52);
            v67 = *(_DWORD *)(a1 + 44);
            v68 = *(_DWORD *)(*(_DWORD *)(a1 + 16) + 24);
            v69 = (const char *)sub_25AC8C(v67, v66);
            sub_2594B0(
              a2,
              "Cannot insert breakpoint %d.\nCannot set software breakpoint at read-only address %s\n",
              v68,
              v69);
            return 1;
          }
        }
      }
      if ( dword_489690 && (v33 = *(_DWORD *)(a1 + 64)) != 0 && sub_2142A0(v33) )
      {
        if ( !dword_478354 )
        {
          if ( *(_DWORD *)(a1 + 12) == 1 )
          {
            sub_946B0("hardware breakpoint %d not supported in overlay!", *(_DWORD *)(*(_DWORD *)(a1 + 16) + 24));
          }
          else
          {
            v52 = (void *)sub_214714(*(_DWORD *)(a1 + 52), *(_DWORD *)(a1 + 64));
            v53 = *(_DWORD *)(a1 + 88);
            v54 = (_BYTE *)(a1 + 172);
            v55 = *(_DWORD *)(a1 + 92);
            v56 = a1 + 103;
            v143[0] = v52;
            *(_DWORD *)(a1 + 156) = v53;
            *(_DWORD *)(a1 + 160) = v55;
            v57 = *(_DWORD *)(a1 + 100);
            *(_DWORD *)(a1 + 164) = *(_DWORD *)(a1 + 96);
            *(_DWORD *)(a1 + 168) = v57;
            do
            {
              v58 = *(_BYTE *)++v56;
              *v54++ = v58;
            }
            while ( (_BYTE *)(a1 + 188) != v54 );
            *(_QWORD *)(a1 + 188) = *(_QWORD *)(a1 + 120);
            sub_DF71C(a1 + 196, a1 + 128);
            sub_DF71C(a1 + 208, a1 + 140);
            v59 = v143[0];
            *(_DWORD *)(a1 + 220) = *(_DWORD *)(a1 + 152);
            *(_DWORD *)(a1 + 164) = v59;
            v60 = sub_92E28();
            sub_C959C(*(_DWORD *)(a1 + 16));
            v61 = v143[0];
            *(_DWORD *)(a1 + 192) = v62;
            v63 = *(_DWORD *)(a1 + 44);
            *(_DWORD *)(a1 + 160) = v61;
            if ( sub_230760(v63, a1 + 156) )
            {
              v11 = 0;
              v10 = -1;
              sub_92E40((int)v60);
              v124 = 1;
              sub_2594B0(a2, "Overlay breakpoint %d failed: in ROM?\n", *(_DWORD *)(*(_DWORD *)(a1 + 16) + 24));
            }
            else
            {
              sub_92E40((int)v60);
            }
          }
        }
        if ( !sub_2142D0(*(_DWORD *)(a1 + 64)) )
          return 0;
        v64 = sub_92E28();
        v112 = (*(int (__fastcall **)(int))(*(_DWORD *)(*(_DWORD *)(a1 + 16) + 4) + 8))(a1) == 0;
        v35 = (int)v64;
        if ( !v112 )
        {
          sub_92E40((int)v64);
          v36 = *(_DWORD *)(a1 + 12);
          if ( v36 )
            goto LABEL_39;
LABEL_91:
          v11 = 0;
          goto LABEL_92;
        }
      }
      else
      {
        v34 = sub_92E28();
        v112 = (*(int (__fastcall **)(int))(*(_DWORD *)(*(_DWORD *)(a1 + 16) + 4) + 8))(a1) == 0;
        v35 = (int)v34;
        if ( !v112 )
        {
          sub_92E40((int)v34);
          v36 = *(_DWORD *)(a1 + 12);
          if ( v36 )
          {
LABEL_39:
            if ( v36 != 1 )
            {
LABEL_40:
              sub_FA65C(v143, -1, *(_DWORD *)(a1 + 44), *(_DWORD *)(a1 + 52));
              sub_2594B0(
                a2,
                "Cannot insert breakpoint %d.\n%s\n",
                *(_DWORD *)(*(_DWORD *)(a1 + 16) + 24),
                (const char *)v143[0]);
              if ( v143[0] != &v144 )
                sub_339E64(v143[0]);
              return 1;
            }
            *a4 = 1;
            *a5 = 0;
            v83 = *(_DWORD *)(*(_DWORD *)(a1 + 16) + 24);
            goto LABEL_192;
          }
          goto LABEL_91;
        }
      }
      sub_92E40(v35);
      if ( !v10 )
      {
        *(_BYTE *)(a1 + 39) = 1;
        return 0;
      }
      v51 = *(_DWORD *)(a1 + 12);
      v119 = v124 == 1;
      if ( v124 != 1 )
        v119 = v124 == 8;
      if ( !v119 || v51 )
      {
LABEL_78:
        if ( v51 != 1 )
        {
          if ( v11 )
          {
            sub_2594B0(a2, "Cannot insert breakpoint %d: %s\n", *(_DWORD *)(*(_DWORD *)(a1 + 16) + 24), v11);
            return 1;
          }
          goto LABEL_40;
        }
        *a4 = 1;
        *a5 = v11 != 0;
        v83 = *(_DWORD *)(*(_DWORD *)(a1 + 16) + 24);
        if ( v11 )
        {
          sub_2594B0(a2, "Cannot insert hardware breakpoint %d%s", v83, ":");
          sub_2594B0(a2, "%s.\n", v11);
          return 1;
        }
LABEL_192:
        sub_2594B0(a2, "Cannot insert hardware breakpoint %d%s", v83, ".\n");
        return 1;
      }
LABEL_92:
      if ( sub_20192C(*(_DWORD *)(a1 + 48), *(_DWORD *)(a1 + 52))
        || sub_1B870C(*(_DWORD *)(a1 + 48), *(_DWORD *)(a1 + 52)) )
      {
        v65 = *(_DWORD *)(a1 + 16);
        *(_BYTE *)(a1 + 37) = 1;
        sub_1B9D50(v65);
        if ( !*a3 )
        {
          sub_2594B0(a2, "Cannot insert breakpoint %d.\n", *(_DWORD *)(*(_DWORD *)(a1 + 16) + 24));
          sub_2594B0(a2, "Temporarily disabling shared library breakpoints:\n");
        }
        *a3 = 1;
        sub_2594B0(a2, "breakpoint #%d\n", *(_DWORD *)(*(_DWORD *)(a1 + 16) + 24));
        return 0;
      }
      v51 = *(_DWORD *)(a1 + 12);
      goto LABEL_78;
    }
    if ( v17 != 2 || v14[5] == 1 )
    {
      if ( v14[3] != 26 )
        return 0;
      v23 = v14[1];
      if ( !v23 || (v24 = *(int (__fastcall **)(int))(v23 + 8)) == 0 )
      {
        v110 = sub_94700(
                 (int)"breakpoint.c",
                 2771,
                 "%s: Assertion `%s' failed.",
                 "int insert_bp_location(bp_location*, ui_file*, int*, int*, int*)",
                 "bl->owner->ops != NULL && bl->owner->ops->insert_location != NULL");
LABEL_232:
        sub_946E0("Invalid argument syntax", HIDWORD(v110));
      }
      v25 = v24(a1);
      v26 = v25;
      if ( v25 )
      {
        if ( v25 == 1 )
          LOWORD(v27) = 32208;
        else
          LOWORD(v27) = 32296;
        *(_DWORD *)(*(_DWORD *)(a1 + 16) + 16) = 0;
        HIWORD(v27) = 56;
        sub_946B0(v27, *(_DWORD *)(*(_DWORD *)(a1 + 16) + 24), 0);
      }
      *(_BYTE *)(a1 + 39) = v26 == 0;
      return 0;
    }
    v19 = v14[1];
    if ( !v19 || (v20 = *(int (__fastcall **)(int))(v19 + 8)) == 0 )
    {
      v121 = sub_94700(
               (int)"breakpoint.c",
               2726,
               "%s: Assertion `%s' failed.",
               "int insert_bp_location(bp_location*, ui_file*, int*, int*, int*)",
               "bl->owner->ops != NULL && bl->owner->ops->insert_location != NULL");
      if ( HIDWORD(v121) != 3 )
      {
        sub_339E78(v121);
        sub_92E60();
      }
      v120 = sub_339E78(v121);
      sub_339EF8(v120);
      v82 = *(void **)(v6 + 24);
      *(_DWORD *)(v6 + 24) = 0;
      if ( v82 )
      {
LABEL_131:
        sub_C0960((int)v82);
        sub_33AC04(v82);
LABEL_63:
        v43 = *(_DWORD *)(v6 + 24);
        while ( v43 )
        {
          do
          {
            if ( (unsigned int)v7 >= v5[8] + 4 * v5[9]
              || (v40 = *v7, ++v7, v6 = v40, v39 = *(_DWORD *)(v40 + 52), v39 != *(_DWORD *)(a1 + 52)) )
            {
              v11 = (const char *)v129;
              goto LABEL_114;
            }
LABEL_58:
            v41 = *(_DWORD *)(*(_DWORD *)(v6 + 16) + 12);
            v42 = v41 > 0x1E;
            if ( v41 != 30 )
              v42 = v41 - 1 > 1;
          }
          while ( v42 || *(_DWORD *)(*(_DWORD *)(v6 + 48) + 4) != *(_DWORD *)(*(_DWORD *)(a1 + 48) + 4) );
          if ( !v126 )
            goto LABEL_63;
          v131 = *(_DWORD *)(v6 + 20);
          if ( !v131 )
          {
            v82 = *(void **)(v6 + 24);
            *(_DWORD *)(v6 + 24) = 0;
            if ( v82 )
              goto LABEL_131;
            break;
          }
          v81 = sub_92E28();
          sub_BFE84(&v134, v39, v131);
          v43 = v134;
          sub_92E40((int)v81);
          v82 = *(void **)(v6 + 24);
          *(_DWORD *)(v6 + 24) = v43;
          if ( v82 )
            goto LABEL_131;
        }
      }
      v11 = (const char *)v129;
      if ( v127 < v5[8] + 4 * v5[9] )
      {
        v6 = *(_DWORD *)(a1 + 52);
        v44 = *(_DWORD **)v127;
        v45 = *(_DWORD *)v127;
        if ( v6 != *(_DWORD *)(*(_DWORD *)v127 + 52) )
          goto LABEL_117;
        v6 = 0;
        v7 = v130;
        do
        {
          v48 = *(_DWORD *)(v44[4] + 12);
          v49 = v48 > 0x1E;
          if ( v48 != 30 )
            v49 = v48 - 1 > 1;
          if ( !v49 && *(_DWORD *)(v44[12] + 4) == *(_DWORD *)(*(_DWORD *)(a1 + 48) + 4) )
          {
            v50 = (void *)v44[6];
            if ( !v50 )
              goto LABEL_45;
            v44[6] = 0;
            sub_C0960((int)v50);
            sub_33AC04(v50);
          }
          v46 = v5[8] + 4 * v5[9];
          if ( v46 <= (unsigned int)v7 )
            break;
          v47 = (_DWORD *)*v7++;
          v44 = v47;
        }
        while ( v47[13] == *(_DWORD *)(a1 + 52) );
LABEL_115:
        if ( v127 < v46 )
        {
          v6 = *(_DWORD *)(a1 + 52);
          v45 = *(_DWORD *)v127;
LABEL_117:
          if ( v6 == *(_DWORD *)(v45 + 52) )
          {
            v7 = (unsigned int *)(a1 + 128);
            v6 = v127 + 4;
            do
            {
              if ( *(_DWORD *)(v45 + 20) )
              {
                v78 = *(_DWORD *)(v45 + 16);
                v79 = *(_DWORD *)(v78 + 12);
                v80 = v79 > 0x1E;
                if ( v79 != 30 )
                  v80 = v79 - 1 > 1;
                if ( !v80
                  && *(_DWORD *)(*(_DWORD *)(v45 + 48) + 4) == *(_DWORD *)(*(_DWORD *)(a1 + 48) + 4)
                  && *(_DWORD *)(v78 + 16) == 1
                  && *(_BYTE *)(v45 + 38) )
                {
                  v143[0] = *(void **)(v45 + 24);
                  sub_E01B8(a1 + 128, v143);
                }
              }
              if ( v6 >= v5[8] + 4 * v5[9] )
                break;
              v77 = *(_DWORD *)v6;
              v6 += 4;
              v45 = v77;
            }
            while ( *(_DWORD *)(v77 + 52) == *(_DWORD *)(a1 + 52) );
          }
          continue;
        }
      }
      continue;
    }
    break;
  }
  v21 = v20(a1);
  if ( v21 == 1 )
  {
    if ( *(_DWORD *)(a1 + 60) == 1 )
    {
      if ( dword_478368 < (unsigned int)(dword_478368 + 4 * dword_47836C) && (v70 = *(_DWORD **)dword_478368) != 0 )
      {
        v71 = (_DWORD *)(dword_478368 + 4);
        while ( (_DWORD *)a1 == v70 || v70[15] != 2 || !((int (__fastcall *)(int, _DWORD *))loc_C70A4)(a1, v70) )
        {
          if ( (unsigned int)v71 < dword_478368 + 4 * dword_47836C )
          {
            v72 = (_DWORD *)*v71++;
            v70 = v72;
            if ( v72 )
              continue;
          }
          goto LABEL_188;
        }
        v73 = (_BYTE *)(a1 + 104);
        *(_BYTE *)(a1 + 41) = 1;
        v74 = (char *)v70 + 103;
        *(_BYTE *)(a1 + 39) = 1;
        *(_DWORD *)(a1 + 88) = v70[22];
        *(_DWORD *)(a1 + 92) = v70[23];
        *(_DWORD *)(a1 + 96) = v70[24];
        *(_DWORD *)(a1 + 100) = v70[25];
        do
        {
          v75 = *++v74;
          *v73++ = v75;
        }
        while ( v73 != (_BYTE *)(a1 + 120) );
        *(_DWORD *)(a1 + 120) = v70[30];
        *(_DWORD *)(a1 + 124) = v70[31];
        sub_DF71C(a1 + 128, v70 + 32);
        sub_DF71C(a1 + 140, v70 + 35);
        v76 = v70[38];
        *(_DWORD *)(a1 + 60) = 2;
        v22 = 1;
        *(_DWORD *)(a1 + 152) = v76;
      }
      else
      {
LABEL_188:
        v106 = *(_DWORD *)(a1 + 16);
        *(_DWORD *)(a1 + 60) = 2;
        if ( (*(int (__fastcall **)(int))(*(_DWORD *)(v106 + 4) + 8))(a1) )
        {
          v22 = 0;
          *(_DWORD *)(a1 + 60) = 1;
        }
        else
        {
          v22 = 1;
        }
      }
    }
    else
    {
      v22 = 0;
    }
  }
  else
  {
    v22 = v21 == 0;
  }
  *(_BYTE *)(a1 + 39) = v22;
  return 0;
}
