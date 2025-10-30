void __fastcall optionPagedUsage(int a1, int a2)
{
  char *v3; // r7
  char *v4; // r0
  const char *v5; // r9
  size_t v6; // r6
  size_t v7; // r6
  void *v8; // r0
  int v9; // r10
  __pid_t v10; // r10
  char *v11; // r9
  size_t v12; // r7
  void *v13; // r0
  void *v14; // r5
  __mode_t v15; // r8
  int v16; // r7
  void (__fastcall *v17)(int, _DWORD); // r2

  if ( !dword_1073BC )
  {
    if ( (*(_DWORD *)(a2 + 16) & 8) != 0 )
      return;
    v10 = getpid();
    v11 = getenv("TMPDIR");
    if ( !v11 )
      v11 = "/tmp";
    v12 = strlen(v11) + 26;
    v13 = malloc(v12);
    v14 = v13;
    if ( !v13 )
      sub_C610(v12);
    sub_6C054((int)v13, v12, "%s/use-%u.XXXXXX", v11, v10);
    v15 = umask(0x3Fu);
    v16 = mkstemp64(v14);
    umask(v15);
    if ( v16 < 0 )
    {
      free(v14);
      option_usage_fp = 0;
    }
    else
    {
      dword_1073C0 = (int)v14;
      option_usage_fp = (int)fdopen(v16, "w");
      if ( option_usage_fp )
        goto LABEL_19;
    }
    (*(void (__fastcall **)(int, _DWORD))(a1 + 84))(a1, 0);
LABEL_19:
    dword_1073BC = 1;
    byte_1073C4 = byte_1072C4;
    sub_8C1A8(optionPagedUsage);
    v17 = *(void (__fastcall **)(int, _DWORD))(a1 + 84);
    byte_1072C4 = 0;
    v17(a1, 0);
    exit(1);
  }
  if ( dword_1073BC == 1 )
  {
    v3 = (char *)dword_1073C0;
    fclose((FILE *)option_usage_fp);
    option_usage_fp = 0;
    v4 = getenv("PAGER");
    v5 = v4;
    if ( v4 )
    {
      v6 = strlen(v4) + 22;
    }
    else
    {
      v6 = 26;
      v5 = "more";
    }
    v7 = v6 + 2 * strlen(v3);
    v8 = malloc(v7);
    v9 = (int)v8;
    if ( !v8 )
      sub_C610(v7);
    sub_6C054((int)v8, v7, "%1$s %2$s ; rm -f %2$s", v5, v3);
    free(v3);
    dword_1073C0 = v9;
    if ( byte_1073C4 )
    {
      fwrite("\nexit 0\n", 1u, 8u, stdout);
      fclose(stdout);
      dup2(2, 1);
    }
    else
    {
      fclose(stderr);
      dup2(1, 2);
    }
    system((const char *)dword_1073C0);
    free((void *)dword_1073C0);
  }
}
