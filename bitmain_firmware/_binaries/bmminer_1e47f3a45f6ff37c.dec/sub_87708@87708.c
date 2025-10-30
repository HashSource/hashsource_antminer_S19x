char *__fastcall sub_87708(const char *a1, _DWORD *a2, int a3, int a4, int a5, int a6, int a7)
{
  int *v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  const char *v12; // r4
  int *v13; // r0
  const char *v14; // r4
  int *v15; // r0
  FILE *v16; // r0
  int *v17; // r0
  int v18; // r0
  int *v19; // r0
  int v20; // r0
  int v21; // r0
  _QWORD v27[13]; // [sp+18h] [bp-70C4h] BYREF
  char *v28; // [sp+80h] [bp-705Ch] BYREF
  _BYTE v29[4100]; // [sp+84h] [bp-7058h] BYREF
  char v30[4100]; // [sp+1088h] [bp-6054h] BYREF
  char v31[4100]; // [sp+208Ch] [bp-5050h] BYREF
  char v32[4100]; // [sp+3090h] [bp-404Ch] BYREF
  _BYTE v33[4100]; // [sp+4094h] [bp-3048h] BYREF
  char v34[4100]; // [sp+5098h] [bp-2044h] BYREF
  char v35[4100]; // [sp+609Ch] [bp-1040h] BYREF
  int v36; // [sp+70A0h] [bp-3Ch] BYREF
  int v37; // [sp+70A4h] [bp-38h]
  size_t n; // [sp+70A8h] [bp-34h]
  char *s1; // [sp+70ACh] [bp-30h]
  const char *v40; // [sp+70B0h] [bp-2Ch]
  char *dest; // [sp+70B4h] [bp-28h]
  int v42; // [sp+70B8h] [bp-24h]
  int v43; // [sp+70BCh] [bp-20h]
  int v44; // [sp+70C0h] [bp-1Ch]
  int v45; // [sp+70C4h] [bp-18h]
  char *i; // [sp+70C8h] [bp-14h]
  char *s; // [sp+70CCh] [bp-10h]

  v43 = 0;
  v42 = 0;
  v36 = 0;
  if ( a1 )
  {
    if ( !a3 )
    {
      sub_8CD10(2, "src/rule.c", 593, "default_format is null or 0");
      return 0;
    }
    if ( !a4 )
    {
      sub_8CD10(2, "src/rule.c", 594, "formats is null or 0");
      return 0;
    }
    dest = (char *)calloc(1u, 0x2088u);
    if ( !dest )
    {
      v8 = _errno_location();
      sub_8CD10(2, "src/rule.c", 598, "calloc fail, errno[%d]", *v8);
      return 0;
    }
    *((_DWORD *)dest + 1034) = a5;
    *((_DWORD *)dest + 1562) = a6;
    memset(v35, 0, 0x1001u);
    v42 = _isoc99_sscanf(a1, "%s %n", v35, &v36);
    if ( v42 != 1 )
    {
      sub_8CD10(2, "src/rule.c", 612, "sscanf [%s] fail, selector", a1);
LABEL_128:
      sub_88C64(dest);
      return 0;
    }
    v40 = &a1[v36];
    memset(v34, 0, 0x1001u);
    memset(v33, 0, 0x1001u);
    v42 = _isoc99_sscanf(v35, " %[^.].%s", v34, v33);
    if ( v42 != 2 )
    {
      sub_8CD10(2, "src/rule.c", 627, "sscanf [%s] fail, category or level is null", v35);
      goto LABEL_128;
    }
    for ( i = v34; *i; ++i )
    {
      if ( ((*_ctype_b_loc())[(unsigned __int8)*i] & 8) == 0 && *i != 95 && *i != 45 && *i != 42 && *i != 33 )
      {
        sub_8CD10(2, "src/rule.c", 634, "category name[%s] character is not in [a-Z][0-9][_!*-]", v34);
        goto LABEL_128;
      }
    }
    strcpy(dest, v34);
    switch ( v33[0] )
    {
      case '*':
        dest[4097] = 42;
        i = v33;
        break;
      case '=':
        dest[4097] = 61;
        i = &v33[1];
        break;
      case '!':
        dest[4097] = 33;
        i = &v33[1];
        break;
      default:
        dest[4097] = 46;
        i = v33;
        break;
    }
    v9 = sub_83338(a2, i);
    *((_DWORD *)dest + 1025) = v9;
    switch ( dest[4097] )
    {
      case '!':
        memset(dest + 4104, 255, 0x20u);
        dest[*((_DWORD *)dest + 1025) / 8 + 4104] &= ~(unsigned __int8)(1 << (7 - *((_DWORD *)dest + 1025) % 8));
        break;
      case '*':
        memset(dest + 4104, 255, 0x20u);
        break;
      case '.':
        memset(dest + 4104, 0, 0x20u);
        dest[*((_DWORD *)dest + 1025) / 8 + 4104] |= ~(unsigned __int8)(255 << (8 - *((_DWORD *)dest + 1025) % 8));
        memset(&dest[*((_DWORD *)dest + 1025) / 8 + 4105], 255, 31 - *((_DWORD *)dest + 1025) / 8);
        break;
      case '=':
        memset(dest + 4104, 0, 0x20u);
        dest[*((_DWORD *)dest + 1025) / 8 + 4104] |= 1 << (7 - *((_DWORD *)dest + 1025) % 8);
        break;
      default:
        break;
    }
    memset(v32, 0, 0x1001u);
    memset(v31, 0, 0x1001u);
    v42 = _isoc99_sscanf(v40, " %[^;];%s", v32, v31);
    if ( v42 <= 0 )
    {
      sub_8CD10(2, "src/rule.c", 700, "sscanf [%s] fail", v40);
      goto LABEL_128;
    }
    if ( v31[0] )
    {
      v44 = 0;
      v45 = 0;
      s1 = **(char ***)a4;
      while ( *(_DWORD *)(a4 + 4) > v45 )
      {
        s1 = *(char **)(*(_DWORD *)a4 + 4 * v45);
        if ( !strcmp(s1, v31) )
        {
          *((_DWORD *)dest + 1566) = s1;
          v44 = 1;
          break;
        }
        ++v45;
      }
      if ( !v44 )
      {
        sub_8CD10(2, "src/rule.c", 722, "in conf file can't find format[%s], pls check", v31);
        goto LABEL_128;
      }
    }
    else
    {
      sub_8CD10(0, "src/rule.c", 706, "no format specified, use default");
      *((_DWORD *)dest + 1566) = a3;
    }
    memset(v30, 0, 0x1001u);
    v42 = _isoc99_sscanf(v32, " %[^,],", v30);
    if ( v42 <= 0 )
    {
      sub_8CD10(2, "src/rule.c", 734, "sscanf [%s] fail", v40);
      goto LABEL_128;
    }
    s = strchr(v32, 44);
    if ( s )
    {
      ++s;
      while ( ((*_ctype_b_loc())[(unsigned __int8)*s] & 0x2000) != 0 )
        ++s;
    }
    i = 0;
    if ( v30[0] == 45 )
    {
      if ( v30[1] != 34 )
      {
        sub_8CD10(2, "src/rule.c", 751, " - must set before a file output");
        goto LABEL_128;
      }
      *((_DWORD *)dest + 1562) = 0;
      i = &v30[1];
      *((_DWORD *)dest + 1035) = &unk_101000;
    }
    else
    {
      if ( (unsigned __int8)v30[0] > 0x2Du )
      {
        if ( v30[0] == 62 )
        {
          if ( !strncmp(&v30[1], "syslog", 6u) )
          {
            v20 = sub_871C4(s);
            *((_DWORD *)dest + 1565) = v20;
            if ( *((_DWORD *)dest + 1565) == -187 )
            {
              sub_8CD10(2, "src/rule.c", 853, "-187 get");
              goto LABEL_128;
            }
            *((_DWORD *)dest + 1567) = 551824;
            openlog(0, 25, 8);
          }
          else if ( !strncmp(&v30[1], "stdout", 6u) )
          {
            *((_DWORD *)dest + 1567) = 552956;
          }
          else
          {
            if ( strncmp(&v30[1], "stderr", 6u) )
            {
              sub_8CD10(2, "src/rule.c", 864, "[%s]the string after is not syslog, stdout or stderr", v32);
              goto LABEL_128;
            }
            *((_DWORD *)dest + 1567) = 553184;
          }
        }
        else
        {
          if ( v30[0] != 124 )
            goto LABEL_126;
          v16 = popen(&v32[1], "w");
          *((_DWORD *)dest + 1560) = v16;
          if ( !*((_DWORD *)dest + 1560) )
          {
            v17 = _errno_location();
            sub_8CD10(2, "src/rule.c", 839, "popen fail, errno[%d]", *v17);
            goto LABEL_128;
          }
          v18 = fileno(*((FILE **)dest + 1560));
          *((_DWORD *)dest + 1561) = v18;
          if ( *((int *)dest + 1561) < 0 )
          {
            v19 = _errno_location();
            sub_8CD10(2, "src/rule.c", 844, "fileno fail, errno[%d]", *v19);
            goto LABEL_128;
          }
          *((_DWORD *)dest + 1567) = 551588;
        }
        return dest;
      }
      if ( v30[0] != 34 )
      {
        if ( v30[0] != 36 )
        {
LABEL_126:
          sub_8CD10(2, "src/rule.c", 930, "the 1st char[%c] of file_path[%s] is wrong", (unsigned __int8)v30[0], v30);
          goto LABEL_128;
        }
        _isoc99_sscanf(&v30[1], "%s", dest + 6272);
        if ( s )
        {
          i = strchr(s, 34);
          if ( !i )
          {
            sub_8CD10(2, "src/rule.c", 874, "record_path not start with \", [%s]", s);
            goto LABEL_128;
          }
          v28 = strrchr(++i, 34);
          if ( !v28 )
          {
            sub_8CD10(2, "src/rule.c", 881, "matching \" not found in conf line[%s]", i);
            goto LABEL_128;
          }
          n = v28 - i;
          if ( (unsigned int)(v28 - i) > 0x400 )
          {
            sub_8CD10(2, "src/rule.c", 886, "record_path too long %ld > %ld", n, 1024);
            goto LABEL_128;
          }
          memcpy(dest + 7297, i, n);
        }
        v43 = sub_8D28C(dest + 7297, 1025);
        if ( v43 )
        {
          sub_8CD10(2, "src/rule.c", 895, "zc_str_replace_env fail");
          goto LABEL_128;
        }
        if ( strchr(dest + 7297, 37) )
        {
          *((_DWORD *)dest + 1567) = 552388;
          v21 = sub_8B878(sub_8A5D4);
          *((_DWORD *)dest + 1293) = v21;
          if ( !*((_DWORD *)dest + 1293) )
          {
            sub_8CD10(2, "src/rule.c", 909, "zc_arraylist_new fail");
            goto LABEL_128;
          }
          for ( i = dest + 7297; *i; i = v28 )
          {
            v37 = sub_8A644(i, &v28, a7);
            if ( !v37 )
            {
              sub_8CD10(2, "src/rule.c", 915, "zlog_spec_new fail");
              goto LABEL_128;
            }
            v43 = sub_8BC74(*((_DWORD *)dest + 1293), v37);
            if ( v43 )
            {
              sub_8A5D4(v37);
              sub_8CD10(2, "src/rule.c", 922, "zc_arraylist_add fail");
              goto LABEL_128;
            }
          }
        }
        else
        {
          *((_DWORD *)dest + 1567) = 552052;
        }
        return dest;
      }
    }
    if ( !i )
      i = v30;
    v43 = sub_8749C((int)i, dest + 4144, 1025, (int *)dest + 1293, a7);
    if ( v43 )
    {
      sub_8CD10(2, "src/rule.c", 767, "zlog_rule_parse_path fail");
      goto LABEL_128;
    }
    if ( s )
    {
      memset(v29, 0, 0x1001u);
      v42 = _isoc99_sscanf(s, " %[0-9MmKkBb] * %d ~", v29, dest + 5204);
      if ( v42 )
      {
        v10 = sub_8CFAC(v29);
        *((_DWORD *)dest + 1300) = v10;
      }
      i = strchr(s, 34);
      if ( i )
      {
        v43 = sub_8749C((int)i, dest + 5208, 1025, (int *)dest + 1559, a7);
        if ( v43 )
        {
          sub_8CD10(2, "src/rule.c", 784, "zlog_rule_parse_path fail");
          goto LABEL_128;
        }
        i = strchr(dest + 5208, 35);
        if ( !i || !strchr(i, 114) && !strchr(i, 115) )
        {
          sub_8CD10(2, "src/rule.c", 790, "archive_path must contain #r or #s");
          goto LABEL_128;
        }
      }
    }
    if ( *((_DWORD *)dest + 1293) )
    {
      if ( *((int *)dest + 1300) > 0 )
        *((_DWORD *)dest + 1567) = 550348;
      else
        *((_DWORD *)dest + 1567) = 549500;
    }
    else
    {
      if ( *((int *)dest + 1300) > 0 )
        *((_DWORD *)dest + 1567) = 548468;
      else
        *((_DWORD *)dest + 1567) = 547144;
      v11 = open64(dest + 4144, *((_DWORD *)dest + 1035) | 0x441, *((_DWORD *)dest + 1034));
      *((_DWORD *)dest + 1294) = v11;
      if ( *((int *)dest + 1294) < 0 )
      {
        v12 = dest + 4144;
        v13 = _errno_location();
        sub_8CD10(2, "src/rule.c", 817, "open file[%s] fail, errno[%d]", v12, *v13);
        goto LABEL_128;
      }
      if ( sub_90058(*((_DWORD *)dest + 1294), v27) )
      {
        v14 = dest + 4144;
        v15 = _errno_location();
        sub_8CD10(2, "src/rule.c", 823, "stat [%s] fail, errno[%d], failing to open static_fd", v14, *v15);
        goto LABEL_128;
      }
      if ( *((int *)dest + 1300) > 0 )
      {
        close(*((_DWORD *)dest + 1294));
        *((_DWORD *)dest + 1294) = -1;
      }
      *((_QWORD *)dest + 648) = v27[0];
      *((_QWORD *)dest + 649) = v27[12];
    }
    return dest;
  }
  sub_8CD10(2, "src/rule.c", 592, "line is null or 0");
  return 0;
}
