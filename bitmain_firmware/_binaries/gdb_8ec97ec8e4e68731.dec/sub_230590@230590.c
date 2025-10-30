char **__fastcall sub_230590(char **a1, int a2, int a3, const char *a4)
{
  __int64 v7; // r0
  __int64 v8; // r4
  char *v9; // r9
  char *v10; // r3
  char *v11; // r0
  size_t v12; // r0
  __int64 v13; // r2
  char *v14; // r0
  const char *v17; // r2
  char *s; // [sp+Ch] [bp-8h] BYREF

  LODWORD(v7) = ((int (__fastcall *)(int, int, const char *, char **, int))loc_22FDA4)(a2, a3, a4, &s, 1);
  if ( v7 < 0 )
  {
    *a1 = 0;
    return a1;
  }
  v8 = v7;
  if ( v7 )
  {
    v9 = s;
    v10 = &s[v7];
    v11 = s;
    *v10 = 0;
    v12 = strlen(v11);
    v13 = v12;
    if ( v12 < v8 )
    {
      if ( v9[v12] )
      {
LABEL_13:
        v17 = "(none)";
        if ( a4 )
          v17 = a4;
        sub_946B0("target object %d, annex %s, contained unexpected null characters", a3, v17);
        *a1 = v9;
        return a1;
      }
      v14 = &v9[v12];
      while ( v8 != ++v13 )
      {
        if ( *++v14 )
          goto LABEL_13;
      }
    }
    *a1 = v9;
    return a1;
  }
  *a1 = (char *)sub_327254("");
  return a1;
}
