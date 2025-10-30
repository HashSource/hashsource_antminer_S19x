int sub_2917F4(const char *a1, ...)
{
  FILE *v1; // r0
  va_list varg_r1; // [sp+14h] [bp+Ch] BYREF

  va_start(varg_r1, a1);
  v1 = (FILE *)dword_48B6C4;
  if ( !dword_48B6C4 )
  {
    sub_291790();
    v1 = (FILE *)dword_48B6C4;
  }
  vfprintf(v1, a1, varg_r1);
  fputc(10, (FILE *)dword_48B6C4);
  return fflush((FILE *)dword_48B6C4);
}
