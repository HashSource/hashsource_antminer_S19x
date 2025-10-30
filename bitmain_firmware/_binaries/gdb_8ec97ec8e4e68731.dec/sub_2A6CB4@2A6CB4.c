int __fastcall sub_2A6CB4(char *s, int *a2)
{
  int v2; // r3
  char *v3; // r4
  unsigned int v5; // r10
  int i; // r1
  int v7; // r3
  char *v8; // r0
  int v9; // r0
  int v10; // r5
  unsigned __int8 *v11; // r7
  char *v12; // r11
  int v13; // t1
  unsigned __int8 *v14; // r9
  unsigned __int8 *v15; // r7
  int v16; // t1
  int v17; // r10
  unsigned int v18; // r7
  _QWORD *v19; // r7
  __int64 v20; // r8
  _QWORD *v21; // r7
  __int64 v22; // r2
  int v23; // t1
  int v24; // r9
  char *v25; // r11
  int v26; // t1
  int v27; // t1
  int v28; // t1
  int v29; // r8
  int v30; // r6
  int v31; // t1
  unsigned int v32; // r2
  int v33; // r3
  int v34; // r0
  int v36; // r3
  int v37; // r0
  const char *v38; // r2
  int v39; // r3
  int v40; // r1
  int v41; // r1
  int v42; // r3
  const char **v43; // r3
  const char *v44; // r3
  int v45; // r3
  char *v46; // r0
  unsigned int v47; // r3
  int v48; // r2
  int v49; // r2
  int v50; // r2
  int v51; // r0
  unsigned __int8 *v52; // r1
  int v53; // t1
  int v54; // r3
  char *v55; // r0
  unsigned int v56; // r3
  int v57; // r3
  unsigned __int8 *v58; // r5
  int v59; // r3
  int v60; // r2
  int v61; // r0
  int v62; // r1
  int v63; // [sp+4h] [bp-E0h]
  int v64; // [sp+4h] [bp-E0h]
  FILE *stream; // [sp+8h] [bp-DCh]
  int sa; // [sp+Ch] [bp-D8h]
  _QWORD v67[9]; // [sp+18h] [bp-CCh] BYREF
  char format; // [sp+60h] [bp-84h] BYREF
  char v69; // [sp+61h] [bp-83h] BYREF

  v2 = 0;
  v3 = s;
  do
    LODWORD(v67[v2++]) = 0;
  while ( v2 != 9 );
  v5 = 0;
  while ( *s )
  {
    if ( *s == 37 )
    {
      v24 = (unsigned __int8)s[1];
      if ( v24 == 37 )
      {
        s += 2;
      }
      else
      {
        v25 = s + 1;
        if ( v24 != 48 && (word_438898[v24] & 4) != 0 && s[2] == 36 )
        {
          v25 = s + 3;
          v64 = v24 - 49;
          v24 = (unsigned __int8)s[3];
        }
        else
        {
          v64 = -1;
        }
        while ( strchr("-+ #0'I", v24) )
        {
          v26 = (unsigned __int8)*++v25;
          v24 = v26;
        }
        if ( v24 == 42 )
        {
          v45 = (unsigned __int8)v25[1];
          v46 = v25 + 1;
          if ( v45 != 48 && (word_438898[v45] & 4) != 0 && v25[2] == 36 )
          {
            v47 = v45 - 49;
            v46 = v25 + 3;
          }
          else
          {
            v47 = v5;
          }
          if ( v47 > 8 )
            sub_2A6BF0((int)"bfd.c", 980, (int)"_bfd_doprnt_scan");
          ++v5;
          v24 = (unsigned __int8)*v46;
          v25 = v46;
          LODWORD(v67[v47]) = 1;
        }
        else if ( (word_438898[v24] & 4) != 0 )
        {
          do
          {
            v27 = (unsigned __int8)*++v25;
            v24 = v27;
          }
          while ( (word_438898[v27] & 4) != 0 );
        }
        if ( v24 == 46 )
        {
          v24 = (unsigned __int8)v25[1];
          if ( v24 == 42 )
          {
            v54 = (unsigned __int8)v25[2];
            v55 = v25 + 2;
            if ( v54 != 48 && (word_438898[v54] & 4) != 0 && v25[3] == 36 )
            {
              v56 = v54 - 49;
              v55 = v25 + 4;
            }
            else
            {
              v56 = v5;
            }
            if ( v56 > 8 )
              sub_2A6BF0((int)"bfd.c", 1005, (int)"_bfd_doprnt_scan");
            ++v5;
            v24 = (unsigned __int8)*v55;
            v25 = v55;
            LODWORD(v67[v56]) = 1;
          }
          else
          {
            ++v25;
            if ( (word_438898[v24] & 4) != 0 )
            {
              do
              {
                v28 = (unsigned __int8)*++v25;
                v24 = v28;
              }
              while ( (word_438898[v28] & 4) != 0 );
            }
          }
        }
        v29 = 0;
        v30 = 0;
        while ( strchr("hlL", v24) )
        {
          switch ( v24 )
          {
            case 'h':
              v29 = 1;
              break;
            case 'l':
              ++v30;
              break;
            case 'L':
              v30 = 2;
              break;
            default:
              sub_2A6BF0((int)"bfd.c", 1028, (int)"_bfd_doprnt_scan");
          }
          v31 = (unsigned __int8)*++v25;
          v24 = v31;
        }
        s = v25 + 1;
        v32 = v64;
        if ( v64 < 0 )
          v32 = v5;
        switch ( v24 )
        {
          case 'A':
          case 'B':
          case 'p':
          case 's':
            v29 = 6;
            break;
          case 'E':
          case 'G':
          case 'e':
          case 'f':
          case 'g':
            if ( v30 )
              v29 = 5;
            else
              v29 = 4;
            break;
          case 'X':
          case 'c':
          case 'd':
          case 'i':
          case 'o':
          case 'u':
          case 'x':
            if ( !v29 )
            {
              if ( *(v25 - 1) == 76 )
              {
                v29 = 2;
              }
              else if ( v30 )
              {
                if ( v30 == 1 )
                  v29 = 2;
                else
                  v29 = 3;
              }
              else
              {
                v29 = 1;
              }
            }
            break;
          default:
            sub_2A6BF0((int)"bfd.c", 1103, (int)"_bfd_doprnt_scan");
        }
        if ( v32 > 8 )
          sub_2A6BF0((int)"bfd.c", 1107, (int)"_bfd_doprnt_scan");
        ++v5;
        LODWORD(v67[v32]) = v29;
      }
    }
    else
    {
      s = strchr(s, 37);
      if ( !s )
        break;
    }
  }
  if ( v5 )
  {
    for ( i = 0; i != v5; ++i )
    {
      switch ( LODWORD(v67[i]) )
      {
        case 1:
        case 2:
        case 6:
          v7 = *a2++;
          LODWORD(v67[i]) = v7;
          break;
        case 3:
          v21 = (_QWORD *)(((unsigned int)a2 + 7) & 0xFFFFFFF8);
          v22 = *v21;
          a2 = (int *)(v21 + 1);
          v67[i] = v22;
          break;
        case 4:
        case 5:
          v19 = (_QWORD *)(((unsigned int)a2 + 7) & 0xFFFFFFF8);
          v20 = *v19;
          a2 = (int *)(v19 + 1);
          v67[i] = v20;
          break;
        default:
          sub_2A6BF0((int)"bfd.c", 1157, (int)"error_handler_internal");
      }
    }
  }
  fflush((FILE *)stdout);
  if ( dword_48BBDC )
    fprintf((FILE *)stderr, "%s: ", (const char *)dword_48BBDC);
  else
    fwrite("BFD: ", 1u, 5u, (FILE *)stderr);
  stream = (FILE *)stderr;
  v63 = 0;
  while ( *v3 )
  {
    if ( *v3 == 37 )
    {
      v10 = (unsigned __int8)v3[1];
      if ( v10 == 37 )
      {
        v3 += 2;
        fputc(37, stream);
      }
      else
      {
        format = 37;
        v11 = (unsigned __int8 *)(v3 + 1);
        if ( v10 != 48 && (word_438898[v10] & 4) != 0 && v3[2] == 36 )
        {
          v11 = (unsigned __int8 *)(v3 + 3);
          sa = v10 - 49;
          v10 = (unsigned __int8)v3[3];
        }
        else
        {
          sa = -1;
        }
        v12 = &v69;
        while ( strchr("-+ #0'I", v10) )
        {
          *v12++ = v10;
          v13 = *++v11;
          v10 = v13;
        }
        if ( v10 == 42 )
        {
          v48 = v11[1];
          v14 = v11 + 1;
          if ( v48 != 48 && (word_438898[v48] & 4) != 0 && v11[2] == 36 )
          {
            v49 = v48 - 49;
            v14 = v11 + 3;
          }
          else
          {
            v49 = v63;
          }
          v50 = v67[v49];
          ++v63;
          if ( v50 < 0 )
            v50 = -v50;
          v51 = sprintf(v12, "%d", v50);
          v10 = *v14;
          v12 += v51;
          if ( v10 != 46 )
            goto LABEL_35;
LABEL_128:
          *v12++ = v10;
          v10 = v14[1];
          if ( v10 == 42 )
          {
            v57 = v14[2];
            v58 = v14 + 2;
            if ( v57 != 48 && (word_438898[v57] & 4) != 0 && v14[3] == 36 )
            {
              v59 = v57 - 49;
              v58 = v14 + 4;
            }
            else
            {
              v59 = v63;
            }
            v60 = v67[v59];
            v14 = v58;
            if ( v60 < 0 )
              v60 = -v60;
            ++v63;
            v61 = sprintf(v12, "%d", v60);
            v10 = *v58;
            v12 += v61;
          }
          else if ( (word_438898[v10] & 4) != 0 )
          {
            v52 = v14 + 2;
            do
            {
              *v12++ = v10;
              v14 = v52;
              v53 = *v52++;
              v10 = v53;
            }
            while ( (word_438898[v53] & 4) != 0 );
          }
          else
          {
            ++v14;
          }
          goto LABEL_35;
        }
        if ( (word_438898[v10] & 4) != 0 )
        {
          v15 = v11 + 1;
          do
          {
            *v12++ = v10;
            v14 = v15;
            v16 = *v15++;
            v10 = v16;
          }
          while ( (word_438898[v16] & 4) != 0 );
        }
        else
        {
          v14 = v11;
        }
        if ( v10 == 46 )
          goto LABEL_128;
LABEL_35:
        v17 = 0;
        v18 = 0;
        while ( strchr("hlL", v10) )
        {
          switch ( v10 )
          {
            case 'h':
              v17 = 1;
              break;
            case 'l':
              ++v18;
              break;
            case 'L':
              v18 = 2;
              break;
            default:
              sub_2A6BF0((int)"bfd.c", 775, (int)"_bfd_doprnt");
          }
          *v12++ = v10;
          v23 = *++v14;
          v10 = v23;
        }
        v12[1] = 0;
        v3 = (char *)(v14 + 1);
        v33 = sa;
        *v12 = v10;
        if ( sa < 0 )
          v33 = v63;
        switch ( v10 )
        {
          case 'A':
            v39 = v67[v33];
            if ( !v39 )
              sub_2A6BF0((int)"bfd.c", 882, (int)"_bfd_doprnt");
            v40 = *(_DWORD *)(v39 + 148);
            v38 = *(const char **)v39;
            if ( !v40 )
              goto LABEL_104;
            v41 = *(_DWORD *)(*(_DWORD *)(v40 + 4) + 4);
            if ( v41 == 5 )
            {
              v62 = *(_DWORD *)(v39 + 140);
              if ( !*(_DWORD *)(v62 + 124) || (*(_DWORD *)(v39 + 20) & 0x2000000) != 0 )
              {
LABEL_104:
                v34 = fprintf(stream, "%s", v38);
                goto LABEL_93;
              }
              v44 = *(const char **)(v62 + 116);
            }
            else
            {
              if ( v41 != 2 )
                goto LABEL_104;
              v42 = *(_DWORD *)(v39 + 140);
              if ( !v42 )
                goto LABEL_104;
              v43 = *(const char ***)(v42 + 36);
              if ( !v43 )
                goto LABEL_104;
              v44 = *v43;
            }
            if ( !v44 )
              goto LABEL_104;
            v34 = fprintf(stream, "%s[%s]", v38, v44);
LABEL_93:
            ++v63;
            if ( v34 == -1 )
              goto LABEL_94;
            break;
          case 'B':
            v36 = v67[v33];
            if ( !v36 )
              sub_2A6BF0((int)"bfd.c", 908, (int)"_bfd_doprnt");
            v37 = *(_DWORD *)(v36 + 140);
            v38 = *(const char **)v36;
            if ( !v37 || (*(_BYTE *)(v37 + 44) & 1) != 0 )
              goto LABEL_104;
            v34 = fprintf(stream, "%s(%s)", *(const char **)v37, v38);
            goto LABEL_93;
          case 'E':
          case 'G':
          case 'e':
          case 'f':
          case 'g':
            goto LABEL_100;
          case 'X':
          case 'c':
          case 'd':
          case 'i':
          case 'o':
          case 'u':
          case 'x':
            if ( v17 )
              goto LABEL_92;
            if ( *(v14 - 1) == 76 )
            {
              *(v12 - 1) = 108;
LABEL_92:
              v34 = fprintf(stream, &format, LODWORD(v67[v33]));
              goto LABEL_93;
            }
            if ( v18 <= 1 )
              goto LABEL_92;
LABEL_100:
            v34 = fprintf(stream, &format, LODWORD(v67[v33]), HIDWORD(v67[v33]));
            goto LABEL_93;
          case 'p':
          case 's':
            goto LABEL_92;
          default:
            sub_2A6BF0((int)"bfd.c", 918, (int)"_bfd_doprnt");
        }
      }
    }
    else
    {
      v8 = strchr(v3, 37);
      if ( v8 )
        v9 = fprintf(stream, "%.*s", v8 - v3, v3);
      else
        v9 = fprintf(stream, "%s", v3);
      v3 += v9;
      if ( v9 == -1 )
        break;
    }
  }
LABEL_94:
  fputc(10, (FILE *)stderr);
  return fflush((FILE *)stderr);
}
