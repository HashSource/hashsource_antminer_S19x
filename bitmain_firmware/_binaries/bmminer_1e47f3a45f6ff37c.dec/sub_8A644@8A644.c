const char **__fastcall sub_8A644(char *a1, char **a2, _DWORD *a3)
{
  int *v4; // r0
  char *v5; // r2
  char *v6; // r2
  char *v7; // r2
  int v12; // [sp+18h] [bp-14h] BYREF
  const char **v13; // [sp+1Ch] [bp-10h]
  int v14; // [sp+20h] [bp-Ch]
  char *s1; // [sp+24h] [bp-8h]

  v14 = 0;
  v12 = 0;
  if ( a1 )
  {
    if ( !a2 )
    {
      sub_8CD10(2, "src/spec.c", 477, "pattern_next is null or 0");
      return 0;
    }
    v13 = (const char **)calloc(1u, 0x2434u);
    if ( !v13 )
    {
      v4 = _errno_location();
      sub_8CD10(2, "src/spec.c", 481, "calloc fail, errno[%d]", *v4);
      return 0;
    }
    s1 = a1;
    *v13 = a1;
    if ( *s1 == 37 )
    {
      v12 = 0;
      v14 = _isoc99_sscanf(s1, "%%%[.0-9-]%n", (char *)v13 + 5137, &v12);
      if ( v14 == 1 )
      {
        v13[2314] = (_BYTE *)sub_8A0F0;
        v13[2315] = (_BYTE *)sub_8A248;
        v13[2316] = (_BYTE *)sub_8A3A0;
        if ( sub_8A4B4((int)v13) )
        {
          sub_8CD10(2, "src/spec.c", 499, "zlog_spec_parse_print_fmt fail");
LABEL_57:
          sub_8A5D4(v13);
          return 0;
        }
      }
      else
      {
        v12 = 1;
        v13[2314] = (_BYTE *)sub_8A0AC;
        v13[2315] = (_BYTE *)sub_8A204;
        v13[2316] = (_BYTE *)sub_8A35C;
      }
      s1 += v12;
      if ( *s1 == 100 )
      {
        if ( s1[1] == 40 )
        {
          if ( !strncmp(s1, "d()", 3u) )
          {
            v6 = (char *)(v13 + 2);
            v13[2] = *(const char **)"%F %T";
            strcpy(v6 + 4, "T");
            s1 += 3;
          }
          else
          {
            v12 = 0;
            v14 = _isoc99_sscanf(s1, "d(%[^)])%n", v13 + 2, &v12);
            if ( v14 != 1 )
              v12 = 0;
            s1 += v12;
            if ( *(s1 - 1) != 41 )
            {
              sub_8CD10(2, "src/spec.c", 529, "in string[%s] can't find match ')'", *v13);
              goto LABEL_57;
            }
          }
        }
        else
        {
          v5 = (char *)(v13 + 2);
          v13[2] = *(const char **)"%F %T";
          strcpy(v5 + 4, "T");
          ++s1;
        }
        v13[1027] = (const char *)(*a3)++;
        v13[2313] = (_BYTE *)sub_89330;
        *a2 = s1;
        v13[1] = (const char *)(s1 - *v13);
      }
      else if ( *s1 == 77 )
      {
        v12 = 0;
        v14 = _isoc99_sscanf(s1, "M(%[^)])%n", v13 + 1028, &v12);
        if ( v14 != 1 )
        {
          v12 = 0;
          if ( !strncmp(s1, "M()", 3u) )
            v12 = 3;
        }
        s1 += v12;
        if ( *(s1 - 1) != 41 )
        {
          sub_8CD10(2, "src/spec.c", 554, "in string[%s] can't find match ')'", *v13);
          goto LABEL_57;
        }
        *a2 = s1;
        v13[1] = (const char *)(s1 - *v13);
        v13[2313] = (_BYTE *)sub_89574;
      }
      else if ( !strncmp(s1, "ms", 2u) )
      {
        s1 += 2;
        *a2 = s1;
        v13[1] = (const char *)(s1 - *v13);
        v13[2313] = (_BYTE *)sub_8947C;
      }
      else
      {
        if ( strncmp(s1, "us", 2u) )
        {
          *a2 = s1 + 1;
          v13[1] = (const char *)(s1 - *v13 + 1);
          switch ( *s1 )
          {
            case '%':
              v13[2313] = (_BYTE *)sub_89968;
              goto LABEL_56;
            case 'D':
              v7 = (char *)(v13 + 2);
              v13[2] = *(const char **)"%F %T";
              strcpy(v7 + 4, "T");
              v13[1027] = (const char *)(*a3)++;
              v13[2313] = (_BYTE *)sub_89330;
              goto LABEL_56;
            case 'F':
              v13[2313] = (_BYTE *)sub_896B0;
              goto LABEL_56;
            case 'H':
              v13[2313] = (_BYTE *)sub_898E0;
              goto LABEL_56;
            case 'L':
              v13[2313] = (_BYTE *)sub_89818;
              goto LABEL_56;
            case 'T':
              v13[2313] = (_BYTE *)sub_89AD4;
              goto LABEL_56;
            case 'U':
              v13[2313] = (_BYTE *)sub_89864;
              goto LABEL_56;
            case 'V':
              v13[2313] = (_BYTE *)sub_89BE4;
              goto LABEL_56;
            case 'c':
              v13[2313] = (_BYTE *)sub_89664;
              goto LABEL_56;
            case 'f':
              v13[2313] = (_BYTE *)sub_8972C;
              goto LABEL_56;
            case 'k':
              v13[2313] = (_BYTE *)sub_89B20;
              goto LABEL_56;
            case 'm':
              v13[2313] = (_BYTE *)sub_89C58;
              goto LABEL_56;
            case 'n':
              v13[2313] = (_BYTE *)sub_8992C;
              goto LABEL_56;
            case 'p':
              v13[2313] = (_BYTE *)sub_899A4;
              goto LABEL_56;
            case 't':
              v13[2313] = (_BYTE *)sub_89A88;
              goto LABEL_56;
            case 'v':
              v13[2313] = (_BYTE *)sub_89B6C;
              goto LABEL_56;
            default:
              sub_8CD10(2, "src/spec.c", 634, "str[%s] in wrong format, p[%c]", *v13, (unsigned __int8)*s1);
              goto LABEL_57;
          }
        }
        s1 += 2;
        *a2 = s1;
        v13[1] = (const char *)(s1 - *v13);
        v13[2313] = (_BYTE *)sub_89504;
      }
    }
    else
    {
      *a2 = strchr(s1, 37);
      if ( *a2 )
      {
        v13[1] = (const char *)(*a2 - s1);
      }
      else
      {
        v13[1] = (const char *)strlen(s1);
        *a2 = (char *)&v13[1][(_DWORD)s1];
      }
      v13[2313] = (_BYTE *)sub_89620;
      v13[2314] = (_BYTE *)sub_8A0AC;
      v13[2315] = (_BYTE *)sub_8A204;
      v13[2316] = (_BYTE *)sub_8A35C;
    }
LABEL_56:
    sub_89218(v13, 0);
    return v13;
  }
  sub_8CD10(2, "src/spec.c", 476, "pattern_start is null or 0");
  return 0;
}
