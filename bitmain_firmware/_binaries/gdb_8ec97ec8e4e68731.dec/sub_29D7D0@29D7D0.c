int __fastcall sub_29D7D0(int result, int (__fastcall **a2)(int), int a3)
{
  __int64 v4; // r6
  const char *v5; // r4
  char *i; // r3
  int v7; // r2
  int v8; // r12
  int v9; // r1
  int v10; // r3
  const char *v11; // r5
  unsigned __int8 v12; // r3
  int v13; // r1
  int j; // r4
  char v15; // r4
  char v16; // r2
  __int16 *v17; // r1
  int v18; // r1
  int v19; // r2
  const char *v20; // r3
  int v21; // r2
  int v22; // t1
  bool v23; // zf
  int v24; // r2
  int v25; // r1
  const char *v26; // r4
  int v27; // r3
  int v28; // r3
  int v29; // r2
  int v30; // r3
  int v31; // [sp+8h] [bp-3Ch]
  const char *v32; // [sp+Ch] [bp-38h]
  const char *v33; // [sp+Ch] [bp-38h]
  int v34; // [sp+10h] [bp-34h]
  const char *v35; // [sp+10h] [bp-34h]
  int v36; // [sp+14h] [bp-30h]
  int v38; // [sp+20h] [bp-24h]
  int v39; // [sp+24h] [bp-20h]
  int v40; // [sp+28h] [bp-1Ch]
  int v41; // [sp+30h] [bp-14h]
  int v42; // [sp+3Ch] [bp-8h]

  v4 = *(_QWORD *)a2;
  if ( (a3 & 0xFF87) == 0x4784 )
  {
    v5 = "blxns\t%3-6r";
    v7 = 98;
  }
  else
  {
    v5 = "bxns\t%3-6r";
    for ( i = (char *)&unk_3FE1B0; ; v5 = (const char *)*((_DWORD *)i + 9) )
    {
      i += 20;
      if ( !v5 )
        goto LABEL_66;
      if ( (unsigned __int16)(*((_WORD *)i + 7) & a3) == *((unsigned __int16 *)i + 6) )
        break;
    }
    v7 = *(unsigned __int8 *)v5;
    if ( !*v5 )
      return result;
  }
  v8 = ((unsigned int)a3 >> 6) & 0x1F;
  if ( !v8 )
    v8 = 32;
  if ( (a3 & 0x40) != 0 )
    v9 = ((a3 >> 3) & 7) + 8;
  else
    v9 = (a3 >> 3) & 7;
  v38 = v9;
  result += 4;
  v40 = v8;
  v41 = ((a3 >> 2) & 0x3E | (a3 >> 3) & 0x40) + result;
  if ( (a3 & 0x80) != 0 )
    v10 = (a3 & 7) + 8;
  else
    v10 = a3 & 7;
  v39 = v10;
  v42 = result;
  v31 = 0;
  do
  {
    v11 = v5 + 1;
    if ( v7 == 37 )
    {
      switch ( v5[1] )
      {
        case '%':
          v5 += 2;
          result = ((int (__fastcall *)(_DWORD, const char *))v4)(HIDWORD(v4), "%%");
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
          v18 = *((unsigned __int8 *)v5 + 2);
          v19 = *((unsigned __int8 *)v5 + 1) - 48;
          v20 = v5 + 2;
          result = v18 - 48;
          if ( (unsigned int)(v18 - 48) <= 9 )
          {
            do
            {
              v21 = v18 + 10 * v19;
              v22 = *(unsigned __int8 *)++v20;
              v18 = v22;
              v19 = v21 - 48;
              result = v22 - 48;
            }
            while ( (unsigned int)(v22 - 48) <= 9 );
          }
          if ( v18 == 45 )
          {
            v25 = *((unsigned __int8 *)v20 + 1);
            v26 = v20 + 1;
            if ( (unsigned int)(v25 - 48) <= 9 )
            {
              v27 = 0;
              while ( 1 )
              {
                v11 = v26 + 1;
                v28 = v25 + 10 * v27;
                v25 = *((unsigned __int8 *)v26 + 1);
                v27 = v28 - 48;
                if ( (unsigned int)(v25 - 48) > 9 )
                  break;
                ++v26;
              }
              if ( v27 )
              {
                v29 = ~(-2 << (v27 - v19)) & (a3 >> v19);
                switch ( v26[1] )
                {
                  case 'B':
                    v5 = v26 + 2;
                    v31 = 0;
                    result = a2[19](v42 + 2 * ((v29 ^ (1 << v27)) - (1 << v27)));
                    goto LABEL_17;
                  case 'H':
                    v30 = 2 * v29;
                    goto LABEL_91;
                  case 'W':
                    v30 = 4 * v29;
LABEL_91:
                    v31 = v30;
                    v5 = v26 + 2;
                    result = ((int (*)(_DWORD, const char *, ...))v4)(HIDWORD(v4), "%ld", v30);
                    goto LABEL_17;
                  case 'a':
                    v5 = v26 + 2;
                    result = a2[19]((v42 & 0xFFFFFFFC) + 4 * v29);
                    v31 = 0;
                    goto LABEL_17;
                  case 'c':
                    v5 = v26 + 2;
                    result = ((int (__fastcall *)(_DWORD, char *, char *))v4)(HIDWORD(v4), "%s", off_3FDE3C[v29 + 144]);
                    goto LABEL_17;
                  case 'd':
                    v31 = v29;
                    v5 = v26 + 2;
                    result = ((int (*)(_DWORD, const char *, ...))v4)(HIDWORD(v4), "%ld", v29);
                    goto LABEL_17;
                  case 'r':
                    v5 = v26 + 2;
                    result = ((int (__fastcall *)(_DWORD, char *, char *))v4)(
                               HIDWORD(v4),
                               "%s",
                               (&off_3FDE3C[18 * dword_4707E4 + 2])[v29]);
                    goto LABEL_17;
                  case 'x':
                    v5 = v26 + 2;
                    result = ((int (*)(_DWORD, const char *, ...))v4)(HIDWORD(v4), "0x%04lx", v29);
                    goto LABEL_17;
                  default:
                    break;
                }
              }
            }
LABEL_66:
            abort();
          }
          if ( v18 == 63 )
          {
            v24 = a3 & (1 << v19);
            v23 = v24 == 0;
            if ( v24 )
              v24 = *((unsigned __int8 *)v20 + 1);
            v11 = v20 + 2;
            if ( v23 )
              v24 = *((unsigned __int8 *)v20 + 2);
            v5 = v20 + 3;
            result = ((int (__fastcall *)(_DWORD, char *, int))v4)(HIDWORD(v4), "%c", v24);
          }
          else
          {
            if ( v18 != 39 )
              goto LABEL_66;
            v5 = v20 + 2;
            v11 = v20 + 1;
            if ( (a3 & (1 << v19)) != 0 )
              result = ((int (*)(_DWORD, const char *, ...))v4)(HIDWORD(v4), "%c", *((unsigned __int8 *)v20 + 1));
          }
          break;
        case 'C':
          v5 += 2;
          v12 = dword_48BB6C;
          if ( dword_48BB6C )
            goto LABEL_26;
          result = ((int (__fastcall *)(_DWORD, __int16 *))v4)(HIDWORD(v4), &word_3DDC78);
          break;
        case 'D':
          v5 += 2;
          result = ((int (__fastcall *)(_DWORD, char *, char *))v4)(
                     HIDWORD(v4),
                     "%s",
                     (&off_3FDE3C[18 * dword_4707E4 + 2])[v39]);
          break;
        case 'I':
          dword_48BB70 = (unsigned __int8)a3;
          if ( ((2 * (_BYTE)a3) & 0xF) != 0 )
          {
            v33 = v5 + 1;
            v35 = v5;
            v15 = 2 * a3;
            do
            {
              v16 = a3 ^ v15;
              v15 *= 2;
              if ( (v16 & 0x10) != 0 )
                v17 = &word_40CD1C;
              else
                v17 = (__int16 *)"t";
              ((void (__fastcall *)(_DWORD, __int16 *))v4)(HIDWORD(v4), v17);
            }
            while ( (v15 & 0xE) != 0 );
            v11 = v33;
            v5 = v35;
          }
          v5 += 2;
          result = ((int (*)(_DWORD, const char *, ...))v4)(
                     HIDWORD(v4),
                     "\t%s",
                     off_3FDE3C[((unsigned __int8)a3 >> 4) + 144]);
          break;
        case 'M':
          v36 = 0;
          v34 = 0;
          goto LABEL_34;
        case 'N':
          v36 = ((unsigned int)a3 >> 8) & 1;
          v34 = 0;
          goto LABEL_34;
        case 'O':
          v34 = ((unsigned int)a3 >> 8) & 1;
          v36 = 0;
LABEL_34:
          ((void (__fastcall *)(_DWORD, const char *))v4)(HIDWORD(v4), "{");
          v13 = 0;
          v32 = v5;
          for ( j = 0; j != 8; ++j )
          {
            if ( (a3 & (1 << j)) != 0 )
            {
              if ( v13 )
                ((void (__fastcall *)(_DWORD, char *, int, int))v4)(HIDWORD(v4), ", ", 1, a3 & (1 << j));
              ((void (__fastcall *)(_DWORD, char *, char *))v4)(
                HIDWORD(v4),
                "%s",
                (&off_3FDE3C[18 * dword_4707E4 + 2])[j]);
              v13 = 1;
            }
          }
          if ( v36 )
          {
            if ( v13 )
              ((void (__fastcall *)(_DWORD, char *))v4)(HIDWORD(v4), ", ");
            ((void (__fastcall *)(_DWORD, char *, char *))v4)(HIDWORD(v4), "%s", off_3FDE3C[18 * dword_4707E4 + 16]);
            if ( v34 )
              goto LABEL_44;
          }
          else if ( v34 )
          {
            if ( v13 )
LABEL_44:
              ((void (__fastcall *)(_DWORD, char *))v4)(HIDWORD(v4), ", ");
            ((void (__fastcall *)(_DWORD, char *, char *))v4)(HIDWORD(v4), "%s", off_3FDE3C[18 * dword_4707E4 + 17]);
          }
          v5 = v32 + 2;
          result = ((int (__fastcall *)(_DWORD, char *))v4)(HIDWORD(v4), "}");
          break;
        case 'S':
          v5 += 2;
          result = ((int (__fastcall *)(_DWORD, char *, char *))v4)(
                     HIDWORD(v4),
                     "%s",
                     (&off_3FDE3C[18 * dword_4707E4 + 2])[v38]);
          break;
        case 'W':
          v5 += 2;
          if ( (a3 & (1 << (BYTE1(a3) & 7))) == 0 )
            result = ((int (__fastcall *)(_DWORD, char *))v4)(HIDWORD(v4), "!");
          break;
        case 'X':
          v5 += 2;
          if ( dword_48BB6C )
            result = ((int (*)(_DWORD, const char *, ...))v4)(
                       HIDWORD(v4),
                       "\t; unpredictable <IT:%s>",
                       off_3FDE3C[((unsigned __int8)dword_48BB6C >> 4) + 144]);
          break;
        case 'b':
          v5 += 2;
          result = a2[19](v41);
          break;
        case 'c':
          v5 += 2;
          v12 = dword_48BB6C;
          if ( dword_48BB6C )
LABEL_26:
            result = ((int (__fastcall *)(_DWORD, char *, char *))v4)(HIDWORD(v4), "%s", off_3FDE3C[(v12 >> 4) + 144]);
          break;
        case 's':
          v5 += 2;
          result = ((int (*)(_DWORD, const char *, ...))v4)(HIDWORD(v4), "#%ld", v40);
          break;
        case 'x':
          v5 += 2;
          if ( dword_48BB70 )
            result = ((int (__fastcall *)(_DWORD, const char *))v4)(
                       HIDWORD(v4),
                       "\t; unpredictable branch in IT block\n");
          break;
        default:
          goto LABEL_66;
      }
    }
    else
    {
      result = ((int (*)(_DWORD, const char *, ...))v4)(HIDWORD(v4), "%c", v7);
      v11 = v5++;
    }
LABEL_17:
    v7 = *((unsigned __int8 *)v11 + 1);
  }
  while ( v11[1] );
  if ( (unsigned int)(v31 + 16) > 0x30 )
    return ((int (*)(_DWORD, const char *, ...))v4)(HIDWORD(v4), "\t; 0x%lx", v31);
  return result;
}
