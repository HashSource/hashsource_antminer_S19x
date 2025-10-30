int __fastcall sub_814F4(int a1, const char *a2, int *a3)
{
  size_t v3; // r0
  int v6; // [sp+0h] [bp-5054h]
  int v7; // [sp+4h] [bp-5050h]
  char v11[4100]; // [sp+20h] [bp-5034h] BYREF
  char v12[4100]; // [sp+1024h] [bp-4030h] BYREF
  char v13[4100]; // [sp+2028h] [bp-302Ch] BYREF
  char v14[4100]; // [sp+302Ch] [bp-2028h] BYREF
  char v15[4100]; // [sp+4030h] [bp-1024h] BYREF
  int v16; // [sp+5034h] [bp-20h] BYREF
  int v17; // [sp+5038h] [bp-1Ch]
  int v18; // [sp+503Ch] [bp-18h]
  int v19; // [sp+5040h] [bp-14h]
  int v20; // [sp+5044h] [bp-10h]

  v20 = 0;
  v19 = 0;
  if ( strlen(a2) <= 0x1000 )
  {
    if ( *a2 != 91 )
    {
      switch ( *a3 )
      {
        case 1:
          memset(v15, 0, 0x1001u);
          memset(v11, 0, 0x1001u);
          v17 = _isoc99_sscanf(a2, " %[^=]= %s ", v15, v11);
          if ( v17 == 2 )
          {
            memset(v14, 0, 0x1001u);
            memset(v13, 0, 0x1001u);
            memset(v12, 0, 0x1001u);
            v16 = 0;
            v17 = _isoc99_sscanf(v15, "%s%n%s%s", v14, &v16, v13, v12);
            if ( !strcmp(v14, "strict") && !strcmp(v13, "init") )
            {
              *(_DWORD *)(a1 + 1048) = strcasecmp(v11, "false") || getenv("ZLOG_STRICT_INIT");
              return 0;
            }
            if ( !strcmp(v14, "buffer") && !strcmp(v13, "min") )
            {
              *(_DWORD *)(a1 + 1052) = sub_8CFAC(v11);
              return 0;
            }
            if ( !strcmp(v14, "buffer") && !strcmp(v13, "max") )
            {
              *(_DWORD *)(a1 + 1056) = sub_8CFAC(v11);
              return 0;
            }
            if ( !strcmp(v14, "file") && !strcmp(v13, "perms") )
            {
              _isoc99_sscanf(v11, "%o", a1 + 9268);
              return 0;
            }
            if ( !strcmp(v14, "rotate") && !strcmp(v13, "lock") && !strcmp(v12, "file") )
            {
              if ( !strcmp(v11, "self") )
                strcpy((char *)(a1 + 1060), (const char *)a1);
              else
                strcpy((char *)(a1 + 1060), v11);
              return 0;
            }
            if ( !strcmp(v14, "default") && !strcmp(v13, "format") )
            {
              strcpy((char *)(a1 + 5164), &a2[v16]);
              return 0;
            }
            if ( !strcmp(v14, "reload") && !strcmp(v13, "conf") && !strcmp(v12, "period") )
            {
              *(_DWORD *)(a1 + 9276) = sub_8CFAC(v11);
              return 0;
            }
            if ( !strcmp(v14, "fsync") && !strcmp(v13, "period") )
            {
              *(_DWORD *)(a1 + 9272) = sub_8CFAC(v11);
              return 0;
            }
            sub_8CD10(2, "src/conf.c", 454, "name[%s] is not any one of global options", v15);
            if ( !*(_DWORD *)(a1 + 1048) )
              return 0;
            return -1;
          }
          else
          {
            sub_8CD10(2, "src/conf.c", 412, "sscanf [%s] fail, name or value is null", a2);
            return -1;
          }
        case 2:
          if ( !sub_831A8(*(_DWORD *)(a1 + 9280), a2) )
            return 0;
          sub_8CD10(2, "src/conf.c", 460, "zlog_level_list_set fail");
          if ( !*(_DWORD *)(a1 + 1048) )
            return 0;
          return -1;
        case 3:
          v20 = sub_8296C(a2, a1 + 9292);
          if ( v20 )
          {
            if ( !sub_8BC74(*(_DWORD *)(a1 + 9284), v20) )
              return 0;
            sub_828D0(v20);
            sub_8CD10(2, "src/conf.c", 473, "zc_arraylist_add fail");
            return -1;
          }
          else
          {
            sub_8CD10(2, "src/conf.c", 467, "zlog_format_new fail [%s]", a2);
            if ( !*(_DWORD *)(a1 + 1048) )
              return 0;
            return -1;
          }
        case 4:
          v19 = sub_87708(
                  a2,
                  *(_DWORD *)(a1 + 9280),
                  *(_DWORD *)(a1 + 9264),
                  *(_DWORD *)(a1 + 9284),
                  *(_DWORD *)(a1 + 9268),
                  *(_DWORD *)(a1 + 9272),
                  a1 + 9292);
          if ( v19 )
          {
            if ( sub_8BC74(*(_DWORD *)(a1 + 9288), v19) )
            {
              sub_88C64(v19);
              sub_8CD10(2, "src/conf.c", 493, "zc_arraylist_add fail");
              return -1;
            }
          }
          else
          {
            sub_8CD10(2, "src/conf.c", 487, "zlog_rule_new fail [%s]", a2);
            if ( *(_DWORD *)(a1 + 1048) )
              return -1;
          }
          return 0;
        default:
          sub_8CD10(2, "src/conf.c", 498, "not in any section");
          return -1;
      }
    }
    v18 = *a3;
    v17 = _isoc99_sscanf(a2, "[ %[^] \t]", v15);
    if ( !strcmp(v15, "global") )
    {
      *a3 = 1;
    }
    else if ( !strcmp(v15, "levels") )
    {
      *a3 = 2;
    }
    else if ( !strcmp(v15, "formats") )
    {
      *a3 = 3;
    }
    else
    {
      if ( strcmp(v15, "rules") )
      {
        sub_8CD10(2, "src/conf.c", 363, "wrong section name[%s]", v15);
        return -1;
      }
      *a3 = 4;
    }
    if ( *a3 > v18 )
    {
      if ( *a3 == 4 )
      {
        if ( *(_DWORD *)(a1 + 9276) && *(_DWORD *)(a1 + 9272) >= *(_DWORD *)(a1 + 9276) )
        {
          sub_8CD10(
            1,
            "src/conf.c",
            382,
            "fsync_period[%ld] >= reload_conf_period[%ld],set fsync_period to zero",
            v6,
            v7);
          *(_DWORD *)(a1 + 9272) = 0;
        }
        *(_DWORD *)(a1 + 5160) = sub_84064(a1 + 1060);
        if ( !*(_DWORD *)(a1 + 5160) )
        {
          sub_8CD10(2, "src/conf.c", 391, "zlog_rotater_new fail");
          return -1;
        }
        *(_DWORD *)(a1 + 9264) = sub_8296C(a1 + 5164, a1 + 9292);
        if ( !*(_DWORD *)(a1 + 9264) )
        {
          sub_8CD10(2, "src/conf.c", 398, "zlog_format_new fail");
          return -1;
        }
      }
      return 0;
    }
    sub_8CD10(2, "src/conf.c", 368, "wrong sequence of section, must follow global->levels->formats->rules");
    return -1;
  }
  else
  {
    v3 = strlen(a2);
    sub_8CD10(2, "src/conf.c", 346, "line_len[%ld] > MAXLEN_CFG_LINE[%ld], may cause overflow", v3, 4096);
    return -1;
  }
}
