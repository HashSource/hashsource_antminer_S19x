int __fastcall sub_179668(const char **a1, const char **a2)
{
  const char *v4; // r0
  const char *v5; // r1
  int result; // r0
  const char *v7; // r0
  const char *v8; // r1

  v4 = *a1;
  v5 = *a2;
  if ( v4 == v5 || (result = strcmp(v4, v5)) == 0 )
  {
    v7 = a1[1];
    if ( v7 )
    {
      v8 = a2[1];
      if ( v8 )
        return j_strcmp(v7, v8);
      else
        return 1;
    }
    else
    {
      return -(a2[1] != 0);
    }
  }
  return result;
}
