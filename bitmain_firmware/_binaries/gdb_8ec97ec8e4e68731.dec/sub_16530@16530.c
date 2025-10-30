void __fastcall __noreturn sub_16530(const char *a1)
{
  _DWORD *v2; // r0

  if ( dword_487668 )
  {
    v2 = (_DWORD *)sub_242FB4();
    sub_256850(a1, *v2);
  }
  else
  {
    fputs(a1, (FILE *)stderr);
  }
  abort();
}
