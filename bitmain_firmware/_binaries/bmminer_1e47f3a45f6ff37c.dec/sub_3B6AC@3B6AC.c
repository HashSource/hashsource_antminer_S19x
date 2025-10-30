int __fastcall sub_3B6AC(int a1, const char *a2, int a3, int a4)
{
  int v6; // r0
  int result; // r0
  int v9; // r4
  struct tm *v10; // r0
  int v11; // r0
  FILE *v12; // r8
  size_t v13; // r0
  size_t v14; // r0
  int v15; // r0
  int v16; // r6
  time_t timer; // [sp+1Ch] [bp-50h] BYREF
  time_t v18; // [sp+20h] [bp-4Ch] BYREF
  int v19; // [sp+24h] [bp-48h]
  char s[68]; // [sp+28h] [bp-44h] BYREF

  if ( byte_5C0EFC )
  {
    syslog(a1 | 0x80, "%s", a2);
    v6 = dword_4B9088;
    if ( !dword_4B9088 )
    {
      v6 = sub_7C918("bmminer_miner");
      dword_4B9088 = v6;
    }
    return sub_7E7C0(v6, "logging.c", 9, "_applog", 7);
  }
  else
  {
    v18 = 0;
    v19 = 0;
    sub_3DFCC(&v18);
    timer = v18;
    v9 = v19 / 1000;
    v10 = localtime(&timer);
    snprintf(
      s,
      0x40u,
      " [%d-%02d-%02d %02d:%02d:%02d.%03d] ",
      v10->tm_year + 1900,
      v10->tm_mon + 1,
      v10->tm_mday,
      v10->tm_hour,
      v10->tm_min,
      v10->tm_sec,
      v9);
    v11 = fileno((FILE *)stderr);
    if ( !isatty(v11) )
    {
      fprintf((FILE *)stderr, "%s%s\n", s, a2);
      fflush((FILE *)stderr);
    }
    if ( byte_4B908C )
    {
      v12 = (FILE *)dword_4B9090;
      if ( dword_4B9090 || (v12 = fopen(byte_4B90B4, modes), (dword_4B9090 = (int)v12) != 0) )
      {
        v13 = strlen(s);
        fwrite(s, v13, 1u, v12);
        v14 = strlen(a2);
        fwrite(a2, v14, 1u, (FILE *)dword_4B9090);
        fwrite("\n", 1u, 1u, (FILE *)dword_4B9090);
        fflush((FILE *)dword_4B9090);
      }
    }
    v15 = dword_4B9088;
    if ( !dword_4B9088 )
    {
      v15 = sub_7C918("bmminer_miner");
      dword_4B9088 = v15;
    }
    result = sub_7E7C0(v15, "logging.c", 9, "_applog", 7);
    if ( a1 == 3 )
      v16 = 0;
    else
      v16 = byte_5BFE48 & 1;
    if ( !v16 )
      return sub_3C210(s, a2, a3, (unsigned __int8)byte_5BFE48);
  }
  return result;
}
