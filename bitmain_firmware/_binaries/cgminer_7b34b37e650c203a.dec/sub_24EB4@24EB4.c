char *__fastcall sub_24EB4(char *a1, char *s)
{
  size_t v4; // r0
  const char *v5; // r1
  char *v6; // r4
  size_t v7; // r4
  size_t v8; // r0
  char *v10; // r4

  v4 = strlen(s);
  if ( !v4 )
    return a1;
  v7 = v4 + 1;
  if ( a1 )
  {
    v8 = strlen(a1) + v7;
    if ( (v8 & 3) != 0 )
      v8 = (v8 & 0xFFFFFFFC) + 4;
    v6 = (char *)sub_229BC(v8, "util.c", "realloc_strcat", 3370);
    sprintf(v6, "%s%s", a1, s);
    free(a1);
    return v6;
  }
  if ( (v7 & 3) != 0 )
    v4 = v7 & 0xFFFFFFFC;
  else
    LOWORD(v5) = -10704;
  if ( (v7 & 3) != 0 )
    LOWORD(v5) = -10704;
  else
    v4 = v7;
  if ( (v7 & 3) != 0 )
    v4 += 4;
  HIWORD(v5) = 4;
  v10 = (char *)sub_229BC(v4, v5, "realloc_strcat", 3370);
  strcpy(v10, s);
  return v10;
}
