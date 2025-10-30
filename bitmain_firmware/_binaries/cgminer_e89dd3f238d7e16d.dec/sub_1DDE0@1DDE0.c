void __fastcall sub_1DDE0(int a1, const char *a2, char a3)
{
  int v3; // r0

  if ( byte_90DC0 )
  {
    syslog(a1 | 0x80, "%s", a2);
  }
  else
  {
    v3 = fileno((FILE *)stderr);
    if ( !isatty(v3) )
    {
      fprintf((FILE *)stderr, "%s\n", a2);
      fflush((FILE *)stderr);
    }
    sub_1DA78(a1, byte_699D0, a2, a3);
  }
}
