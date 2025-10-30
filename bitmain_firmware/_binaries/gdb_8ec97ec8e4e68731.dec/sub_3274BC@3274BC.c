char *__fastcall sub_3274BC(const char *a1)
{
  char *v2; // r7
  size_t v3; // r4
  size_t v4; // r8
  size_t v5; // r5
  char *v6; // r4
  int v7; // r0
  FILE *v9; // r4
  int *v10; // r0
  char *v11; // r0

  v2 = sub_3272E4();
  if ( a1 )
  {
    v3 = strlen(a1);
    v4 = v3;
  }
  else
  {
    v4 = 0;
    v3 = 0;
    a1 = "";
  }
  v5 = strlen(v2);
  v6 = (char *)sub_93028(v5 + v3 + 9);
  strcpy(v6, v2);
  strcpy(&v6[v5], "ccXXXXXX");
  strcpy(&v6[v5 + 8], a1);
  v7 = mkstemps64(v6, v4);
  if ( v7 == -1 )
  {
    v9 = (FILE *)stderr;
    v10 = _errno_location();
    v11 = strerror(*v10);
    fprintf(v9, "Cannot create temporary file in %s: %s\n", v2, v11);
    abort();
  }
  if ( close(v7) )
    abort();
  return v6;
}
