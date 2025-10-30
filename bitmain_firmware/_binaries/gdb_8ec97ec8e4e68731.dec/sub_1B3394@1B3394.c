int __fastcall sub_1B3394(int a1, const char **a2, const char ***a3)
{
  const char *v4; // r4
  int result; // r0

  v4 = *a2;
  result = strcmp(*a2, ".dynsym");
  if ( result )
  {
    result = strcmp(v4, ".dynstr");
    if ( result )
    {
      result = strcmp(v4, ".dynamic");
      if ( result )
      {
        result = strcmp(v4, ".got");
        if ( !result )
          a3[3] = a2;
      }
      else
      {
        a3[2] = a2;
      }
    }
    else
    {
      a3[1] = a2;
    }
  }
  else
  {
    *a3 = a2;
  }
  return result;
}
