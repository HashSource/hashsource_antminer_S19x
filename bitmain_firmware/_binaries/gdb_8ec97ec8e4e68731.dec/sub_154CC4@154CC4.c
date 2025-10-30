void __fastcall sub_154CC4(_DWORD *a1, char *a2, int a3, int a4)
{
  int v4; // r8
  int v5; // r6
  int v6; // r9
  char *v7; // r5
  _DWORD *v8; // r4
  int v9; // r10
  _DWORD *v10; // r7
  int v11; // lr
  int v12; // r12
  int v13; // r6
  int v14; // r10
  char *v15; // r5
  int v16; // r0
  int v17; // r0
  const char **v18; // r3
  int v19; // r0
  int *v20; // r0
  int v21; // r1
  int v22; // r0
  const char *v23; // r2
  int v24; // r5
  int *v25; // r0
  int v26; // r0
  int *v27; // r0
  int v28; // r1
  int v29; // r0
  int v30; // r0
  int v31; // r10
  int v32; // r6
  int v33; // r12
  char *v34; // r1
  _DWORD *v35; // r0
  int v36; // r3
  const char *v37; // r0
  int v38; // r2
  int v39; // r3
  unsigned int v40; // r10
  int v41; // r0
  const char *v42; // r0
  int v43; // r1
  int v44; // r3
  int v45; // r3
  int v46; // r2
  int p_dest; // r7
  int v48; // r9
  int v49; // r2
  char *v50; // r0
  char *v51; // r0
  int v52; // r1
  char *v53; // r0
  int v54; // r1
  int v55; // r0
  const char *v56; // r2
  int v57; // r10
  char *v58; // r5
  int v59; // r0
  int v60; // r10
  size_t v61; // r0
  char *v62; // r0
  char *v63; // r9
  int v64; // r10
  int v65; // r6
  const char *v66; // r0
  int v67; // r6
  int v68; // r10
  int v69; // r10
  unsigned int v70; // r9
  unsigned int v71; // r6
  int v72; // r3
  int v73; // r3
  int v74; // r2
  const char *v75; // r10
  int v76; // r3
  int v77; // r3
  int v78; // r0
  _DWORD *v79; // r5
  int v80; // r4
  _DWORD *v81; // r8
  char *v82; // r7
  int v83; // r10
  _DWORD *v84; // r4
  int v85; // r10
  char *v86; // r5
  int v87; // r8
  int v88; // r0
  char *v89; // r4
  int v90; // r0
  int *v91; // r0
  int v92; // r4
  char v93; // [sp+Fh] [bp-85h] BYREF
  int dest; // [sp+10h] [bp-84h] BYREF
  int *v95; // [sp+14h] [bp-80h]
  int v96; // [sp+18h] [bp-7Ch]
  char *v97; // [sp+1Ch] [bp-78h]
  char *s[20]; // [sp+24h] [bp-70h] BYREF

  v4 = a3;
  v5 = a4;
  v6 = *(_DWORD *)a2;
  v7 = a2;
  v8 = a1;
  v9 = *(_DWORD *)a2 + 1;
  v10 = &a1[4 * *(_DWORD *)a2];
  v11 = *(_DWORD *)(*a1 + 108);
  *(_DWORD *)a2 = v9;
  v12 = v10[4];
  switch ( v12 )
  {
    case 23:
      (**(void (***)(void))(*a1 + 32))();
      sub_25A6BC("[", v4);
      (**(void (__fastcall ***)(_DWORD *, char *, int, int))(*v8 + 32))(v8, v7, v4, 2);
      sub_25A6BC(&word_419FC8, v4);
      return;
    case 27:
      (**(void (***)(void))(*a1 + 32))();
      v42 = (const char *)&unk_364FF8;
      v43 = v4;
      goto LABEL_50;
    case 28:
      (**(void (***)(void))(*a1 + 32))();
      v42 = "->*";
      v43 = v4;
LABEL_50:
      sub_25A6BC(v42, v43);
      (**(void (__fastcall ***)(_DWORD *, char *, int, int))(*v8 + 32))(v8, v7, v4, 17);
      return;
    case 29:
      v37 = (const char *)sub_26725C(v10[8], v10[9]);
      v38 = *(_DWORD *)v7;
      v39 = v10[13];
      v97 = (char *)v37;
      v40 = v10[12];
      *(_DWORD *)v7 = v38 + 2;
      v96 = v39;
      sub_256850("TypeInstance(", v4);
      if ( __SPAIR64__(v96, v40) >= 1 )
      {
        v41 = *(_DWORD *)v7 + 1;
        *(_DWORD *)v7 = v41;
        sub_255DB0(v8[4 * v41], "", v4, 0);
      }
      sub_256850(&word_3D7D40, v4);
      *(_DWORD *)v7 += 2;
      (**(void (__fastcall ***)(_DWORD *, char *, int, int))(*v8 + 32))(v8, v7, v4, 16);
      if ( ((unsigned __int8)v97 & 1) != 0 )
        sub_256850(",const", v4);
      if ( ((unsigned __int8)v97 & 2) != 0 )
        sub_256850(",volatile", v4);
      sub_256850(")", v4);
      return;
    case 31:
      v44 = *(_DWORD *)(v11 + 4);
      v12 = v10[8];
      *(_DWORD *)a2 = v6 + 3;
      if ( !v44 )
        goto LABEL_60;
      if ( v12 == v44 )
        goto LABEL_142;
      v45 = v11 + 16;
      do
      {
        v46 = *(_DWORD *)(v45 + 4);
        v11 = v45;
        if ( !v46 )
        {
LABEL_60:
          if ( v12 )
LABEL_62:
            sub_946E0("Invalid expression");
          p_dest = 3;
          v48 = 1;
          v49 = 3;
LABEL_119:
          if ( v5 <= p_dest )
          {
            (**(void (__fastcall ***)(_DWORD *, char *, int, int))(*a1 + 32))(a1, a2, v4, v48 + p_dest);
            LOWORD(v75) = 16476;
            if ( !v48 )
            {
              HIWORD(v75) = 53;
              goto LABEL_123;
            }
            HIWORD(v75) = 53;
            v97 = (char *)v48;
            goto LABEL_141;
          }
          v75 = "???";
          v77 = 0;
          v97 = (char *)v48;
LABEL_140:
          v95 = (int *)v77;
          v96 = v49;
          sub_25A6BC("(", v4);
          v77 = (int)v95;
          v49 = v96;
          goto LABEL_135;
        }
        v45 += 16;
      }
      while ( v46 != v12 );
LABEL_142:
      p_dest = 3;
      v48 = 1;
      v97 = (char *)1;
      v49 = 3;
      v75 = *(const char **)v11;
LABEL_134:
      v77 = v12;
      if ( v5 > p_dest )
        goto LABEL_140;
LABEL_135:
      if ( v77 <= 34 )
      {
        (**(void (__fastcall ***)(_DWORD *, char *, int, const char *))(*v8 + 32))(v8, v7, v4, &v97[p_dest]);
        if ( !v48 )
        {
          if ( *v75 == 44 )
          {
            v48 = (int)v97;
            sub_25A418(v4, "%s ", v75);
            goto LABEL_124;
          }
          v48 = (int)v97;
LABEL_123:
          sub_25A418(v4, " %s ", v75);
LABEL_124:
          if ( v48 )
            v76 = p_dest;
          else
            v76 = p_dest + 1;
          (**(void (__fastcall ***)(_DWORD *, char *, int, int))(*v8 + 32))(v8, v7, v4, v76);
          goto LABEL_128;
        }
LABEL_141:
        v48 = (int)v97;
        sub_25A418(v4, " %s= ", v75);
        goto LABEL_124;
      }
      if ( v97 )
      {
        (**(void (__fastcall ***)(_DWORD *, char *, int, int))(*v8 + 32))(v8, v7, v4, 17);
        sub_25A6BC(v75, v4);
      }
      else
      {
        v97 = (char *)v49;
        sub_25A6BC(v75, v4);
        if ( v97 == (char *)18 )
        {
LABEL_171:
          sub_25A6BC("(", v4);
          (**(void (__fastcall ***)(_DWORD *, char *, int, int))(*v8 + 32))(v8, v7, v4, 16);
          sub_25A6BC(")", v4);
        }
        else
        {
          (**(void (__fastcall ***)(_DWORD *, char *, int, int))(*v8 + 32))(v8, v7, v4, 16);
        }
      }
LABEL_128:
      if ( p_dest < v5 )
LABEL_6:
        sub_25A6BC(")", v4);
      return;
    case 32:
      *(_DWORD *)a2 = v6 + 3;
      sub_2594B0(a3, "VAL(");
      sub_255DB0(v10[8], "", v4, 0);
    case 35:
      if ( a4 <= 1 )
      {
        (**(void (***)(void))(*a1 + 32))();
        sub_25A6BC(" ? ", v4);
        (**(void (__fastcall ***)(_DWORD *, char *, int, int))(*v8 + 32))(v8, v7, v4, 15);
        sub_25A6BC(&off_3A6E68, v4);
        (**(void (__fastcall ***)(_DWORD *, char *, int, int))(*v8 + 32))(v8, v7, v4, 15);
        return;
      }
      sub_25A6BC("(", a3);
      (**(void (__fastcall ***)(_DWORD *, char *, int, int))(*v8 + 32))(v8, v7, v4, 15);
      sub_25A6BC(" ? ", v4);
      (**(void (__fastcall ***)(_DWORD *, char *, int, int))(*v8 + 32))(v8, v7, v4, 15);
      sub_25A6BC(&off_3A6E68, v4);
      v33 = *v8;
      v34 = v7;
      v35 = v8;
      v36 = 15;
      goto LABEL_40;
    case 36:
      (**(void (***)(void))(*a1 + 32))();
      sub_25A6BC("(", v4);
      (**(void (__fastcall ***)(_DWORD *, char *, int, int))(*v8 + 32))(v8, v7, v4, 2);
      sub_25A6BC(&off_3A6E68, v4);
      v33 = *v8;
      v34 = v7;
      v35 = v8;
      v36 = 2;
      goto LABEL_40;
    case 37:
      *(_DWORD *)a2 = v6 + 3;
      v31 = sub_26725C(v10[8], v10[9]);
      (**(void (__fastcall ***)(_DWORD *, char *, int, int))(*v8 + 32))(v8, v7, v4, 17);
      sub_2594B0(v4, " [");
      if ( v31 )
      {
        v32 = 0;
        while ( 1 )
        {
          ++v32;
          (**(void (__fastcall ***)(_DWORD *, char *, int, int))(*v8 + 32))(v8, v7, v4, 2);
          if ( v31 == v32 )
            break;
          sub_2594B0(v4, ", ");
        }
      }
      sub_2594B0(v4, (const char *)&word_419FC8);
      return;
    case 38:
      sub_266608(s);
      *(_DWORD *)v7 += 3;
      v29 = sub_26DAF4(v10[8], v28, v10[12], v10[13]);
      sub_266C84(v29, v4, s);
      return;
    case 39:
      sub_266608(s);
      *(_DWORD *)v7 += 3;
      v30 = sub_26DCD8(v10[8], &v8[4 * v6 + 12]);
      sub_266C84(v30, v4, s);
      return;
    case 40:
      *(_DWORD *)a2 = v6 + 4;
      v24 = v10[8];
      if ( !v24 )
        goto LABEL_29;
      v25 = *(int **)(v24 + 8);
      if ( !v25 )
        goto LABEL_29;
      if ( dword_46D448 )
      {
        if ( !sub_21B3C4(v25) )
        {
LABEL_29:
          v27 = (int *)v10[12];
          if ( dword_46D448 )
            goto LABEL_131;
LABEL_30:
          v19 = *v27;
LABEL_14:
          sub_25A6BC(v19, v4);
          return;
        }
        v91 = *(int **)(v24 + 8);
        if ( dword_46D448 )
          v26 = sub_21B3C4(v91);
        else
          v26 = *v91;
      }
      else
      {
        v26 = *v25;
        if ( !v26 )
        {
          v27 = (int *)v10[12];
          goto LABEL_30;
        }
      }
      sub_25A6BC(v26, v4);
      sub_25A6BC("::", v4);
      goto LABEL_29;
    case 41:
      *(_DWORD *)a2 = v6 + 3;
      if ( dword_46D448 )
        v23 = (const char *)sub_21B3C4(v10[8]);
      else
        v23 = *(const char **)v10[8];
      sub_25A418(v4, "%s@entry", v23);
      return;
    case 42:
      *(_DWORD *)a2 = v6 + 4;
      if ( dword_46D448 )
      {
        v27 = (int *)v10[12];
LABEL_131:
        v19 = sub_21B3C4(v27);
      }
      else
      {
        v19 = *(_DWORD *)v10[12];
      }
      goto LABEL_14;
    case 43:
      *(_DWORD *)a2 = v6 + 3;
      v22 = sub_26725C(v10[8], v10[9]);
      sub_25A418(v4, "$%d", v22);
      return;
    case 44:
      *(_DWORD *)a2 = v9 + 3 + (*((_QWORD *)v10 + 4) + 16LL) / 16;
      sub_25A418(a3, "$%s", (const char *)&a1[4 * v6 + 12]);
      return;
    case 45:
      *(_DWORD *)a2 = v6 + 3;
      v66 = (const char *)sub_26CCD4(v10[8]);
      sub_25A418(v4, "$%s", v66);
      return;
    case 46:
      *(_DWORD *)a2 = v6 + 3;
      v64 = sub_26725C(v10[8], v10[9]);
      (**(void (__fastcall ***)(_DWORD *, char *, int, int))(*v8 + 32))(v8, v7, v4, 17);
      sub_25A6BC(" (", v4);
      if ( v64 )
      {
        v65 = 0;
        while ( 1 )
        {
          ++v65;
          (**(void (__fastcall ***)(_DWORD *, char *, int, int))(*v8 + 32))(v8, v7, v4, 2);
          if ( v64 == v65 )
            break;
          sub_25A6BC(", ", v4);
        }
      }
      goto LABEL_6;
    case 47:
      *(_DWORD *)a2 = v6 + 4;
      v60 = sub_26725C(v10[12], v10[13]);
      sub_2594B0(v4, "[");
      (**(void (__fastcall ***)(_DWORD *, char *, int, int))(*v8 + 32))(v8, v7, v4, 17);
      if ( !((int (__fastcall *)(_DWORD, char **, int, _DWORD))loc_230078)(v10[8], s, 1024, 0) )
        sub_946E0("bad selector");
      if ( v60 )
      {
        v5 = 0;
        v61 = strlen(s[0]);
        p_dest = (int)&dest;
        v97 = " %s: ";
        memcpy(&dest, s[0], v61 + 1);
        do
        {
          v62 = strchr((const char *)p_dest, 58);
          v63 = v62;
          if ( !v62 )
          {
            sub_94700(
              (int)"expprint.c",
              263,
              "%s: Assertion `%s' failed.",
              "void print_subexp_standard(expression*, int*, ui_file*, precedence)",
              "nextS");
            goto LABEL_171;
          }
          *v62 = 0;
          ++v5;
          sub_2594B0(v4, v97, p_dest);
          p_dest = (int)(v63 + 1);
          (**(void (__fastcall ***)(_DWORD *, char *, int, int))(*v8 + 32))(v8, v7, v4, 2);
        }
        while ( v60 != v5 );
      }
      else
      {
        sub_2594B0(v4, " %s", s[0]);
      }
      sub_2594B0(v4, (const char *)&word_419FC8);
      if ( s[0] )
        free(s[0]);
      return;
    case 50:
      v57 = sub_26725C(v10[8], v10[9]);
      *(_DWORD *)v7 += 3 + ((unsigned int)(v57 + 16) >> 4);
      sub_2665F0(s);
      v58 = off_46D5A4[0][13];
      v59 = sub_1780B4(v8[1]);
      ((void (__fastcall *)(int, _DWORD, _DWORD *, int, _DWORD, _DWORD, char **))v58)(
        v4,
        *(_DWORD *)(v59 + 4),
        &v8[4 * v6 + 12],
        v57,
        0,
        0,
        s);
      return;
    case 51:
      v67 = v6 + 4;
      *(_DWORD *)a2 = v6 + 4;
      v68 = sub_26725C(v10[12], v10[13]);
      v69 = v68 - sub_26725C(v10[8], v10[9]);
      v70 = v69 + 1;
      if ( v10[20] == 38
        && (v78 = v8[1], v97 = (char *)v10[24], v97 == *(char **)(sub_1780B4(v78) + 4))
        && *(_DWORD *)(*v8 + 8) == 2 )
      {
        v95 = &dest;
        if ( v69 != -1 )
        {
          if ( v10[20] == 38 )
          {
            v97 = v7;
            v79 = v8;
            v96 = v4;
            v80 = 0;
            v81 = v10;
            dest = v69;
            v82 = &v93;
            do
            {
              v83 = v81[24];
              if ( v83 != *(_DWORD *)(sub_1780B4(v79[1]) + 4) )
                break;
              ++v80;
              v67 += 4;
              *++v82 = sub_26725C(v81[28], v81[29]);
              if ( v70 == v80 )
              {
                v84 = v79;
                v85 = dest;
                v86 = v97;
                v87 = v96;
                sub_2665F0(s);
                v88 = v84[1];
                v89 = off_46D5A4[0][13];
                v90 = sub_1780B4(v88);
                ((void (__fastcall *)(int, _DWORD, int *, int, _DWORD, _DWORD, char **))v89)(
                  v87,
                  *(_DWORD *)(v90 + 4),
                  v95,
                  v85,
                  0,
                  0,
                  s);
                *(_DWORD *)v86 = v67;
                return;
              }
              v81 += 16;
            }
            while ( v81[20] == 38 );
            v8 = v79;
            v4 = v96;
            v7 = v97;
          }
          sub_25A6BC(" {", v4);
          goto LABEL_105;
        }
        sub_25A6BC(" {", v4);
      }
      else
      {
        sub_25A6BC(" {", v4);
        if ( v69 != -1 )
        {
LABEL_105:
          v71 = 0;
          while ( 1 )
          {
            ++v71;
            (**(void (__fastcall ***)(_DWORD *, char *, int, int))(*v8 + 32))(v8, v7, v4, 2);
            if ( v70 <= v71 )
              break;
            sub_25A6BC(", ", v4);
          }
        }
      }
      sub_25A6BC("}", v4);
      return;
    case 52:
      *(_DWORD *)a2 = v6 + 3;
      if ( a4 > 16 )
      {
        sub_25A6BC("(", a3);
        sub_25A6BC("(", v4);
        sub_255DB0(v10[8], "", v4, 0);
      }
      sub_25A6BC("(", a3);
      sub_255DB0(v10[8], "", v4, 0);
    case 53:
      if ( a4 <= 16 )
      {
        sub_25A6BC("(", a3);
        (**(void (__fastcall ***)(_DWORD *, char *, int, int))(*v8 + 32))(v8, v7, v4, 16);
        v53 = ") ";
        v54 = v4;
        goto LABEL_73;
      }
      sub_25A6BC("(", a3);
      sub_25A6BC("(", v4);
      (**(void (__fastcall ***)(_DWORD *, char *, int, int))(*v8 + 32))(v8, v7, v4, 16);
      v51 = ") ";
      v52 = v4;
      goto LABEL_68;
    case 54:
    case 55:
      v50 = "reinterpret_cast";
      if ( v12 == 54 )
        v50 = "dynamic_cast";
      sub_25A6BC(v50, a3);
      sub_25A6BC(&word_364FA4, v4);
      (**(void (__fastcall ***)(_DWORD *, char *, int, int))(*v8 + 32))(v8, v7, v4, 16);
      v51 = (char *)&unk_3A6E6C;
      v52 = v4;
      goto LABEL_68;
    case 56:
      *(_DWORD *)a2 = v6 + 3;
      if ( a4 > 16 )
        sub_25A6BC("(", a3);
      if ( **(_BYTE **)(v10[8] + 24) != 7 || v10[16] != 38 )
      {
        sub_25A6BC("{", v4);
        sub_255DB0(v10[8], "", v4, 0);
      }
      *(_DWORD *)v7 += 4;
      v92 = sub_260F84(v10[8], v10[24]);
      sub_266608(s);
      sub_266C84(v92, v4, s);
      if ( v5 > 16 )
        goto LABEL_6;
      return;
    case 57:
      if ( a4 > 16 )
      {
        sub_25A6BC("(", a3);
        sub_25A6BC("{", v4);
        (**(void (__fastcall ***)(_DWORD *, char *, int, int))(*v8 + 32))(v8, v7, v4, 16);
        v51 = (char *)&unk_3A6E70;
        v52 = v4;
LABEL_68:
        sub_25A6BC(v51, v52);
        v33 = *v8;
        v34 = v7;
        v35 = v8;
        v36 = 16;
LABEL_40:
        (**(void (__fastcall ***)(_DWORD *, char *, int, int))(v33 + 32))(v35, v34, v4, v36);
        sub_25A6BC(")", v4);
      }
      else
      {
        sub_25A6BC("{", a3);
        (**(void (__fastcall ***)(_DWORD *, char *, int, int))(*v8 + 32))(v8, v7, v4, 16);
        v53 = (char *)&unk_3A6E70;
        v54 = v4;
LABEL_73:
        sub_25A6BC(v53, v54);
        (**(void (__fastcall ***)(_DWORD *, char *, int, int))(*v8 + 32))(v8, v7, v4, 16);
      }
      return;
    case 64:
      (**(void (***)(void))(*a1 + 32))();
      sub_25A6BC(&dword_364FC4, v4);
      return;
    case 66:
      (**(void (***)(void))(*a1 + 32))();
      sub_25A6BC("--", v4);
      return;
    case 79:
      *(_DWORD *)a2 = v6 + 3;
      v55 = sub_26725C(v10[8], v10[9]);
      v56 = "FALSE";
      if ( v55 )
        v56 = "TRUE";
      sub_25A418(v4, "%s", v56);
      return;
    case 81:
      *(_DWORD *)a2 += 3 + (((unsigned int)sub_26725C(v10[8], v10[9]) + 16) >> 4);
      (**(void (__fastcall ***)(_DWORD *, char *, int, int))(*v8 + 32))(v8, v7, v4, 17);
      v20 = (int *)".";
      v21 = v4;
      goto LABEL_16;
    case 82:
      *(_DWORD *)a2 += 3 + (((unsigned int)sub_26725C(v10[8], v10[9]) + 16) >> 4);
      (**(void (__fastcall ***)(_DWORD *, char *, int, int))(*v8 + 32))(v8, v7, v4, 17);
      v20 = &dword_364FCC;
      v21 = v4;
LABEL_16:
      sub_25A6BC(v20, v21);
      sub_25A6BC(&v8[4 * v6 + 12], v4);
      return;
    case 84:
      *(_DWORD *)a2 = v6 + 2;
      v18 = (const char **)*a1;
      v19 = *(_DWORD *)(*a1 + 84);
      if ( v19 )
        goto LABEL_14;
      sub_25A418(a3, "<language %s has no 'this'>", *v18);
      return;
    case 86:
      v17 = sub_170CC4(v10[8]);
      sub_25A6BC(v17, v4);
      sub_25A6BC("::", v4);
      *(_DWORD *)v7 += 4 + (((unsigned int)sub_26725C(v10[12], v10[13]) + 16) >> 4);
      sub_25A6BC(&v8[4 * v6 + 16], v4);
      return;
    case 87:
      *(_DWORD *)a2 += 3 + (((unsigned int)sub_26725C(v10[8], v10[9]) + 16) >> 4);
      sub_25A6BC(&v8[4 * v9 + 4], v4);
      return;
    case 88:
      *(_DWORD *)a2 = v6 + 3;
      sub_255DB0(v10[8], "", a3, 0);
    case 89:
      *(_DWORD *)a2 += 3 + (((unsigned int)sub_26725C(v10[8], v10[9]) + 16) >> 4);
      sub_25A6BC(&v8[4 * v6 + 12], v4);
      return;
    case 90:
      v14 = sub_26725C(v10[8], v10[9]);
      *(_DWORD *)v7 += 3 + ((unsigned int)(v14 + 16) >> 4);
      sub_25A6BC("@\"", v4);
      sub_2665F0(s);
      v15 = off_46D5A4[0][13];
      v16 = sub_1780B4(v8[1]);
      ((void (__fastcall *)(int, _DWORD, _DWORD *, int, _DWORD, _DWORD, char **))v15)(
        v4,
        *(_DWORD *)(v16 + 4),
        &v8[4 * v6 + 12],
        v14,
        0,
        0,
        s);
      sub_25A6BC("\"", v4);
      return;
    case 91:
      v13 = sub_26725C(v10[8], v10[9]);
      *(_DWORD *)v7 += 2;
      sub_25A6BC("RANGE(", v4);
      if ( (unsigned int)(v13 - 2) <= 1 )
        (**(void (__fastcall ***)(_DWORD *, char *, int, int))(*v8 + 32))(v8, v7, v4, 2);
      sub_25A6BC(&word_3BB850, v4);
      if ( (v13 & 0xFFFFFFFD) == 1 )
        (**(void (__fastcall ***)(_DWORD *, char *, int, int))(*v8 + 32))(v8, v7, v4, 2);
      goto LABEL_6;
    default:
      v72 = *(_DWORD *)(v11 + 4);
      if ( !v72 )
        goto LABEL_117;
      if ( v12 == v72 )
        goto LABEL_133;
      v73 = v11 + 16;
      while ( 1 )
      {
        v74 = *(_DWORD *)(v73 + 4);
        v11 = v73;
        if ( !v74 )
          break;
        v73 += 16;
        if ( v74 == v12 )
        {
LABEL_133:
          v49 = *(_DWORD *)(v11 + 8);
          v48 = 0;
          v75 = *(const char **)v11;
          p_dest = v49;
          v97 = *(char **)(v11 + 12);
          goto LABEL_134;
        }
      }
LABEL_117:
      if ( v12 )
        goto LABEL_62;
      p_dest = 0;
      v49 = 0;
      v48 = 0;
      goto LABEL_119;
  }
}
