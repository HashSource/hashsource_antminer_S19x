_DWORD *__fastcall sub_96C4C(_DWORD *a1, const char **a2)
{
  const char *v4; // r5
  char *v5; // r4
  char *v6; // r2
  int v7; // r3
  bool v8; // zf
  _BOOL4 v9; // r7
  int v10; // r3
  size_t v11; // r0
  char *v12; // r9
  void *v13; // r0
  const char *v14; // r1
  unsigned __int8 *v15; // r6
  char *v16; // r5
  int v17; // r6
  int v18; // t1
  size_t v19; // r5
  char *v21; // lr
  int v22; // r4
  int v23; // r9
  int v24; // r5
  char *v25; // r4
  int v26; // t1
  int v27; // t1
  int v28; // r4
  const char *v29; // r5
  int v30; // t1
  int v31; // r0
  int v32; // r3
  unsigned __int8 *v33; // r2
  int v34; // r1
  int v35; // t1
  int v36; // r12
  int v37; // r1
  int v38; // r3
  int v39; // r1
  size_t v40; // r9
  size_t v41; // r2
  char *v42; // r9
  char **v43; // r1
  int v44; // r2
  char **v45; // r3
  _DWORD *v46; // r3
  size_t v47; // r6
  const char *v48; // r1
  char *v49; // r5
  int v50; // r3
  int v51; // r9
  int v52; // r3
  char v53[4]; // [sp+0h] [bp-54h] BYREF
  const char *v54; // [sp+4h] [bp-50h]
  int v55; // [sp+8h] [bp-4Ch]
  int v56; // [sp+Ch] [bp-48h]
  __int16 *v57; // [sp+10h] [bp-44h]
  char *dest; // [sp+14h] [bp-40h]
  char *s; // [sp+18h] [bp-3Ch]
  int v60; // [sp+1Ch] [bp-38h]
  char *v61; // [sp+24h] [bp-30h] BYREF
  int v62; // [sp+28h] [bp-2Ch] BYREF
  _DWORD v63[2]; // [sp+2Ch] [bp-28h] BYREF

  a1[3] = 0;
  v4 = *a2;
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  strlen(v4);
  v5 = v53;
  v6 = v53;
  while ( 1 )
  {
    v7 = *(unsigned __int8 *)v4;
    v8 = v7 == 0;
    if ( *v4 )
      v8 = v7 == 34;
    v9 = v8;
    if ( v8 )
      break;
    if ( *v4 )
    {
      if ( v7 == 92 )
      {
        v10 = *((unsigned __int8 *)v4 + 1);
        v4 += 2;
        switch ( v10 )
        {
          case '"':
            *v6++ = 34;
            break;
          case '\\':
            *v6++ = 92;
            break;
          case 'a':
            *v6++ = 7;
            break;
          case 'b':
            *v6++ = 8;
            break;
          case 'f':
            *v6++ = 12;
            break;
          case 'n':
            *v6++ = 10;
            break;
          case 'r':
            *v6++ = 13;
            break;
          case 't':
            *v6++ = 9;
            break;
          case 'v':
            *v6++ = 11;
            break;
          default:
            sub_946E0("Unrecognized escape character \\%c in format string.", v10);
        }
      }
      else
      {
        *v6 = v7;
        ++v4;
        ++v6;
      }
    }
    else
    {
      ++v4;
    }
  }
  *a2 = v4;
  *v6 = 0;
  v11 = strlen(v53);
  v12 = (char *)sub_93028(2 * (v11 + 500));
  v13 = (void *)a1[3];
  a1[3] = v12;
  if ( v13 )
    free(v13);
  s = "0-+ #";
  v57 = &word_3DDC78;
  v14 = v53;
  while ( 1 )
  {
    v16 = v5;
    v18 = (unsigned __int8)*v5++;
    v17 = v18;
    if ( !v18 )
      break;
    v8 = v17 == 37;
    v15 = (unsigned __int8 *)v5;
    if ( v8 )
    {
      if ( v16[1] == 37 )
      {
        v5 = v16 + 2;
      }
      else
      {
        v60 = v16 - v14;
        v61 = v12;
        strncpy(v12, v14, v16 - v14);
        v63[0] = 0;
        v21 = &v12[v60];
        *v21 = 0;
        dest = v21 + 1;
        sub_97F68(a1, &v61, v63);
        v22 = (unsigned __int8)*v5;
        if ( !v22 )
          goto LABEL_31;
        v23 = 0;
        v54 = v16;
        v55 = 0;
        v24 = v22;
        v56 = 0;
        v60 = 0;
        v25 = s;
        while ( strchr(v25, v24) )
        {
          if ( v24 == 35 )
          {
            v27 = *++v15;
            v24 = v27;
            v60 = 1;
            if ( !v27 )
              goto LABEL_31;
          }
          else
          {
            switch ( v24 )
            {
              case '0':
                v56 = 1;
                break;
              case ' ':
                v55 = 1;
                break;
              case '+':
                v23 = 1;
                break;
            }
            v26 = *++v15;
            v24 = v26;
            if ( !v26 )
              goto LABEL_31;
          }
        }
        v28 = *v15;
        v29 = v54;
        if ( !*v15 )
LABEL_31:
          sub_946E0("Incomplete format specifier at end of format string");
        while ( 1 )
        {
          v31 = (int)strchr("0123456789", v28);
          if ( !v31 )
            break;
          v30 = *++v15;
          v28 = v30;
          if ( !v30 )
            goto LABEL_31;
        }
        if ( v28 == 46 )
        {
          v34 = *++v15;
          if ( !v34 )
            goto LABEL_31;
          while ( strchr("0123456789", v34) )
          {
            v35 = *++v15;
            v34 = v35;
            if ( !v35 )
              goto LABEL_31;
          }
          v32 = *v15;
          v31 = 1;
        }
        else
        {
          v32 = *v15;
        }
        if ( v32 == 104 )
        {
          v32 = v15[1];
          v33 = v15 + 1;
          v36 = 1;
          v37 = 0;
          goto LABEL_60;
        }
        if ( v32 == 108 )
        {
          v32 = v15[1];
          if ( v32 == 108 )
          {
            v33 = v15 + 2;
            v32 = v15[2];
            v36 = 0;
            v37 = 2;
          }
          else
          {
            v33 = v15 + 1;
            v36 = 0;
            v37 = 1;
          }
          goto LABEL_60;
        }
        if ( v32 != 76 )
        {
          if ( v32 == 72 )
          {
            v32 = v15[1];
            v33 = v15 + 1;
            switch ( v15[1] )
            {
              case 0u:
                goto LABEL_31;
              case 0x2Au:
                goto LABEL_110;
              case 0x45u:
              case 0x47u:
              case 0x65u:
              case 0x66u:
              case 0x67u:
                v62 = 10;
                goto LABEL_97;
              case 0x58u:
              case 0x6Fu:
              case 0x78u:
                goto LABEL_114;
              case 0x63u:
                goto LABEL_113;
              case 0x64u:
              case 0x69u:
                goto LABEL_101;
              case 0x6Eu:
                goto LABEL_135;
              case 0x70u:
                goto LABEL_112;
              case 0x73u:
                goto LABEL_105;
              case 0x75u:
                goto LABEL_111;
              default:
                goto LABEL_134;
            }
          }
          if ( v32 == 68 )
          {
            v32 = v15[1];
            if ( v32 != 68 )
            {
              v33 = v15 + 1;
              switch ( v15[1] )
              {
                case 0u:
                  goto LABEL_31;
                case 0x2Au:
                  goto LABEL_110;
                case 0x45u:
                case 0x47u:
                case 0x65u:
                case 0x66u:
                case 0x67u:
                  v62 = 11;
                  goto LABEL_97;
                case 0x58u:
                case 0x6Fu:
                case 0x78u:
                  goto LABEL_114;
                case 0x63u:
                  goto LABEL_113;
                case 0x64u:
                case 0x69u:
                  goto LABEL_101;
                case 0x6Eu:
                  goto LABEL_135;
                case 0x70u:
                  goto LABEL_112;
                case 0x73u:
                  goto LABEL_105;
                case 0x75u:
                  goto LABEL_111;
                default:
                  goto LABEL_134;
              }
            }
            v32 = v15[2];
            v33 = v15 + 2;
            switch ( v15[2] )
            {
              case 0u:
                goto LABEL_31;
              case 0x2Au:
                goto LABEL_110;
              case 0x45u:
              case 0x47u:
              case 0x65u:
              case 0x66u:
              case 0x67u:
                v62 = 12;
                goto LABEL_97;
              case 0x58u:
              case 0x6Fu:
              case 0x78u:
LABEL_114:
                v50 = 0;
                v37 = 0;
                v60 = 0;
                goto LABEL_89;
              case 0x63u:
LABEL_113:
                v36 = 0;
                goto LABEL_83;
              case 0x64u:
              case 0x69u:
LABEL_101:
                v51 = 0;
                goto LABEL_102;
              case 0x6Eu:
                goto LABEL_135;
              case 0x70u:
LABEL_112:
                v39 = 0;
                goto LABEL_69;
              case 0x73u:
LABEL_105:
                v38 = 5;
                v62 = 5;
                goto LABEL_106;
              case 0x75u:
LABEL_111:
                v50 = 0;
                v37 = 0;
                goto LABEL_89;
              default:
                goto LABEL_134;
            }
          }
          v36 = 0;
          v33 = v15;
          v37 = 0;
LABEL_60:
          switch ( v32 )
          {
            case 0:
              goto LABEL_31;
            case 42:
              goto LABEL_110;
            case 69:
            case 71:
            case 101:
            case 102:
            case 103:
              v62 = 8;
              if ( v36 | v37 )
                goto LABEL_67;
              goto LABEL_97;
            case 88:
            case 111:
            case 120:
              v50 = 0;
              v60 = 0;
              goto LABEL_89;
            case 99:
              if ( v37 > 1 )
                v36 |= 1u;
              if ( !v37 )
                goto LABEL_83;
              v38 = 7;
              goto LABEL_84;
            case 100:
            case 105:
              v51 = 0;
              goto LABEL_91;
            case 110:
              goto LABEL_135;
            case 112:
              v39 = v36 | v37;
              goto LABEL_69;
            case 115:
              if ( v37 > 1 )
                v36 |= 1u;
              if ( v37 )
                v38 = 6;
              else
                v38 = 5;
              v62 = v38;
              if ( v36 )
                goto LABEL_67;
LABEL_106:
              if ( v23 | v56 | v55 )
                goto LABEL_67;
              goto LABEL_86;
            case 117:
              v50 = 0;
              goto LABEL_89;
            default:
              goto LABEL_134;
          }
        }
        v32 = v15[1];
        v33 = v15 + 1;
        switch ( v15[1] )
        {
          case 0u:
            goto LABEL_31;
          case 0x2Au:
LABEL_110:
            sub_946E0("`*' not supported for precision or width in printf");
          case 0x45u:
          case 0x47u:
          case 0x65u:
          case 0x66u:
          case 0x67u:
            v62 = 9;
            goto LABEL_97;
          case 0x58u:
          case 0x6Fu:
          case 0x78u:
            v37 = 0;
            v50 = 1;
            v60 = 0;
            goto LABEL_89;
          case 0x63u:
            v36 = v9;
LABEL_83:
            v38 = 1;
LABEL_84:
            v62 = v38;
            if ( !v36 && !(v23 | v31 | v56 | v55) )
              goto LABEL_86;
            goto LABEL_67;
          case 0x64u:
          case 0x69u:
            v51 = 1;
            goto LABEL_102;
          case 0x6Eu:
LABEL_135:
            sub_946E0("Format specifier `n' not supported in printf");
          case 0x70u:
            v39 = 1;
LABEL_69:
            v62 = 4;
            if ( v39 || v31 || v23 | v60 | v56 | v55 )
              goto LABEL_67;
            v5 = (char *)(v33 + 1);
            v40 = v33 + 1 - (unsigned __int8 *)v29;
            v61 = dest;
            goto LABEL_73;
          case 0x73u:
            v62 = 5;
            goto LABEL_67;
          case 0x75u:
            v50 = 1;
            v37 = 0;
LABEL_89:
            v51 = v23 | v55;
            if ( !v51 )
              v51 = v60 | v50;
LABEL_91:
            if ( v37 )
            {
              if ( v37 == 1 )
                v52 = 2;
              else
                v52 = 3;
              v62 = v52;
            }
            else
            {
LABEL_102:
              v62 = 1;
            }
            if ( v51 )
LABEL_67:
              sub_946E0("Inappropriate modifiers to format specifier '%c' in printf", *v33);
LABEL_97:
            v38 = v62;
LABEL_86:
            v5 = (char *)(v33 + 1);
            v40 = v33 + 1 - (unsigned __int8 *)v29;
            v61 = dest;
            if ( (unsigned int)(v38 - 6) > 1 )
            {
LABEL_73:
              v41 = v40;
              v42 = &dest[v40];
              strncpy(dest, v29, v41);
            }
            else
            {
              v47 = v40 - 2;
              v48 = v29;
              v49 = dest;
              strncpy(dest, v48, v40 - 2);
              v42 = &v49[v40];
              *(_WORD *)&v49[v47] = *v57;
            }
            v43 = (char **)a1[1];
            v44 = 0;
            v45 = (char **)a1[2];
            v12 = v42 + 1;
            *(v12 - 1) = 0;
            if ( v43 == v45 )
            {
              sub_97E40(a1, v43, &v61, &v62);
              v14 = v5;
            }
            else
            {
              if ( v43 )
              {
                v44 = v62;
                *v43 = v61;
              }
              v46 = v43 + 2;
              if ( v43 )
                v43[1] = (char *)v44;
              v14 = v5;
              a1[1] = v46;
            }
            break;
          default:
LABEL_134:
            sub_946E0("Unrecognized format specifier '%c' in printf", v32);
        }
      }
    }
  }
  v19 = v16 - v14;
  v61 = v12;
  strncpy(v12, v14, v19);
  v12[v19] = 0;
  v63[0] = 0;
  sub_97F68(a1, &v61, v63);
  return a1;
}
