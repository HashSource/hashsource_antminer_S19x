int __fastcall sub_2A0BF0(int a1, int a2, int a3)
{
  int v5; // r7
  int (__fastcall *v6)(int, const char *); // r11
  _DWORD *v7; // r8
  int result; // r0
  int v9; // r1
  int *v10; // r3
  const char *v11; // r4
  int v12; // r2
  int v13; // r9
  int v14; // r4
  __int16 *v15; // r0
  __int16 *v16; // r4
  bool v17; // zf
  int v18; // lr
  int v19; // r4
  int v20; // r5
  int v21; // lr
  int v22; // lr
  int v23; // r2
  char *v24; // r5
  char *v25; // r9
  int v26; // r4
  unsigned int v27; // r8
  int v28; // r2
  int v29; // r5
  int v30; // r3
  const char *v31; // r2
  int v32; // r2
  int v33; // r6
  int v34; // r9
  int v35; // r2
  int v36; // r3
  int v37; // r3
  int v38; // r3
  unsigned int v39; // r2
  int v40; // r1
  int v41; // r3
  int v42; // r2
  bool v43; // zf
  int v44; // r2
  int v45; // r2
  int v46; // r3
  int v47; // r3
  int v48; // r3
  const char *v49; // r2
  int v50; // r0
  const char *v52; // [sp+8h] [bp-B4h]
  _DWORD *v53; // [sp+8h] [bp-B4h]
  int v54; // [sp+Ch] [bp-B0h]
  int v55; // [sp+10h] [bp-ACh]
  int v56; // [sp+18h] [bp-A4h]
  int v57; // [sp+1Ch] [bp-A0h]
  int v58; // [sp+20h] [bp-9Ch]
  unsigned int v59; // [sp+24h] [bp-98h]
  int v60; // [sp+28h] [bp-94h]
  int v61; // [sp+2Ch] [bp-90h]
  int v62; // [sp+2Ch] [bp-90h]
  char *v63; // [sp+2Ch] [bp-90h]
  int v64; // [sp+38h] [bp-84h]
  int v65; // [sp+3Ch] [bp-80h]
  int v66; // [sp+40h] [bp-7Ch]
  int v67; // [sp+44h] [bp-78h]
  int v68; // [sp+48h] [bp-74h]
  int v69; // [sp+4Ch] [bp-70h]
  const char *v70; // [sp+50h] [bp-6Ch]
  int v71; // [sp+54h] [bp-68h]
  unsigned int v72; // [sp+58h] [bp-64h]
  int v73; // [sp+5Ch] [bp-60h]
  int v74; // [sp+60h] [bp-5Ch]
  int v75; // [sp+64h] [bp-58h]
  int v76; // [sp+68h] [bp-54h]
  int v77; // [sp+6Ch] [bp-50h]
  int v78; // [sp+70h] [bp-4Ch]
  int v79; // [sp+74h] [bp-48h]
  int v80; // [sp+78h] [bp-44h]
  int v81; // [sp+7Ch] [bp-40h]
  int v82; // [sp+80h] [bp-3Ch]
  int v83; // [sp+84h] [bp-38h]
  int v84; // [sp+88h] [bp-34h]
  int v85; // [sp+8Ch] [bp-30h]
  const char *v86; // [sp+94h] [bp-28h]
  int v87; // [sp+9Ch] [bp-20h]
  int v88; // [sp+A0h] [bp-1Ch]
  int v89; // [sp+B0h] [bp-Ch] BYREF
  int v90; // [sp+B4h] [bp-8h] BYREF

  v5 = *(_DWORD *)(a2 + 4);
  v6 = *(int (__fastcall **)(int, const char *))a2;
  v7 = *(_DWORD **)(a2 + 64);
  result = sub_29C2BC(a1, a2, a3, 0);
  if ( !result )
  {
    result = sub_29E6BC(*(void (__fastcall **)(_DWORD, _DWORD))a2, *(_DWORD *)(a2 + 4), a3, 0);
    if ( !result )
    {
      v9 = -509607936;
      v10 = (int *)&unk_400254;
      v11 = "nop\t\t\t; (mov r0, r0)";
      v12 = -1;
      while ( 1 )
      {
        if ( (v12 & a3) == v9 )
        {
          result = *v10;
          if ( (*v10 & *v7) != 0 || (result = v10[1], (result & v7[1]) != 0) || (result = v10[2], (result & v7[2]) != 0) )
          {
            if ( (a3 & 0xF0000000) != 0xF0000000 || (v12 & 0xF0000000) == 0xF0000000 || !v12 )
              break;
          }
        }
        v10 += 6;
        v11 = (const char *)v10[5];
        if ( !v11 )
LABEL_175:
          abort();
        v12 = v10[4];
        v9 = v10[3];
      }
      v52 = v11;
      v61 = *(unsigned __int8 *)v11;
      if ( *v11 )
      {
        v57 = (unsigned __int8)a3;
        v56 = a3 & 0xF;
        v65 = (a3 >> 4) & 0xF0 | v56;
        v13 = a3 & 0x800000;
        v72 = (unsigned int)a3 >> 28;
        v14 = -v65;
        LOWORD(v15) = (unsigned __int16)"";
        if ( (a3 & 0x800000) != 0 )
          v14 = (a3 >> 4) & 0xF0 | a3 & 0xF;
        HIWORD(v15) = (unsigned int)"" >> 16;
        v82 = v14;
        if ( (a3 & 0x800000) != 0 )
          v16 = v15;
        else
          v16 = &word_3C1464;
        v17 = v65 == 0;
        if ( !v65 )
          v17 = (a3 & 0xA00000) == 0x800000;
        v18 = !v17;
        v87 = v18;
        v70 = (const char *)v16;
        if ( (a3 & 0x400000) != 0 )
          v19 = 83;
        else
          v19 = 67;
        v83 = v19;
        if ( v13 )
          v20 = -16777216;
        else
          v20 = 0;
        v68 = a3 & 0x400000;
        v58 = a3 & 0x800000;
        v21 = a1 + 4 * ((a3 & 0xFFFFFF) + v20);
        v60 = (a3 >> 4) & 0x30 | BYTE2(a3) & 0x4F;
        if ( (a3 & 0x1000000) != 0 )
          v22 = v21 + 10;
        else
          v22 = v21 + 8;
        v74 = v22;
        v64 = a3 & 0x1000000;
        v59 = v60 - 15;
        v23 = 4 * (unsigned __int8)a3;
        v84 = (a3 >> 7) & 0x1E;
        if ( !v13 )
          v23 = -4 * (unsigned __int8)a3;
        v69 = v23;
        v24 = "!";
        v67 = a3 & 0x200000;
        if ( (a3 & 0x200000) == 0 )
          v24 = (char *)v15;
        v75 = __ROR4__((unsigned __int8)a3, (a3 >> 7) & 0x1E);
        result = (BYTE2(a3) & 0x1F) + 1;
        v85 = (a3 >> 7) & 0x1F;
        v66 = BYTE2(a3) & 0xF;
        v86 = v24;
        v54 = 0;
        v71 = a1 + 8 + 4 * (a3 << 8 >> 8);
        v76 = (a3 >> 4) & 0xFFF0 | v56;
        v77 = (a3 >> 4) & 0xF000 | a3 & 0xFFF;
        v78 = result - v85;
        v79 = a3 & 0x2000200;
        v73 = 16;
        v25 = "%c";
        v55 = 0;
        v80 = ((unsigned __int8)a3 ^ (unsigned __int8)(a3 >> 12)) & 0xF;
        v26 = (int)v52;
        v81 = 16;
        v53 = v7;
        v27 = a3;
        v28 = v61;
        do
        {
          v29 = v26 + 1;
          if ( v28 == 37 )
          {
            switch ( *(_BYTE *)(v26 + 1) )
            {
              case '%':
                v26 += 2;
                result = v6(v5, "%%");
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
                result = (int)sub_29C1E4((unsigned __int8 *)(v26 + 1), v27, &v90, &v89);
                v29 = result;
                switch ( *(_BYTE *)result )
                {
                  case '\'':
                    v26 = result + 2;
                    if ( ~(-1 << v89) == v90 )
                      goto LABEL_121;
                    v29 = result + 1;
                    goto LABEL_40;
                  case '?':
                    result = ((int (__fastcall *)(int, char *, _DWORD))v6)(
                               v5,
                               v25,
                               *(unsigned __int8 *)(result + (1 << v89) - v90));
                    v29 += 1 << v89;
                    v26 = v29 + 1;
                    goto LABEL_40;
                  case 'R':
                    v41 = v90;
                    v45 = v55;
                    if ( v90 == 15 )
                      v45 = 1;
                    v55 = v45;
                    goto LABEL_126;
                  case 'T':
                  case 'r':
                    v41 = v90;
                    if ( *(_BYTE *)result == 84 )
                      v41 = ++v90;
LABEL_126:
                    v26 = result + 1;
                    v42 = *(unsigned __int8 *)(result + 1);
                    if ( v42 == 117 )
                    {
                      v43 = v41 == v81;
                      v42 = *(unsigned __int8 *)(result + 2);
                      v29 = result + 1;
                      v26 = result + 2;
                      if ( v41 == v81 )
                        result = 1;
                      else
                        v81 = v41;
                      if ( v43 )
                        v55 = result;
                    }
                    if ( v42 == 85 )
                    {
                      v44 = v73;
                      v29 = v26;
                      v73 = v41;
                      ++v26;
                      if ( v41 == v44 )
                        v55 = 1;
                    }
                    result = ((int (*)(int, const char *, ...))v6)(v5, "%s", (&off_3FDE3C[18 * dword_4707E4 + 2])[v41]);
                    goto LABEL_40;
                  case 'W':
                    v26 = result + 1;
                    result = ((int (*)(int, const char *, ...))v6)(v5, "%ld", v90 + 1);
                    v54 = v90 + 1;
                    goto LABEL_40;
                  case 'X':
                    v26 = result + 1;
                    result = ((int (*)(int, const char *, ...))v6)(v5, "%01lx", v90 & 0xF);
                    v54 = v90;
                    goto LABEL_40;
                  case '`':
                    v26 = result + 2;
                    if ( v90 )
                    {
                      v29 = result + 1;
                    }
                    else
                    {
LABEL_121:
                      v29 = result + 1;
                      result = ((int (__fastcall *)(int, char *, _DWORD))v6)(v5, v25, *(unsigned __int8 *)(result + 1));
                    }
                    goto LABEL_40;
                  case 'b':
                    v26 = result + 1;
                    result = ((int (*)(int, const char *, ...))v6)(v5, "%ld", 8 * v90);
                    v54 = 8 * v90;
                    goto LABEL_40;
                  case 'd':
                    result = ((int (*)(int, const char *, ...))v6)(v5, "%ld", v90);
                    v26 = v29 + 1;
                    v54 = v90;
                    goto LABEL_40;
                  case 'x':
                    result = ((int (*)(int, const char *, ...))v6)(v5, "0x%08lx", v90);
                    v26 = v29 + 1;
                    if ( (v27 & 0xFFFFFFF) == 0xFF00000 )
                    {
                      result = v6(v5, "\t; IMB");
                    }
                    else if ( (v27 & 0xFFFFFFF) == 0xFF00001 )
                    {
                      result = v6(v5, "\t; IMBRange");
                    }
                    goto LABEL_40;
                  default:
                    goto LABEL_175;
                }
              case 'A':
                v26 += 2;
                ((void (*)(int, const char *, ...))v6)(v5, "[%s", (&off_3FDE3C[18 * dword_4707E4 + 2])[v66]);
                if ( v64 )
                {
                  v54 = v69;
                  if ( v57 )
                    result = ((int (*)(int, const char *, ...))v6)(v5, ", #%d]%s", v69, v86);
                  else
                    result = v6(v5, (const char *)&word_419FC8);
                }
                else
                {
                  result = v6(v5, (const char *)&word_419FC8);
                  if ( v67 )
                  {
                    if ( v57 )
                      result = ((int (*)(int, const char *, ...))v6)(v5, ", #%d", v69);
                    v54 = v69;
                  }
                  else
                  {
                    result = ((int (*)(int, const char *, ...))v6)(v5, ", {%d}", v57);
                    v54 = v57;
                  }
                }
                break;
              case 'B':
                v26 += 2;
                result = (*(int (__fastcall **)(int, int))(a2 + 76))(v74, a2);
                break;
              case 'C':
                v26 += 2;
                if ( v79 == 512 )
                {
                  if ( v59 > 0x6F )
                    goto LABEL_94;
LABEL_166:
                  v49 = off_3FDE3C[v59 + 689];
                  if ( !v49 )
                  {
LABEL_94:
                    result = ((int (*)(int, const char *, ...))v6)(v5, "(UNDEF: %lu)", v60);
                    break;
                  }
LABEL_167:
                  result = ((int (*)(int, const char *, ...))v6)(v5, "%s", v49);
                }
                else
                {
                  result = ((int (*)(int, const char *, ...))v6)(v5, "%cPSR_", v83);
                  if ( (v27 & 0x80000) != 0 )
                    result = v6(v5, "f");
                  if ( (v27 & 0x40000) != 0 )
                    result = v6(v5, (const char *)&word_3DDC78);
                  if ( (v27 & 0x20000) != 0 )
                    result = v6(v5, "x");
                  if ( (v27 & 0x10000) != 0 )
                    result = v6(v5, (const char *)&word_3FD7C8);
                }
                break;
              case 'E':
                v26 += 2;
                if ( v78 <= 0 )
                  LOWORD(v40) = 26624;
                else
                  LOWORD(v40) = 26612;
                HIWORD(v40) = 64;
                result = ((int (__fastcall *)(int, int, int))v6)(v5, v40, v85);
                break;
              case 'P':
                v39 = v27 | 0x1000000;
                goto LABEL_87;
              case 'R':
                v26 += 2;
                if ( v59 > 0x6F )
                  goto LABEL_94;
                goto LABEL_166;
              case 'S':
                v62 = 1;
                goto LABEL_50;
              case 'U':
                v26 += 2;
                if ( (v27 & 0xF0) != 0x60 )
                {
                  if ( (unsigned int)(v56 - 1) > 0xE || (v49 = off_3FDE3C[v56 + 673]) == 0 )
                  {
LABEL_91:
                    result = ((int (*)(int, const char *, ...))v6)(v5, "#%d", v56);
                    break;
                  }
                  goto LABEL_167;
                }
                if ( v56 != 15 )
                  goto LABEL_91;
                result = v6(v5, "sy");
                break;
              case 'V':
                v26 += 2;
                v54 = v77;
                result = ((int (*)(int, const char *, ...))v6)(v5, "#%lu", v77);
                break;
              case 'a':
                v39 = v27;
LABEL_87:
                result = sub_29E28C(a1, (void (__fastcall **)(int, __int64 *))a2, v39);
                v26 += 2;
                v54 = result;
                break;
              case 'b':
                v26 += 2;
                result = (*(int (__fastcall **)(int, int))(a2 + 76))(v71, a2);
                break;
              case 'c':
                v26 += 2;
                if ( v72 != 14 )
                  result = ((int (*)(int, const char *, ...))v6)(v5, "%s", off_3FDE3C[v72 + 144]);
                break;
              case 'e':
                v26 += 2;
                v54 = v76;
                result = ((int (*)(int, const char *, ...))v6)(v5, "%d", v76);
                break;
              case 'm':
                v33 = 0;
                v6(v5, "{");
                v63 = v25;
                v34 = 0;
                do
                {
                  v35 = 1;
                  v36 = v27 & (1 << v33);
                  if ( v36 )
                  {
                    if ( v34 )
                      ((void (__fastcall *)(int, char *, int, int))v6)(v5, ", ", 1, v36);
                    v34 = 1;
                    ((void (__fastcall *)(int, char *, char *))v6)(v5, "%s", (&off_3FDE3C[18 * dword_4707E4 + 2])[v33]);
                  }
                  ++v33;
                }
                while ( v33 != 16 );
                v88 = v34;
                v29 = v26 + 1;
                v25 = v63;
                v26 += 2;
                result = ((int (__fastcall *)(int, char *, int, int))v6)(v5, "}", v35, v36);
                v37 = v88;
                goto LABEL_79;
              case 'o':
                v26 += 2;
                if ( (v27 & 0x2000000) != 0 )
                {
                  v32 = 0;
                  while ( __ROR4__(v75, 32 - v32) > 0xFFu )
                  {
                    v32 += 2;
                    if ( v32 == 32 )
                      goto LABEL_162;
                  }
                  if ( v84 == v32 )
                    result = ((int (*)(int, const char *, ...))v6)(v5, "#%d", v75);
                  else
LABEL_162:
                    result = ((int (*)(int, const char *, ...))v6)(v5, "#%d, %d", v57, v84);
                  v54 = v75;
                  break;
                }
                result = sub_29E138(v27, (int (*)(int, const char *, ...))v6, v5, 1);
                break;
              case 'p':
                v26 += 2;
                if ( (v27 & 0xF000) != 0xF000 )
                  break;
                if ( (*v53 & 0x1000) != 0 )
                  goto LABEL_168;
                result = v6(v5, "p");
                break;
              case 'q':
                v26 += 2;
                result = sub_29E138(v27, (int (*)(int, const char *, ...))v6, v5, 0);
                break;
              case 's':
                v62 = 0;
LABEL_50:
                v26 += 2;
                if ( (v27 & 0x4F0000) == 0x4F0000 )
                {
                  if ( v64 )
                  {
                    if ( v65 )
                    {
                      if ( v58 )
                      {
                        ((void (*)(int, const char *, ...))v6)(v5, "[pc, #%s%d]\t; ", "", v65);
                        v50 = v65;
                        goto LABEL_174;
                      }
                    }
                    else if ( v58 )
                    {
                      v6(v5, "[pc]\t; ");
                      v50 = 0;
LABEL_174:
                      result = (*(int (__fastcall **)(int, int))(a2 + 76))(v50 + a1 + 8, a2);
                      break;
                    }
                    ((void (*)(int, const char *, ...))v6)(v5, "[pc, #%s%d]\t; ", (const char *)&word_3C1464, v65);
                    v50 = -v65;
                    goto LABEL_174;
                  }
                  result = ((int (*)(int, const char *, ...))v6)(v5, "[pc], #%s%d", v70, v65);
                  v37 = v62;
LABEL_79:
                  v17 = v37 == 0;
                  v38 = v55;
                  if ( v17 )
                    v38 = 1;
                  v55 = v38;
                }
                else
                {
                  ((void (*)(int, const char *, ...))v6)(v5, "[%s", (&off_3FDE3C[18 * dword_4707E4 + 2])[v66]);
                  if ( v64 )
                  {
                    if ( v68 )
                    {
                      if ( v87 )
                        ((void (*)(int, const char *, ...))v6)(v5, ", #%s%d", v70, v65);
                      v30 = -v65;
                      if ( v58 )
                        v30 = v65;
                      v54 = v30;
LABEL_58:
                      v31 = "";
                      if ( v67 )
                        v31 = "!";
                    }
                    else
                    {
                      ((void (*)(int, const char *, ...))v6)(
                        v5,
                        ", %s%s",
                        v70,
                        (&off_3FDE3C[18 * dword_4707E4 + 2])[v56]);
                      if ( v62 )
                        goto LABEL_58;
                      if ( v67 )
                      {
                        v31 = "!";
                        v47 = v55;
                        if ( !v80 )
                          v47 = 1;
                        v55 = v47;
                      }
                      else
                      {
                        v31 = "";
                      }
                    }
                    result = ((int (*)(int, const char *, ...))v6)(v5, "]%s", v31);
                    break;
                  }
                  if ( v68 )
                  {
                    if ( v58 )
                      result = ((int (*)(int, const char *, ...))v6)(v5, "], #%s%d", "", v65);
                    else
                      result = ((int (*)(int, const char *, ...))v6)(v5, "], #%s%d", (const char *)&word_3C1464, v65);
                    v54 = v82;
                    if ( v62 )
                      break;
                  }
                  else
                  {
                    result = ((int (*)(int, const char *, ...))v6)(
                               v5,
                               "], %s%s",
                               v70,
                               (&off_3FDE3C[18 * dword_4707E4 + 2])[v56]);
                    if ( v62 )
                      break;
                    v48 = v55;
                    if ( !v80 )
                      v48 = 1;
                    v55 = v48;
                  }
                  if ( v67 )
                  {
LABEL_168:
                    v55 = 1;
                  }
                  else
                  {
                    v46 = v55;
                    if ( ((unsigned int)&unk_40000F & v27) == 0xF )
                      v46 = 1;
                    v55 = v46;
                  }
                }
                break;
              case 't':
                v26 += 2;
                if ( (v27 & 0x1200000) == 0x200000 )
                  result = v6(v5, "t");
                break;
              default:
                goto LABEL_175;
            }
          }
          else
          {
            result = v6(v5, v25);
            v29 = v26++;
          }
LABEL_40:
          v28 = *(unsigned __int8 *)(v29 + 1);
        }
        while ( *(_BYTE *)(v29 + 1) );
        if ( (unsigned int)(v54 + 16) > 0x30 )
          result = ((int (*)(int, const char *, ...))v6)(v5, "\t; 0x%lx", v54);
        if ( v55 )
          return v6(v5, "\t; <UNPREDICTABLE>");
      }
    }
  }
  return result;
}
