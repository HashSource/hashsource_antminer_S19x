int __fastcall sub_3C288(int a1, const char *a2, int a3)
{
  int v5; // r0
  int result; // r0
  int v8; // r5
  struct tm *v9; // r0
  int v10; // r0
  FILE *v11; // r5
  size_t v12; // r0
  size_t v13; // r0
  int v14; // r0
  int v15; // r6
  time_t timer; // [sp+1Ch] [bp-50h] BYREF
  time_t v17; // [sp+20h] [bp-4Ch] BYREF
  int v18; // [sp+24h] [bp-48h]
  char s[68]; // [sp+28h] [bp-44h] BYREF

  if ( byte_5C0EFC )
  {
    syslog(a1 | 0x80, "%s", a2);
    v5 = dword_4B91B4;
    if ( !dword_4B91B4 )
    {
      v5 = sub_7C918("bmminer_droa");
      dword_4B91B4 = v5;
    }
    return sub_7E7C0(v5, "logging.c", 9, "_droa_log", 9);
  }
  else
  {
    v17 = 0;
    v18 = 0;
    sub_3DFCC(&v17);
    timer = v17;
    v8 = v18 / 1000;
    v9 = localtime(&timer);
    snprintf(
      s,
      0x40u,
      " [%d-%02d-%02d %02d:%02d:%02d.%03d] ",
      v9->tm_year + 1900,
      v9->tm_mon + 1,
      v9->tm_mday,
      v9->tm_hour,
      v9->tm_min,
      v9->tm_sec,
      v8);
    v10 = fileno((FILE *)stderr);
    if ( !isatty(v10) )
    {
      fprintf((FILE *)stderr, "%s%s\n", s, a2);
      fflush((FILE *)stderr);
    }
    v11 = fopen("/tmp/miner/droa.log", modes);
    if ( v11 )
    {
      v12 = strlen(s);
      fwrite(s, v12, 1u, v11);
      v13 = strlen(a2);
      fwrite(a2, v13, 1u, v11);
      fwrite("\n", 1u, 1u, v11);
      fflush(v11);
      fclose(v11);
    }
    v14 = dword_4B91B4;
    if ( !dword_4B91B4 )
    {
      v14 = sub_7C918("bmminer_droa");
      dword_4B91B4 = v14;
    }
    result = sub_7E7C0(v14, "logging.c", 9, "_droa_log", 9);
    if ( a1 == 3 )
      v15 = 0;
    else
      v15 = byte_5BFE48 & 1;
    if ( !v15 )
      return sub_3C210(s, a2, a3);
  }
  return result;
}
