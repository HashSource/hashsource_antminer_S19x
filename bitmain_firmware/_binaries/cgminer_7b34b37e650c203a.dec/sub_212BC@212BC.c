void __fastcall sub_212BC(int a1, const char *a2, int a3)
{
  int v6; // r0
  int v7; // r0

  if ( byte_74500 )
  {
    syslog(a1 | 0x80, "%s", a2);
  }
  else
  {
    v6 = fileno((FILE *)stderr);
    if ( !isatty(v6) )
    {
      fprintf((FILE *)stderr, "%s\n", a2);
      fflush((FILE *)stderr);
    }
    if ( a1 == 3 )
      v7 = 0;
    else
      v7 = byte_73378 & 1;
    if ( !v7 )
      sub_21244("", a2, a3);
  }
}
