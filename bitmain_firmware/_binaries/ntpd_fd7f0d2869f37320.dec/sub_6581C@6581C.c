char *__fastcall sub_6581C(char *result, char *s)
{
  char *v2; // r9
  int v4; // r5
  int v5; // r8
  int v6; // r5
  __pid_t v7; // r10
  const char *v8; // r11
  FILE *v9; // r8
  const char *v10; // [sp+1Ch] [bp-18h]
  char v11; // [sp+24h] [bp-10h] BYREF
  __int16 v12; // [sp+28h] [bp-Ch] BYREF

  v2 = result;
  v12 = 10;
  v11 = 0;
  v4 = progname;
  if ( progname != dword_10812C )
  {
    dword_10812C = progname;
    result = strrchr((const char *)progname, 47);
    if ( result )
      dword_108130 = (int)++result;
    else
      dword_108130 = v4;
  }
  v5 = msyslog_term;
  if ( syslogit )
  {
    v6 = 0;
    result = (char *)_syslog_chk(v2, 1, "%s", s);
LABEL_8:
    if ( !(v6 | v5) )
      return result;
    goto LABEL_11;
  }
  v6 = syslog_file;
  if ( syslog_file )
  {
    v6 = 1;
    goto LABEL_8;
  }
  v5 = 1;
LABEL_11:
  if ( msyslog_include_timestamp )
    v10 = (const char *)sub_79A0C();
  else
    v10 = 0;
  if ( v6 | msyslog_term_pid )
    v7 = getpid();
  else
    v7 = -1;
  result = &s[strlen(s)];
  if ( *(result - 1) == 10 )
    v8 = &v11;
  else
    v8 = (const char *)&v12;
  if ( v5 )
  {
    if ( (int)v2 <= 3 )
      v9 = stderr;
    else
      v9 = stdout;
    if ( msyslog_include_timestamp )
      _fprintf_chk(v9, 1, "%s ", v10);
    if ( msyslog_term_pid )
      _fprintf_chk(v9, 1, "%s[%d]: ", (const char *)dword_108130, v7);
    _fprintf_chk(v9, 1, "%s%s", s, v8);
    result = (char *)fflush(v9);
  }
  if ( v6 )
  {
    if ( msyslog_include_timestamp )
      _fprintf_chk(syslog_file, 1, "%s ", v10);
    _fprintf_chk(syslog_file, 1, "%s[%d]: %s%s", (const char *)dword_108130, v7, s, v8);
    return (char *)fflush((FILE *)syslog_file);
  }
  return result;
}
