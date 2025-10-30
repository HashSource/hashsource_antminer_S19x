char *__fastcall sub_808EC(const char *a1)
{
  int *v1; // r0
  char *v3; // r0
  int *v4; // r0
  const char *v5; // r12
  _DWORD *v6; // r5
  int v7; // r1
  int v8; // r2
  int v9; // r3
  char *s; // [sp+14h] [bp-20h]
  int v13; // [sp+18h] [bp-1Ch]
  unsigned int v14; // [sp+1Ch] [bp-18h]

  v14 = 0;
  s = (char *)calloc(1u, 0x2450u);
  if ( s )
  {
    if ( a1 && *a1 )
    {
      v14 = snprintf(s, 0x401u, "%s", a1);
      v13 = 1;
    }
    else if ( getenv("ZLOG_CONF_PATH") )
    {
      v3 = getenv("ZLOG_CONF_PATH");
      v14 = snprintf(s, 0x401u, "%s", v3);
      v13 = 1;
    }
    else
    {
      memset(s, 0, 0x401u);
      v13 = 0;
    }
    if ( v14 <= 0x400 )
    {
      *((_DWORD *)s + 262) = 1;
      *((_DWORD *)s + 263) = 1024;
      *((_DWORD *)s + 264) = 0x200000;
      if ( v13 )
        strcpy(s + 1060, s);
      else
        strcpy(s + 1060, "/tmp/zlog.lock");
      v5 = "default = \"%D %V [%p:%F:%L] %m%n\"";
      v6 = s + 5164;
      do
      {
        v7 = *((_DWORD *)v5 + 1);
        v8 = *((_DWORD *)v5 + 2);
        v9 = *((_DWORD *)v5 + 3);
        *v6 = *(_DWORD *)v5;
        v6[1] = v7;
        v6[2] = v8;
        v6[3] = v9;
        v5 += 16;
        v6 += 4;
      }
      while ( v5 != "\"" );
      *(_WORD *)v6 = *(_WORD *)v5;
      *((_DWORD *)s + 2317) = 384;
      *((_DWORD *)s + 2319) = 0;
      *((_DWORD *)s + 2318) = 0;
      *((_DWORD *)s + 2320) = sub_83108();
      if ( *((_DWORD *)s + 2320) )
      {
        *((_DWORD *)s + 2321) = sub_8B878(sub_828D0);
        if ( *((_DWORD *)s + 2321) )
        {
          *((_DWORD *)s + 2322) = sub_8B878(sub_88C64);
          if ( *((_DWORD *)s + 2322) )
          {
            if ( v13 )
            {
              if ( sub_80EEC(s) )
              {
                sub_8CD10(2, "src/conf.c", 160, "zlog_conf_build_with_file fail");
                goto LABEL_28;
              }
            }
            else if ( sub_80D14(s) )
            {
              sub_8CD10(2, "src/conf.c", 165, "zlog_conf_build_without_file fail");
              goto LABEL_28;
            }
            sub_803B0((int)s, 0);
            return s;
          }
          sub_8CD10(2, "src/conf.c", 154, "init rule_list fail");
        }
        else
        {
          sub_8CD10(2, "src/conf.c", 148, "zc_arraylist_new fail");
        }
      }
      else
      {
        sub_8CD10(2, "src/conf.c", 142, "zlog_level_list_new fail");
      }
    }
    else
    {
      v4 = _errno_location();
      sub_8CD10(2, "src/conf.c", 120, "not enough space for path name, nwrite=[%d], errno[%d]", v14, *v4);
    }
LABEL_28:
    sub_807B8(s);
    return 0;
  }
  v1 = _errno_location();
  sub_8CD10(2, "src/conf.c", 105, "calloc fail, errno[%d]", *v1);
  return 0;
}
