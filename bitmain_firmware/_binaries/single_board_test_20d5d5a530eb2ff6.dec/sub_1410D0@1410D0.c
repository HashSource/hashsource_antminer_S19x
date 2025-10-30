char *__fastcall sub_1410D0(int a1, char *s)
{
  size_t v4; // r4
  char *v5; // r0
  char *v6; // r4
  void *v8; // r6
  char *v9; // r4

  v4 = strlen(s);
  if ( strchr(s, 47) )
  {
    v5 = (char *)CRYPTO_malloc((void *)(v4 + 1));
    v6 = v5;
    if ( v5 )
    {
      strcpy(v5, s);
      return v6;
    }
    goto LABEL_4;
  }
  v8 = (void *)(v4 + 4);
  if ( (sub_C1910(a1) & 2) == 0 )
    v8 = (void *)(v4 + 7);
  v9 = (char *)CRYPTO_malloc(v8);
  if ( !v9 )
  {
LABEL_4:
    sub_D0048(37, 123, 109, (int)"crypto/dso/dso_dlfcn.c", 269);
    return 0;
  }
  if ( (sub_C1910(a1) & 2) != 0 )
    sprintf(v9, "%s.so", s);
  else
    sprintf(v9, "lib%s.so", s);
  return v9;
}
