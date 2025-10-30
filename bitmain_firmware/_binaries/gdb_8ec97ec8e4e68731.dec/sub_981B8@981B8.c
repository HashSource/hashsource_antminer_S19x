unsigned int *__fastcall sub_981B8(int *a1, char *s, int c)
{
  unsigned int v6; // r2
  unsigned int v7; // r3
  char *v8; // r0
  char *v9; // r4
  size_t v10; // r10
  void *v11; // r9
  unsigned int *result; // r0
  __int64 v13; // r0

  while ( 1 )
  {
    v8 = strchr(s, c);
    v9 = v8;
    if ( v8 )
    {
      v10 = v8 - s;
      v9 = v8 + 1;
    }
    else
    {
      v10 = strlen(s);
    }
    v11 = sub_93028(v10 + 1);
    memcpy(v11, s, v10);
    result = (unsigned int *)*a1;
    *((_BYTE *)v11 + v10) = 0;
    if ( !result || (v6 = result[1], v7 = *result, v6 == *result) )
    {
      result = (unsigned int *)sub_99FE0(result, 1);
      v7 = *result;
      v6 = result[1];
      *a1 = (int)result;
    }
    if ( v7 >= v6 )
      break;
    *result = v7 + 1;
    s = v9;
    result[v7 + 2] = (unsigned int)v11;
    if ( !v9 )
      return result;
  }
  v13 = sub_94700(
          (int)"common/gdb_vecs.c",
          67,
          "%s: Assertion `%s' failed.",
          "char** VEC_char_ptr_quick_push(VEC_char_ptr*, char_ptr, const char*, unsigned int)",
          "quick_push");
  return (unsigned int *)sub_982A8(v13, HIDWORD(v13));
}
