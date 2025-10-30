void __fastcall __noreturn sub_8B874(int a1, int a2)
{
  __pid_t v3; // r0
  int v4; // r8
  char *v5; // r0
  char *v6; // r6
  int v7; // r8
  const __int32_t **v8; // r0
  int v9; // t1
  __pid_t v10; // r0
  int v11; // [sp+0h] [bp-Ch] BYREF

  if ( !a2 )
  {
    fflush(stderr);
    fflush(stdout);
    if ( ferror(stdout) || ferror(stderr) )
      sub_7E2B8(1);
    option_usage_fp = (int)stdout;
    v3 = fork();
    if ( v3 != -1 )
    {
      if ( v3 )
      {
        wait(&v11);
        v4 = optionParseShellOptions;
        v5 = sub_7FA64(*(const char **)(optionParseShellOptions + 32));
        *(_DWORD *)(v4 + 28) = v5;
        v6 = v5;
        v7 = (unsigned __int8)*v5;
        if ( *v5 )
        {
          v8 = _ctype_tolower_loc();
          do
          {
            *v6 = (*v8)[v7];
            v9 = (unsigned __int8)*++v6;
            v7 = v9;
          }
          while ( v9 );
        }
        fprintf((FILE *)option_usage_fp, off_B9578, *(_DWORD *)(optionParseShellOptions + 28));
        fflush((FILE *)option_usage_fp);
        v10 = fork();
        if ( v10 != -1 )
        {
          if ( v10 )
          {
            wait(&v11);
            fflush(stdout);
            if ( ferror(stdout) )
              sub_7E374(*(_DWORD *)(a1 + 28), (int)off_B9538, (int)off_B9530);
            sub_7E2B8(0);
          }
          dword_1083E0 = 2;
        }
        sub_8B180(optionParseShellOptions, 1);
      }
      dword_1083E0 = 2;
      sub_8B180(a1, 0);
    }
    sub_8B180(a1, 1);
  }
  sub_8B180(a1, a2);
}
