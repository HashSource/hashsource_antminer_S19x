size_t __fastcall sub_8A95C(unsigned int a1, int a2, int a3)
{
  int v6; // r4
  __pid_t v7; // r0
  __pid_t v8; // r11
  const char *v9; // r9
  const char *v10; // r10
  FILE *v11; // r8
  int v12; // r0
  int v13; // r6
  int pipedes[2]; // [sp+4h] [bp-10h] BYREF

  fflush(stdout);
  fflush(stderr);
  v6 = pipe(pipedes);
  if ( v6 )
    sub_7CF18(*(_DWORD *)(a1 + 28), (int)"pipe", (int)off_B84B4[0]);
  v7 = fork();
  v8 = v7;
  if ( v7 == -1 )
    sub_7CF18(*(_DWORD *)(a1 + 28), (int)"fork", *(_DWORD *)(a1 + 28));
  if ( !v7 )
  {
    dup2(pipedes[1], 2);
    dup2(pipedes[1], 1);
    close(pipedes[0]);
    if ( a2 != 1 )
    {
      if ( a2 == 2 )
        goto LABEL_22;
      (*(void (__fastcall **)(unsigned int, __pid_t))(a1 + 84))(a1, v8);
    }
    (*(void (__fastcall **)(unsigned int, int))(a1 + 84))(a1, 1);
LABEL_22:
    if ( (*(_DWORD *)(a3 + 16) & 0x40) != 0 )
    {
      free(*(void **)(a3 + 24));
      *(_DWORD *)(a3 + 16) &= ~0x40u;
    }
    *(_DWORD *)(a3 + 24) = "c";
    optionPrintVersion(a1, a3);
    sub_7CE5C(1);
  }
  close(pipedes[1]);
  v9 = *(const char **)(a1 + 32);
  v10 = (const char *)(&off_B5208)[a2 + 97];
  v11 = fdopen(pipedes[0], "r");
  printf("%s_%s_TEXT='", v9, v10);
  if ( v11 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v12 = fgetc(v11);
          v13 = v12;
          if ( v12 != 10 )
            break;
          ++v6;
        }
        if ( v12 != 39 )
          break;
        for ( ; v6; --v6 )
          fputc(10, stdout);
        fwrite("'\\''", 1u, 4u, stdout);
        v6 = 0;
      }
      if ( v12 == -1 )
        break;
      for ( ; v6; --v6 )
        fputc(10, stdout);
      fputc(v13, stdout);
      v6 = 0;
    }
    fclose(v11);
  }
  return fwrite("'\n\n", 1u, 3u, stdout);
}
