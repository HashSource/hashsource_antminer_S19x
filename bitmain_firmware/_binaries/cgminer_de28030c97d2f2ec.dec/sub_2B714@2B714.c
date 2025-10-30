char *__fastcall sub_2B714(char *a1, const char *a2)
{
  size_t v6; // [sp+Ch] [bp-10h] BYREF
  char *dest; // [sp+10h] [bp-Ch]
  size_t v8; // [sp+14h] [bp-8h]

  v8 = 0;
  v6 = strlen(a2);
  if ( !v6 )
    return a1;
  if ( a1 )
    v8 = strlen(a1);
  v6 += v8 + 1;
  sub_1FB98(&v6);
  dest = (char *)sub_20210(v6, "util.c", "realloc_strcat", 3641);
  if ( a1 )
  {
    sprintf(dest, "%s%s", a1, a2);
    free(a1);
  }
  else
  {
    strcpy(dest, a2);
  }
  return dest;
}
