char *__fastcall sub_141398(int a1, char *a2, char *s)
{
  bool v3; // zf
  size_t v6; // r7
  size_t v7; // r0
  char *v8; // r0
  char *v9; // r4
  char *result; // r0
  int v11; // r2

  v3 = a2 == 0;
  if ( !a2 )
    v3 = s == 0;
  if ( v3 )
  {
    sub_D0048(37, 130, 67, (int)"crypto/dso/dso_dlfcn.c", 201);
    return 0;
  }
  if ( !s )
  {
LABEL_13:
    result = sub_E9E3C(a2);
    v11 = 211;
    v9 = result;
    if ( result )
      return result;
LABEL_16:
    sub_D0048(37, 130, 65, (int)"crypto/dso/dso_dlfcn.c", v11);
    return v9;
  }
  if ( a2 )
  {
    if ( *a2 != 47 )
    {
      v6 = strlen(s);
      v7 = strlen(a2) + v6;
      if ( v6 )
      {
        if ( s[v6 - 1] == 47 )
        {
          --v6;
          --v7;
        }
      }
      v8 = (char *)CRYPTO_malloc((void *)(v7 + 2));
      v9 = v8;
      if ( v8 )
      {
        strcpy(v8, s);
        v9[v6] = 47;
        strcpy(&v9[v6 + 1], a2);
        return v9;
      }
      v11 = 243;
      goto LABEL_16;
    }
    goto LABEL_13;
  }
  result = sub_E9E3C(s);
  v11 = 221;
  v9 = result;
  if ( !result )
    goto LABEL_16;
  return result;
}
