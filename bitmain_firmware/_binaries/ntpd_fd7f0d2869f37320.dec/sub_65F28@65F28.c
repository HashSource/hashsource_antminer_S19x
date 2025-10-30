int __fastcall sub_65F28(const char *a1, int a2)
{
  const char *v2; // r5
  int result; // r0
  size_t v5; // r0
  size_t v6; // r10
  size_t v7; // r11
  char *v8; // r8
  FILE *v9; // r11
  void *v10; // r0
  void *v11; // r0
  FILE ***v12; // r3
  int v13; // [sp+14h] [bp-210h]
  char buf[520]; // [sp+1Ch] [bp-208h] BYREF

  v2 = a1;
  if ( !a1 )
    sub_6FC54("msyslog.c", 469, 0, "fname != ((void *)0)");
  if ( !syslog_file || !syslog_fname || (result = strcmp((const char *)syslog_fname, a1)) != 0 )
  {
    if ( !strcmp(v2, "stderr") )
    {
      v12 = (FILE ***)&stderr_ptr;
    }
    else
    {
      if ( strcmp(v2, "stdout") )
      {
        if ( syslog_fname && !strcmp(v2, (const char *)syslog_fname) )
        {
          v2 = (const char *)syslog_abs_fname;
        }
        else if ( v2 != (const char *)syslog_abs_fname && *v2 != 47 && getcwd(buf, 0x200u) )
        {
          v5 = strlen(buf);
          v6 = v5;
          if ( v5 > 1 && buf[v5 - 1] == 47 )
            v6 = v5 - 1;
          v7 = v6 + strlen(v2) + 2;
          v8 = (char *)sub_64B04(0, v7, 0, 0);
          sub_6D00C(v8, v7, "%.*s%c%s", v6, buf, 47, v2);
          goto LABEL_18;
        }
        v8 = (char *)sub_64C8C(v2);
LABEL_18:
        if ( debug > 0 )
          sub_65C68("attempting to open log %s\n", v8);
        v9 = (FILE *)fopen64(v8, &off_9AF30);
LABEL_21:
        if ( !v9 )
        {
          free(v8);
          return -1;
        }
        if ( a2 && (syslogit || v2 != (const char *)syslog_abs_fname) )
          sub_65D40(&byte_5, "switching logging to file %s", v8);
        if ( syslog_file && (struct _IO_FILE *)syslog_file != stderr && (struct _IO_FILE *)syslog_file != stdout )
        {
          v13 = fileno((FILE *)syslog_file);
          if ( v13 != fileno(v9) )
            fclose((FILE *)syslog_file);
        }
        syslog_file = (int)v9;
        if ( v2 == (const char *)syslog_abs_fname )
        {
          free(v8);
          goto LABEL_35;
        }
        if ( syslog_abs_fname )
        {
          v10 = (void *)syslog_fname;
          if ( syslog_abs_fname == syslog_fname )
            goto LABEL_33;
          free((void *)syslog_abs_fname);
          v10 = (void *)syslog_fname;
        }
        else
        {
          v10 = (void *)syslog_fname;
        }
        if ( !v10 )
        {
LABEL_34:
          v11 = sub_64C8C(v2);
          syslog_abs_fname = (int)v8;
          syslog_fname = (int)v11;
LABEL_35:
          result = 0;
          syslogit = 0;
          return result;
        }
LABEL_33:
        free(v10);
        goto LABEL_34;
      }
      v12 = (FILE ***)&stdout_ptr;
    }
    v9 = **v12;
    v8 = (char *)sub_64C8C(v2);
    goto LABEL_21;
  }
  return result;
}
