int __fastcall sub_29C2BC(int a1, int a2, signed int a3, int a4)
{
  int *v6; // r1
  void (*v7)(int, const char *, ...); // r11
  _DWORD *v8; // r2
  int v9; // r7
  int v10; // lr
  unsigned int v11; // r0
  unsigned int v12; // r12
  int v13; // r1
  const char *v14; // r4
  int v15; // r8
  int v16; // r1
  int v17; // r8
  unsigned int v18; // lr
  bool v19; // zf
  bool v20; // zf
  unsigned int v21; // r12
  char *v22; // r9
  int v23; // r2
  char *v24; // r6
  int v25; // r6
  int v26; // r2
  int v27; // r6
  int v28; // r6
  _BOOL4 v29; // r3
  int v30; // r2
  unsigned __int8 *v31; // r4
  int v32; // r2
  unsigned __int8 *v33; // r5
  int v34; // r8
  int v35; // r1
  _BOOL4 v37; // r3
  int v38; // r3
  unsigned __int8 *v39; // r0
  int v40; // r8
  int v41; // r3
  __int16 *v42; // r2
  unsigned int v43; // r3
  char **v44; // r2
  unsigned int v45; // r3
  unsigned int v46; // r3
  const char *v47; // r2
  int v48; // r3
  const char *v49; // r2
  int v50; // r8
  int v51; // r3
  int v52; // r2
  unsigned int v53; // r12
  bool v54; // cc
  int v55; // t1
  int v56; // r3
  const char *v57; // r1
  unsigned int v58; // r3
  int v59; // r2
  int v60; // r2
  int v61; // r1
  unsigned int v62; // r3
  unsigned int v63; // r12
  int v64; // r1
  char **v65; // r3
  char *v66; // r2
  const char *v67; // r1
  int v68; // r3
  int v69; // r2
  int v70; // r3
  const char *v71; // r1
  int v72; // r1
  int v73; // r1
  int v74; // [sp+14h] [bp-C0h]
  int v75; // [sp+14h] [bp-C0h]
  const char *v76; // [sp+18h] [bp-BCh]
  _BOOL4 v77; // [sp+1Ch] [bp-B8h]
  int v78; // [sp+20h] [bp-B4h]
  int v79; // [sp+24h] [bp-B0h]
  unsigned int v80; // [sp+28h] [bp-ACh]
  int v81; // [sp+2Ch] [bp-A8h]
  int v82; // [sp+30h] [bp-A4h]
  int v83; // [sp+34h] [bp-A0h]
  int v84; // [sp+34h] [bp-A0h]
  int v85; // [sp+38h] [bp-9Ch]
  int v86; // [sp+38h] [bp-9Ch]
  int v87; // [sp+40h] [bp-94h]
  int v88; // [sp+4Ch] [bp-88h]
  int v91; // [sp+68h] [bp-6Ch]
  int v92; // [sp+6Ch] [bp-68h]
  _BOOL4 v93; // [sp+70h] [bp-64h]
  int v94; // [sp+7Ch] [bp-58h]
  const char *v95; // [sp+80h] [bp-54h]
  const char *v96; // [sp+84h] [bp-50h]
  int v97; // [sp+88h] [bp-4Ch]
  int v98; // [sp+94h] [bp-40h]
  int v99; // [sp+9Ch] [bp-38h]
  unsigned int v100; // [sp+C8h] [bp-Ch] BYREF
  int v101; // [sp+CCh] [bp-8h] BYREF

  v6 = *(int **)(a2 + 64);
  v81 = ((unsigned int)a3 >> 8) & 0xF;
  v7 = *(void (**)(int, const char *, ...))a2;
  v8 = &unk_403CA4;
  v9 = *(_DWORD *)(a2 + 4);
  v74 = *v6;
  v10 = 0;
  v11 = 0;
  v83 = v6[1];
  v12 = 236978192;
  v85 = v6[2];
  v100 = 0;
  v80 = v81 - 9;
  v13 = 0;
  v14 = "mia%c\tacc0, %0-3r, %12-15r";
  while ( !v10 && !v8[1] && !v8[2] )
  {
    if ( v12 == 1 )
    {
      v53 = *(_DWORD *)(a2 + 20);
      v54 = v53 > 0xA;
      if ( v53 != 10 )
        v54 = v53 - 12 > 1;
      if ( v54 )
      {
        do
        {
          v55 = v8[6];
          v8 += 6;
        }
        while ( (v55 || v8[1] || v8[2]) && v8[3] != 2 );
      }
    }
    else if ( !v12 || v12 > 3 )
    {
      if ( v13 )
        v100 = v11;
LABEL_76:
      abort();
    }
LABEL_60:
    v14 = (const char *)v8[11];
    if ( !v14 )
      return 0;
    v10 = v8[6];
    v12 = v8[9];
    v8 += 6;
  }
  v15 = v8[4];
  if ( a4 )
  {
    v16 = (unsigned __int8)dword_48BB6C >> 4;
    v15 |= 0xF0000000;
    v11 = v12 | 0xE0000000;
    if ( !dword_48BB6C )
      v16 = 16;
    v78 = v16;
  }
  else if ( (a3 & 0xF0000000) == 0xF0000000 )
  {
    v15 |= 0xF0000000;
    v11 = v12;
    v78 = 16;
  }
  else
  {
    v35 = (unsigned int)a3 >> 28;
    v11 = v12;
    if ( (unsigned int)a3 >> 28 == 14 )
      v35 = 16;
    v78 = v35;
  }
  v17 = v15 & a3;
  if ( v17 != v11 || (v74 & v10) == 0 && (v83 & v8[1]) == 0 && (v85 & v8[2]) == 0 )
  {
    v13 = 1;
    goto LABEL_60;
  }
  v18 = v12 & 0xFFEFFFFF;
  v19 = (v12 & 0xFFEFFFFF) == -67108864;
  if ( (v12 & 0xFFEFFFFF) != 0xFC000000 )
    v19 = v18 == -33554416;
  if ( v19 )
  {
    v100 = v11;
    v76 = v14;
    v77 = v80 <= 2;
    v87 = *(unsigned __int8 *)v14;
    if ( !*v14 )
      goto LABEL_68;
    goto LABEL_29;
  }
  v20 = v12 == 235929616;
  if ( v12 != 235929616 )
    v20 = v12 == -33554432;
  v21 = v12 & 0xFFFFFFEF;
  v13 = v20;
  if ( v21 == 234881024 )
    v13 |= 1u;
  if ( v18 == 201326592 )
    v13 |= 1u;
  if ( v13 && v80 <= 2 )
  {
    v11 = v17;
    goto LABEL_60;
  }
  v76 = v14;
  v100 = v11;
  v87 = *(unsigned __int8 *)v14;
  if ( *v14 )
  {
    v77 = 0;
LABEL_29:
    LOWORD(v22) = (unsigned __int16)"";
    if ( (a3 & 0x800000) != 0 )
      v23 = 43;
    else
      v23 = 45;
    HIWORD(v22) = (unsigned int)"" >> 16;
    v97 = v23;
    if ( (a3 & 0x800000) == 0 )
      v23 = (int)&word_3C1464;
    v82 = a3 & 0x800000;
    if ( (a3 & 0x800000) != 0 )
      v23 = (int)v22;
    v96 = (const char *)v23;
    v24 = "!";
    if ( (a3 & 0x200000) == 0 )
      v24 = v22;
    v95 = v24;
    v25 = (a3 >> 1) & 0x70 | a3 & 0xF;
    if ( (a3 >> 4) & 0x10 | a3 & 0xF )
      v26 = (a3 >> 4) & 0x10 | a3 & 0xF;
    else
      v26 = 32;
    if ( ((a3 >> 1) & 0x40) != 0 )
      v25 -= 128;
    v91 = v25;
    v92 = v26;
    v27 = 4 * (unsigned __int8)a3;
    if ( v81 == 9 )
      v27 = 2 * (unsigned __int8)a3;
    v86 = a3 & 0xF;
    if ( !v82 )
      v27 = -v27;
    v94 = v27;
    v28 = (unsigned __int16)a3 >> 12;
    v84 = (a3 >> 18) & 0x10 | v28;
    v75 = BYTE2(a3) & 0xF;
    v29 = v75 == 15 && (a3 & 0x1200000) != 0;
    v93 = v29;
    v98 = (a3 >> 4) & 0xF;
    v30 = (a3 & 0x80) != 0 ? 32 : 16;
    v79 = 0;
    v99 = v30;
    v31 = (unsigned __int8 *)v76;
    v88 = 16;
    v32 = v87;
    do
    {
      v33 = v31 + 1;
      if ( v32 == 37 )
      {
        v34 = v31[1];
        switch ( v31[1] )
        {
          case '%':
            v31 += 2;
            v7(v9, "%%");
            break;
          case '0':
          case '1':
          case '2':
          case '3':
          case '4':
          case '5':
          case '6':
          case '7':
          case '8':
          case '9':
            v39 = sub_29C1E4(v31 + 1, a3, &v100, &v101);
            v33 = v39;
            switch ( *v39 )
            {
              case '\'':
                v31 = v39 + 2;
                if ( ~(-1 << v101) == v100 )
                  goto LABEL_201;
                v33 = v39 + 1;
                goto LABEL_55;
              case '?':
                v7(v9, "%c", v39[(1 << v101) - v100]);
                v33 += 1 << v101;
                v31 = v33 + 1;
                goto LABEL_55;
              case 'D':
                goto LABEL_187;
              case 'E':
                if ( (v100 & 0x40) != 0 )
                  v61 = 1040187392;
                else
                  v61 = 0x40000000;
                v62 = (v100 << 24) & 0x80000000 | (v100 << 19) & 0x1F80000 | v61;
                v63 = ((v100 & 0xF) + 16) * ((_DWORD)"-linux-armhf.so.3" << ((v62 >> 23) - 124));
                if ( v63 == (_DWORD)&loc_F4240 * (v63 / 0xF4240) )
                {
                  if ( (v100 & 0x80) != 0 )
                    v64 = 45;
                  else
                    v64 = 32;
                  v31 = v39 + 1;
                  v7(v9, "%ld\t; 0x%08x %c%u.%01u", v100, v62, v64, v63 / 0x989680, v63 % 0x989680 / 0xF4240);
                }
                else if ( v63 == 10000 * (v63 / 0x2710) )
                {
                  if ( (v100 & 0x80) != 0 )
                    v72 = 45;
                  else
                    v72 = 32;
                  v31 = v39 + 1;
                  v7(v9, "%ld\t; 0x%08x %c%u.%03u", v100, v62, v72, v63 / 0x989680, v63 % 0x989680 / 0x2710);
                }
                else
                {
                  if ( (v100 & 0x80) != 0 )
                    v73 = 45;
                  else
                    v73 = 32;
                  v31 = v39 + 1;
                  v7(
                    v9,
                    "%ld\t; 0x%08x %c%u.%07u",
                    v100,
                    v62,
                    v73,
                    v63 / 0x989680,
                    ((v100 & 0xF) + 16) * ((_DWORD)"-linux-armhf.so.3" << ((v62 >> 23) - 124))
                  - 10000000 * (v63 / 0x989680));
                }
                goto LABEL_55;
              case 'G':
                v31 = v39 + 1;
                v7(v9, "%s", off_3FDE3C[v100 + 205]);
                goto LABEL_55;
              case 'Q':
                goto LABEL_183;
              case 'R':
                v58 = v100;
                v60 = v77;
                if ( v100 == 15 )
                  v60 = 1;
                v77 = v60;
                goto LABEL_190;
              case 'V':
                if ( (a3 & 0x40) != 0 )
                {
LABEL_183:
                  v31 = v39 + 1;
                  if ( (v100 & 1) != 0 )
                    LOWORD(v57) = 25552;
                  else
                    LOWORD(v57) = 25576;
                  HIWORD(v57) = 64;
                  v7(v9, v57, v100 >> 1);
                }
                else
                {
LABEL_187:
                  v7(v9, "d%ld", v100);
                  v31 = v33 + 1;
                }
                goto LABEL_55;
              case '`':
                v31 = v39 + 2;
                if ( v100 )
                {
                  v33 = v39 + 1;
                }
                else
                {
LABEL_201:
                  v33 = v39 + 1;
                  v7(v9, "%c", v39[1]);
                }
                goto LABEL_55;
              case 'c':
                v31 = v39 + 1;
                switch ( v100 )
                {
                  case 0u:
                    v7(v9, "eq");
                    break;
                  case 1u:
                    v7(v9, "vs");
                    break;
                  case 2u:
                    v7(v9, "ge");
                    break;
                  case 3u:
                    v7(v9, "gt");
                    break;
                  default:
                    v7(v9, "??");
                    break;
                }
                goto LABEL_55;
              case 'd':
                v7(v9, "%ld", v100);
                v31 = v33 + 1;
                v79 = v100;
                goto LABEL_55;
              case 'f':
                v31 = v39 + 1;
                if ( v100 <= 7 )
                  v7(v9, "f%ld", v100);
                else
                  v7(v9, "#%s", off_3FDE3C[(v100 & 7) + 161]);
                goto LABEL_55;
              case 'g':
                v31 = v39 + 1;
                v7(v9, "%s", off_3FDE3C[v100 + 189]);
                goto LABEL_55;
              case 'k':
                v31 = v39 + 1;
                v7(v9, "%ld", v99 - v100);
                goto LABEL_55;
              case 'r':
                v58 = v100;
LABEL_190:
                v31 = v39 + 1;
                if ( v39[1] == 117 )
                {
                  v59 = v88;
                  v88 = v58;
                  v33 = v39 + 1;
                  v31 = v39 + 2;
                  if ( v58 == v59 )
                    v77 = 1;
                }
                v7(v9, "%s", (&off_3FDE3C[18 * dword_4707E4 + 2])[v58]);
                goto LABEL_55;
              case 'w':
                v31 = v39 + 1;
                v65 = &off_3FDE3C[v100];
                if ( v101 == 2 )
                  v66 = v65[169];
                else
                  v66 = v65[173];
                v7(v9, "%s", v66);
                goto LABEL_55;
              case 'x':
                v7(v9, "0x%lx", v100);
                v31 = v33 + 1;
                goto LABEL_55;
              default:
                goto LABEL_76;
            }
          case 'A':
            v7(v9, "[%s", (&off_3FDE3C[18 * dword_4707E4 + 2])[v75]);
            if ( (a3 & 0x1200000) != 0 )
            {
              v40 = v94;
              v41 = v79;
              if ( v75 != 15 )
                v41 = v94;
              v79 = v41;
            }
            else
            {
              v40 = (unsigned __int8)a3;
            }
            if ( (a3 & 0x1000000) != 0 )
            {
              if ( v40 )
              {
                v7(v9, ", #%d]%s", v40, v95);
              }
              else
              {
                if ( v82 )
                  LOWORD(v71) = -24632;
                else
                  LOWORD(v71) = 25436;
                if ( v82 )
                  HIWORD(v71) = 65;
                else
                  HIWORD(v71) = 64;
                v7(v9, v71);
              }
            }
            else
            {
              v7(v9, (const char *)&word_419FC8);
              if ( (a3 & 0x200000) != 0 )
              {
                if ( v40 )
                {
                  v7(v9, ", #%d", v40);
                }
                else if ( !v82 )
                {
                  v7(v9, ", #-0");
                }
              }
              else
              {
                v42 = &word_3C1464;
                if ( v40 | v82 )
                  v42 = (__int16 *)"";
                v79 = v40;
                v7(v9, ", {%s%d}", v42, v40);
              }
            }
            v31 += 2;
            if ( v93 )
            {
              v7(v9, "\t; ");
              (*(void (__fastcall **)(unsigned int, int))(a2 + 76))(
                (a1 & 0xFFFFFFFC) + 2 * *(_DWORD *)(a2 + 104) + v40,
                a2);
            }
            break;
          case 'B':
            v31 += 2;
            if ( ((a3 >> 1) & 0x3F) == 1 )
            {
              v7(v9, "{d%d}", v84);
            }
            else
            {
              if ( ((a3 >> 1) & 0x3Fu) + v84 <= 0x20 )
                LOWORD(v67) = 25508;
              else
                LOWORD(v67) = 25480;
              HIWORD(v67) = 64;
              v7(v9, v67, v84, ((a3 >> 1) & 0x3F) + v84 - 1);
            }
            break;
          case 'F':
            v31 += 2;
            v43 = (unsigned int)" %12-15R" & a3;
            if ( ((unsigned int)" %12-15R" & a3) == 0x8000 )
            {
              v7(v9, "1");
            }
            else if ( v43 == 0x400000 )
            {
              v7(v9, "2");
            }
            else if ( v43 )
            {
              v7(v9, "3");
            }
            else
            {
              v7(v9, "4");
            }
            break;
          case 'I':
            v31 += 2;
            v7(v9, "%d", v91);
            break;
          case 'L':
            v31 += 2;
            v44 = (char **)(a3 & (unsigned int)&off_400100);
            if ( (a3 & (unsigned int)&off_400100) == 0x100 )
            {
              v7(v9, "w");
            }
            else if ( (int)(a3 & (unsigned int)&off_400100) <= 256 )
            {
              if ( !v44 )
                v7(v9, "b");
            }
            else if ( v44 == (char **)&unk_400000 )
            {
              v7(v9, "h");
            }
            else if ( v44 == &off_400100 )
            {
LABEL_111:
              v7(v9, "d");
            }
            break;
          case 'P':
            v31 += 2;
            v45 = (unsigned int)&off_80080 & a3;
            if ( ((unsigned int)&off_80080 & a3) == 0x80 )
              goto LABEL_111;
            if ( v45 == 0x80000 )
              goto LABEL_157;
            if ( !v45 )
              goto LABEL_140;
            v7(v9, "<illegal precision>");
            break;
          case 'Q':
            v31 += 2;
            v46 = (unsigned int)" %12-15R" & a3;
            if ( ((unsigned int)" %12-15R" & a3) == 0x8000 )
              goto LABEL_111;
            if ( v46 == 0x400000 )
            {
LABEL_157:
              v7(v9, (const char *)&word_40CD1C);
            }
            else if ( v46 )
            {
LABEL_119:
              v7(v9, "p");
            }
            else
            {
LABEL_140:
              v7(v9, (const char *)&word_3DDC78);
            }
            break;
          case 'R':
            v31 += 2;
            if ( (a3 & 0x60) == 0x20 )
              goto LABEL_119;
            if ( (a3 & 0x60) == 0x40 )
            {
              v7(v9, "m");
            }
            else if ( (a3 & 0x60) != 0 )
            {
              v7(v9, "z");
            }
            break;
          case 'Z':
            v31 += 2;
            v100 = BYTE2(a3) & 0xF0 | v86;
            v7(v9, "%d", v100);
            break;
          case 'c':
            goto LABEL_81;
          case 'i':
            v31 += 2;
            v7(v9, "%ld", v92);
            break;
          case 'l':
            v47 = (&off_3FDE3C[18 * dword_4707E4 + 2])[v75];
            if ( (a3 & 0x100) != 0 )
            {
              v7(v9, "[%s", v47);
              if ( v82 )
                v79 = 4 * (unsigned __int8)a3;
              else
                v79 = -4 * (unsigned __int8)a3;
              v48 = 4;
            }
            else
            {
              v7(v9, "[%s", v47);
              v48 = 1;
            }
            v31 += 2;
            if ( (_BYTE)a3 )
            {
              v70 = v48 * (unsigned __int8)a3;
              if ( (a3 & 0x1000000) != 0 )
                v7(v9, ", #%s%d]%s", v96, v70, v95);
              else
                v7(v9, "], #%s%d", v96, v70);
            }
            else
            {
              v7(v9, (const char *)&word_419FC8, 0, v48);
            }
            break;
          case 'r':
            v31 += 2;
            v49 = (&off_3FDE3C[18 * dword_4707E4 + 2])[v75];
            switch ( ((unsigned int)a3 >> 21) & 1 | (a3 >> 22) & 6 )
            {
              case 1u:
              case 3u:
                v7(v9, "[%s], %c%s", v49, v97, (&off_3FDE3C[18 * dword_4707E4 + 2])[v86]);
                if ( v98 )
                  v7(v9, ", lsl #%d", v98);
                break;
              case 4u:
              case 5u:
              case 6u:
              case 7u:
                v7(v9, "[%s, %c%s", v49, v97, (&off_3FDE3C[18 * dword_4707E4 + 2])[v86]);
                if ( v98 )
                  v7(v9, ", lsl #%d", v98);
                v7(v9, (const char *)&word_419FC8);
                if ( (((unsigned int)a3 >> 21) & 1 | (a3 >> 22) & 4) == 5 )
                  v7(v9, "!");
                break;
              default:
                v7(v9, "INVALID", v49);
                break;
            }
            break;
          case 'u':
            if ( v78 == 16 )
              goto LABEL_86;
            v77 = 1;
LABEL_81:
            v37 = v78 != 16;
            if ( v81 != 9 )
              v37 = 0;
            v19 = !v37;
            v38 = v77;
            if ( !v19 )
              v38 = 1;
            v77 = v38;
LABEL_86:
            v31 += 2;
            v7(v9, "%s", off_3FDE3C[v78 + 144]);
            break;
          case 'y':
          case 'z':
            v33 = v31 + 2;
            switch ( v31[2] )
            {
              case '0':
              case '4':
                if ( v34 != 121 )
                {
                  v50 = (16 * (unsigned __int8)(a3 >> 5)) & 0x10 | v86;
                  goto LABEL_135;
                }
                v50 = ((a3 >> 5) & 1) + 2 * v86;
                goto LABEL_176;
              case '1':
                goto LABEL_133;
              case '2':
                if ( v34 != 121 )
                {
                  v50 = (16 * (unsigned __int8)(a3 >> 7)) & 0x10 | v75;
                  goto LABEL_135;
                }
                v50 = ((a3 >> 7) & 1) + 2 * v75;
                goto LABEL_176;
              case '3':
                v7(v9, "{");
LABEL_133:
                if ( v34 == 121 )
                {
                  v50 = ((a3 >> 22) & 1) + 2 * v28;
LABEL_176:
                  v7(v9, "%c%d", 115, v50);
                  v51 = v31[2];
                  if ( v51 != 51 )
                  {
                    v52 = 115;
LABEL_138:
                    v31 += 3;
                    if ( v51 == 52 )
                      v7(v9, ", %c%d", v52, v50 + 1);
                    goto LABEL_55;
                  }
                  v68 = (unsigned __int8)a3;
                  v69 = 115;
                }
                else
                {
                  v50 = (16 * (unsigned __int8)(a3 >> 22)) & 0x10 | v28;
LABEL_135:
                  v7(v9, "%c%d", 100, v50);
                  v51 = v31[2];
                  if ( v51 != 51 )
                  {
                    v52 = 100;
                    goto LABEL_138;
                  }
                  v68 = (a3 >> 1) & 0x7F;
                  v69 = 100;
                }
                v56 = v68 - 1;
                if ( v56 )
                  v7(v9, "-%c%d", v69, v56 + v50);
                v31 += 3;
                v7(v9, "}");
                break;
              default:
                goto LABEL_76;
            }
            break;
          default:
            goto LABEL_76;
        }
      }
      else
      {
        v7(v9, "%c", v32);
        v33 = v31++;
      }
LABEL_55:
      v32 = v33[1];
    }
    while ( v33[1] );
    if ( (unsigned int)(v79 + 16) > 0x30 )
      v7(v9, "\t; 0x%lx", v79);
LABEL_68:
    if ( v77 )
    {
      v7(v9, "\t; <UNPREDICTABLE>");
      return v77;
    }
  }
  return 1;
}
