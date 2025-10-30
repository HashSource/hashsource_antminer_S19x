void *__fastcall sub_122248(int a1, char *s, const char *a3, char a4, _DWORD *a5)
{
  const char *v5; // r6
  const char *v7; // r5
  int v8; // r3
  char *v9; // r4
  int *v10; // r8
  size_t v12; // r7
  size_t v13; // r0
  void *v14; // r7
  int v15; // r0
  int v16; // r0
  char *v17; // r0

  v5 = a3;
  v7 = s;
  if ( a3 )
  {
    if ( *a3 )
    {
      if ( !s )
        goto LABEL_13;
      if ( *s )
      {
        if ( *a5 != 5 )
        {
          if ( *a5 == 7 )
            v8 = a4 & 1;
          else
            v8 = 0;
          v9 = "_MOD_";
          v10 = &dword_3C439C;
          if ( !v8 )
          {
            v9 = "::";
            v10 = (int *)"";
          }
          goto LABEL_14;
        }
        if ( strcmp(a3, "D main") )
        {
          v9 = ".";
          v10 = (int *)"";
          goto LABEL_14;
        }
LABEL_13:
        v9 = "";
        v10 = (int *)"";
        v7 = "";
        goto LABEL_14;
      }
    }
    else if ( !s )
    {
      goto LABEL_13;
    }
    v9 = "";
    v10 = (int *)"";
    if ( a1 )
      return (void *)sub_16351C(a1);
    goto LABEL_17;
  }
  v9 = "";
  v10 = (int *)"";
  if ( !s )
    v7 = "";
  v5 = "";
LABEL_14:
  if ( a1 )
    return (void *)sub_16351C(a1);
LABEL_17:
  v12 = strlen(v7);
  v13 = strlen(v5);
  v14 = sub_93028(v12 + v13 + 8);
  v15 = stpcpy(v14, v10);
  v16 = stpcpy(v15, v7);
  v17 = (char *)stpcpy(v16, v9);
  strcpy(v17, v5);
  return v14;
}
