void __fastcall sub_1E75C(int a1, const char *a2, char a3)
{
  int v3; // r0

  if ( byte_91F58 )
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
    sub_1E3FC(a1, byte_6A650, a2, a3);
  }
}
