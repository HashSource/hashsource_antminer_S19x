void __fastcall sub_47EC8(int a1, const char *a2, int a3)
{
  int v6; // r0
  FILE *v7; // r8
  size_t v8; // r0
  int v9; // r0

  if ( byte_244080 )
  {
    syslog(a1 | 0x80, "%s", a2);
  }
  else
  {
    v6 = fileno((FILE *)stderr);
    if ( !isatty(v6) )
    {
      fputs(a2, (FILE *)stderr);
      fflush((FILE *)stderr);
    }
    if ( byte_1AEB9C )
    {
      v7 = (FILE *)dword_1AEBA0;
      if ( dword_1AEBA0 || (v7 = (FILE *)fopen64(byte_1AEBC4, &word_1AEBA4), (dword_1AEBA0 = (int)v7) != 0) )
      {
        v8 = strlen(a2);
        fwrite(a2, v8, 1u, v7);
        fflush((FILE *)dword_1AEBA0);
      }
    }
    if ( a1 == 3 )
      v9 = 0;
    else
      v9 = byte_242EF8 & 1;
    if ( !v9 )
      sub_47DA0("", a2, a3);
  }
}
