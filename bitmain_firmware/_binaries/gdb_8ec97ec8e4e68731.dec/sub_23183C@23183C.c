char **__fastcall sub_23183C(char **a1, int a2, const char *a3)
{
  __int64 v5; // r0
  __int64 v6; // r4
  char *v7; // r8
  char *v8; // r3
  char *v9; // r0
  size_t v10; // r0
  __int64 v11; // r2
  char *v12; // r0
  char *s; // [sp+4h] [bp-4h] BYREF

  LODWORD(v5) = sub_23136C(a2, (int)a3, &s, 1);
  if ( v5 < 0 )
  {
    *a1 = 0;
    return a1;
  }
  v6 = v5;
  if ( v5 )
  {
    v7 = s;
    v8 = &s[v5];
    v9 = s;
    *v8 = 0;
    v10 = strlen(v9);
    v11 = v10;
    if ( v10 < v6 )
    {
      if ( v7[v10] )
      {
LABEL_13:
        sub_946B0("target file %s contained unexpected null characters", a3);
        *a1 = v7;
        return a1;
      }
      v12 = &v7[v10];
      while ( v6 != ++v11 )
      {
        if ( *++v12 )
          goto LABEL_13;
      }
    }
    *a1 = v7;
    return a1;
  }
  *a1 = (char *)sub_327254("");
  return a1;
}
