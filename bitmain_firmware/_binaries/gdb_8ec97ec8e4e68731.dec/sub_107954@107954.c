int __fastcall sub_107954(int a1, int *a2, unsigned int a3, char *a4, int a5, _DWORD *a6, int a7)
{
  int v11; // r9
  __int64 v12; // r0
  int v13; // r3
  unsigned int v14; // r0
  char *v15; // r2
  int v16; // r3
  int *v17; // r2
  int v18; // r8
  int v19; // r3
  int v20; // r3
  int v21; // r1
  int v22; // r0
  int v23; // r3
  int v24; // r0
  int v25; // r3
  int v26; // r6
  int v27; // r3
  int v28; // r1
  int v29; // r0
  int v30; // r6
  int v31; // r3
  _BOOL4 v32; // r2
  int v33; // r0
  int v34; // r0
  int v35; // r10
  int v36; // r6
  char *v37; // r0
  int v38; // r3
  int v39; // r2
  _BOOL4 v40; // r2
  int *v41; // r8
  int *v42; // r2
  int v43; // r3
  unsigned int v44; // r8
  int v45; // r0
  int *v46; // r8
  int v47; // r0
  int v48; // r2
  int v49; // r0
  int v50; // r1
  void *v51; // r10
  int v52; // r9
  int v53; // r8
  _DWORD *v54; // r0
  int v55; // r6
  int v56; // r3
  int *v57; // r6
  int v58; // r0
  __int64 v59; // r0
  char *v61; // [sp+Ch] [bp-4h] BYREF

  v11 = sub_1B7250(a6);
  LODWORD(v12) = sub_E6824();
  if ( (_DWORD)v12 )
  {
    switch ( a1 )
    {
      case 12:
      case 31:
        v31 = a6[38];
        if ( v31 == -1 )
          goto LABEL_136;
        a3 += *(_DWORD *)(a5 + 4 * v31);
        goto LABEL_16;
      case 32:
      case 50:
      case 52:
      case 64:
      case 74:
      case 96:
      case 128:
      case 160:
      case 254:
        goto LABEL_23;
      case 34:
      case 36:
        v35 = (unsigned __int8)*a4;
        if ( !*a4 )
        {
          if ( dword_478974 <= 0 )
            goto LABEL_126;
          if ( dword_46D438 )
          {
            v57 = (int *)dword_4788E0;
            v58 = ((int (__fastcall *)(int, unsigned int))loc_169FA0)(v11, a3 + dword_47B294);
            sub_E6044(v57, v35, v58);
          }
          dword_478980 = 0;
          v36 = ((int (*)(void))loc_E6400)();
          LODWORD(v12) = sub_E5CB4(
                           *(_DWORD *)(v36 + 12),
                           &dword_4788E8,
                           *(char **)(v36 + 8),
                           0,
                           *(_DWORD *)(v36 + 20),
                           *(_DWORD *)(v36 + 20) + a3);
          if ( (*(_BYTE *)(*(_DWORD *)(v36 + 12) + 20) & 0x1F) == 4 )
            LODWORD(v12) = sub_104E38(*(_DWORD *)(v36 + 12), v12, (int)(a6 + 12));
          a2 = &dword_489668;
          dword_47B298 = 0;
          goto LABEL_18;
        }
        v48 = a6[38];
        dword_46D438 = 0;
        if ( v48 == -1 )
          goto LABEL_135;
        a3 = ((int (__fastcall *)(int, unsigned int))loc_169FA0)(v11, a3 + *(_DWORD *)(a5 + 4 * v48));
        dword_47B294 = a3;
        goto LABEL_24;
      case 38:
      case 40:
      case 44:
        goto LABEL_75;
      case 42:
        if ( !a4 )
          goto LABEL_39;
        a2 = &dword_489668;
        LODWORD(v12) = sub_1B6B44((int)a6, a4);
        goto LABEL_18;
      case 56:
      case 98:
      case 108:
      case 208:
        goto LABEL_16;
      case 60:
        goto LABEL_82;
      case 68:
        a3 += dword_47B298;
        if ( !dword_478980 || dword_46D438 )
        {
          v46 = (int *)dword_4788E0;
          v47 = ((int (__fastcall *)(int, unsigned int))loc_169FA0)(v11, a3);
          LODWORD(v12) = sub_E6044(v46, (int)a2, v47);
        }
        else
        {
          v33 = v11;
          v11 = dword_4788E0;
          v34 = ((int (__fastcall *)(int))loc_169FA0)(v33);
          LODWORD(v12) = sub_E6044((int *)v11, (int)a2, v34);
          dword_46D438 = 1;
        }
        goto LABEL_16;
      case 70:
        goto LABEL_40;
      case 72:
        goto LABEL_43;
      case 100:
        goto LABEL_32;
      case 130:
        sub_E5FA0();
        v26 = *(_DWORD *)(sub_1B6B24(dword_47B2A0, dword_47B26C) + 44);
        if ( v26 == *(_DWORD *)(sub_1B6B24(dword_47B2A0, dword_47B26C) + 40) )
        {
          v49 = sub_1B6B24(dword_47B2A0, dword_47B26C);
          v50 = dword_47B26C;
          if ( v26 )
          {
            *(_DWORD *)(v49 + 44) = 2 * v26;
            v51 = *(void **)(sub_1B6B24(dword_47B2A0, v50) + 36);
            v52 = sub_1B6B24(dword_47B2A0, dword_47B26C);
            *(_DWORD *)(v52 + 36) = sub_93050(v51, 32 * v26);
          }
          else
          {
            *(_DWORD *)(v49 + 44) = 10;
            v55 = sub_1B6B24(dword_47B2A0, v50);
            *(_DWORD *)(v55 + 36) = sub_93028(0xA0u);
          }
        }
        v27 = sub_1B6B24(dword_47B2A0, dword_47B26C);
        v28 = dword_47B26C;
        v11 = *(_DWORD *)(v27 + 40);
        v29 = dword_47B2A0;
        *(_DWORD *)(v27 + 40) = v11 + 1;
        v30 = *(_DWORD *)(sub_1B6B24(v29, v28) + 36);
        *(_DWORD *)(v30 + 16 * v11) = sub_327254(a4);
        a2 = (int *)(v30 + 16 * v11);
        a2[3] = 10;
        a2[1] = a3;
        a2[2] = (int)sub_93094(0xAu, 4u);
        sub_104DD8(v11);
        LODWORD(v12) = ((int (__fastcall *)(char *))loc_E5D8C)(a4);
        goto LABEL_16;
      case 132:
        v25 = a6[38];
        if ( v25 == -1 )
          goto LABEL_137;
        a3 += *(_DWORD *)(a5 + 4 * v25);
        LODWORD(v12) = ((int (__fastcall *)(char *))loc_E5D8C)(a4);
        goto LABEL_16;
      case 162:
        v24 = sub_E5FF8();
        LODWORD(v12) = ((int (__fastcall *)(int))loc_E5D8C)(v24);
        goto LABEL_16;
      case 164:
        v23 = a6[38];
        if ( v23 != -1 )
          goto LABEL_41;
        sub_94700((int)"dbxread.c", 2864, "sect_index_text not initialized");
LABEL_75:
        if ( !dword_47B290 )
        {
          v37 = strchr(a4, 58);
          if ( v37 )
          {
            if ( v37[1] == 83 )
            {
              v56 = a6[38];
              if ( v56 != -1 )
              {
                a3 += *(_DWORD *)(a5 + 4 * v56);
                goto LABEL_27;
              }
              sub_94700((int)"dbxread.c", 2827, "sect_index_text not initialized");
LABEL_135:
              sub_94700((int)"dbxread.c", 2593, "sect_index_text not initialized");
LABEL_136:
              sub_94700((int)"dbxread.c", 2683, "sect_index_text not initialized");
LABEL_137:
              sub_94700((int)"dbxread.c", 2727, "sect_index_text not initialized");
              goto LABEL_138;
            }
          }
        }
        switch ( a1 )
        {
          case '(':
LABEL_43:
            v23 = a6[40];
            if ( v23 != -1 )
              goto LABEL_41;
            v12 = sub_94700((int)"dbxread.c", 2855, "Section index is uninitialized");
            goto LABEL_45;
          case ',':
            v23 = a6[41];
            if ( v23 != -1 )
              goto LABEL_41;
            LODWORD(v12) = sub_94700((int)"dbxread.c", 2859, "sect_index_rodata not initialized");
LABEL_126:
            if ( dword_47AC88 <= 0 )
            {
              a2 = &dword_489668;
              goto LABEL_19;
            }
            a2 = &dword_489668;
            LODWORD(v12) = sub_F43B4(&off_46D334, "N_LBRAC/N_RBRAC symbol mismatch at symtab pos %d", dword_478988);
            goto LABEL_18;
          case '&':
            goto LABEL_40;
        }
        sub_94700((int)"dbxread.c", 2842, "failed internal consistency check");
LABEL_82:
        if ( a4 )
        {
          LODWORD(v12) = strcmp(a4, "gcc2_compiled.");
          if ( (_DWORD)v12 )
            LOWORD(v38) = -19912;
          else
            LOWORD(v38) = -30323;
          if ( (_DWORD)v12 )
            v39 = 1;
          else
            v39 = 2;
          HIWORD(v38) = 71;
          LOWORD(a2) = -27032;
          if ( !(_DWORD)v12 )
            *(_BYTE *)v38 = v39;
          HIWORD(a2) = 72;
          if ( (_DWORD)v12 )
            *(_DWORD *)(v38 + 100) = v39;
          goto LABEL_18;
        }
        goto LABEL_39;
      case 192:
        v40 = a2 == (int *)1;
        if ( !dword_47B29C )
          v40 = 0;
        if ( !v40 )
        {
          a3 += dword_47B298;
          LODWORD(v12) = sub_E637C((int)a2, a3);
        }
        goto LABEL_16;
      case 194:
        a2 = 0;
        v11 = *(_DWORD *)(sub_1B6B24(dword_47B2A0, dword_47B26C) + 36);
        break;
      case 224:
        v32 = a2 == (int *)1;
        if ( !dword_47B29C )
          v32 = 0;
        if ( !v32 )
        {
          a3 += dword_47B298;
          if ( dword_478974 > 0 )
          {
            LODWORD(v12) = ((int (*)(void))loc_E6400)();
            v11 = v12;
            if ( *(int **)(v12 + 28) != a2 && dword_47AC88 > 0 )
              LODWORD(v12) = sub_F43B4(&off_46D334, "N_LBRAC/N_RBRAC symbol mismatch at symtab pos %d", dword_478988);
            a2 = &dword_4788E8;
            if ( dword_4788E8 && dword_47AC88 > 0 )
              LODWORD(v12) = sub_F43B4(
                               &off_46D334,
                               "misplaced N_LBRAC entry; discarding local symbols which have no enclosing block");
            v13 = *(_DWORD *)v11;
            dword_4788E8 = *(_DWORD *)v11;
            if ( dword_478974 <= 1 )
            {
              dword_478980 = 0;
            }
            else if ( v13 )
            {
              v14 = *(_DWORD *)(v11 + 20);
              if ( v14 > a3 )
              {
                if ( dword_47AC88 > 0 )
                  sub_F43B4(&off_46D334, "block start larger than block end");
                v14 = a3;
                *(_DWORD *)(v11 + 20) = a3;
              }
              LODWORD(v12) = sub_E5CB4(0, &dword_4788E8, *(char **)(v11 + 8), 0, v14, a3);
            }
          }
          else if ( dword_47AC88 > 0 )
          {
            LODWORD(v12) = sub_F43B4(&off_46D334, "N_LBRAC/N_RBRAC symbol mismatch at symtab pos %d", dword_478988);
          }
        }
        goto LABEL_16;
      case 226:
        LODWORD(v12) = sub_20B9C8(a4);
        goto LABEL_16;
      case 228:
        LODWORD(v12) = sub_20BAD8(a6);
        goto LABEL_16;
      default:
        v15 = sub_98B08(a1, a1 >> 31);
        if ( dword_47AC88 > 0 )
          sub_F43B4(&off_46D334, "unknown symbol type %s", v15);
LABEL_23:
        if ( a4 )
          goto LABEL_24;
        goto LABEL_39;
    }
    while ( 1 )
    {
      LODWORD(v12) = sub_1B6B24(dword_47B2A0, dword_47B26C);
      if ( *(_DWORD *)(v12 + 40) <= (int)a2 )
        break;
      if ( !j_strcmp(*(const char **)(v11 + 16 * (_DWORD)a2), a4) && a3 == *(_DWORD *)(v11 + 16 * (_DWORD)a2 + 4) )
      {
        LODWORD(v12) = sub_104DD8((int)a2);
        goto LABEL_16;
      }
      a2 = (int *)((char *)a2 + 1);
    }
    if ( dword_47AC88 > 0 )
      LODWORD(v12) = sub_F43B4(
                       &off_46D334,
                       "\"repeated\" header file %s not previously seen, at symtab pos %d",
                       a4,
                       dword_478988);
    goto LABEL_16;
  }
  if ( a1 != 100 )
    return v12;
LABEL_32:
  v19 = a6[38];
  if ( v19 == -1 )
  {
LABEL_139:
    sub_94700((int)"dbxread.c", 2691, "sect_index_text not initialized");
    goto LABEL_140;
  }
  a2 = &dword_489668;
  v20 = *(_DWORD *)(a5 + 4 * v19);
  dword_47B29C = 0;
  a3 += v20;
  LODWORD(v12) = sub_E6824();
  if ( !(_DWORD)v12 )
  {
LABEL_37:
    if ( !*a4 )
    {
LABEL_19:
      *a2 = a1;
      return v12;
    }
    dword_47B298 = 0;
    sub_20C16C(v12);
    sub_E6770((int)a6, (int)a4, 0, a3, a7);
    LODWORD(v12) = sub_E6498((int)"stabs");
LABEL_18:
    if ( *a4 == 35 )
    {
LABEL_28:
      v61 = a4;
      LODWORD(v12) = sub_20A400(&v61);
      v18 = v12;
      if ( (int)v12 >= 0 )
      {
        LODWORD(v12) = sub_20A3C8();
        if ( !(_DWORD)v12 )
          LODWORD(v12) = sub_20A2D4(v18, 0, a4, a3);
      }
    }
    goto LABEL_19;
  }
  if ( dword_489668 != 100 )
  {
    v21 = a6[38];
    if ( v21 != -1 )
    {
      v22 = sub_E7454(a3, v21);
      LODWORD(v12) = sub_20C194(v22);
      goto LABEL_37;
    }
LABEL_140:
    sub_94700((int)"dbxread.c", 2706, "sect_index_text not initialized");
    goto LABEL_141;
  }
  LODWORD(v12) = sub_E656C(dword_4788E0, (int)a4);
LABEL_16:
  if ( a4 )
  {
LABEL_17:
    a2 = &dword_489668;
    goto LABEL_18;
  }
LABEL_39:
  while ( 1 )
  {
    sub_94700(
      (int)"dbxread.c",
      3017,
      "%s: Assertion `%s' failed.",
      "void process_one_symbol(int, int, CORE_ADDR, const char*, const section_offsets*, objfile*, language)",
      "name");
LABEL_40:
    v23 = a6[39];
    if ( v23 == -1 )
      break;
LABEL_41:
    a3 += *(_DWORD *)(a5 + 4 * v23);
    if ( a4 )
    {
LABEL_24:
      LODWORD(v12) = strchr(a4, 58);
      if ( !(_DWORD)v12 || (v16 = *(unsigned __int8 *)(v12 + 1), v16 != 70) && v16 != 102 )
      {
LABEL_27:
        v17 = a2;
        a2 = &dword_489668;
        LODWORD(v12) = sub_20A480(a3, a4, v17, a1, a6);
        if ( *a4 != 35 )
          goto LABEL_19;
        goto LABEL_28;
      }
LABEL_45:
      if ( a1 == 36 )
      {
        v43 = a6[38];
        if ( v43 == -1 )
        {
LABEL_138:
          sub_94700((int)"dbxread.c", 2916, "sect_index_text not initialized");
          goto LABEL_139;
        }
        v44 = *(_DWORD *)(a5 + 4 * v43);
        if ( v44 == a3 )
        {
          LODWORD(v12) = ((int (__fastcall *)(int, _DWORD))loc_16C5C4)(v11, HIDWORD(v12));
          if ( (_DWORD)v12 )
          {
            v45 = sub_E6824();
            LODWORD(v12) = sub_104C88(a4, v45);
            if ( (_DWORD)v12 )
              a3 = v12;
            else
              a3 = v44;
          }
        }
      }
      dword_47B298 = a3;
      dword_478980 = 1;
      if ( dword_478974 <= 1 )
      {
        if ( dword_478974 == 1 )
        {
          v53 = ((int (*)(void))loc_E6400)();
          v54 = sub_E5CB4(*(_DWORD *)(v53 + 12), &dword_4788E8, *(char **)(v53 + 8), 0, *(_DWORD *)(v53 + 20), a3);
          if ( (*(_BYTE *)(*(_DWORD *)(v53 + 12) + 20) & 0x1F) == 4 )
            sub_104E38(*(_DWORD *)(v53 + 12), (int)v54, (int)(a6 + 12));
        }
        v41 = sub_E637C(0, a3);
        v42 = a2;
        a2 = &dword_489668;
        LODWORD(v12) = sub_20A480(a3, a4, v42, a1, a6);
        v41[3] = v12;
      }
      else
      {
        if ( dword_47AC88 <= 0 )
          goto LABEL_17;
        a2 = &dword_489668;
        LODWORD(v12) = sub_F43B4(&off_46D334, "unmatched N_LBRAC before symtab pos %d", dword_478988);
      }
      goto LABEL_18;
    }
  }
LABEL_141:
  v59 = sub_94700((int)"dbxread.c", 2849, "sect_index_data not initialized");
  LODWORD(v12) = sub_108928(v59, HIDWORD(v59));
  return v12;
}
