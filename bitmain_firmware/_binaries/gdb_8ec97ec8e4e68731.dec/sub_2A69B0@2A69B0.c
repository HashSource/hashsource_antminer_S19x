int __fastcall sub_2A69B0(const char *a1)
{
  FILE *v2; // r6
  unsigned int v3; // r0
  char *v4; // r0
  char *v5; // r0

  fflush((FILE *)stdout);
  if ( a1 )
  {
    v2 = (FILE *)stderr;
    v3 = dword_48BBD0;
    if ( *a1 )
    {
      v5 = sub_2A6920(dword_48BBD0);
      fprintf(v2, "%s: %s\n", a1, v5);
      return fflush((FILE *)stderr);
    }
  }
  else
  {
    v2 = (FILE *)stderr;
    v3 = dword_48BBD0;
  }
  v4 = sub_2A6920(v3);
  fprintf(v2, "%s\n", v4);
  return fflush((FILE *)stderr);
}
