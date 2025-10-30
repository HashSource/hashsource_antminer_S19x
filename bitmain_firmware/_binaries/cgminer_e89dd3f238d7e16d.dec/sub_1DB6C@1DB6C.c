void __fastcall sub_1DB6C(int a1, const char *a2, char a3)
{
  int v3; // r0
  size_t v4; // r0
  size_t v5; // r0
  char s[64]; // [sp+2Ch] [bp-60h] BYREF
  time_t timer; // [sp+6Ch] [bp-20h] BYREF
  time_t v11; // [sp+70h] [bp-1Ch] BYREF
  int v12; // [sp+74h] [bp-18h]
  struct tm *v13; // [sp+78h] [bp-14h]
  int v14; // [sp+7Ch] [bp-10h]

  if ( byte_90DC0 )
  {
    syslog(a1 | 0x80, "%s", a2);
  }
  else
  {
    v11 = 0;
    v12 = 0;
    sub_21AC0(&v11);
    timer = v11;
    v14 = v12 / 1000;
    v13 = localtime(&timer);
    snprintf(
      s,
      0x40u,
      " [%d-%02d-%02d %02d:%02d:%02d.%03d] ",
      v13->tm_year + 1900,
      v13->tm_mon + 1,
      v13->tm_mday,
      v13->tm_hour,
      v13->tm_min,
      v13->tm_sec,
      v14);
    v3 = fileno((FILE *)stderr);
    if ( !isatty(v3) )
    {
      fprintf((FILE *)stderr, "%s%s\n", s, a2);
      fflush((FILE *)stderr);
    }
    if ( byte_865D8 )
    {
      if ( !dword_865D4 )
        dword_865D4 = fopen64(&dword_865DC, &word_866DC);
      if ( dword_865D4 )
      {
        v4 = strlen(s);
        fwrite(s, v4, 1u, (FILE *)dword_865D4);
        v5 = strlen(a2);
        fwrite(a2, v5, 1u, (FILE *)dword_865D4);
        fwrite("\n", 1u, 1u, (FILE *)dword_865D4);
        fflush((FILE *)dword_865D4);
      }
    }
    sub_1DA78(a1, s, a2, a3);
  }
}
