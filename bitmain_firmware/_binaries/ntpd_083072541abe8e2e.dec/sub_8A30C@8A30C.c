void __fastcall __noreturn sub_8A30C(int a1, int a2)
{
  __pid_t v3; // r0
  int v4; // r8
  const char *v5; // r9
  char *v6; // r0
  char *v7; // r6
  int v8; // r8
  const __int32_t *v9; // r2
  int v10; // t1
  __pid_t v11; // r0
  _BYTE stat_loc[4]; // [sp+8h] [bp-Ch] BYREF

  if ( !a2 )
  {
    fflush(stderr);
    fflush(stdout);
    if ( ferror(stdout) || ferror(stderr) )
      sub_7CE5C(1);
    option_usage_fp = (int)stdout;
    v3 = fork();
    if ( v3 != -1 )
    {
      if ( v3 )
      {
        wait(stat_loc);
        v4 = optionParseShellOptions;
        v5 = *(const char **)(optionParseShellOptions + 32);
        v6 = _strdup(v5);
        v7 = v6;
        if ( v6 )
        {
          *(_DWORD *)(v4 + 28) = v6;
          v8 = (unsigned __int8)*v6;
          if ( *v6 )
          {
            v9 = *_ctype_tolower_loc();
            do
            {
              *v7 = v9[v8];
              v10 = (unsigned __int8)*++v7;
              v8 = v10;
            }
            while ( v10 );
          }
          fprintf((FILE *)option_usage_fp, off_B8574[0], *(_DWORD *)(optionParseShellOptions + 28));
          fflush((FILE *)option_usage_fp);
          v11 = fork();
          if ( v11 != -1 )
          {
            if ( v11 )
            {
              wait(stat_loc);
              fflush(stdout);
              if ( ferror(stdout) )
                sub_7CF18(*(_DWORD *)(a1 + 28), (int)off_B8534[0], (int)off_B852C[0]);
              sub_7CE5C(0);
            }
            dword_1073BC = 2;
          }
          sub_89BE8(optionParseShellOptions, 1);
        }
        sub_7E624(v5);
      }
      dword_1073BC = 2;
      sub_89BE8(a1, 0);
    }
    sub_89BE8(a1, 1);
  }
  sub_89BE8(a1, a2);
}
