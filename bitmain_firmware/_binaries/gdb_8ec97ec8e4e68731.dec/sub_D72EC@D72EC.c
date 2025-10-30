void __fastcall sub_D72EC(int a1, int a2, int a3)
{
  int v3; // r1
  int v4; // r0
  int v5; // r3
  _DWORD *v6; // r3
  size_t v7; // r0
  _DWORD *v8; // r0
  int v9; // r1
  _DWORD *v10; // r2
  _DWORD *i; // r3
  int v12; // r0
  int v13; // r5
  unsigned int v14; // r9
  int v15; // lr
  unsigned int v16; // r12
  int v17; // r2
  unsigned int v18; // r7
  int v19; // r11
  unsigned int v20; // r8
  int v21; // t1
  int v22; // r4
  int v23; // r3
  unsigned int v24; // r1
  unsigned int v25; // r2
  unsigned int v26; // r3
  unsigned int v27; // r1
  unsigned int v28; // r3
  int *v29; // r4
  int *v30; // r10
  unsigned int v31; // r11
  int v32; // t1
  int *v33; // lr
  unsigned int v34; // r5
  int v35; // r3
  unsigned int v36; // r1
  int *v37; // r2
  int v38; // t1
  int v39; // r0
  int v40; // r8
  int v41; // r3
  bool v42; // zf
  unsigned int v43; // r4
  unsigned int v44; // r7
  int v45; // t1
  int v46; // r4
  int *v47; // r7
  int v48; // t1
  char v49; // r11
  int v51; // r5
  int *v52; // r4
  unsigned int v53; // r3
  bool v54; // cc
  int *v55; // r8
  int v56; // r9
  int v57; // r3
  unsigned int v58; // r3
  bool v59; // cc
  int v60; // t1
  char v61; // r8
  int v62; // r9
  int v63; // r0
  int v64; // r4
  int *v65; // r5
  int v66; // r7
  int v67; // t1
  int v68; // r0
  int v69; // r0
  _DWORD *v70; // r5
  int v71; // r4
  int j; // r4
  int v73; // r2
  int v74; // r0
  int v75; // r4
  int *v76; // r5
  int v77; // r7
  unsigned int v78; // r3
  bool v79; // cc
  int v80; // r0
  int v81; // r0
  int v82; // t1
  int v83; // r0
  unsigned int *v84; // r3
  int v85; // r4
  unsigned int v86; // r1
  unsigned int v87; // r2
  _DWORD *v88; // r5
  int v89; // r7
  int v90; // r3
  bool v91; // zf
  int v92; // r3
  int v93; // r4
  int v94; // r9
  int v95; // r0
  __int64 v96; // r0
  int v97; // [sp+Ch] [bp-F0h]
  int v98; // [sp+Ch] [bp-F0h]
  char *v99; // [sp+10h] [bp-ECh]
  char *ptr; // [sp+14h] [bp-E8h]
  int v102; // [sp+20h] [bp-DCh] BYREF
  int v103; // [sp+24h] [bp-D8h] BYREF
  int v104; // [sp+28h] [bp-D4h] BYREF
  int v105; // [sp+2Ch] [bp-D0h] BYREF
  int v106; // [sp+30h] [bp-CCh] BYREF
  int v107; // [sp+34h] [bp-C8h] BYREF
  int v108; // [sp+38h] [bp-C4h] BYREF
  int v109; // [sp+3Ch] [bp-C0h] BYREF
  int v110; // [sp+40h] [bp-BCh] BYREF
  int v111; // [sp+44h] [bp-B8h] BYREF
  _DWORD v112[3]; // [sp+48h] [bp-B4h] BYREF
  char v113; // [sp+54h] [bp-A8h] BYREF
  _DWORD v114[3]; // [sp+64h] [bp-98h] BYREF
  char v115; // [sp+70h] [bp-8Ch] BYREF
  int v116; // [sp+80h] [bp-7Ch]
  _BYTE v117[36]; // [sp+84h] [bp-78h] BYREF
  int v118; // [sp+A8h] [bp-54h]
  _BYTE v119[36]; // [sp+ACh] [bp-50h] BYREF
  int v120; // [sp+D0h] [bp-2Ch] BYREF
  _BYTE v121[36]; // [sp+D4h] [bp-28h] BYREF

  v3 = 0;
  v4 = dword_478348;
  ptr = (char *)dword_478368;
  v5 = dword_47836C;
  dword_478368 = 0;
  dword_47836C = 0;
  if ( dword_478348 )
    a3 = 0;
  v97 = v5;
  if ( !dword_478348 )
    goto LABEL_12;
  do
  {
    v6 = *(_DWORD **)(v4 + 28);
    if ( v6 )
    {
      ++a3;
      while ( 1 )
      {
        v6 = (_DWORD *)*v6;
        if ( !v6 )
          break;
        ++a3;
      }
      v3 = 1;
    }
    v4 = *(_DWORD *)(v4 + 8);
  }
  while ( v4 );
  if ( v3 )
  {
    v7 = 4 * a3;
    dword_47836C = a3;
  }
  else
  {
LABEL_12:
    v7 = 0;
  }
  v8 = sub_93028(v7);
  v9 = dword_478348;
  dword_478368 = (int)v8;
  if ( dword_478348 )
  {
    v10 = v8;
    do
    {
      for ( i = *(_DWORD **)(v9 + 28); i; i = (_DWORD *)*i )
        *v10++ = i;
      v9 = *(_DWORD *)(v9 + 8);
    }
    while ( v9 );
  }
  qsort(v8, dword_47836C, 4u, (__compar_fn_t)sub_C6C10);
  v13 = 0;
  v14 = dword_478368;
  dword_47885C = 0;
  dword_478858 = 0;
  v15 = dword_47836C;
  v16 = dword_478368 + 4 * dword_47836C;
  if ( v14 >= v14 + 4 * dword_47836C )
    goto LABEL_36;
  v17 = *(_DWORD *)dword_478368;
  if ( !*(_DWORD *)dword_478368 )
    goto LABEL_36;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v12 = dword_478368;
  do
  {
    if ( !*(_DWORD *)(v17 + 12) )
    {
      v22 = *(unsigned __int8 *)(v17 + 39);
      if ( *(_BYTE *)(v17 + 39) )
      {
        v23 = *(_DWORD *)(v17 + 120);
        if ( v23 )
        {
          v24 = *(_DWORD *)(v17 + 92);
          v25 = *(_DWORD *)(v17 + 52);
          v26 = v23 + v24;
          if ( v24 > v25 )
            goto LABEL_224;
          v27 = v25 - v24;
          if ( v27 > v20 )
          {
            v19 = v22;
            v20 = v27;
          }
          if ( v26 <= v25 )
          {
            if ( v19 )
              dword_47885C = v20;
            if ( v13 )
              dword_478858 = v18;
            sub_94700(
              (int)"breakpoint.c",
              11709,
              "%s: Assertion `%s' failed.",
              "void bp_locations_target_extensions_update()",
              "bl->address < end");
LABEL_224:
            if ( v19 )
              dword_47885C = v20;
            if ( v13 )
              dword_478858 = v18;
            v95 = sub_94700(
                    (int)"breakpoint.c",
                    11702,
                    "%s: Assertion `%s' failed.",
                    "void bp_locations_target_extensions_update()",
                    "bl->address >= start");
LABEL_214:
            if ( ptr )
              free(ptr);
            sub_338FFC(v95);
          }
          v28 = v26 - v25;
          if ( v18 < v28 )
          {
            v13 = v22;
            v18 = v28;
          }
        }
      }
    }
    if ( v15 * 4 - 4 + dword_478368 == v12 )
      break;
    v21 = *(_DWORD *)(v12 + 4);
    v12 += 4;
    v17 = v21;
  }
  while ( v21 );
  if ( v19 )
    dword_47885C = v20;
  if ( v13 )
  {
    dword_478858 = v18;
    v99 = &ptr[4 * v97];
    if ( ptr >= v99 )
    {
      v29 = (int *)dword_478368;
      v102 = 0;
      v103 = 0;
      v104 = 0;
      v105 = 0;
      goto LABEL_95;
    }
  }
  else
  {
LABEL_36:
    v99 = &ptr[4 * v97];
    if ( ptr >= v99 )
    {
      v29 = (int *)dword_478368;
      goto LABEL_94;
    }
  }
  v30 = (int *)ptr;
  v31 = 0;
  v29 = (int *)dword_478368;
  v98 = -1;
  while ( 1 )
  {
    v32 = *v30++;
    v12 = v32;
    v33 = &v29[v15];
    v120 = v32;
    v34 = *(_DWORD *)(v32 + 52);
    if ( (unsigned int)v33 > v14 )
    {
      v35 = *(_DWORD *)v14;
      v36 = *(_DWORD *)(*(_DWORD *)v14 + 52);
      if ( v36 >= v34 )
      {
LABEL_57:
        if ( v34 == v36 )
        {
          v43 = v14;
          v44 = v34;
          v40 = 0;
          do
          {
            if ( *(_DWORD *)(v35 + 28) != 1 || v44 == v31 && *(_DWORD *)(*(_DWORD *)(v12 + 48) + 4) == v98 )
            {
              v12 = v120;
            }
            else
            {
              sub_CC600(*(_DWORD *)(v35 + 48), v34);
              v12 = v120;
              v98 = *(_DWORD *)(*(_DWORD *)(v120 + 48) + 4);
            }
            v45 = *(_DWORD *)v43;
            v43 += 4;
            v44 = *(_DWORD *)(v12 + 52);
            if ( v45 == v12 )
              v40 = 1;
            if ( v43 >= dword_478368 + 4 * dword_47836C )
              break;
            v35 = *(_DWORD *)v43;
            v34 = *(_DWORD *)(*(_DWORD *)v43 + 52);
          }
          while ( v34 == v44 );
          if ( v40 )
          {
            if ( !*(_BYTE *)(v12 + 39) || (v12 = sub_CA3B4(v12)) != 0 )
            {
              v31 = v44;
              goto LABEL_55;
            }
            v34 = v44;
            v39 = v120;
            goto LABEL_47;
          }
          v34 = *(_DWORD *)(v12 + 52);
        }
      }
      else
      {
        v37 = (int *)(v14 + 4);
        while ( 1 )
        {
          v14 = (unsigned int)v37;
          if ( v37 >= v33 )
            break;
          v38 = *v37++;
          v35 = v38;
          v36 = *(_DWORD *)(v38 + 52);
          if ( v36 >= v34 )
            goto LABEL_57;
        }
      }
    }
    sub_CC600(*(_DWORD *)(v12 + 48), v34);
    v39 = v120;
    if ( !*(_BYTE *)(v120 + 39) )
      goto LABEL_73;
    v40 = 0;
LABEL_47:
    v41 = *(_DWORD *)(*(_DWORD *)(v39 + 16) + 12);
    v42 = v41 == 26;
    if ( v41 != 26 )
      v42 = v41 == 6;
    if ( v42
      || v14 >= dword_478368 + 4 * dword_47836C
      || (v46 = *(_DWORD *)v14, *(_DWORD *)(v39 + 52) != *(_DWORD *)(*(_DWORD *)v14 + 52)) )
    {
LABEL_51:
      v12 = sub_CC420(v39);
      if ( v12 )
        v12 = sub_259F10("warning: Error removing breakpoint %d\n", *(_DWORD *)(*(_DWORD *)(v120 + 16) + 24));
      if ( v40 )
      {
        v31 = v34;
        goto LABEL_55;
      }
      v42 = sub_232950() == 0;
      v39 = v120;
      if ( v42 )
      {
LABEL_73:
        v31 = v34;
        goto LABEL_74;
      }
      if ( !sub_C92DC((int *)(v120 + 12)) )
      {
        v31 = v34;
        goto LABEL_92;
      }
      v83 = sub_23E4F8();
      v84 = (unsigned int *)dword_478860;
      v85 = v120;
      v12 = 3 * (v83 + 1);
      *(_DWORD *)(v120 + 224) = v12;
      *(_DWORD *)(v85 + 16) = 0;
      if ( !v84 || (v86 = v84[1], v87 = *v84, v86 == *v84) )
      {
        v12 = (int)sub_99FE0(v84, 1);
        v87 = *(_DWORD *)v12;
        v84 = (unsigned int *)v12;
        v86 = *(_DWORD *)(v12 + 4);
        dword_478860 = v12;
      }
      if ( v87 < v86 )
      {
        *v84 = v87 + 1;
        v31 = v34;
        v84[v87 + 2] = v85;
        goto LABEL_55;
      }
      v96 = sub_94700(
              (int)"breakpoint.c",
              12094,
              "%s: Assertion `%s' failed.",
              "bp_location** VEC_bp_location_p_quick_push(VEC_bp_location_p*, bp_location_p, const char*, unsigned int)",
              "quick_push");
      ((void (__fastcall *)(_BYTE *, _DWORD))loc_23FC8C)(v121, HIDWORD(v96));
      v95 = ((int (__fastcall *)(int))loc_1CD290)(v120);
      goto LABEL_214;
    }
    v47 = (int *)(v14 + 4);
    while ( 1 )
    {
      v42 = ((int (__fastcall *)(int, int))loc_CF960)(v46, v39) == 0;
      v39 = v120;
      if ( !v42 )
      {
        if ( (unsigned int)(*(_DWORD *)(*(_DWORD *)(v120 + 16) + 12) - 7) <= 2 )
        {
          if ( (unsigned int)(*(_DWORD *)(*(_DWORD *)(v46 + 16) + 12) - 7) > 2 )
          {
            sub_94700(
              (int)"breakpoint.c",
              12002,
              "%s: Assertion `%s' failed.",
              "void update_global_location_list(ugll_insert_mode)",
              "is_hardware_watchpoint (loc2->owner)");
            v95 = sub_256478(v112);
            goto LABEL_214;
          }
          *(_DWORD *)(v46 + 60) = *(_DWORD *)(v120 + 60);
        }
        if ( v46 != v39 )
        {
          v49 = *(_BYTE *)(v46 + 41);
          *(_BYTE *)(v46 + 41) = 0;
          v42 = sub_CA3B4(v46) == 0;
          *(_BYTE *)(v46 + 41) = v49;
          v39 = v120;
          if ( !v42 )
            break;
        }
      }
      if ( (unsigned int)v47 < dword_478368 + 4 * dword_47836C )
      {
        v48 = *v47++;
        v46 = v48;
        if ( *(_DWORD *)(v48 + 52) == *(_DWORD *)(v39 + 52) )
          continue;
      }
      goto LABEL_51;
    }
    sub_D328C(v120, v46);
    v31 = v34;
    if ( !v40 )
    {
LABEL_92:
      v39 = v120;
LABEL_74:
      *(_DWORD *)(v39 + 16) = 0;
      v12 = ((int (__fastcall *)(int *))loc_CC730)(&v120);
    }
LABEL_55:
    v29 = (int *)dword_478368;
    if ( v99 <= (char *)v30 )
      break;
    v15 = dword_47836C;
  }
  v16 = dword_478368 + 4 * dword_47836C;
LABEL_94:
  v102 = 0;
  v103 = 0;
  v104 = 0;
  v105 = 0;
  if ( (unsigned int)v29 < v16 )
  {
LABEL_95:
    v51 = *v29;
    if ( *v29 )
    {
      v52 = v29 + 1;
      do
      {
        v61 = *(_BYTE *)(v51 + 41);
        *(_BYTE *)(v51 + 41) = 0;
        v62 = *(_DWORD *)(v51 + 16);
        v12 = sub_CA3B4(v51);
        *(_BYTE *)(v51 + 41) = v61;
        if ( !v12 )
          goto LABEL_119;
        v53 = *(_DWORD *)(v62 + 12);
        v54 = v53 > 6;
        if ( v53 != 6 )
          v54 = v53 - 26 > 3;
        if ( v54 )
        {
          switch ( v53 )
          {
            case 7u:
              v55 = &v103;
              v56 = v103;
              break;
            case 8u:
              v55 = &v105;
              v56 = v105;
              break;
            case 9u:
              v55 = &v104;
              v56 = v104;
              break;
            default:
              v55 = &v102;
              v56 = v102;
              break;
          }
          if ( v56
            && (!dword_489690 || *(_DWORD *)(v51 + 64) == *(_DWORD *)(v56 + 64))
            && (v12 = ((int (__fastcall *)(int, int))loc_CF960)(v51, v56)) != 0 )
          {
            if ( *(_BYTE *)(v51 + 39) )
              sub_D328C(v51, v56);
            *(_BYTE *)(v51 + 41) = 1;
            *(_DWORD *)(v51 + 28) = 0;
          }
          else
          {
            v57 = *(_DWORD *)(v51 + 16);
            *(_BYTE *)(v51 + 41) = 0;
            *v55 = v51;
            v58 = *(_DWORD *)(v57 + 12);
            v59 = v58 > 0x1E;
            if ( v58 != 30 )
              v59 = v58 - 1 > 1;
            if ( !v59 && *(_DWORD *)(v51 + 28) )
            {
              *(_BYTE *)(v51 + 36) = 1;
              *(_DWORD *)(v51 + 28) = 0;
            }
          }
        }
        else
        {
LABEL_119:
          *(_DWORD *)(v51 + 28) = 0;
        }
        if ( (unsigned int)v52 >= dword_478368 + 4 * dword_47836C )
          break;
        v60 = *v52++;
        v51 = v60;
      }
      while ( v60 );
    }
  }
  if ( a1 == 2 )
  {
LABEL_121:
    v106 = 0;
    v107 = 0;
    v108 = 0;
    sub_256760(v112);
    v112[1] = &v113;
    v112[0] = &off_3F2924;
    v112[2] = 0;
    v113 = 0;
    sub_2564E4(v112, "Warning:\n", 9);
    v116 = dword_487D2C;
    v63 = ((int (__fastcall *)(_BYTE *))loc_23FF20)(v117);
    if ( dword_478368 < (unsigned int)(dword_478368 + 4 * dword_47836C) )
    {
      v64 = *(_DWORD *)dword_478368;
      if ( *(_DWORD *)dword_478368 )
      {
        v65 = (int *)(dword_478368 + 4);
        v66 = 0;
        do
        {
          v63 = sub_CA3B4(v64);
          if ( v63
            && (!*(_BYTE *)(v64 + 39) || *(_BYTE *)(v64 + 36))
            && (*(_DWORD *)(*(_DWORD *)(v64 + 16) + 112) == -1 || (v63 = sub_23E52C()) != 0) )
          {
            v68 = sub_1CD664(*(_DWORD *)(v64 + 48));
            v69 = sub_16F654(v68);
            if ( ((int (__fastcall *)(int))loc_16D8FC)(v69) || (v63 = sub_98F78(&dword_4878EC, &dword_475848)) == 0 )
            {
              v63 = sub_D6040(v64, (int)v112, &v106, &v107, &v108);
              if ( v63 )
                v66 = v63;
            }
          }
          if ( (unsigned int)v65 >= dword_478368 + 4 * dword_47836C )
            break;
          v67 = *v65++;
          v64 = v67;
        }
        while ( v67 );
        v70 = (_DWORD *)dword_478348;
        if ( dword_478348 )
          goto LABEL_136;
        goto LABEL_151;
      }
    }
    v70 = (_DWORD *)dword_478348;
    if ( dword_478348 )
    {
      v66 = 0;
      do
      {
LABEL_136:
        if ( (unsigned int)(v70[3] - 7) <= 2 && v70[4] == 1 && v70[5] != 1 )
        {
          v71 = v70[7];
          if ( v71 )
          {
            while ( 1 )
            {
              if ( !*(_BYTE *)(v71 + 39) )
              {
                v63 = sub_CA3B4(v71);
                if ( v63 )
                  break;
              }
              v71 = *(_DWORD *)v71;
              if ( !v71 )
                goto LABEL_150;
            }
            for ( j = v70[7]; j; j = *(_DWORD *)j )
            {
              while ( !*(_BYTE *)(j + 39) )
              {
                j = *(_DWORD *)j;
                if ( !j )
                  goto LABEL_149;
              }
              sub_CC420(j);
            }
LABEL_149:
            v73 = v70[6];
            v107 = 1;
            v63 = sub_25678C(v112, "Could not insert hardware watchpoint %d.\n", v73);
            v66 = -1;
          }
        }
LABEL_150:
        v70 = (_DWORD *)v70[2];
      }
      while ( v70 );
LABEL_151:
      if ( v66 )
      {
        if ( v107 )
        {
          if ( !v108 )
            v63 = sub_25678C(
                    v112,
                    "Could not insert hardware breakpoints:\n"
                    "You may have requested too many hardware breakpoints/watchpoints.\n");
        }
        sub_22F048(v63);
        sub_258A0C(v112);
      }
    }
    ((void (__fastcall *)(_BYTE *))loc_23FC8C)(v117);
    ((void (__fastcall *)(int))loc_1CD290)(v116);
    sub_256478(v112);
LABEL_187:
    v120 = dword_487D2C;
    ((void (__fastcall *)(_BYTE *))loc_23FF20)(v121);
    v88 = (_DWORD *)dword_478348;
    if ( dword_478348 )
    {
      v89 = -1;
      do
      {
        v90 = v88[3];
        if ( (unsigned int)(v90 - 27) <= 2 )
        {
          v91 = v90 == 28;
          if ( v90 == 28 )
            v92 = 56312;
          else
            v92 = dword_46DBF0;
          if ( v91 )
          {
            HIWORD(v92) = 70;
            v92 = *(_DWORD *)v92;
          }
          if ( v92 )
          {
            if ( v89 == -1 )
            {
              if ( !off_489B9C(&dword_4899A0) )
                break;
              v89 = 1;
            }
            v93 = v88[7];
            if ( v93 )
            {
              v94 = 0;
              do
              {
                if ( sub_CA3B4(v93) && !*(_BYTE *)(v93 + 39) )
                {
                  sub_1CD664(*(_DWORD *)(v93 + 48));
                  off_489B98(&dword_4899A0, v93);
                  v94 = 1;
                  *(_BYTE *)(v93 + 39) = 1;
                }
                v93 = *(_DWORD *)v93;
              }
              while ( v93 );
              v88[36] = v88[6];
              if ( v94 )
                sub_1B9D50(v88);
            }
            else
            {
              v88[36] = v88[6];
            }
          }
        }
        v88 = (_DWORD *)v88[2];
      }
      while ( v88 );
    }
    ((void (__fastcall *)(_BYTE *))loc_23FC8C)(v121);
    ((void (__fastcall *)(int))loc_1CD290)(v120);
  }
  else if ( sub_CD288(v12) )
  {
    if ( a1 )
      goto LABEL_121;
    v109 = 0;
    v110 = 0;
    v111 = 0;
    sub_256760(v114);
    v114[1] = &v115;
    v114[0] = &off_3F2924;
    v114[2] = 0;
    v115 = 0;
    sub_2564E4(v114, "Warning:\n", 9);
    v118 = dword_487D2C;
    v74 = ((int (__fastcall *)(_BYTE *))loc_23FF20)(v119);
    if ( dword_478368 < (unsigned int)(dword_478368 + 4 * dword_47836C) )
    {
      v75 = *(_DWORD *)dword_478368;
      if ( *(_DWORD *)dword_478368 )
      {
        v76 = (int *)(dword_478368 + 4);
        v77 = 0;
        do
        {
          v78 = *(_DWORD *)(*(_DWORD *)(v75 + 16) + 12);
          v79 = v78 > 0x1E;
          if ( v78 != 30 )
            v79 = v78 - 1 > 1;
          if ( !v79 )
          {
            if ( *(_BYTE *)(v75 + 39) )
            {
              if ( *(_BYTE *)(v75 + 36) )
              {
                v80 = sub_1CD664(*(_DWORD *)(v75 + 48));
                v81 = sub_16F654(v80);
                if ( ((int (__fastcall *)(int))loc_16D8FC)(v81) || (v74 = sub_98F78(&dword_4878EC, &dword_475848)) == 0 )
                {
                  v74 = sub_D6040(v75, (int)v114, &v109, &v110, &v111);
                  if ( v74 )
                    v77 = v74;
                }
              }
            }
          }
          if ( (unsigned int)v76 >= dword_478368 + 4 * dword_47836C )
            break;
          v82 = *v76++;
          v75 = v82;
        }
        while ( v82 );
        if ( v77 )
        {
          sub_22F048(v74);
          sub_258A0C(v114);
        }
      }
    }
    ((void (__fastcall *)(_BYTE *))loc_23FC8C)(v119);
    ((void (__fastcall *)(int))loc_1CD290)(v118);
    sub_256478(v114);
  }
  else if ( a1 )
  {
    goto LABEL_187;
  }
  if ( ptr )
    free(ptr);
}
