int __fastcall sub_29E6BC(void (__fastcall *a1)(_DWORD, _DWORD), int a2, unsigned int a3, int a4)
{
  int v4; // r11
  _DWORD *v7; // r3
  const char *i; // r5
  int v9; // r3
  int v10; // r1
  int v11; // r0
  int v12; // lr
  int v13; // r4
  int v14; // r7
  int v15; // r12
  int v16; // r6
  bool v17; // cc
  int v18; // r4
  int v19; // r2
  const char *v20; // r5
  unsigned __int8 *v21; // r4
  int v22; // r3
  unsigned int v23; // r3
  unsigned __int8 v24; // r3
  unsigned __int8 *v25; // r0
  const char *v26; // r1
  int v27; // r3
  int v28; // r7
  int v29; // r6
  const char *v30; // r2
  unsigned int v31; // r3
  int v32; // r6
  int v33; // r7
  int v34; // r3
  const char *v35; // r2
  int v36; // r7
  int v37; // r8
  int v38; // r4
  const char *v39; // r2
  int v40; // r7
  int v41; // r6
  int v42; // r2
  int v43; // r3
  int v44; // r0
  int v45; // r2
  int v46; // r3
  int v47; // r2
  int v48; // r3
  unsigned int v49; // r0
  int v50; // r3
  int v51; // r3
  int v52; // r3
  int v53; // r1
  int v54; // r2
  int v55; // r1
  int v56; // r3
  int v57; // r0
  int v61; // [sp+10h] [bp-DCh]
  unsigned int v62; // [sp+14h] [bp-D8h]
  int v63; // [sp+18h] [bp-D4h]
  int v64; // [sp+1Ch] [bp-D0h]
  int v65; // [sp+20h] [bp-CCh]
  int v67; // [sp+28h] [bp-C4h]
  int v68; // [sp+2Ch] [bp-C0h]
  int v69; // [sp+30h] [bp-BCh]
  int v70; // [sp+38h] [bp-B4h]
  int v71; // [sp+3Ch] [bp-B0h]
  int v72; // [sp+40h] [bp-ACh]
  int v73; // [sp+48h] [bp-A4h]
  int v74; // [sp+48h] [bp-A4h]
  int v75; // [sp+4Ch] [bp-A0h]
  const char *v76; // [sp+50h] [bp-9Ch]
  int v77; // [sp+50h] [bp-9Ch]
  unsigned int v78; // [sp+54h] [bp-98h]
  int v79; // [sp+58h] [bp-94h]
  int v80; // [sp+5Ch] [bp-90h]
  int v81; // [sp+60h] [bp-8Ch]
  int v82; // [sp+64h] [bp-88h]
  int v83; // [sp+68h] [bp-84h]
  int v84; // [sp+6Ch] [bp-80h]
  int v85; // [sp+70h] [bp-7Ch]
  int v86; // [sp+74h] [bp-78h]
  int v87; // [sp+78h] [bp-74h]
  int v88; // [sp+84h] [bp-68h]
  int v89; // [sp+8Ch] [bp-60h]
  int v90; // [sp+90h] [bp-5Ch]
  unsigned int v91; // [sp+94h] [bp-58h]
  int v92; // [sp+98h] [bp-54h]
  int v93; // [sp+BCh] [bp-30h]
  int v94; // [sp+DCh] [bp-10h] BYREF
  double v95; // [sp+E0h] [bp-Ch] BYREF

  v4 = a3;
  v62 = a3;
  if ( a4 )
  {
    if ( (a3 & 0xEF000000) == 0xEF000000 )
    {
      v22 = a3 & 0xFFFFFF;
      if ( (a3 & 0x10000000) != 0 )
        v23 = v22 | 0xF3000000;
      else
        v23 = v22 | 0xF2000000;
      v62 = v23;
      v4 = v23;
    }
    else
    {
      if ( (a3 & 0xFF000000) != 0xF9000000 )
        return 0;
      v4 = a3 ^ 0xD000000;
      v62 = a3 ^ 0xD000000;
    }
  }
  if ( (v62 & 0xFFB00850) != 0xF2B00840 )
  {
    v7 = &unk_4021D4;
    for ( i = "vext%c.8\t%12-15,22R, %16-19,7R, %0-3,5R, #%8-11d"; ; i = (const char *)v7[11] )
    {
      v7 += 6;
      if ( !i )
        break;
      if ( (v7[4] & v62) == v7[3] )
      {
        v76 = i;
        v73 = *(unsigned __int8 *)i;
        if ( !*i )
          return 1;
        goto LABEL_14;
      }
    }
    return 0;
  }
  v73 = 118;
  v76 = "vext%c.8\t%12-15,22R, %16-19,7R, %0-3,5R, #%8-11d";
LABEL_14:
  v64 = ((unsigned int)v4 >> 17) & 0x80 | (16 * BYTE2(v4)) & 0x70 | v4 & 0xF;
  v69 = (v4 >> 8) & 3;
  v9 = v69;
  v67 = v4 & 0xF;
  v10 = ((v4 >> 8) & 0xF) >> 1;
  if ( ((16 * BYTE2(v4)) & 0x40) != 0 )
    v9 = 1006632960;
  v71 = (v4 >> 8) & 0xF;
  if ( ((16 * BYTE2(v4)) & 0x40) == 0 )
    v9 = 0x40000000;
  v11 = ((1 << (8 * ((BYTE1(v4) & 1) + 1))) - 1) | (v64 << (8 * ((BYTE1(v4) & 1) + 1)));
  v78 = v9 | (v64 << 24) & 0x80000000 | (v64 << 19) & 0x3F80000;
  v65 = v69 + 1;
  if ( ((v4 >> 8) & 0xFu) <= 7 )
    v11 = v64 << (8 * v10);
  v88 = ((unsigned int)v4 >> 5) & 1;
  v89 = v11;
  v12 = (v4 >> 1) & 0x10 | v67;
  v63 = ((unsigned int)v4 >> 10) & 3;
  v13 = ((unsigned int)v4 >> 20) & 3;
  v93 = v64 << (8 * (v10 & 1));
  if ( v69 )
    v14 = 0;
  else
    v14 = v88 & 1;
  v84 = v14;
  v87 = v12 >> v13 >> 2;
  v81 = ((unsigned int)v4 >> 18) & 0x10 | ((unsigned __int16)v4 >> 12);
  v15 = (v4 >> 4) & 0xF;
  v68 = (v4 >> 16) & 0xF;
  v80 = v15 >> v63;
  v16 = v63 + 1;
  v86 = v12 & ~(-4 << v13);
  v70 = v15 >> (v63 + 1);
  v83 = (v4 >> 4) & 3;
  if ( !v14 )
    v16 = v69 + 1;
  v75 = (1 << v63) - 1;
  if ( v14 )
    v16 = 2;
  v90 = v16 + v81 - 1;
  v72 = (v4 >> 3) & 0x10 | (v4 >> 16) & 0xF;
  v17 = (((unsigned int)v4 >> 10) & 3) == 0;
  if ( v63 )
    v17 = v65 <= 1;
  v18 = !v17;
  v92 = v15 & v75;
  v79 = 0;
  v85 = v18;
  v91 = v72 + v69;
  v61 = 0;
  v82 = (v4 >> 4) & 1;
  v19 = v73;
  v20 = v76;
  do
  {
    v21 = (unsigned __int8 *)(v20 + 1);
    if ( v19 == 37 )
    {
      switch ( v20[1] )
      {
        case '%':
          v20 += 2;
          a1(a2, "%%");
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
          v25 = sub_29C1E4((unsigned __int8 *)v20 + 1, v62, &v95, &v94);
          v21 = v25;
          switch ( *v25 )
          {
            case '\'':
              if ( ~(-1 << v94) == LODWORD(v95) )
                goto LABEL_135;
              v21 = v25 + 1;
              goto LABEL_130;
            case '?':
              ((void (__fastcall *)(int, char *, _DWORD))a1)(a2, "%c", v25[(1 << v94) - LODWORD(v95)]);
              v21 += 1 << v94;
              goto LABEL_130;
            case 'D':
              goto LABEL_131;
            case 'Q':
              goto LABEL_124;
            case 'R':
              if ( (v4 & 0x40) == 0 )
              {
LABEL_131:
                ((void (*)(int, const char *, ...))a1)(a2, "d%ld", LODWORD(v95));
                goto LABEL_130;
              }
LABEL_124:
              v44 = a2;
              if ( (LOBYTE(v95) & 1) != 0 )
                LOWORD(v26) = 25552;
              v45 = LODWORD(v95) >> 1;
              if ( (LOBYTE(v95) & 1) != 0 )
                HIWORD(v26) = 64;
              else
                v26 = "q%ld";
              goto LABEL_129;
            case 'S':
            case 'T':
            case 'U':
              v46 = v25[1];
              v21 = v25 + 1;
              v47 = 8 << (*v25 - 83);
              if ( (unsigned __int8)(v46 - 48) > 9u )
              {
                if ( (unsigned int)(v46 - 97) > 5 )
LABEL_194:
                  abort();
                v48 = v46 - 87;
              }
              else
              {
                v48 = v46 - 48;
              }
              v49 = v48 & 3;
              v45 = v47 << SLOBYTE(v95);
              v50 = LODWORD(v95) < v48 >> 2;
              if ( v49 < LODWORD(v95) )
                v50 |= 1u;
              v44 = a2;
              if ( v50 )
                LOWORD(v26) = 26292;
              else
                LOWORD(v26) = -6932;
              if ( v50 )
                HIWORD(v26) = 64;
              else
                HIWORD(v26) = 52;
LABEL_129:
              ((void (__fastcall *)(int, const char *, int))a1)(v44, v26, v45);
LABEL_130:
              v20 = (const char *)(v21 + 1);
              break;
            case '`':
              if ( LODWORD(v95) )
              {
                v21 = v25 + 1;
              }
              else
              {
LABEL_135:
                v21 = v25 + 1;
                ((void (__fastcall *)(int, char *, _DWORD))a1)(a2, "%c", v25[1]);
              }
              goto LABEL_130;
            case 'd':
              ((void (*)(int, const char *, ...))a1)(a2, "%ld", LODWORD(v95));
              v79 = LODWORD(v95);
              goto LABEL_130;
            case 'e':
              ((void (*)(int, const char *, ...))a1)(a2, "%ld", (1 << v94) - LODWORD(v95));
              goto LABEL_130;
            case 'r':
              ((void (*)(int, const char *, ...))a1)(a2, "%s", (&off_3FDE3C[18 * dword_4707E4 + 2])[LODWORD(v95)]);
              goto LABEL_130;
            default:
              goto LABEL_194;
          }
          break;
        case 'A':
          v31 = *((unsigned __int8 *)&off_3FDE3C[670] + v71);
          v32 = v31 & 0xF;
          v33 = (v31 >> 4) + 1;
          a1(a2, "{");
          v34 = v33;
          if ( v33 == 1 )
          {
            if ( v32 == 1 )
              ((void (*)(int, const char *, ...))a1)(a2, "d%d", v81);
            else
              ((void (*)(int, const char *, ...))a1)(a2, "d%d-d%d", v81, v32 + v81 - 1);
          }
          else if ( v32 )
          {
            v35 = "";
            v36 = 0;
            v37 = ((unsigned int)v4 >> 18) & 0x10 | ((unsigned __int16)v4 >> 12);
            v38 = v34;
            while ( 1 )
            {
              ++v36;
              ((void (*)(int, const char *, ...))a1)(a2, "%sd%d", v35, v37);
              if ( v32 == v36 )
                break;
              v37 += v38;
              v35 = (const char *)&word_3D7D40;
            }
            v21 = (unsigned __int8 *)(v20 + 1);
          }
          ((void (*)(int, const char *, ...))a1)(a2, "}, [%s", (&off_3FDE3C[18 * dword_4707E4 + 2])[v68]);
          if ( v83 )
            ((void (*)(int, const char *, ...))a1)(a2, " :%d", 32 << ((v4 >> 4) & 3));
          goto LABEL_86;
        case 'B':
          if ( !v85 )
          {
            if ( v69 == 2 )
            {
LABEL_159:
              v74 = 1;
LABEL_160:
              if ( v63 == 2 && v83 )
                return 0;
              v27 = (v4 >> 4) & 1;
              if ( v82 )
                return 0;
LABEL_70:
              v77 = v27;
              goto LABEL_71;
            }
            if ( v69 != 3 )
            {
              if ( v69 != 1 )
              {
                if ( (v80 & 1) != 0 )
                  return 0;
                if ( v63 )
                {
                  v43 = v92;
                  if ( v75 == v92 )
                  {
                    v43 = 8 << v63;
                  }
                  else if ( v92 )
                  {
                    return 0;
                  }
                  v77 = v43;
                  v74 = 1;
                }
                else
                {
                  v77 = 0;
                  v74 = 1;
                }
                goto LABEL_71;
              }
LABEL_154:
              v74 = 1;
LABEL_155:
              if ( v63 == 2 && ((v4 >> 4) & 2) != 0 )
                return 0;
              v51 = 16 << v63;
              if ( !v82 )
                v51 = 0;
              v77 = v51;
              goto LABEL_71;
            }
            goto LABEL_66;
          }
          if ( (v80 & 1) == 0 )
          {
            if ( v69 == 2 )
              goto LABEL_159;
            if ( v69 != 3 )
              goto LABEL_154;
LABEL_66:
            v74 = 1;
            goto LABEL_67;
          }
          if ( v69 == 2 )
          {
            v74 = 2;
            goto LABEL_160;
          }
          if ( v69 != 3 )
          {
            v74 = 2;
            goto LABEL_155;
          }
          v74 = 2;
LABEL_67:
          if ( v63 != 2 )
          {
            v27 = 32 << v63;
            if ( !v82 )
              v27 = 0;
            goto LABEL_70;
          }
          if ( v83 == 3 )
            return 0;
          v77 = ((v4 >> 4) & 3) << 6;
LABEL_71:
          v28 = ((unsigned int)v4 >> 18) & 0x10 | ((unsigned __int16)v4 >> 12);
          v29 = 0;
          a1(a2, "{");
          do
          {
            if ( v29 )
              v30 = (const char *)&word_3D7D40;
            else
              v30 = "";
            ((void (*)(int, const char *, ...))a1)(a2, "%sd%d[%d]", v30, v28, v70);
            ++v29;
            v28 += v74;
          }
          while ( v29 < v65 );
          v21 = (unsigned __int8 *)(v20 + 1);
          ((void (*)(int, const char *, ...))a1)(a2, "}, [%s", (&off_3FDE3C[18 * dword_4707E4 + 2])[v68]);
          if ( v77 )
            ((void (*)(int, const char *, ...))a1)(a2, " :%d", v77);
LABEL_86:
          v20 += 2;
          a1(a2, &word_419FC8);
          if ( v67 == 13 )
          {
            a1(a2, "!");
          }
          else if ( v67 != 15 )
          {
            ((void (*)(int, const char *, ...))a1)(a2, ", %s", (&off_3FDE3C[18 * dword_4707E4 + 2])[v67]);
          }
          break;
        case 'C':
          if ( v84 )
          {
            a1(a2, "{");
LABEL_104:
            ((void (*)(int, const char *, ...))a1)(a2, "d%d[]-d%d[]", v81, v90);
            goto LABEL_94;
          }
          a1(a2, "{");
          if ( v88 )
          {
            v39 = "";
            v40 = ((unsigned int)v4 >> 18) & 0x10 | ((unsigned __int16)v4 >> 12);
            v41 = 0;
            while ( 1 )
            {
              ++v41;
              ((void (*)(int, const char *, ...))a1)(a2, "%sd%d[]", v39, v40);
              if ( v65 == v41 )
                break;
              v40 += 2;
              v39 = (const char *)&word_3D7D40;
            }
            v21 = (unsigned __int8 *)(v20 + 1);
          }
          else
          {
            if ( v69 )
              goto LABEL_104;
            ((void (*)(int, const char *, ...))a1)(a2, "d%d[]", v81);
          }
LABEL_94:
          ((void (*)(int, const char *, ...))a1)(a2, "}, [%s", (&off_3FDE3C[18 * dword_4707E4 + 2])[v68]);
          if ( !v82 )
            goto LABEL_86;
          if ( v69 == 3 )
          {
            v42 = (8 * (v69 + 1)) << ((v4 >> 6) & 3) >> 1;
            if ( ((v4 >> 6) & 3u) <= 1 )
              v42 = (8 * (v69 + 1)) << ((v4 >> 6) & 3);
          }
          else
          {
            v42 = (8 * (v69 + 1)) << ((v4 >> 6) & 3);
            if ( v69 == 2 )
              goto LABEL_97;
          }
          if ( (((v4 >> 6) | (v4 >> 8)) & 3) == 0 )
          {
LABEL_97:
            ((void (*)(int, const char *, ...))a1)(a2, " :<bad align %d>", v42);
            goto LABEL_86;
          }
          ((void (*)(int, const char *, ...))a1)(a2, " :%d", v42);
          goto LABEL_86;
        case 'D':
          v20 += 2;
          ((void (*)(int, const char *, ...))a1)(a2, "d%d[%d]", v86, v87);
          break;
        case 'E':
          v20 += 2;
          if ( ((v4 >> 8) & 0xFu) <= 7 )
            goto LABEL_100;
          if ( ((v4 >> 8) & 0xFu) <= 0xB )
          {
            ((void (*)(int, const char *, ...))a1)(a2, "#%ld\t; 0x%.4lx", v93, v93);
          }
          else if ( ((v4 >> 8) & 0xFu) <= 0xD )
          {
LABEL_100:
            ((void (*)(int, const char *, ...))a1)(a2, "#%ld\t; 0x%.8lx", v89, v89);
          }
          else if ( v71 == 14 )
          {
            if ( v88 )
            {
              v54 = 0;
              v55 = 7;
              v56 = 0;
              do
              {
                if ( ((v64 >> v55) & 1) != 0 )
                  v57 = 255;
                else
                  v57 = 0;
                if ( v55 > 3 )
                  v54 = v57 | (v54 << 8);
                else
                  v56 = v57 | (v56 << 8);
              }
              while ( v55-- != 0 );
              ((void (*)(int, const char *, ...))a1)(a2, "#0x%.8lx%.8lx", v54, v56);
            }
            else
            {
              ((void (*)(int, const char *, ...))a1)(a2, "#%ld\t; 0x%.2lx", v64, v64);
            }
          }
          else if ( v88 )
          {
            ((void (*)(int, const char *, ...))a1)(a2, "<illegal constant %.8x:%x:%x>", v64, 15, 1);
          }
          else
          {
            LOWORD(v94) = 0;
            HIWORD(v94) = HIWORD(v78);
            sub_323108(&unk_437E3C, &v94, &v95);
            ((void (*)(int, const char *, ...))a1)(a2, "#%.7g\t; 0x%.8lx", v95, v78);
          }
          break;
        case 'F':
          v20 += 2;
          if ( v69 )
          {
            v52 = v72 + v69;
            if ( v91 <= 0x1F )
              LOWORD(v53) = 25508;
            else
              LOWORD(v53) = 26268;
            if ( v91 <= 0x1F )
              v52 = v72 + v69;
            HIWORD(v53) = 64;
            ((void (__fastcall *)(int, int, int, int))a1)(a2, v53, v72, v52);
          }
          else
          {
            ((void (*)(int, const char *, ...))a1)(a2, "{d%d}", v72);
          }
          break;
        case 'c':
          v20 += 2;
          if ( a4 )
          {
            v24 = dword_48BB6C;
            if ( dword_48BB6C )
              goto LABEL_50;
          }
          break;
        case 'u':
          v20 += 2;
          if ( !a4 )
            break;
          v24 = dword_48BB6C;
          if ( !dword_48BB6C )
            break;
          v61 = 1;
LABEL_50:
          ((void (*)(int, const char *, ...))a1)(a2, "%s", off_3FDE3C[(v24 >> 4) + 144]);
          break;
        default:
          goto LABEL_194;
      }
    }
    else
    {
      a1(a2, "%c");
      v21 = (unsigned __int8 *)v20++;
    }
    v19 = v21[1];
  }
  while ( v21[1] );
  if ( (unsigned int)(v79 + 16) > 0x30 )
    ((void (*)(int, const char *, ...))a1)(a2, "\t; 0x%lx", v79);
  if ( !v61 )
    return 1;
  a1(a2, "\t; <UNPREDICTABLE>");
  return v61;
}
