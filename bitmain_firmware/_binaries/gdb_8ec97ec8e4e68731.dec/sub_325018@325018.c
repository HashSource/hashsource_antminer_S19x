_BYTE *__fastcall sub_325018(const char **a1, char a2, int a3, int a4)
{
  _BYTE *v4; // r4
  const char *v5; // r0
  const char *v7; // r4
  const char *v8; // r0
  size_t v9; // r0
  int v10; // r3
  int v11; // r0
  void *v12; // r0

  v4 = (_BYTE *)a3;
  if ( a3 )
  {
    if ( (a2 & 4) != 0 )
    {
      v5 = *a1;
      if ( v5 )
        return sub_31E27C(v5, a3, 0, a4);
      v8 = (const char *)a3;
      return (_BYTE *)sub_3274BC(v8);
    }
    return v4;
  }
  v7 = *a1;
  v8 = *a1;
  if ( v8 )
  {
    v9 = strlen(v8);
    if ( v9 > 5 && !strcmp(&v7[v9 - 6], "XXXXXX") )
      v4 = (_BYTE *)sub_327254(v7);
    else
      v4 = sub_31E27C(v7, (int)"XXXXXX", 0, v10);
    v11 = mkstemps64(v4, 0);
    if ( v11 < 0 )
    {
      v12 = v4;
      v4 = 0;
      free(v12);
    }
    else
    {
      close(v11);
    }
    return v4;
  }
  return (_BYTE *)sub_3274BC(v8);
}
