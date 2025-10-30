char *__fastcall sub_29B6E0(const char *a1, int a2, int a3)
{
  const char *v3; // r6
  size_t v5; // r0
  size_t v6; // r5
  size_t v7; // r7
  char *v8; // r0
  char *v9; // r5

  v3 = (const char *)(a2 + a3);
  v5 = strlen((const char *)(a2 + a3));
  v6 = v5;
  if ( a1 && *a1 )
  {
    v7 = strlen(a1);
    v8 = (char *)sub_93028(v7 + v6 + 1);
    v9 = v8;
    if ( v7 )
      strcpy(v8, a1);
  }
  else
  {
    v7 = 0;
    v9 = (char *)sub_93028(v5 + 1);
  }
  strcpy(&v9[v7], v3);
  return v9;
}
