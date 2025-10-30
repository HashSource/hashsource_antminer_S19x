int sub_7BA58()
{
  unsigned __int8 *v0; // r7
  unsigned __int8 *v1; // r4
  int v2; // r8
  int v3; // r3
  int v5; // r3
  bool v6; // zf
  int v7; // r3
  int v8; // r3
  bool v9; // zf
  int v10; // r3
  int v11; // r3
  bool v12; // zf
  int v13; // r0
  _BYTE *v14; // r3
  int v15; // r2
  int v16; // r3
  bool v17; // zf
  int v18; // r3
  bool v19; // zf
  int v20; // r5
  int v21; // r10
  int v22; // r2
  int v23; // r3
  int v24; // r12
  int v25; // r1
  int v26; // t1
  size_t v27; // r2
  int v28; // r3
  int v29; // r5
  int v30; // r8
  unsigned __int8 *v31; // r1
  int v32; // r7
  int v33; // r0
  char v34; // t1
  int v35; // r2
  int v36; // r0
  int v37; // r3
  int v38; // r9
  int v39; // r0
  int v40; // r0
  int v41; // r3
  bool v42; // zf
  int v43; // r3
  bool v44; // zf
  unsigned __int8 v45; // r3
  int v46; // r3
  bool v47; // zf
  int v48; // r3
  bool v49; // zf
  int v50; // r3
  bool v51; // zf
  bool v52; // zf
  int v53; // r9
  int v54; // r5
  int v55; // r1
  int v56; // r3
  int v57; // t1
  bool v58; // zf
  int v59; // r0
  int v60; // r3
  int v61; // r3
  int v62; // r7
  int v63; // r0
  int v64; // r0
  int v65; // r0
  int v66; // r4
  int v67; // r0
  int v68; // r0
  unsigned int v69; // r3
  unsigned __int8 *v70; // r0
  int v71; // r4
  int v72; // r2
  unsigned int v74; // t1
  int v75; // r0
  unsigned int v76; // r3
  int v77; // r2
  unsigned int v79; // t1
  int v80; // [sp+0h] [bp-2Ch] BYREF
  int v81; // [sp+4h] [bp-28h]

  v0 = (unsigned __int8 *)dword_474F5C;
  while ( 2 )
  {
    v1 = v0 + 1;
    v2 = *v0;
    v3 = v2;
    switch ( *v0 )
    {
      case 0u:
        dword_474F60 = (int)v0;
        return 0;
      case 9u:
      case 0xAu:
      case 0x20u:
        dword_474F5C = (int)++v0;
        continue;
      case 0x21u:
        v46 = v0[1];
        dword_474F60 = (int)v0;
        v47 = v46 == 61;
        if ( v46 == 61 )
        {
          v3 = (int)&dword_364FB0;
          dword_474F5C = (int)(v0 + 2);
          dword_474F6C = (int)&dword_364FB0;
        }
        else
        {
          v3 = 33;
        }
        if ( v47 )
          return 299;
        dword_474F5C = (int)(v0 + 1);
        return v3;
      case 0x22u:
        dword_474F60 = (int)v0;
        if ( dword_474F64 )
          return 269;
        dword_474F68 = (int)v0;
        v3 = 269;
        dword_474F64 = (int)"unexpected string literal";
        return v3;
      case 0x25u:
        v18 = v0[1];
        dword_474F60 = (int)v0;
        v19 = v18 == 61;
        if ( v18 == 61 )
        {
          v3 = (int)&dword_364FE8;
          dword_474F5C = (int)(v0 + 2);
          dword_474F6C = (int)&dword_364FE8;
        }
        else
        {
          v3 = 37;
        }
        if ( v19 )
          return 290;
        dword_474F5C = (int)(v0 + 1);
        return v3;
      case 0x26u:
        v16 = v0[1];
        dword_474F60 = (int)v0;
        if ( v16 == 61 )
        {
          dword_474F5C = (int)(v0 + 2);
          dword_474F6C = (int)&dword_364FF0;
          return 290;
        }
        else
        {
          v17 = v16 == 38;
          if ( v16 == 38 )
          {
            v3 = (int)&dword_364FBC;
            dword_474F5C = (int)(v0 + 2);
            dword_474F6C = (int)&dword_364FBC;
          }
          else
          {
            v3 = 38;
          }
          if ( v17 )
            return 297;
          else
            dword_474F5C = (int)(v0 + 1);
        }
        return v3;
      case 0x27u:
        v14 = v0 + 2;
        dword_474F5C = (int)(v0 + 2);
        dword_474F60 = (int)v0;
        v15 = v0[1];
        if ( v15 == 92 )
        {
          sub_7B964();
          v14 = (_BYTE *)dword_474F5C;
        }
        else if ( v15 == 39 )
        {
          if ( dword_474F64 )
            return 269;
          dword_474F68 = (int)v0;
          v3 = 269;
          dword_474F64 = (int)"empty character constant";
          return v3;
        }
        dword_474F5C = (int)(v14 + 1);
        if ( *v14 == 39 )
        {
          v66 = ((int (__fastcall *)(char *))loc_7B738)("char");
          v67 = ((int (__fastcall *)(unsigned __int8 *, int))loc_7B6D4)(v0, dword_474F5C - (_DWORD)v0);
          v68 = ((int (__fastcall *)(int, int, int))loc_7B794)(60, v66, v67);
          v3 = 258;
          dword_474F6C = v68;
        }
        else
        {
          if ( dword_474F64 )
            return 269;
          dword_474F68 = (int)v0;
          v3 = 269;
          dword_474F64 = (int)"invalid character constant";
        }
        return v3;
      case 0x28u:
        dword_474F60 = (int)v0;
        if ( strncmp((const char *)v0, "(anonymous namespace)", 0x15u) )
        {
          v3 = 40;
          goto LABEL_4;
        }
        dword_474F5C = (int)(v0 + 21);
        v13 = ((int (__fastcall *)(const char *, int))loc_7B6D4)("(anonymous namespace)", 21);
        v3 = 260;
        dword_474F6C = v13;
        return v3;
      case 0x29u:
      case 0x2Cu:
      case 0x3Fu:
      case 0x40u:
      case 0x5Bu:
      case 0x5Du:
      case 0x7Bu:
      case 0x7Du:
      case 0x7Eu:
        dword_474F60 = (int)v0;
        goto LABEL_4;
      case 0x2Au:
        v48 = v0[1];
        dword_474F60 = (int)v0;
        v49 = v48 == 61;
        if ( v48 == 61 )
        {
          v3 = (int)&dword_364FE0;
          dword_474F5C = (int)(v0 + 2);
          dword_474F6C = (int)&dword_364FE0;
        }
        else
        {
          v3 = 42;
        }
        if ( v49 )
          return 290;
        dword_474F5C = (int)(v0 + 1);
        return v3;
      case 0x2Bu:
        v41 = v0[1];
        dword_474F60 = (int)v0;
        if ( v41 == 61 )
        {
          dword_474F5C = (int)(v0 + 2);
          dword_474F6C = (int)&dword_364FD8;
          return 290;
        }
        else
        {
          v42 = v41 == 43;
          if ( v41 == 43 )
          {
            v3 = (int)&dword_364FC4;
            dword_474F5C = (int)(v0 + 2);
            dword_474F6C = (int)&dword_364FC4;
          }
          else
          {
            v3 = 43;
          }
          if ( v42 )
            return 305;
          else
            dword_474F5C = (int)(v0 + 1);
        }
        return v3;
      case 0x2Du:
        v20 = v0[1];
        dword_474F60 = (int)v0;
        switch ( v20 )
        {
          case '=':
            dword_474F5C = (int)(v0 + 2);
            dword_474F6C = (int)&dword_364FDC;
            return 290;
          case '-':
            dword_474F5C = (int)(v0 + 2);
            dword_474F6C = (int)"--";
            return 306;
          case '>':
            dword_474F5C = (int)(v0 + 2);
            dword_474F6C = (int)&dword_364FCC;
            return 307;
        }
        if ( !strncmp((const char *)v0, "-in-", 4u) )
        {
          v3 = 295;
          dword_474F5C = (int)(v0 + 4);
          return v3;
        }
        v21 = (int)(v0 + 1);
        if ( (unsigned int)(v20 - 48) > 9 )
        {
          dword_474F5C = (int)(v0 + 1);
          return 45;
        }
        goto LABEL_60;
      case 0x2Eu:
        v3 = v0[1];
        dword_474F60 = (int)v0;
        if ( v3 == 46 )
        {
          if ( v0[2] == 46 )
          {
            v3 = 284;
            dword_474F5C = (int)(v0 + 3);
            return v3;
          }
LABEL_4:
          dword_474F5C = (int)(v0 + 1);
          return v3;
        }
        if ( (unsigned int)(v3 - 48) > 9 )
        {
          v3 = 46;
          goto LABEL_4;
        }
LABEL_108:
        v20 = v2;
        v21 = (int)v0;
LABEL_60:
        v22 = 0;
LABEL_61:
        v23 = 0;
        v24 = v22 | 1;
        v25 = 0;
        while ( 1 )
        {
          if ( !v22 && (v20 & 0xDF) == 0x45 )
          {
            v23 = 1;
            v22 = v24;
            v25 = 1;
            goto LABEL_64;
          }
          if ( !v25 && v20 == 46 )
          {
            v25 = 1;
            goto LABEL_64;
          }
          if ( (!v23 || (*(_BYTE *)(v21 - 1) & 0xDF) != 0x45 || ((v20 - 43) & 0xFD) != 0)
            && (word_438898[v20] & 0x8C) == 0 )
          {
            break;
          }
LABEL_64:
          v26 = *(unsigned __int8 *)++v21;
          v20 = v26;
        }
        v27 = v21 - (_DWORD)v0;
        v28 = v25 | v23;
        if ( v2 == 45 )
        {
          v29 = v27 - 1;
          v30 = 61;
        }
        else
        {
          v29 = v21 - (_DWORD)v0;
          v1 = v0;
          v30 = 60;
        }
        if ( v28 )
        {
          v60 = byte_438798[v1[v29 - 1]];
          if ( v60 == 102 )
          {
            --v29;
            v62 = ((int (__fastcall *)(char *))loc_7B738)("float");
          }
          else if ( v60 == 108 )
          {
            --v29;
            v62 = ((int (__fastcall *)(const char *))loc_7B738)("long double");
          }
          else
          {
            if ( v60 == 46 )
              v61 = 1;
            else
              v61 = (word_438898[v60] >> 2) & 1;
            if ( !v61 )
            {
              memcpy(&v80, v0, v27);
              if ( dword_474F64 )
                return 269;
              dword_474F68 = (int)v0;
              v3 = 269;
              dword_474F64 = (int)"invalid number";
              return v3;
            }
            v62 = ((int (__fastcall *)(char *))loc_7B738)("double");
          }
          v63 = ((int (__fastcall *)(unsigned __int8 *, int))loc_7B6D4)(v1, v29);
          v64 = ((int (__fastcall *)(int, int, int))loc_7B794)(v30, v62, v63);
          v3 = 259;
          dword_474F6C = v64;
          goto LABEL_88;
        }
        if ( v29 <= 0 )
        {
          v32 = 0;
LABEL_251:
          v81 = ((int (__fastcall *)(const char *))loc_7B738)("unsigned int");
          v65 = ((int (__fastcall *)(char *))loc_7B738)("int");
          v37 = v81;
          v38 = v65;
          goto LABEL_85;
        }
        v31 = &v1[v29];
        v32 = 0;
        v33 = v29;
        do
        {
          v34 = *--v31;
          v29 = v33;
          v35 = v34 & 0xDF;
          if ( v35 == 76 )
          {
            v33 = v31 - v1;
            ++v28;
            v29 = v31 - v1;
          }
          else
          {
            if ( v35 != 85 )
              break;
            v33 = v31 - v1;
            ++v32;
            v29 = v31 - v1;
          }
        }
        while ( v33 > 0 );
        if ( !v28 )
          goto LABEL_251;
        if ( v28 == 1 )
        {
          v81 = ((int (__fastcall *)(const char *))loc_7B738)("unsigned long");
          v36 = ((int (__fastcall *)(const char *))loc_7B738)("long");
        }
        else
        {
          v81 = ((int (__fastcall *)(const char *))loc_7B738)("unsigned long long");
          v36 = ((int (__fastcall *)(const char *))loc_7B738)("long long");
        }
        v37 = v81;
        v38 = v36;
LABEL_85:
        if ( v32 )
          v38 = v37;
        v39 = ((int (__fastcall *)(unsigned __int8 *, int))loc_7B6D4)(v1, v29);
        v40 = ((int (__fastcall *)(int, int, int))loc_7B794)(v30, v38, v39);
        v3 = 258;
        dword_474F6C = v40;
LABEL_88:
        dword_474F5C = v21;
        return v3;
      case 0x2Fu:
        v43 = v0[1];
        dword_474F60 = (int)v0;
        v44 = v43 == 61;
        if ( v43 == 61 )
        {
          v3 = (int)&dword_364FE4;
          dword_474F5C = (int)(v0 + 2);
          dword_474F6C = (int)&dword_364FE4;
        }
        else
        {
          v3 = 47;
        }
        if ( v44 )
          return 290;
        dword_474F5C = (int)(v0 + 1);
        return v3;
      case 0x30u:
      case 0x31u:
      case 0x32u:
      case 0x33u:
      case 0x34u:
      case 0x35u:
      case 0x36u:
      case 0x37u:
      case 0x38u:
      case 0x39u:
        dword_474F60 = (int)v0;
        if ( v2 == 45 )
        {
          v20 = v0[1];
          v21 = (int)(v0 + 1);
          goto LABEL_60;
        }
        if ( v2 != 48 )
          goto LABEL_108;
        v45 = v0[1];
        if ( (v45 & 0xDF) == 0x58 )
        {
          v21 = (int)(v0 + 2);
          v20 = v0[2];
          v22 = 1;
          goto LABEL_61;
        }
        if ( (v45 & 0xCF) == 0x44 )
        {
          v21 = (int)(v0 + 2);
          v20 = v0[2];
          v22 = 0;
          goto LABEL_61;
        }
        goto LABEL_108;
      case 0x3Au:
        v11 = v0[1];
        dword_474F60 = (int)v0;
        v12 = v11 == 58;
        if ( v11 == 58 )
        {
          v3 = (int)"::";
          dword_474F5C = (int)(v0 + 2);
          dword_474F6C = (int)"::";
        }
        else
        {
          v3 = 58;
        }
        if ( v12 )
          return 267;
        dword_474F5C = (int)(v0 + 1);
        return v3;
      case 0x3Cu:
        v10 = v0[1];
        dword_474F60 = (int)v0;
        if ( v10 == 60 )
        {
          if ( v0[2] == 61 )
          {
            dword_474F5C = (int)(v0 + 3);
            dword_474F6C = (int)&off_364FD4;
            return 290;
          }
          else
          {
            dword_474F5C = (int)(v0 + 2);
            dword_474F6C = (int)&dword_364FA8;
            return 302;
          }
        }
        else if ( v10 == 61 )
        {
          dword_474F5C = (int)(v0 + 2);
          dword_474F6C = (int)&dword_364FB4;
          return 300;
        }
        else
        {
          dword_474F5C = (int)(v0 + 1);
          return 60;
        }
      case 0x3Du:
        v8 = v0[1];
        dword_474F60 = (int)v0;
        v9 = v8 == 61;
        if ( v8 == 61 )
        {
          v3 = (int)&dword_364FAC;
          dword_474F5C = (int)(v0 + 2);
          dword_474F6C = (int)&dword_364FAC;
        }
        else
        {
          v3 = 61;
        }
        if ( v9 )
          return 298;
        dword_474F5C = (int)(v0 + 1);
        return v3;
      case 0x3Eu:
        v7 = v0[1];
        dword_474F60 = (int)v0;
        if ( v7 == 62 )
        {
          if ( v0[2] == 61 )
          {
            dword_474F5C = (int)(v0 + 3);
            dword_474F6C = (int)&off_364FD0;
            return 290;
          }
          else
          {
            dword_474F5C = (int)(v0 + 2);
            dword_474F6C = (int)&dword_3CE920;
            return 303;
          }
        }
        else if ( v7 == 61 )
        {
          dword_474F5C = (int)(v0 + 2);
          dword_474F6C = (int)&dword_364FB8;
          return 301;
        }
        else
        {
          dword_474F5C = (int)(v0 + 1);
          return 62;
        }
      case 0x5Eu:
        v5 = v0[1];
        dword_474F60 = (int)v0;
        v6 = v5 == 61;
        if ( v5 == 61 )
        {
          v3 = (int)&dword_364FF4;
          dword_474F5C = (int)(v0 + 2);
          dword_474F6C = (int)&dword_364FF4;
        }
        else
        {
          v3 = 94;
        }
        if ( v6 )
          return 290;
        dword_474F5C = (int)(v0 + 1);
        return v3;
      case 0x7Cu:
        v50 = v0[1];
        dword_474F60 = (int)v0;
        if ( v50 == 61 )
        {
          dword_474F5C = (int)(v0 + 2);
          dword_474F6C = (int)&dword_364FEC;
          return 290;
        }
        else
        {
          v51 = v50 == 124;
          if ( v50 == 124 )
          {
            v3 = (int)&dword_364FC0;
            dword_474F5C = (int)(v0 + 2);
            dword_474F6C = (int)&dword_364FC0;
          }
          else
          {
            v3 = 124;
          }
          if ( v51 )
            return 296;
          else
            dword_474F5C = (int)(v0 + 1);
        }
        return v3;
      default:
        v52 = v2 == 95;
        if ( v2 != 95 )
          v52 = v2 == 36;
        LOWORD(v53) = (unsigned __int16)word_438898;
        dword_474F60 = (int)v0;
        if ( v52 )
        {
          HIWORD(v53) = 67;
        }
        else
        {
          HIWORD(v53) = (unsigned int)word_438898 >> 16;
          if ( (*(_WORD *)(v53 + 2 * v2) & 0x88) == 0 && (v2 & 0x80) == 0 )
          {
            if ( dword_474F64 )
              return 269;
            dword_474F68 = (int)v0;
            v3 = 269;
            dword_474F64 = (int)"invalid character";
            return v3;
          }
        }
        do
        {
          do
          {
            do
            {
              v54 = v1 - v0;
              v55 = (int)v1;
              v57 = *v1++;
              v56 = v57;
            }
            while ( (*(_WORD *)(v53 + 2 * v57) & 0x8C) != 0 );
          }
          while ( (v56 & 0x80) != 0 );
          v58 = v56 == 36;
          if ( v56 != 36 )
            v58 = v56 == 95;
        }
        while ( v58 );
        dword_474F5C = v55;
        switch ( v54 )
        {
          case 3:
            if ( !strncmp((const char *)v0, "VTT for ", 8u) )
            {
              dword_474F5C = (int)(v0 + 8);
              v3 = 293;
              dword_474F6C = 10;
            }
            else if ( !strncmp((const char *)v0, "non-virtual thunk to ", 0x15u) )
            {
              dword_474F5C = (int)(v0 + 21);
              v3 = 293;
              dword_474F6C = 15;
            }
            else if ( !strncmp((const char *)v0, "new", 3u) )
            {
              return 270;
            }
            else
            {
              if ( strncmp((const char *)v0, "int", 3u) )
                goto LABEL_148;
              return 279;
            }
            return v3;
          case 4:
            if ( !strncmp((const char *)v0, "void", 4u) )
              return 286;
            if ( !strncmp((const char *)v0, "bool", 4u) )
              return 283;
            if ( !strncmp((const char *)v0, "char", 4u) )
              return 288;
            if ( !strncmp((const char *)v0, "enum", 4u) )
              return 264;
            if ( !strncmp((const char *)v0, "long", 4u) )
              return 277;
            if ( strncmp((const char *)v0, "true", 4u) )
              goto LABEL_148;
            return 291;
          case 5:
            if ( !strncmp((const char *)v0, "guard variable for ", 0x13u) )
            {
              dword_474F5C = (int)(v0 + 19);
              v3 = 293;
              dword_474F6C = 19;
            }
            else if ( !strncmp((const char *)v0, "false", 5u) )
            {
              return 292;
            }
            else if ( !strncmp((const char *)v0, "class", 5u) )
            {
              return 262;
            }
            else if ( !strncmp((const char *)v0, "union", 5u) )
            {
              return 263;
            }
            else if ( !strncmp((const char *)v0, "float", 5u) )
            {
              return 287;
            }
            else if ( !strncmp((const char *)v0, "short", 5u) )
            {
              return 278;
            }
            else
            {
              if ( strncmp((const char *)v0, "const", 5u) )
                goto LABEL_148;
              return 280;
            }
            return v3;
          case 6:
            if ( !strncmp((const char *)v0, "global constructors keyed to ", 0x1Du) )
            {
              v69 = v0[29];
              v70 = v0 + 29;
              dword_474F5C = (int)(v0 + 29);
              dword_474F6C = 67;
              v71 = (int)(v0 + 29);
              if ( v69 )
              {
                do
                {
                  if ( (*(_WORD *)(v53 + 2 * v69) & 0x8C) == 0 )
                  {
                    v72 = (v69 == 95) | (v69 >> 7);
                    if ( v69 == 36 )
                      v72 |= 1u;
                    if ( !(v69 == 46 ? v72 | 1 : v72) )
                      break;
                  }
                  v74 = *(unsigned __int8 *)++v71;
                  v69 = v74;
                }
                while ( v74 );
              }
            }
            else
            {
              if ( strncmp((const char *)v0, "global destructors keyed to ", 0x1Cu) )
              {
                if ( !strncmp((const char *)v0, "vtable for ", 0xBu) )
                {
                  dword_474F5C = (int)(v0 + 11);
                  v3 = 293;
                  dword_474F6C = 9;
                }
                else if ( !strncmp((const char *)v0, "delete", 6u) )
                {
                  return 271;
                }
                else if ( !strncmp((const char *)v0, "struct", 6u) )
                {
                  return 261;
                }
                else if ( !strncmp((const char *)v0, "signed", 6u) )
                {
                  return 276;
                }
                else if ( !strncmp((const char *)v0, "sizeof", 6u) )
                {
                  return 265;
                }
                else
                {
                  if ( strncmp((const char *)v0, "double", 6u) )
                    goto LABEL_148;
                  return 282;
                }
                return v3;
              }
              v76 = v0[28];
              v70 = v0 + 28;
              dword_474F5C = (int)(v0 + 28);
              dword_474F6C = 68;
              v71 = (int)(v0 + 28);
              if ( v76 )
              {
                do
                {
                  v77 = v76 >> 7;
                  if ( (*(_WORD *)(v53 + 2 * v76) & 0x8C) == 0 )
                  {
                    if ( v76 == 95 )
                      v77 |= 1u;
                    if ( v76 == 36 )
                      v77 |= 1u;
                    if ( !(v76 == 46 ? v77 | 1 : v77) )
                      break;
                  }
                  v79 = *(unsigned __int8 *)++v71;
                  v76 = v79;
                }
                while ( v79 );
              }
            }
            v75 = ((int (__fastcall *)(unsigned __int8 *, int))loc_7B6D4)(v70, v71 - (_DWORD)v70);
            dword_474F5C = v71;
            v3 = 293;
            dword_474F6C = v75;
            return v3;
          case 7:
            if ( !strncmp((const char *)v0, "virtual thunk to ", 0x11u) )
            {
              dword_474F5C = (int)(v0 + 17);
              v3 = 293;
              dword_474F6C = 16;
            }
            else
            {
              if ( strncmp((const char *)v0, "wchar_t", 7u) )
                goto LABEL_148;
              return 289;
            }
            return v3;
          case 8:
            if ( !strncmp((const char *)v0, "typeinfo for ", 0xDu) )
            {
              dword_474F5C = (int)(v0 + 13);
              v3 = 293;
              dword_474F6C = 12;
            }
            else if ( !strncmp((const char *)v0, "typeinfo fn for ", 0x10u) )
            {
              dword_474F5C = (int)(v0 + 16);
              v3 = 293;
              dword_474F6C = 14;
            }
            else if ( !strncmp((const char *)v0, "typeinfo name for ", 0x12u) )
            {
              dword_474F5C = (int)(v0 + 18);
              v3 = 293;
              dword_474F6C = 13;
            }
            else if ( !strncmp((const char *)v0, "operator", 8u) )
            {
              return 272;
            }
            else if ( !strncmp((const char *)v0, "restrict", 8u) )
            {
              return 285;
            }
            else if ( !strncmp((const char *)v0, "unsigned", 8u) )
            {
              return 266;
            }
            else if ( !strncmp((const char *)v0, "template", 8u) )
            {
              return 268;
            }
            else
            {
              if ( strncmp((const char *)v0, "volatile", 8u) )
                goto LABEL_148;
              return 281;
            }
            return v3;
          case 9:
            if ( !strncmp((const char *)v0, "covariant return thunk to ", 0x1Au) )
            {
              dword_474F5C = (int)(v0 + 26);
              v3 = 293;
              dword_474F6C = 17;
            }
            else
            {
              if ( strncmp((const char *)v0, "reference temporary for ", 0x18u) )
                goto LABEL_148;
              dword_474F5C = (int)(v0 + 24);
              v3 = 293;
              dword_474F6C = 22;
            }
            return v3;
          case 11:
            if ( strncmp((const char *)v0, "static_cast", 0xBu) )
              goto LABEL_148;
            return 273;
          case 12:
            if ( !strncmp((const char *)v0, "construction vtable for ", 0x18u) )
            {
              v3 = 294;
              dword_474F5C = (int)(v0 + 24);
            }
            else
            {
              if ( strncmp((const char *)v0, "dynamic_cast", 0xCu) )
                goto LABEL_148;
              return 275;
            }
            return v3;
          case 16:
            if ( strncmp((const char *)v0, "reinterpret_cast", 0x10u) )
              goto LABEL_148;
            return 274;
          default:
LABEL_148:
            v59 = ((int (__fastcall *)(unsigned __int8 *, int))loc_7B6D4)(v0, v54);
            v3 = 260;
            dword_474F6C = v59;
            return v3;
        }
    }
  }
}
