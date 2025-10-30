const char *__fastcall sub_2A3934(const char **a1, const char *a2)
{
  const char *v3; // r5
  int v5; // r0
  char *v6; // r6
  size_t v7; // r4
  size_t v8; // r0
  char *v9; // r0

  v3 = *a1;
  v5 = sub_3245A4(*a1);
  if ( v3 == (const char *)v5 )
    return a2;
  v7 = v5 - (_DWORD)v3;
  v8 = strlen(a2);
  v9 = (char *)sub_2ACBF4(a1, v7 + 1 + v8);
  v6 = v9;
  if ( v9 )
  {
    strncpy(v9, v3, v7);
    strcpy(&v6[v7], a2);
  }
  return v6;
}
