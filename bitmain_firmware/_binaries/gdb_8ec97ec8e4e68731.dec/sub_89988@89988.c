unsigned int sub_89988()
{
  char *v0; // r4
  size_t v1; // r0
  size_t v2; // r8
  unsigned int v3; // r1
  void *v4; // r6
  unsigned int result; // r0
  char **v6; // r6
  int v7; // r5
  char *i; // r10
  int v9; // r0
  bool v10; // zf
  unsigned int v11; // r10
  bool v12; // cc
  _UNKNOWN **v13; // r6
  int v14; // r5
  char *j; // r10
  int v16; // r0
  bool v17; // zf
  unsigned int v18; // r10
  bool v19; // cc
  char *v20; // t1
  int v21; // r7
  _BYTE *v22; // r2
  int v23; // r3
  bool v24; // zf
  int v25; // r0
  int v26; // r0
  int v27; // r0
  _BYTE *v28; // r3
  int v29; // r0
  int v30; // r4
  unsigned int v31; // r7
  void *v32; // r6
  char *v33; // r10
  unsigned int v34; // r4
  int v35; // r8
  char *v36; // r4
  _BOOL4 v37; // r2
  unsigned __int8 v38; // r3
  int v39; // r5
  bool v40; // zf
  unsigned __int8 *v41; // r1
  int v42; // r3
  int v43; // t1
  unsigned int v44; // r2
  int v45; // r0
  bool v46; // zf
  bool v47; // cc
  int v48; // r8
  unsigned int v49; // r3
  char **v50; // r5
  int v51; // r2
  char **v52; // r5
  int v53; // r2
  _BYTE *v54; // r0
  int v55; // r3
  int v56; // r3
  int v57; // lr
  int v58; // r12
  unsigned int v59; // t1
  const char *v60; // r0
  char *v61; // r1
  char v62; // r2
  int v63; // t1
  int v64; // r3
  int v65; // r2
  int v66; // r2
  char *v67; // r0
  unsigned int v68; // r2
  const char *v69; // r4
  unsigned int v70; // r3
  bool v71; // cc
  unsigned int v72; // r3
  const char *v73; // r6
  bool v74; // cc
  unsigned int v75; // t1
  unsigned int v76; // r2
  bool v77; // cc
  unsigned int v78; // t1
  bool v79; // zf
  size_t v80; // r7
  size_t v81; // r0
  const char *v82; // r1
  _BYTE *v83; // r6
  void *v84; // r2
  void *v85; // r3
  int v86; // r0
  int v87; // r2
  unsigned int v88; // r2
  void *dest; // [sp+8h] [bp-64h] BYREF
  int v90; // [sp+Ch] [bp-60h]
  const char *v91; // [sp+10h] [bp-5Ch]
  void *src; // [sp+14h] [bp-58h]
  char *s2; // [sp+18h] [bp-54h]
  char *v94; // [sp+1Ch] [bp-50h]
  _DWORD v95[3]; // [sp+24h] [bp-48h] BYREF
  _DWORD v96[6]; // [sp+30h] [bp-3Ch] BYREF

  v0 = (char *)dword_487CC0;
  v94 = "or";
  s2 = "shr";
  while ( 2 )
  {
    dword_487CC4 = (int)v0;
    v1 = strlen(v0);
    v2 = v1;
    src = v0;
    if ( v1 > 2 )
    {
      v6 = &off_36B74C;
      v7 = 0;
      for ( i = s2; ; i = *(v6 - 3) )
      {
        if ( !strncasecmp(v0, i, 3u) )
        {
          v9 = isalpha((unsigned __int8)*i);
          v10 = v2 == 3;
          if ( v2 != 3 )
            v10 = v9 == 0;
          if ( v10 )
            goto LABEL_107;
          v11 = (unsigned __int8)v0[3];
          if ( !isalpha(v11) )
          {
            v12 = v11 > 0x5F;
            if ( v11 != 95 )
              v12 = v11 - 48 > 9;
            if ( v12 )
            {
LABEL_107:
              v50 = &(&off_36B740)[3 * v7];
              v51 = (int)v50[2];
              result = (unsigned int)v50[1];
              dword_487CC0 = (int)(v0 + 3);
              dword_475160 = v51;
              return result;
            }
          }
        }
        ++v7;
        v6 += 3;
        if ( v7 == 9 )
          break;
      }
LABEL_16:
      v13 = &off_36B7AC;
      v14 = 0;
      for ( j = v94; ; j = v20 )
      {
        if ( !strncasecmp(v0, j, 2u) )
        {
          v16 = isalpha((unsigned __int8)*j);
          v17 = v16 == 0;
          if ( v16 )
            v17 = v2 == 2;
          if ( v17 )
            goto LABEL_108;
          v18 = (unsigned __int8)v0[2];
          if ( !isalpha(v18) )
          {
            v19 = v18 > 0x5F;
            if ( v18 != 95 )
              v19 = v18 - 48 > 9;
            if ( v19 )
            {
LABEL_108:
              v52 = &(&off_36B740)[3 * v14];
              v53 = (int)v52[29];
              dword_487CC0 = (int)(v0 + 2);
              result = (unsigned int)v52[28];
              dword_475160 = v53;
              return result;
            }
          }
        }
        if ( ++v14 == 6 )
          break;
        v20 = (char *)v13[3];
        v13 += 3;
      }
      goto LABEL_4;
    }
    if ( v1 > 1 )
      goto LABEL_16;
LABEL_4:
    v4 = v0 + 1;
    v3 = (unsigned __int8)*v0;
    result = v3;
    switch ( *v0 )
    {
      case 0:
        result = dword_475178;
        if ( dword_475178 )
        {
          result = dword_487CAC;
          if ( dword_487CAC )
            return 262;
        }
        return result;
      case 9:
      case 10:
      case 32:
        dword_487CC0 = (int)++v0;
        continue;
      case 33:
      case 38:
      case 42:
      case 43:
      case 45:
      case 47:
      case 58:
      case 60:
      case 61:
      case 62:
      case 63:
      case 64:
      case 91:
      case 93:
      case 94:
      case 123:
      case 124:
      case 125:
      case 126:
        goto LABEL_29;
      case 34:
        v21 = 0;
        v96[0] = v0 + 1;
        while ( 1 )
        {
          if ( v21 + 1 >= dword_475180 )
          {
            dword_475180 += 64;
            dword_475184 = sub_93050(dword_475184, dword_475180);
          }
          v22 = (_BYTE *)v96[0];
          v23 = *(unsigned __int8 *)v96[0];
          if ( v23 == 34 )
            goto LABEL_35;
          if ( v23 == 92 )
            break;
          if ( *(_BYTE *)v96[0] )
          {
            ++v96[0];
            *(_BYTE *)(dword_475184 + v21++) = *v22;
LABEL_34:
            v22 = (_BYTE *)v96[0];
            v23 = *(unsigned __int8 *)v96[0];
          }
LABEL_35:
          v24 = v23 == 0;
          if ( v23 )
            v24 = v23 == 34;
          if ( v24 )
          {
            v96[0] = v22 + 1;
            if ( *v22 != 34 )
              sub_946E0("Unterminated string in expression.");
            v55 = dword_475184;
            *(_BYTE *)(dword_475184 + v21) = 0;
            dword_475160 = v55;
            dword_475164 = v21;
            dword_487CC0 = v96[0];
            return 260;
          }
        }
        ++v96[0];
        v25 = sub_258D1C(*(_DWORD *)(*(_DWORD *)(dword_47517C + 4) + 4), v96);
        if ( v25 != -1 )
        {
          *(_BYTE *)(dword_475184 + v21++) = v25;
          v22 = (_BYTE *)v96[0];
          v23 = *(unsigned __int8 *)v96[0];
          goto LABEL_35;
        }
        goto LABEL_34;
      case 39:
        dword_487CC0 = (int)(v0 + 2);
        v26 = (unsigned __int8)v0[1];
        if ( v26 == 92 )
        {
          v26 = sub_258D1C(*(_DWORD *)(*(_DWORD *)(dword_47517C + 4) + 4), &dword_487CC0);
        }
        else if ( v26 == 39 )
        {
          sub_946E0("Empty character constant.");
        }
        *(_QWORD *)&dword_475160 = v26;
        v27 = sub_1780B4(*(_DWORD *)(*(_DWORD *)(dword_47517C + 4) + 4));
        v28 = (_BYTE *)dword_487CC0;
        dword_475168 = *(_DWORD *)(v27 + 4);
        ++dword_487CC0;
        if ( *v28 == 39 )
          return 258;
        v29 = sub_F5E88(v0);
        v30 = v29 - (_DWORD)v0;
        if ( v30 <= 2 )
          sub_946E0("Invalid character constant.");
        dword_487CC0 = v29;
        if ( *(_BYTE *)(v29 - 1) != 39 )
          sub_946E0("Unmatched single quote.");
        v31 = v30 - 2;
        src = v4;
        v32 = (void *)sub_893AC((int)v4, v30 - 2);
        goto LABEL_50;
      case 40:
        dword_487CC0 = (int)(v0 + 1);
        result = 40;
        ++dword_487CC8;
        return result;
      case 41:
        result = dword_487CC8;
        if ( dword_487CC8 )
        {
          dword_487CC0 = (int)(v0 + 1);
          --dword_487CC8;
          return 41;
        }
        return result;
      case 44:
        if ( !dword_487CCC || (result = dword_487CC8) != 0 )
        {
          dword_487CC0 = (int)(v0 + 1);
          return 44;
        }
        return result;
      case 46:
        if ( (unsigned int)(unsigned __int8)v0[1] - 48 <= 9 )
        {
          v39 = (int)v0;
          v37 = (unsigned int)dword_46DE54 > 0xA;
LABEL_114:
          v56 = 0;
          v57 = v37 | 1;
          v58 = 0;
          while ( 1 )
          {
            if ( v37 || (v3 & 0xDF) != 0x45 )
            {
              if ( !v58 && v3 == 46 )
              {
                v58 = 1;
              }
              else if ( (!v56 || (*(_BYTE *)(v39 - 1) & 0xDF) != 0x45 || ((v3 - 43) & 0xFD) != 0)
                     && v3 - 48 > 9
                     && (v3 & 0xFFFFFFDF) - 65 > 0x19 )
              {
                result = sub_89468(dword_47517C, (unsigned __int8 *)v0, v39 - (_DWORD)v0, v58 | v56, (int)&dword_475160);
                if ( result == 270 )
                {
                  v60 = (const char *)memcpy(&dest, v0, v39 - (_DWORD)v0);
                  *((_BYTE *)&dest + v39 - (_DWORD)v0) = 0;
                  sub_946E0("Invalid number \"%s\".", v60);
                }
                dword_487CC0 = v39;
                return result;
              }
            }
            else
            {
              v56 = 1;
              v37 = v57;
              v58 = 1;
            }
            v59 = *(unsigned __int8 *)++v39;
            v3 = v59;
          }
        }
        result = 46;
LABEL_29:
        dword_487CC0 = (int)(v0 + 1);
        return result;
      case 48:
      case 49:
      case 50:
      case 51:
      case 52:
      case 53:
      case 54:
      case 55:
      case 56:
      case 57:
        v37 = (unsigned int)dword_46DE54 > 0xA;
        if ( v3 != 48 )
          goto LABEL_129;
        v38 = v0[1];
        if ( (v38 & 0xDF) == 0x58 )
        {
          v39 = (int)(v0 + 2);
          v3 = (unsigned __int8)v0[2];
          v37 = 1;
        }
        else if ( (v38 & 0xCF) == 0x44 )
        {
          v39 = (int)(v0 + 2);
          v3 = (unsigned __int8)v0[2];
          v37 = 0;
        }
        else
        {
LABEL_129:
          v39 = (int)v0;
        }
        goto LABEL_114;
      default:
        v40 = v3 == 95;
        if ( v3 != 95 )
          v40 = v3 == 36;
        if ( v40 )
        {
          v31 = 0;
        }
        else
        {
          if ( (v3 & 0xFFFFFFDF) - 65 > 0x19 )
            sub_946E0("Invalid character '%c' in expression.", v3);
          v31 = 0;
        }
LABEL_94:
        v46 = result == 95;
        if ( result != 95 )
          v46 = result == 36;
        if ( !v46 && result - 48 > 9 )
        {
          v47 = result > 0x3C;
          if ( result != 60 )
            v47 = (result & 0xFFFFFFDF) - 65 > 0x19;
          if ( v47 )
            goto LABEL_109;
        }
        if ( result != 60 )
          goto LABEL_93;
        v41 = (unsigned __int8 *)&v0[v31];
        v44 = v31;
        v45 = 1;
        while ( 1 )
        {
          v43 = *++v41;
          v42 = v43;
          ++v44;
          if ( !v43 )
            break;
          if ( v42 == 60 )
          {
            ++v45;
          }
          else if ( v42 == 62 && !--v45 )
          {
            v31 = v44;
LABEL_93:
            result = (unsigned __int8)v0[++v31];
            goto LABEL_94;
          }
        }
LABEL_109:
        v54 = (_BYTE *)sub_893AC((int)v0, v31);
        v32 = v54;
        if ( v31 == 2 && *v54 == 73 && v54[1] == 70 )
        {
          free(v54);
          return 0;
        }
        dword_487CC0 += v31;
LABEL_50:
        if ( v31 == 5 )
        {
          if ( strcmp((const char *)v32, "CLASS") )
          {
            if ( !strcmp((const char *)v32, "FALSE") )
            {
              *(_QWORD *)&dword_475160 = 0;
              free(v32);
              return 274;
            }
            goto LABEL_53;
          }
          goto LABEL_171;
        }
        if ( v31 != 6 )
        {
          if ( v31 == 4 )
          {
            if ( !strcmp((const char *)v32, "TRUE") )
            {
              *(_QWORD *)&dword_475160 = 1;
              free(v32);
              return 273;
            }
            if ( !strcmp((const char *)v32, "SELF") )
            {
              sub_21D6B0(v96, "this", dword_487CD0, 1, 0);
              if ( v96[0] )
              {
                free(v32);
                return 272;
              }
            }
          }
          goto LABEL_53;
        }
        if ( !strcmp((const char *)v32, "OBJECT") )
        {
LABEL_171:
          free(v32);
          return 267;
        }
        if ( !strcmp((const char *)v32, "RECORD") )
        {
          free(v32);
          return 266;
        }
        if ( !strcmp((const char *)v32, "SIZEOF") )
        {
          free(v32);
          return 268;
        }
LABEL_53:
        dword_475164 = v31;
        dword_475160 = (int)src;
        if ( *(_BYTE *)src == 36 )
        {
          sub_1C4F9C(dword_47517C, dword_475160, dword_475164);
          v67 = (char *)memcpy(&dest, src, v31);
          *((_BYTE *)&dest + v31) = 0;
          dword_475188 = sub_26CA48(v67 + 1);
          if ( v32 )
            free(v32);
          return 271;
        }
        v33 = (char *)sub_1C3E58(dword_475160, dword_475164);
        v95[0] = 0;
        if ( dword_475178 && dword_47515C && sub_172888(dword_47515C, v33, 1) )
        {
LABEL_57:
          v34 = v31 + 1;
LABEL_58:
          v35 = 1;
LABEL_59:
          v36 = (char *)sub_93050(dword_475184, v34);
          dword_475184 = (int)v36;
          strncpy(v36, v33, v31);
          v36[v31] = 0;
          dword_475160 = (int)v36;
          dword_475168 = 0;
          dword_47516C = 0;
          dword_475164 = v31;
          if ( v32 )
            free(v32);
          result = 263;
          if ( v35 )
            result = 261;
          dword_475170 = v95[0] != 0;
          return result;
        }
        v94 = (char *)&dword_487CD0;
        result = sub_21D6B0(v96, v33, dword_487CD0, 1, v95);
        v48 = v96[0];
        v49 = v95[0];
        if ( v96[0] )
        {
LABEL_104:
          if ( v49 )
          {
LABEL_105:
            v34 = v31 + 1;
            goto LABEL_106;
          }
          goto LABEL_172;
        }
        if ( v95[0] )
          goto LABEL_105;
        v61 = v33 - 1;
        do
        {
          v63 = (unsigned __int8)*++v61;
          v62 = v63;
          ++v49;
          if ( (unsigned int)(v63 - 97) <= 0x19 )
            *v61 = v62 - 32;
        }
        while ( v49 <= v31 );
        if ( dword_475178 && dword_47515C && sub_172888(dword_47515C, v33, 1) )
          goto LABEL_57;
        result = sub_21D6B0(v96, v33, *(_DWORD *)v94, 1, v95);
        v48 = v96[0];
        if ( v96[0] )
        {
          v49 = v95[0];
          goto LABEL_104;
        }
        v64 = v95[0];
        if ( v95[0] )
          goto LABEL_105;
        v34 = v31 + 1;
        do
        {
          if ( v64 )
          {
            v66 = (unsigned __int8)v33[v64];
            if ( (unsigned int)(v66 - 65) <= 0x19 )
              v33[v64] = v66 + 32;
          }
          else
          {
            v65 = (unsigned __int8)*v33;
            if ( (unsigned int)(v65 - 97) <= 0x19 )
              *v33 = v65 - 32;
          }
          ++v64;
        }
        while ( v64 != v34 );
        if ( dword_475178 && dword_47515C && sub_172888(dword_47515C, v33, 1) )
          goto LABEL_58;
        result = sub_21D6B0(v96, v33, *(_DWORD *)v94, 1, v95);
        v49 = v95[0];
        v48 = v96[0];
        if ( v95[0] )
        {
LABEL_106:
          v35 = 0;
          goto LABEL_59;
        }
        if ( v96[0] )
        {
LABEL_172:
          v68 = *(unsigned __int8 *)(v48 + 32);
          s2 = (char *)&off_46DBB8;
          if ( *((_DWORD *)off_46DBB8 + 4 * (v68 >> 3)) == 10 )
          {
LABEL_175:
            dword_475170 = v49 != 0;
            if ( !v32 )
              result = 292;
            dword_475168 = v48;
            dword_47516C = 0;
            if ( v32 )
            {
              free(v32);
              return 292;
            }
            return result;
          }
          result = sub_21AB84(v33);
          if ( result )
          {
LABEL_174:
            v49 = v95[0];
            goto LABEL_175;
          }
          if ( *(_DWORD *)(*(_DWORD *)s2 + 16 * (*(unsigned __int8 *)(v48 + 32) >> 3)) == 8 )
          {
            v69 = (const char *)dword_487CC0;
            v90 = 0;
            v91 = "::";
            dest = v32;
            while ( 1 )
            {
              while ( 1 )
              {
                v70 = *(unsigned __int8 *)v69;
                v71 = v70 > 0x20;
                if ( v70 != 32 )
                  v71 = v70 - 9 > 1;
                if ( v71 )
                  break;
                ++v69;
              }
              if ( v70 != 58 || v69[1] != 58 )
                break;
              v72 = *((unsigned __int8 *)v69 + 2);
              v73 = v69 + 2;
              v74 = v72 > 0x20;
              if ( v72 != 32 )
                v74 = v72 - 9 > 1;
              if ( !v74 )
              {
                do
                {
                  v75 = *(unsigned __int8 *)++v73;
                  v72 = v75;
                  v76 = v75 - 9;
                  v77 = v75 > 0x20;
                  if ( v75 != 32 )
                    v77 = v76 > 1;
                }
                while ( !v77 );
              }
              v69 = v73;
              while ( 1 )
              {
                v79 = v72 == 95;
                if ( v72 != 95 )
                  v79 = v72 == 36;
                if ( !v79 && v72 - 48 > 9 && (v72 & 0xFFFFFFDF) - 65 > 0x19 )
                  break;
                v78 = *(unsigned __int8 *)++v69;
                v72 = v78;
              }
              if ( v73 == v69 )
                break;
              src = (void *)(v69 - v73);
              v80 = strlen(v33);
              strlen(v73);
              memcpy(&dest, v33, v80);
              v81 = strlen(v33);
              v82 = v73;
              v83 = src;
              v84 = src;
              *(_WORD *)((char *)&dest + v81) = *(_WORD *)v91;
              v85 = memcpy((char *)&dest + v81 + 2, v82, (size_t)v84);
              v86 = v90;
              v87 = *(_DWORD *)v94;
              v83[(_DWORD)v85] = v90;
              sub_21D6B0(v96, &dest, v87, 1, v86);
              if ( !v96[0] || *(_DWORD *)(*(_DWORD *)s2 + 16 * (*(unsigned __int8 *)(v96[0] + 32) >> 3)) != 8 )
                break;
              dword_487CC0 = (int)v69;
              v48 = v96[0];
            }
            v32 = dest;
            dword_475168 = *(_DWORD *)(v48 + 24);
            if ( !dest )
              return 264;
            goto LABEL_189;
          }
          dword_475168 = sub_1946C8(
                           **(_DWORD **)(dword_47517C + 4),
                           *(_DWORD *)(*(_DWORD *)(dword_47517C + 4) + 4),
                           v33);
          if ( !dword_475168 )
          {
LABEL_193:
            if ( v32 )
              free(v32);
            dword_475168 = v48;
            dword_47516C = 0;
            return 263;
          }
LABEL_188:
          if ( !v32 )
            return 264;
LABEL_189:
          free(v32);
          return 264;
        }
        result = sub_21AB84(v33);
        if ( result )
          goto LABEL_174;
        dword_475168 = sub_1946C8(**(_DWORD **)(dword_47517C + 4), *(_DWORD *)(*(_DWORD *)(dword_47517C + 4) + 4), v33);
        if ( dword_475168 )
          goto LABEL_188;
        v88 = *(unsigned __int8 *)src;
        if ( v88 <= 0x60 )
        {
          if ( v88 <= 0x40 )
            goto LABEL_193;
          goto LABEL_231;
        }
        if ( v88 >= dword_46DE54 + 87 )
        {
LABEL_231:
          if ( v88 >= dword_46DE54 + 55 )
            goto LABEL_193;
        }
        if ( sub_89468(dword_47517C, (unsigned __int8 *)src, v31, 0, (int)v96) != 258 )
          goto LABEL_193;
        dword_475168 = 0;
        dword_47516C = 0;
        dword_475170 = v95[0] != 0;
        if ( v32 )
          free(v32);
        return 265;
    }
  }
}
