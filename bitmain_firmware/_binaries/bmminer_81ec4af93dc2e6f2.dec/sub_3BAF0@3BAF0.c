int __fastcall sub_3BAF0(int a1, const char *a2, int a3)
{
  int v5; // r0
  int result; // r0
  int v8; // r4
  struct tm *v9; // r0
  int v10; // r0
  FILE *v11; // r4
  size_t v12; // r0
  size_t v13; // r0
  int v14; // r0
  int v15; // r7
  time_t timer; // [sp+1Ch] [bp-4Ch] BYREF
  time_t v17; // [sp+20h] [bp-48h] BYREF
  int v18; // [sp+24h] [bp-44h]
  char s[64]; // [sp+28h] [bp-40h] BYREF

  if ( byte_5BC044 )
  {
    syslog(a1 | 0x80, "%s", a2);
    v5 = dword_4B6438;
    if ( !dword_4B6438 )
    {
      v5 = sub_79514("bmminer_droa");
      dword_4B6438 = v5;
    }
    return sub_7B3D8(v5, "logging.c", 9, "_droa_log", 9);
  }
  else
  {
    v17 = 0;
    v18 = 0;
    sub_3D7A0(&v17);
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
    v14 = dword_4B6438;
    if ( !dword_4B6438 )
    {
      v14 = sub_79514("bmminer_droa");
      dword_4B6438 = v14;
    }
    result = sub_7B3D8(v14, "logging.c", 9, "_droa_log", 9);
    if ( a1 == 3 )
      v15 = 0;
    else
      v15 = byte_5BAF90 & 1;
    if ( !v15 )
      return sub_3BA78(s, a2, a3);
  }
  return result;
}
