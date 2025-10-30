unsigned int __fastcall sub_31EBA8(void **a1, char *s)
{
  unsigned int result; // r0
  size_t v5; // r6
  void *v6; // r0
  char *v7; // r2
  char *v8; // r3
  char *v9; // r2
  char v10; // t1

  result = strlen(s);
  v5 = result;
  if ( result )
  {
    sub_31E7E8(__SPAIR64__(result, (unsigned int)a1));
    v6 = *a1;
    v7 = (char *)a1[1];
    v8 = v7 - 1;
    if ( v7 - 1 >= *a1 )
    {
      v9 = &v7[v5];
      do
      {
        v10 = *v8--;
        *--v9 = v10;
        v6 = *a1;
      }
      while ( *a1 <= v8 );
    }
    result = (unsigned int)memcpy(v6, s, v5);
    a1[1] = (char *)a1[1] + v5;
  }
  return result;
}
