int sub_89984(int a1, const char *a2, int a3, const char *a4, ...)
{
  __pid_t v5; // r0
  __pid_t v6; // r0
  __pid_t v7; // r0
  char v12[24]; // [sp+18h] [bp-28h] BYREF
  __gnuc_va_list arg; // [sp+30h] [bp-10h]
  FILE *stream; // [sp+34h] [bp-Ch]
  const char *varg_r3; // [sp+44h] [bp+4h]
  va_list va; // [sp+48h] [bp+8h] BYREF

  va_start(va, a4);
  varg_r3 = a4;
  stream = 0;
  if ( !dword_5BA7A8 )
  {
    dword_5BA7A8 = 1;
    dword_5BA7AC = (int)getenv("ZLOG_PROFILE_DEBUG");
    dword_5BA7B0 = (int)getenv("ZLOG_PROFILE_ERROR");
  }
  if ( a1 == 1 )
  {
    if ( !dword_5BA7B0 )
      return 0;
    stream = (FILE *)fopen64(dword_5BA7B0, "a");
    if ( !stream )
      return -1;
    sub_8992C(v12, 0x15u);
    v6 = getpid();
    fprintf(stream, "%s WARN  (%d:%s:%ld) ", v12, v6, a2, a3);
    goto LABEL_21;
  }
  if ( a1 == 2 )
  {
    if ( !dword_5BA7B0 )
      return 0;
    stream = (FILE *)fopen64(dword_5BA7B0, "a");
    if ( !stream )
      return -1;
    sub_8992C(v12, 0x15u);
    v7 = getpid();
    fprintf(stream, "%s ERROR (%d:%s:%ld) ", v12, v7, a2, a3);
    goto LABEL_21;
  }
  if ( a1 )
    goto LABEL_21;
  if ( dword_5BA7AC )
  {
    stream = (FILE *)fopen64(dword_5BA7AC, "a");
    if ( !stream )
      return -1;
    sub_8992C(v12, 0x15u);
    v5 = getpid();
    fprintf(stream, "%s DEBUG (%d:%s:%ld) ", v12, v5, a2, a3);
LABEL_21:
    va_copy(arg, va);
    vfprintf(stream, varg_r3, va);
    fputc(10, stream);
    fclose(stream);
    return 0;
  }
  return 0;
}
