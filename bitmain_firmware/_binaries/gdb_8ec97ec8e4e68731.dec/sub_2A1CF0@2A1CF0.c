int __fastcall sub_2A1CF0(unsigned int a1, int a2, int a3)
{
  char *v3; // r5
  int v6; // r6
  char *v7; // r0
  int *v8; // r5
  int *v9; // r6
  int v10; // r2
  int v11; // r3
  int v12; // r7
  int v13; // r0
  int v14; // r10
  int v15; // r11
  int v16; // r3
  int v17; // r7
  int *v18; // r2
  int v19; // r6
  int v20; // r10
  int v21; // r11
  int *v22; // r9
  int v23; // r1
  _BOOL4 v24; // r0
  int *v25; // r1
  int v26; // r9
  int v27; // r2
  bool v28; // zf
  int v29; // r0
  int v30; // r9
  int v31; // t1
  int v32; // r12
  unsigned int v33; // r1
  int v34; // r5
  bool v35; // zf
  unsigned int v36; // r1
  char **v37; // r11
  int *v38; // r2
  int v39; // r2
  int v40; // r1
  char v41; // r10
  int v42; // r10
  int v43; // r9
  int v44; // r5
  int v45; // r5
  char *v46; // r3
  int v47; // t1
  int v48; // r3
  int result; // r0
  unsigned int v50; // r0
  int v51; // r2
  int v52; // r0
  unsigned int v53; // r10
  int v54; // r8
  int v55; // r9
  int v56; // r11
  char v57; // r2
  int v58; // r2
  int v59; // r0
  int v60; // r7
  unsigned int v61; // r3
  unsigned int *v62; // r3
  int v63; // t1
  bool v64; // zf
  int v65; // r5
  int v66; // r3
  int v67; // r10
  int v68; // r3
  bool v69; // zf
  int v70; // r3
  int v71; // r9
  int v72; // r1
  _DWORD *v73; // r2
  int v74; // r12
  int v75; // r5
  bool v76; // cf
  _BOOL4 v77; // r0
  int v78; // r2
  unsigned int v79; // r1
  bool v80; // cc
  int v81; // r1
  int v82; // r3
  int v83; // r3
  int v84; // r7
  int v85; // r2
  bool v86; // zf
  int v87; // r7
  int v88; // r7
  int v89; // r3
  int v90; // r1
  int v91; // r11
  int v92; // r12
  int v93; // r12
  bool v94; // zf
  int v95; // r0
  int v96; // r10
  int v97; // r3
  int v98; // r0
  int v99; // r10
  int v100; // r3
  int i; // r10
  int v103; // [sp+8h] [bp-34h]
  int v104; // [sp+8h] [bp-34h]
  int v105; // [sp+8h] [bp-34h]
  int v106; // [sp+Ch] [bp-30h]
  int v107; // [sp+Ch] [bp-30h]
  int v108; // [sp+10h] [bp-2Ch]
  int v109; // [sp+14h] [bp-28h]
  int v110; // [sp+18h] [bp-24h]
  int v111; // [sp+1Ch] [bp-20h]
  unsigned __int16 v112; // [sp+2Ch] [bp-10h] BYREF
  char v113; // [sp+2Fh] [bp-Dh] BYREF
  unsigned int v114; // [sp+30h] [bp-Ch] BYREF
  int v115[2]; // [sp+34h] [bp-8h] BYREF

  v3 = *(char **)(a2 + 144);
  if ( v3 )
  {
    do
    {
      v6 = strncmp(v3, "reg-names-", 0xAu);
      if ( v6 )
      {
        if ( !strncmp(v3, "force-thumb", 0xBu) )
        {
          dword_48BB90 = 1;
        }
        else if ( !strncmp(v3, "no-force-thumb", 0xEu) )
        {
          dword_48BB90 = 0;
        }
        else
        {
          fprintf((FILE *)stderr, "Unrecognised disassembler option: %s\n", v3);
        }
      }
      else
      {
        v37 = off_3FDE84;
        if ( sub_29C104((unsigned __int8 *)v3, "reg-names-raw") )
        {
          while ( 1 )
          {
            ++v6;
            v37 += 18;
            if ( v6 == 8 )
              break;
            if ( !sub_29C104((unsigned __int8 *)v3, (unsigned __int8 *)*(v37 - 18)) )
              goto LABEL_52;
          }
          fprintf((FILE *)stderr, "Unrecognised register name set: %s\n", v3);
        }
        else
        {
LABEL_52:
          dword_4707E4 = v6;
        }
      }
      v7 = strchr(v3, 44);
      if ( !v7 )
        break;
      v3 = v7 + 1;
    }
    while ( v7 != (char *)-1 );
    *(_DWORD *)(a2 + 144) = 0;
  }
  v8 = *(int **)(a2 + 64);
  if ( v8 )
  {
    v9 = &dword_48BB6C;
  }
  else
  {
    if ( (*(_DWORD *)(a2 + 60) & 0x20000000) != 0 )
    {
      switch ( *(_DWORD *)(a2 + 20) )
      {
        case 0:
          goto LABEL_121;
        case 1:
          LOWORD(v9) = (unsigned __int16)&dword_48BB6C;
          v83 = 3;
          goto LABEL_189;
        case 2:
          LOWORD(v9) = -17556;
          v83 = 7;
          goto LABEL_189;
        case 3:
          LOWORD(v9) = -17556;
          v83 = 15;
          goto LABEL_189;
        case 4:
          LOWORD(v9) = -17556;
          v83 = 31;
          goto LABEL_189;
        case 5:
          LOWORD(v9) = -17556;
          v83 = 63;
          goto LABEL_189;
        case 6:
          v9 = &dword_48BB6C;
          v83 = 536871039;
          goto LABEL_190;
        case 7:
          LOWORD(v9) = -17556;
          v83 = 191;
LABEL_189:
          HIWORD(v9) = (unsigned int)&dword_48BB6C >> 16;
          goto LABEL_190;
        case 8:
          v9 = &dword_48BB6C;
          v83 = 536871423;
          goto LABEL_190;
        case 9:
          v9 = &dword_48BB6C;
          v83 = 536872959;
LABEL_190:
          v9[2] = v83;
          *(_QWORD *)(v9 + 3) = 0x6000000000000000LL;
          break;
        case 0xA:
          v9 = &dword_48BB6C;
          dword_48BB74 = 536872959;
          *(_QWORD *)&dword_48BB78 = 0x6000000100000000LL;
          break;
        case 0xB:
          v9 = &dword_48BB6C;
          dword_48BB74 = 536871039;
          *(_QWORD *)&dword_48BB78 = 0x7000000200000000LL;
          break;
        case 0xC:
          v9 = &dword_48BB6C;
          dword_48BB74 = 536872959;
          *(_QWORD *)&dword_48BB78 = 0x6000000500000000LL;
          break;
        case 0xD:
          v9 = &dword_48BB6C;
          dword_48BB74 = 536872959;
          *(_QWORD *)&dword_48BB78 = 0x6000000D00000000LL;
          break;
        default:
          abort();
          return result;
      }
    }
    else
    {
      *(_DWORD *)(a2 + 20) = 0;
LABEL_121:
      v9 = &dword_48BB6C;
      dword_48BB74 = -1;
      dword_48BB78 = -1;
      dword_48BB7C = -1;
    }
    v9[5] = -1;
    v9[7] = -1;
    v8 = &dword_48BB74;
    *(_DWORD *)(a2 + 64) = &dword_48BB74;
    v9[8] = 0;
  }
  v10 = *(_DWORD *)(a2 + 56);
  v11 = a3 & 1;
  v12 = v10;
  if ( *(_DWORD *)(a2 + 28) == 1 )
    v11 = 1;
  v106 = v11;
  if ( !v10 )
  {
    LOBYTE(v14) = 0;
    v16 = 0;
LABEL_57:
    v15 = 4;
    goto LABEL_58;
  }
  v13 = *(_DWORD *)(a2 + 48);
  v14 = *(_DWORD *)(*(_DWORD *)v13 + 12) & 0x200000;
  if ( v14 )
  {
    LOBYTE(v14) = 0;
    v15 = 4;
    v16 = 0;
    v12 = 0;
    goto LABEL_58;
  }
  if ( *(_DWORD *)(*(_DWORD *)(**(_DWORD **)v13 + 4) + 4) != 5 )
  {
    v15 = 4;
    v16 = *(_DWORD *)(*(_DWORD *)v13 + 12) & 0x200000;
    v12 = v16;
    goto LABEL_58;
  }
  v115[0] = *(_DWORD *)(*(_DWORD *)v13 + 12) & 0x200000;
  if ( a1 )
  {
    v82 = *(_DWORD *)(a2 + 52) + 1;
    if ( v82 < v8[5] )
      v82 = v8[5];
    v103 = v82;
  }
  else
  {
    v103 = 0;
  }
  if ( v8[3] )
  {
    v17 = v103;
    if ( v10 <= v103
      || a1 < *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v13 + 4 * v103) + 16) + 28)
            + *(_DWORD *)(*(_DWORD *)(v13 + 4 * v103) + 8) )
    {
      v26 = -1;
    }
    else
    {
      v18 = v9;
      v19 = -1;
      v20 = 4 * v103 + 4;
      v21 = 0;
      v22 = v18;
      do
      {
        v24 = sub_29E5D8(a2, v17, v115);
        v10 = *(_DWORD *)(a2 + 56);
        if ( v24 )
          v19 = v17;
        ++v17;
        if ( v24 )
          v21 = 1;
        if ( v10 <= v17 )
          break;
        v23 = *(_DWORD *)(*(_DWORD *)(a2 + 48) + v20);
        v20 += 4;
      }
      while ( a1 >= *(_DWORD *)(*(_DWORD *)(v23 + 16) + 28) + *(_DWORD *)(v23 + 8) );
      v25 = v22;
      v26 = v19;
      v9 = v25;
      if ( v21 )
      {
LABEL_29:
        v27 = v115[0];
        LOBYTE(v14) = 1;
        v8[3] = 1;
        v28 = v27 == 1;
        goto LABEL_30;
      }
    }
    v87 = v103 - 1;
    if ( v103 - 1 >= 0 )
    {
      v99 = v103 - 1;
      while ( !sub_29E5D8(a2, v99, v115) )
      {
        v76 = v99-- != 0;
        if ( !v76 )
        {
          v10 = *(_DWORD *)(a2 + 56);
          goto LABEL_237;
        }
      }
      v26 = v99;
      goto LABEL_29;
    }
LABEL_237:
    v100 = v8[3];
    if ( v100 != -1 )
      goto LABEL_238;
    if ( v10 <= 0 )
      goto LABEL_250;
    for ( i = 0; i < v10; ++i )
    {
      if ( sub_29E530(*(_DWORD *)(a2 + 48), i, v115) )
      {
        v10 = *(_DWORD *)(a2 + 56);
        v8[3] = 1;
        goto LABEL_248;
      }
      v10 = *(_DWORD *)(a2 + 56);
    }
    v100 = v8[3];
    if ( v100 == -1 )
    {
LABEL_250:
      v8[3] = 0;
    }
    else
    {
LABEL_238:
      if ( v100 == 1 )
      {
LABEL_248:
        v16 = 1;
        v8[5] = v26;
        LOBYTE(v14) = 1;
        v8[4] = 2;
        v12 = 0;
        goto LABEL_35;
      }
    }
    if ( v103 >= v10 )
      goto LABEL_221;
    v13 = *(_DWORD *)(a2 + 48);
  }
  else
  {
    if ( v10 <= v103 )
    {
      v87 = v103 - 1;
      v26 = -1;
      goto LABEL_221;
    }
    v26 = -1;
  }
  v88 = v103;
  v89 = *(_DWORD *)(v13 + 4 * v103);
  v90 = *(_DWORD *)(v89 + 16);
  if ( a1 >= *(_DWORD *)(v89 + 8) + *(_DWORD *)(v90 + 28) )
  {
    v91 = 4 * v103 + 4;
    v14 = 0;
    do
    {
      v93 = *(_DWORD *)(a2 + 36);
      v94 = v93 == v90;
      if ( v93 != v90 )
        v94 = v93 == 0;
      if ( v94 )
      {
        v95 = sub_29E604(v13, v88, v115);
        v10 = *(_DWORD *)(a2 + 56);
        if ( v95 )
        {
          v26 = v88;
          v14 = 1;
        }
      }
      if ( v10 <= ++v88 )
        break;
      v13 = *(_DWORD *)(a2 + 48);
      v92 = *(_DWORD *)(v13 + v91);
      v91 += 4;
      v90 = *(_DWORD *)(v92 + 16);
    }
    while ( a1 >= *(_DWORD *)(v90 + 28) + *(_DWORD *)(v92 + 8) );
    if ( v14 )
    {
      v27 = v115[0];
LABEL_219:
      v28 = v27 == 1;
      goto LABEL_30;
    }
  }
  v87 = v103 - 1;
LABEL_221:
  if ( v87 < 0 )
  {
LABEL_229:
    v27 = v115[0];
    LOBYTE(v14) = 0;
    goto LABEL_219;
  }
  v96 = 4 * v87;
  while ( 1 )
  {
    v97 = *(_DWORD *)(a2 + 36);
    v98 = *(_DWORD *)(a2 + 48);
    if ( !v97 || v97 == *(_DWORD *)(*(_DWORD *)(v98 + v96) + 16) )
    {
      if ( sub_29E604(v98, v87, v115) )
        break;
    }
    --v87;
    v96 -= 4;
    if ( v87 == -1 )
      goto LABEL_229;
  }
  v27 = v115[0];
  LOBYTE(v14) = 1;
  v26 = v87;
  v28 = v115[0] == 1;
LABEL_30:
  v12 = v28;
  v8[5] = v26;
  v16 = v27 == 2;
  v8[4] = v27;
  if ( v27 != 2 )
    goto LABEL_57;
  v10 = *(_DWORD *)(a2 + 56);
LABEL_35:
  v29 = v26 + 1;
  v15 = 4 - (a1 & 3);
  if ( v26 + 1 < v10 )
  {
    v30 = *(_DWORD *)(a2 + 48) + 4 * v26;
    while ( 1 )
    {
      v31 = *(_DWORD *)(v30 + 4);
      v30 += 4;
      v32 = *(_DWORD *)(v31 + 16);
      v33 = *(_DWORD *)(v32 + 28) + *(_DWORD *)(v31 + 8);
      if ( a1 < v33 )
      {
        v34 = *(_DWORD *)(a2 + 36);
        v35 = v34 == 0;
        if ( v34 )
          v35 = v32 == v34;
        if ( v35 )
          break;
      }
      if ( ++v29 == v10 )
        goto LABEL_45;
    }
    v36 = v33 - a1;
    if ( v15 >= v36 )
      v15 = v36;
  }
LABEL_45:
  if ( v15 == 3 )
  {
    if ( (a1 & 1) != 0 )
      v15 = 1;
    else
      v15 = 2;
  }
LABEL_58:
  v38 = *(int **)(a2 + 40);
  if ( v38 )
  {
    v39 = *v38;
    if ( (*(_DWORD *)(v39 + 12) & 0x200000) == 0 )
    {
      v40 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v39 + 4) + 4);
      if ( v40 == 2 )
      {
        v78 = *(unsigned __int8 *)(*(_DWORD *)(v39 + 24) + 28);
        v79 = (unsigned __int8)(v78 + 106);
        v80 = v79 > 1;
        if ( v79 > 1 )
          v80 = (unsigned __int8)(v78 + 126) > 1u;
        v12 = !v80;
        if ( v78 == 134 )
          v12 |= 1u;
      }
      else
      {
        v41 = v14 ^ 1;
        if ( v40 == 5 )
          v42 = v41 & 1;
        else
          v42 = 0;
        if ( v42 )
        {
          v84 = *(_BYTE *)(v39 + 38) & 3;
          v85 = *(_BYTE *)(v39 + 36) & 0xF;
          v86 = v85 == 15;
          if ( v85 != 15 )
            v86 = v84 == 1;
          v12 = v86;
        }
        else if ( v40 == 20 )
        {
          v12 = *(_WORD *)(v39 + 26) & 8;
        }
      }
    }
  }
  v43 = *(_DWORD *)(a2 + 68);
  if ( v9[9] )
    v12 = 1;
  if ( v16 )
  {
    v44 = *(_DWORD *)(a2 + 60);
    *(_DWORD *)(a2 + 108) = a3;
    *(_DWORD *)(a2 + 100) = 4;
    v45 = v44 & 0x40000000;
    if ( !v45 )
    {
      *(_DWORD *)(a2 + 104) = v15;
      v104 = ((int (__fastcall *)(unsigned int, unsigned int *, int, int))v43)(a1, &v114, v15, a2);
      if ( a3 )
      {
        v46 = (char *)&v114 + v15 - 1;
        do
        {
          v47 = (unsigned __int8)*v46--;
          v45 = v47 | (v45 << 8);
        }
        while ( &v113 != v46 );
        v43 = (int)sub_29E640;
      }
      else
      {
        v62 = &v114;
        v45 = 0;
        do
        {
          v63 = *(unsigned __int8 *)v62;
          v62 = (unsigned int *)((char *)v62 + 1);
          ++a3;
          v45 = v63 | (v45 << 8);
        }
        while ( v15 > a3 );
        v43 = (int)sub_29E640;
      }
      v48 = v104;
      if ( !v104 )
        goto LABEL_87;
      goto LABEL_76;
    }
  }
  else
  {
    *(_DWORD *)(a2 + 100) = 4;
    *(_DWORD *)(a2 + 108) = v106;
  }
  if ( !v12 )
  {
    v15 = 4;
    *(_DWORD *)(a2 + 104) = 4;
    v105 = ((int (__fastcall *)(unsigned int, unsigned int *, int, int))v43)(a1, &v114, 4, a2);
    if ( v106 )
      LOWORD(v43) = (unsigned __int16)sub_2A0BF0;
    v45 = v114;
    if ( v106 )
      HIWORD(v43) = (unsigned int)sub_2A0BF0 >> 16;
    else
      v43 = 3056;
    if ( !v106 )
    {
      HIWORD(v43) = 42;
      v45 = bswap32(v114);
    }
    goto LABEL_86;
  }
  *(_DWORD *)(a2 + 104) = 2;
  v52 = ((int (__fastcall *)(unsigned int, unsigned int *))v43)(a1, &v114);
  v105 = v52;
  v45 = (unsigned __int16)v114;
  if ( v106 )
  {
    if ( v52 )
      goto LABEL_94;
  }
  else
  {
    v45 = (unsigned __int16)__rev16((unsigned __int16)v114);
    if ( v52 )
      goto LABEL_94;
  }
  v64 = (v45 & 0xE800) == 59392;
  if ( (v45 & 0xE800) != 0xE800 )
    v64 = (v45 & 0xF800) == 61440;
  if ( v64 )
  {
    v43 = (int)sub_29F77C;
    v65 = v45 << 16;
    v15 = 4;
    v105 = (*(int (__fastcall **)(unsigned int, unsigned int *, int, int))(a2 + 68))(a1 + 2, &v114, 2, a2);
    v66 = (unsigned __int16)v114;
    if ( !v106 )
      v66 = (unsigned __int16)__rev16((unsigned __int16)v114);
    v45 = v66 | v65;
    if ( v9[10] != a1 )
      goto LABEL_95;
LABEL_135:
    v67 = *v9;
    if ( *v9 )
    {
      v68 = *v9 & 0xF;
LABEL_137:
      v69 = v68 == 8;
      if ( v68 == 8 )
      {
        v70 = 0;
      }
      else
      {
        v70 = 2 * v67;
        v67 &= 0xE0u;
      }
      if ( v69 )
        v9[1] = v70;
      else
        v70 &= 0x1Eu;
      if ( !v69 )
        v9[1] = v70 | v67;
    }
    goto LABEL_86;
  }
LABEL_94:
  v43 = (int)sub_29D7D0;
  v15 = 2;
  if ( v9[10] == a1 )
    goto LABEL_135;
LABEL_95:
  v53 = a1;
  *v9 = 0;
  v9[10] = a1;
  if ( !a1 )
    goto LABEL_86;
  v109 = v15;
  v54 = 1;
  v110 = v43;
  v55 = 0;
  LOBYTE(v111) = 0;
  v108 = v12;
  v56 = v106;
  while ( !(*(int (__fastcall **)(unsigned int, int))(a2 + 80))(v53, a2) )
  {
    v53 -= 2;
    v59 = (*(int (__fastcall **)(unsigned int, unsigned __int16 *, int, int))(a2 + 68))(v53, &v112, 2, a2);
    if ( v59 )
      goto LABEL_180;
    v60 = v112;
    if ( !v56 )
      v60 = (unsigned __int16)__rev16(v112);
    v61 = v60 & 0xF800;
    if ( v55 )
    {
      if ( v61 >= 0xE800 )
      {
        v57 = 0;
        goto LABEL_115;
      }
      if ( (v54 & 1) != 0 )
      {
        v81 = v55;
        v12 = v108;
        v15 = v109;
        v43 = v110;
        goto LABEL_177;
      }
      if ( (v60 & 0xFF00) != 0xBF00 )
      {
        v55 = v54 & 1;
        v57 = 1;
LABEL_101:
        v54 = (v54 + 2) | 1;
        goto LABEL_102;
      }
    }
    else if ( (v60 & 0xFF00) != 0xBF00 )
    {
      goto LABEL_113;
    }
    v55 = v60 & 0xF;
    if ( (v60 & 0xF) == 0 )
    {
LABEL_113:
      v57 = 1;
      goto LABEL_114;
    }
    v71 = *(_DWORD *)(a2 + 64);
    v115[0] = 0;
    if ( !v71 )
      goto LABEL_165;
    if ( !*(_DWORD *)(a2 + 56) )
      goto LABEL_165;
    v72 = *(_DWORD *)(a2 + 48);
    v73 = *(_DWORD **)v72;
    if ( (*(_DWORD *)(*(_DWORD *)v72 + 12) & 0x200000) != 0 || *(_DWORD *)(*(_DWORD *)(*v73 + 4) + 4) != 5 )
      goto LABEL_165;
    if ( !v53 || (v74 = *(_DWORD *)(v71 + 20), v74 == -1) )
    {
      if ( v53 < *(_DWORD *)(v73[4] + 28) + v73[2] )
        goto LABEL_164;
      goto LABEL_163;
    }
    if ( v53 >= *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v72 + 4 * v74) + 16) + 28)
              + *(_DWORD *)(*(_DWORD *)(v72 + 4 * v74) + 8) )
    {
      v59 = *(_DWORD *)(v71 + 20);
LABEL_163:
      v77 = sub_29E5D8(a2, v59, v115);
      v61 = v60 & 0xF800;
      if ( v77 )
        goto LABEL_160;
      goto LABEL_164;
    }
    if ( v74 - 1 >= 0 )
    {
      v107 = v45;
      v75 = v74 - 1;
      while ( !sub_29E5D8(a2, v75, v115) )
      {
        v76 = v75-- != 0;
        if ( !v76 )
        {
          v45 = v107;
          v61 = v60 & 0xF800;
          goto LABEL_164;
        }
      }
      v45 = v107;
      v61 = v60 & 0xF800;
LABEL_160:
      if ( v115[0] != 1 )
        goto LABEL_161;
      goto LABEL_165;
    }
LABEL_164:
    if ( *(_DWORD *)(v71 + 12) == 1 )
    {
LABEL_161:
      v57 = 1;
      v55 = 0;
      goto LABEL_114;
    }
LABEL_165:
    v55 = v60;
    v111 = v54 >> 1;
    v57 = 0;
LABEL_114:
    if ( v61 < 0xE800 )
      goto LABEL_101;
LABEL_115:
    ++v54;
LABEL_102:
    if ( v54 > 7 )
      v58 = v57 & 1;
    else
      v58 = 0;
    if ( v58 )
    {
LABEL_180:
      v12 = v108;
      v15 = v109;
      v43 = v110;
      goto LABEL_135;
    }
    if ( !v53 )
      break;
  }
  v81 = v55;
  v28 = v55 == 0;
  v12 = v108;
  v15 = v109;
  v43 = v110;
  if ( v28 || (v54 & 1) == 0 )
    goto LABEL_135;
LABEL_177:
  v67 = (v81 << v111) & 0x1F | v81 & 0xE0;
  v68 = (v81 << v111) & 0xF;
  if ( v68 )
  {
    *v9 = v67;
    goto LABEL_137;
  }
  *v9 = 0;
LABEL_86:
  v48 = v105;
  if ( v105 )
  {
LABEL_76:
    (*(void (__fastcall **)(int, unsigned int, int))(a2 + 72))(v48, a1, a2);
    return -1;
  }
LABEL_87:
  v50 = a1;
  if ( *(int *)(a2 + 60) < 0 )
    v50 = 0;
  ((void (__fastcall *)(unsigned int, int, int))v43)(v50, a2, v45);
  result = v15;
  if ( v12 )
  {
    v51 = v9[1];
    v9[10] += v15;
    *v9 = v51;
  }
  return result;
}
