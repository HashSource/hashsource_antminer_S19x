int __fastcall sub_64FEC(const char *a1, int a2)
{
  const char *v2; // r5
  int result; // r0
  int v5; // r0
  FILE ***v6; // r3
  int v7; // r8
  size_t v8; // r0
  size_t v9; // r10
  char *v10; // r8
  FILE *v11; // r11
  void *v12; // r0
  void *v13; // r0
  size_t v14; // [sp+14h] [bp-210h]
  int v15; // [sp+14h] [bp-210h]
  char buf[520]; // [sp+1Ch] [bp-208h] BYREF

  v2 = a1;
  if ( !a1 )
    sub_6ECC0("msyslog.c", 469, 0, "fname != ((void *)0)");
  if ( syslog_file )
  {
    if ( syslog_fname )
    {
      result = strcmp((const char *)syslog_fname, a1);
      if ( !result )
        return result;
    }
  }
  v5 = strcmp(v2, "stderr");
  v6 = (FILE ***)&stderr_ptr;
  if ( v5 )
  {
    if ( strcmp(v2, "stdout") )
    {
      v7 = syslog_abs_fname;
      if ( syslog_fname && !strcmp(v2, (const char *)syslog_fname) )
      {
        v2 = (const char *)v7;
      }
      else if ( v2 != (const char *)v7 && *v2 != 47 && getcwd(buf, 0x200u) )
      {
        v8 = strlen(buf);
        v9 = v8;
        if ( v8 > 1 && buf[v8 - 1] == 47 )
          v9 = v8 - 1;
        v14 = strlen(v2) + v9 + 2;
        v10 = (char *)sub_63BA4(0, v14, 0, 0);
        sub_6C054(v10, v14, "%.*s%c%s", v9, buf, 47, v2);
        goto LABEL_18;
      }
      v10 = (char *)sub_63D08(v2);
LABEL_18:
      if ( debug > 0 )
        sub_64D28("attempting to open log %s\n", v10);
      v11 = (FILE *)fopen64(v10, &off_99960);
      goto LABEL_21;
    }
    v6 = (FILE ***)&stdout_ptr;
  }
  v11 = **v6;
  v10 = (char *)sub_63D08(v2);
LABEL_21:
  if ( v11 )
  {
    if ( a2 && (syslogit || (const char *)syslog_abs_fname != v2) )
      sub_64E00(&byte_5, "switching logging to file %s", v10);
    if ( syslog_file && (struct _IO_FILE *)syslog_file != stderr && (struct _IO_FILE *)syslog_file != stdout )
    {
      v15 = fileno((FILE *)syslog_file);
      if ( v15 != fileno(v11) )
        fclose((FILE *)syslog_file);
    }
    syslog_file = (int)v11;
    if ( (const char *)syslog_abs_fname == v2 )
    {
      free(v10);
      goto LABEL_34;
    }
    v12 = (void *)syslog_fname;
    if ( syslog_abs_fname )
    {
      if ( syslog_abs_fname == syslog_fname )
        goto LABEL_40;
      free((void *)syslog_abs_fname);
      v12 = (void *)syslog_fname;
    }
    if ( !v12 )
    {
LABEL_33:
      v13 = sub_63D08(v2);
      syslog_abs_fname = (int)v10;
      syslog_fname = (int)v13;
LABEL_34:
      syslogit = 0;
      return 0;
    }
LABEL_40:
    free(v12);
    goto LABEL_33;
  }
  free(v10);
  return -1;
}
