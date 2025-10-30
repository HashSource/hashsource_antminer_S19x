__pid_t __fastcall sub_325D14(
        int a1,
        char a2,
        const char *a3,
        char *const *a4,
        int a5,
        int a6,
        int fd,
        int a8,
        int a9,
        _DWORD *a10,
        int *a11)
{
  __pid_t v11; // r4
  int *v13; // r4
  int *v14; // r0
  int v15; // r4
  int v16; // r3
  const char *v17; // r2
  int *v18; // r0
  int v19; // [sp+4h] [bp-20h]
  unsigned int seconds; // [sp+18h] [bp-Ch]
  int i; // [sp+1Ch] [bp-8h]

  seconds = 1;
  v11 = -1;
  v19 = _environ;
  for ( i = 0; i <= 3; ++i )
  {
    v11 = vfork();
    if ( v11 >= 0 )
      break;
    sleep(seconds);
    seconds *= 2;
  }
  if ( v11 == -1 )
  {
    *a11 = *_errno_location();
    *a10 = "vfork";
    return v11;
  }
  if ( !v11 )
  {
    if ( a6 )
    {
      if ( dup2(a6, 0) < 0 )
        goto LABEL_40;
      if ( close(a6) < 0 )
        goto LABEL_32;
    }
    if ( fd != 1 )
    {
      if ( dup2(fd, 1) < 0 )
        goto LABEL_40;
      if ( close(fd) < 0 )
        goto LABEL_32;
    }
    if ( a8 == 2 )
      goto LABEL_24;
    if ( dup2(a8, 2) >= 0 )
    {
      if ( close(a8) >= 0 )
      {
LABEL_24:
        if ( a9 >= 0 )
        {
          v15 = close(a9);
          v14 = _errno_location();
          if ( v15 < 0 )
LABEL_33:
            sub_16D90(*(const char **)(a1 + 4), a3, "close", *v14);
        }
        v13 = _errno_location();
        if ( (a2 & 8) == 0 || dup2(1, 2) >= 0 )
        {
          if ( a5 )
            _environ = a5;
          if ( (a2 & 2) != 0 )
          {
            execvp(a3, a4);
            sub_16D90(*(const char **)(a1 + 4), a3, "execvp", *v13);
          }
          execv(a3, a4);
          sub_16D90(*(const char **)(a1 + 4), a3, "execv", *v13);
        }
        v16 = *v13;
        LOWORD(v17) = (unsigned __int16)"dup2";
LABEL_39:
        HIWORD(v17) = (unsigned int)"dup2" >> 16;
        sub_16D90(*(const char **)(a1 + 4), a3, v17, v16);
      }
LABEL_32:
      v14 = _errno_location();
      goto LABEL_33;
    }
LABEL_40:
    v18 = _errno_location();
    LOWORD(v17) = -31248;
    v16 = *v18;
    goto LABEL_39;
  }
  _environ = v19;
  if ( a6 && close(a6) < 0 || fd != 1 && close(fd) < 0 || a8 != 2 && close(a8) < 0 )
  {
    v11 = -1;
    *a11 = *_errno_location();
    *a10 = "close";
  }
  return v11;
}
