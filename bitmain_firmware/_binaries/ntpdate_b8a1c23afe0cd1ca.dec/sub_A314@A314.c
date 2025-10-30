char *__fastcall sub_A314(char *result, char *s)
{
  char *v2; // r9
  int v4; // r5
  bool v5; // zf
  int v6; // r5
  int v7; // r6
  __pid_t v8; // r10
  const char *v9; // r11
  FILE *v10; // r6
  int v11; // r0
  const char *v12; // [sp+1Ch] [bp-18h]
  char v13; // [sp+24h] [bp-10h] BYREF
  __int16 v14; // [sp+28h] [bp-Ch] BYREF

  v2 = result;
  v14 = 10;
  v13 = 0;
  v4 = progname;
  if ( progname != dword_3330C )
  {
    dword_3330C = progname;
    result = strrchr((const char *)progname, 47);
    v5 = result == 0;
    if ( result )
      ++result;
    else
      dword_33310 = v4;
    if ( !v5 )
      dword_33310 = (int)result;
  }
  v6 = syslogit;
  v7 = msyslog_term;
  if ( syslogit )
  {
    result = (char *)_syslog_chk(v2, 1, "%s", s);
    if ( !v7 )
      return result;
    v6 = 0;
  }
  else if ( syslog_file )
  {
    v6 = 1;
  }
  else
  {
    v7 = 1;
  }
  if ( msyslog_include_timestamp )
    v12 = (const char *)sub_13220(result);
  else
    v12 = 0;
  if ( v6 | msyslog_term_pid )
    v8 = getpid();
  else
    v8 = -1;
  result = &s[strlen(s)];
  if ( *(result - 1) == 10 )
    v9 = &v13;
  else
    v9 = (const char *)&v14;
  if ( v7 )
  {
    if ( (int)v2 <= 3 )
      v10 = stderr;
    else
      v10 = stdout;
    if ( msyslog_include_timestamp )
      _fprintf_chk(v10, 1, "%s ", v12);
    if ( msyslog_term_pid )
      _fprintf_chk(v10, 1, "%s[%d]: ", (const char *)dword_33310, v8);
    _fprintf_chk(v10, 1, "%s%s", s, v9);
    result = (char *)fflush(v10);
  }
  if ( v6 )
  {
    v11 = syslog_file;
    if ( msyslog_include_timestamp )
    {
      _fprintf_chk(syslog_file, 1, "%s ", v12);
      v11 = syslog_file;
    }
    _fprintf_chk(v11, 1, "%s[%d]: %s%s", (const char *)dword_33310, v8, s, v9);
    return (char *)fflush((FILE *)syslog_file);
  }
  return result;
}
