char *__fastcall sub_3E49C(char *a1, char *s)
{
  size_t v4; // r0
  const char *v5; // r1
  size_t v6; // r4
  size_t v7; // r0
  const char *v8; // r1
  char *v9; // r4
  size_t v11; // r0
  char *v12; // r5

  v4 = strlen(s);
  v6 = v4;
  if ( !v4 )
    return a1;
  if ( a1 )
  {
    v7 = v4 + 1 + strlen(a1);
    if ( (v7 & 3) != 0 )
    {
      LOWORD(v8) = (unsigned __int16)"util.c";
      v7 = (v7 & 0xFFFFFFFC) + 4;
    }
    else
    {
      LOWORD(v8) = -32512;
    }
    HIWORD(v8) = (unsigned int)"util.c" >> 16;
    v9 = (char *)sub_3D10C(v7, v8, "realloc_strcat", 3382);
    sprintf(v9, "%s%s", a1, s);
    free(a1);
    return v9;
  }
  else
  {
    v11 = v4 + 1;
    if ( ((v6 + 1) & 3) != 0 )
      v11 &= 0xFFFFFFFC;
    else
      LOWORD(v5) = -32512;
    if ( ((v6 + 1) & 3) != 0 )
    {
      LOWORD(v5) = -32512;
      v11 += 4;
    }
    HIWORD(v5) = 9;
    v12 = (char *)sub_3D10C(v11, v5, "realloc_strcat", 3382);
    strcpy(v12, s);
    return v12;
  }
}
