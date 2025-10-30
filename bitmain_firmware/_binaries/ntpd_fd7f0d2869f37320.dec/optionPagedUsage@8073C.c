void __fastcall optionPagedUsage(int a1, int a2)
{
  char *v3; // r7
  char *v4; // r0
  const char *v5; // r9
  size_t v6; // r6
  size_t v7; // r6
  void *v8; // r10
  __pid_t v9; // r10
  char *v10; // r7
  size_t v11; // r9
  void *v12; // r5
  __mode_t v13; // r8
  int v14; // r7
  void (__fastcall *v15)(int, _DWORD); // r2

  if ( !dword_1083E0 )
  {
    if ( (*(_DWORD *)(a2 + 16) & 8) != 0 )
      return;
    v9 = getpid();
    v10 = getenv("TMPDIR");
    if ( !v10 )
      v10 = "/tmp";
    v11 = strlen(v10) + 26;
    v12 = sub_7FBE0(v11);
    sub_6D00C((int)v12, v11, "%s/use-%u.XXXXXX", v10, v9);
    v13 = umask(0x3Fu);
    v14 = mkstemp64(v12);
    umask(v13);
    if ( v14 < 0 )
    {
      free(v12);
      option_usage_fp = 0;
    }
    else
    {
      dword_1083E4 = (int)v12;
      option_usage_fp = (int)fdopen(v14, "w");
      if ( option_usage_fp )
        goto LABEL_16;
    }
    (*(void (__fastcall **)(int, _DWORD))(a1 + 84))(a1, 0);
LABEL_16:
    dword_1083E0 = 1;
    byte_1083E8 = byte_1082E8;
    sub_8D6FC(optionPagedUsage);
    v15 = *(void (__fastcall **)(int, _DWORD))(a1 + 84);
    byte_1082E8 = 0;
    v15(a1, 0);
    exit(1);
  }
  if ( dword_1083E0 == 1 )
  {
    v3 = (char *)dword_1083E4;
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
      v5 = "more";
      v6 = 26;
    }
    v7 = v6 + 2 * strlen(v3);
    v8 = sub_7FBE0(v7);
    sub_6D00C((int)v8, v7, "%1$s %2$s ; rm -f %2$s", v5, v3);
    free(v3);
    dword_1083E4 = (int)v8;
    if ( byte_1083E8 )
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
    system((const char *)dword_1083E4);
    free((void *)dword_1083E4);
  }
}
