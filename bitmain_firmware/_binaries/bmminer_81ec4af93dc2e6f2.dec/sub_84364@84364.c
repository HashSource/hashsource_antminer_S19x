char *__fastcall sub_84364(const char *a1, _DWORD *a2, int a3, int a4, int a5, int a6, int a7)
{
  int *v8; // r0
  int v9; // r0
  bool v10; // nf
  int v11; // r0
  int v12; // r3
  int v13; // r0
  int v14; // r0
  int v15; // r3
  int v16; // r0
  int v17; // r0
  int v18; // r3
  int v19; // r0
  int v20; // r0
  int v21; // r0
  const char *v22; // r4
  int *v23; // r0
  const char *v24; // r4
  int *v25; // r0
  FILE *v26; // r0
  int *v27; // r0
  int v28; // r0
  int *v29; // r0
  int v30; // r0
  int v31; // r0
  _QWORD v37[13]; // [sp+18h] [bp-70C4h] BYREF
  char *v38; // [sp+80h] [bp-705Ch] BYREF
  _BYTE v39[4100]; // [sp+84h] [bp-7058h] BYREF
  char v40[4100]; // [sp+1088h] [bp-6054h] BYREF
  char v41[4100]; // [sp+208Ch] [bp-5050h] BYREF
  char v42[4100]; // [sp+3090h] [bp-404Ch] BYREF
  _BYTE v43[4100]; // [sp+4094h] [bp-3048h] BYREF
  char v44[4100]; // [sp+5098h] [bp-2044h] BYREF
  char v45[4100]; // [sp+609Ch] [bp-1040h] BYREF
  int v46; // [sp+70A0h] [bp-3Ch] BYREF
  int v47; // [sp+70A4h] [bp-38h]
  size_t n; // [sp+70A8h] [bp-34h]
  char *s1; // [sp+70ACh] [bp-30h]
  const char *v50; // [sp+70B0h] [bp-2Ch]
  char *dest; // [sp+70B4h] [bp-28h]
  int v52; // [sp+70B8h] [bp-24h]
  int v53; // [sp+70BCh] [bp-20h]
  int v54; // [sp+70C0h] [bp-1Ch]
  int v55; // [sp+70C4h] [bp-18h]
  char *i; // [sp+70C8h] [bp-14h]
  char *s; // [sp+70CCh] [bp-10h]

  v53 = 0;
  v52 = 0;
  v46 = 0;
  if ( a1 )
  {
    if ( !a3 )
    {
      sub_89984(2, "src/rule.c", 593, "default_format is null or 0");
      return 0;
    }
    if ( !a4 )
    {
      sub_89984(2, "src/rule.c", 594, "formats is null or 0");
      return 0;
    }
    dest = (char *)calloc(1u, 0x2088u);
    if ( !dest )
    {
      v8 = _errno_location();
      sub_89984(2, "src/rule.c", 598, "calloc fail, errno[%d]", *v8);
      return 0;
    }
    *((_DWORD *)dest + 1034) = a5;
    *((_DWORD *)dest + 1562) = a6;
    memset(v45, 0, 0x1001u);
    v52 = _isoc99_sscanf(a1, "%s %n", v45, &v46);
    if ( v52 != 1 )
    {
      sub_89984(2, "src/rule.c", 612, "sscanf [%s] fail, selector", a1);
LABEL_134:
      sub_858AC(dest);
      return 0;
    }
    v50 = &a1[v46];
    memset(v44, 0, 0x1001u);
    memset(v43, 0, 0x1001u);
    v52 = _isoc99_sscanf(v45, " %[^.].%s", v44, v43);
    if ( v52 != 2 )
    {
      sub_89984(2, "src/rule.c", 627, "sscanf [%s] fail, category or level is null", v45);
      goto LABEL_134;
    }
    for ( i = v44; *i; ++i )
    {
      if ( ((*_ctype_b_loc())[(unsigned __int8)*i] & 8) == 0 && *i != 95 && *i != 45 && *i != 42 && *i != 33 )
      {
        sub_89984(2, "src/rule.c", 634, "category name[%s] character is not in [a-Z][0-9][_!*-]", v44);
        goto LABEL_134;
      }
    }
    strcpy(dest, v44);
    switch ( v43[0] )
    {
      case '*':
        dest[4097] = 42;
        i = v43;
        break;
      case '=':
        dest[4097] = 61;
        i = &v43[1];
        break;
      case '!':
        dest[4097] = 33;
        i = &v43[1];
        break;
      default:
        dest[4097] = 46;
        i = v43;
        break;
    }
    v9 = sub_7FF7C(a2, i);
    *((_DWORD *)dest + 1025) = v9;
    switch ( dest[4097] )
    {
      case '!':
        memset(dest + 4104, 255, 0x20u);
        v15 = *((_DWORD *)dest + 1025);
        v14 = -v15;
        v10 = -v15 < 0;
        LOBYTE(v15) = v15 & 7;
        v16 = v14 & 7;
        if ( !v10 )
          v15 = -v16;
        dest[*((_DWORD *)dest + 1025) / 8 + 4104] &= ~(unsigned __int8)(1 << (7 - v15));
        break;
      case '*':
        memset(dest + 4104, 255, 0x20u);
        break;
      case '.':
        memset(dest + 4104, 0, 0x20u);
        v18 = *((_DWORD *)dest + 1025);
        v17 = -v18;
        v10 = -v18 < 0;
        LOBYTE(v18) = v18 & 7;
        v19 = v17 & 7;
        if ( !v10 )
          v18 = -v19;
        dest[*((_DWORD *)dest + 1025) / 8 + 4104] |= ~(unsigned __int8)(255 << (8 - v18));
        memset(&dest[*((_DWORD *)dest + 1025) / 8 + 4105], 255, 31 - *((_DWORD *)dest + 1025) / 8);
        break;
      case '=':
        memset(dest + 4104, 0, 0x20u);
        v12 = *((_DWORD *)dest + 1025);
        v11 = -v12;
        v10 = -v12 < 0;
        LOBYTE(v12) = v12 & 7;
        v13 = v11 & 7;
        if ( !v10 )
          v12 = -v13;
        dest[*((_DWORD *)dest + 1025) / 8 + 4104] |= 1 << (7 - v12);
        break;
      default:
        break;
    }
    memset(v42, 0, 0x1001u);
    memset(v41, 0, 0x1001u);
    v52 = _isoc99_sscanf(v50, " %[^;];%s", v42, v41);
    if ( v52 <= 0 )
    {
      sub_89984(2, "src/rule.c", 700, "sscanf [%s] fail", v50);
      goto LABEL_134;
    }
    if ( v41[0] )
    {
      v54 = 0;
      v55 = 0;
      s1 = **(char ***)a4;
      while ( v55 < *(_DWORD *)(a4 + 4) )
      {
        s1 = *(char **)(*(_DWORD *)a4 + 4 * v55);
        if ( !strcmp(s1, v41) )
        {
          *((_DWORD *)dest + 1566) = s1;
          v54 = 1;
          break;
        }
        ++v55;
      }
      if ( !v54 )
      {
        sub_89984(2, "src/rule.c", 722, "in conf file can't find format[%s], pls check", v41);
        goto LABEL_134;
      }
    }
    else
    {
      sub_89984(0, "src/rule.c", 706, "no format specified, use default");
      *((_DWORD *)dest + 1566) = a3;
    }
    memset(v40, 0, 0x1001u);
    v52 = _isoc99_sscanf(v42, " %[^,],", v40);
    if ( v52 <= 0 )
    {
      sub_89984(2, "src/rule.c", 734, "sscanf [%s] fail", v50);
      goto LABEL_134;
    }
    s = strchr(v42, 44);
    if ( s )
    {
      ++s;
      while ( ((*_ctype_b_loc())[(unsigned __int8)*s] & 0x2000) != 0 )
        ++s;
    }
    i = 0;
    if ( v40[0] == 45 )
    {
      if ( v40[1] != 34 )
      {
        sub_89984(2, "src/rule.c", 751, " - must set before a file output");
        goto LABEL_134;
      }
      *((_DWORD *)dest + 1562) = 0;
      i = &v40[1];
      *((_DWORD *)dest + 1035) = &unk_101000;
    }
    else
    {
      if ( (unsigned __int8)v40[0] > 0x2Du )
      {
        if ( v40[0] == 62 )
        {
          if ( !strncmp(&v40[1], "syslog", 6u) )
          {
            v30 = sub_83E20(s);
            *((_DWORD *)dest + 1565) = v30;
            if ( *((_DWORD *)dest + 1565) == -187 )
            {
              sub_89984(2, "src/rule.c", 853, "-187 get");
              goto LABEL_134;
            }
            *((_DWORD *)dest + 1567) = 538604;
            openlog(0, 25, 8);
          }
          else if ( !strncmp(&v40[1], "stdout", 6u) )
          {
            *((_DWORD *)dest + 1567) = 539736;
          }
          else
          {
            if ( strncmp(&v40[1], "stderr", 6u) )
            {
              sub_89984(2, "src/rule.c", 864, "[%s]the string after is not syslog, stdout or stderr", v42);
              goto LABEL_134;
            }
            *((_DWORD *)dest + 1567) = 539964;
          }
        }
        else
        {
          if ( v40[0] != 124 )
            goto LABEL_132;
          v26 = popen(&v42[1], "w");
          *((_DWORD *)dest + 1560) = v26;
          if ( !*((_DWORD *)dest + 1560) )
          {
            v27 = _errno_location();
            sub_89984(2, "src/rule.c", 839, "popen fail, errno[%d]", *v27);
            goto LABEL_134;
          }
          v28 = fileno(*((FILE **)dest + 1560));
          *((_DWORD *)dest + 1561) = v28;
          if ( *((int *)dest + 1561) < 0 )
          {
            v29 = _errno_location();
            sub_89984(2, "src/rule.c", 844, "fileno fail, errno[%d]", *v29);
            goto LABEL_134;
          }
          *((_DWORD *)dest + 1567) = 538368;
        }
        return dest;
      }
      if ( v40[0] != 34 )
      {
        if ( v40[0] != 36 )
        {
LABEL_132:
          sub_89984(2, "src/rule.c", 930, "the 1st char[%c] of file_path[%s] is wrong", (unsigned __int8)v40[0], v40);
          goto LABEL_134;
        }
        _isoc99_sscanf(&v40[1], "%s", dest + 6272);
        if ( s )
        {
          i = strchr(s, 34);
          if ( !i )
          {
            sub_89984(2, "src/rule.c", 874, "record_path not start with \", [%s]", s);
            goto LABEL_134;
          }
          v38 = strrchr(++i, 34);
          if ( !v38 )
          {
            sub_89984(2, "src/rule.c", 881, "matching \" not found in conf line[%s]", i);
            goto LABEL_134;
          }
          n = v38 - i;
          if ( (unsigned int)(v38 - i) > 0x400 )
          {
            sub_89984(2, "src/rule.c", 886, "record_path too long %ld > %ld", n, 1024);
            goto LABEL_134;
          }
          memcpy(dest + 7297, i, n);
        }
        v53 = sub_89F00(dest + 7297, 1025);
        if ( v53 )
        {
          sub_89984(2, "src/rule.c", 895, "zc_str_replace_env fail");
          goto LABEL_134;
        }
        if ( strchr(dest + 7297, 37) )
        {
          *((_DWORD *)dest + 1567) = 539168;
          v31 = sub_884DC(sub_87238);
          *((_DWORD *)dest + 1293) = v31;
          if ( !*((_DWORD *)dest + 1293) )
          {
            sub_89984(2, "src/rule.c", 909, "zc_arraylist_new fail");
            goto LABEL_134;
          }
          for ( i = dest + 7297; *i; i = v38 )
          {
            v47 = sub_872A8(i, &v38, a7);
            if ( !v47 )
            {
              sub_89984(2, "src/rule.c", 915, "zlog_spec_new fail");
              goto LABEL_134;
            }
            v53 = sub_888DC(*((_DWORD *)dest + 1293), v47);
            if ( v53 )
            {
              sub_87238(v47);
              sub_89984(2, "src/rule.c", 922, "zc_arraylist_add fail");
              goto LABEL_134;
            }
          }
        }
        else
        {
          *((_DWORD *)dest + 1567) = 538832;
        }
        return dest;
      }
    }
    if ( !i )
      i = v40;
    v53 = sub_840F8((int)i, dest + 4144, 1025, (int *)dest + 1293, a7);
    if ( v53 )
    {
      sub_89984(2, "src/rule.c", 767, "zlog_rule_parse_path fail");
      goto LABEL_134;
    }
    if ( s )
    {
      memset(v39, 0, 0x1001u);
      v52 = _isoc99_sscanf(s, " %[0-9MmKkBb] * %d ~", v39, dest + 5204);
      if ( v52 )
      {
        v20 = sub_89C20(v39);
        *((_DWORD *)dest + 1300) = v20;
      }
      i = strchr(s, 34);
      if ( i )
      {
        v53 = sub_840F8((int)i, dest + 5208, 1025, (int *)dest + 1559, a7);
        if ( v53 )
        {
          sub_89984(2, "src/rule.c", 784, "zlog_rule_parse_path fail");
          goto LABEL_134;
        }
        i = strchr(dest + 5208, 35);
        if ( !i || !strchr(i, 114) && !strchr(i, 115) )
        {
          sub_89984(2, "src/rule.c", 790, "archive_path must contain #r or #s");
          goto LABEL_134;
        }
      }
    }
    if ( *((_DWORD *)dest + 1293) )
    {
      if ( *((int *)dest + 1300) > 0 )
        *((_DWORD *)dest + 1567) = 537128;
      else
        *((_DWORD *)dest + 1567) = 536280;
    }
    else
    {
      if ( *((int *)dest + 1300) > 0 )
        *((_DWORD *)dest + 1567) = 535248;
      else
        *((_DWORD *)dest + 1567) = 533924;
      v21 = open64(dest + 4144, *((_DWORD *)dest + 1035) | 0x441, *((_DWORD *)dest + 1034));
      *((_DWORD *)dest + 1294) = v21;
      if ( *((int *)dest + 1294) < 0 )
      {
        v22 = dest + 4144;
        v23 = _errno_location();
        sub_89984(2, "src/rule.c", 817, "open file[%s] fail, errno[%d]", v22, *v23);
        goto LABEL_134;
      }
      if ( sub_8CCE4(*((_DWORD *)dest + 1294), v37) )
      {
        v24 = dest + 4144;
        v25 = _errno_location();
        sub_89984(2, "src/rule.c", 823, "stat [%s] fail, errno[%d], failing to open static_fd", v24, *v25);
        goto LABEL_134;
      }
      if ( *((int *)dest + 1300) > 0 )
      {
        close(*((_DWORD *)dest + 1294));
        *((_DWORD *)dest + 1294) = -1;
      }
      *((_QWORD *)dest + 648) = v37[0];
      *((_QWORD *)dest + 649) = v37[12];
    }
    return dest;
  }
  sub_89984(2, "src/rule.c", 592, "line is null or 0");
  return 0;
}
