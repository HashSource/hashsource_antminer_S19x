char *__fastcall sub_29A5B4(const char *a1)
{
  size_t v2; // r0
  char *v3; // r0
  char *v5; // r0
  const char *v6; // r5
  size_t v7; // r4
  char *v8; // r0
  char *v9; // r2

  if ( a1 )
  {
    v2 = strlen(a1);
    v3 = (char *)sub_93028(v2 + 1);
    return strcpy(v3, a1);
  }
  else
  {
    v5 = j_getenv("HOME");
    v6 = v5;
    if ( !v5 )
      return 0;
    v7 = strlen(v5);
    v8 = (char *)sub_93028(v7 + 10);
    v9 = strcpy(v8, v6);
    v9[v7] = 47;
    strcpy(&v9[v7 + 1], ".history");
    return v9;
  }
}
