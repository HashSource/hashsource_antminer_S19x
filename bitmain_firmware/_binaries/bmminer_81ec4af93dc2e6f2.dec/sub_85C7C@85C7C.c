int __fastcall sub_85C7C(const char *a1, const char *a2)
{
  size_t n; // [sp+Ch] [bp-8h]

  if ( a1 )
  {
    if ( a2 )
    {
      if ( !strcmp(a1, "*") )
      {
        return 1;
      }
      else if ( !strcmp(a1, a2) )
      {
        return 1;
      }
      else
      {
        n = strlen(a1);
        if ( a1[n - 1] != 95 )
          return 0;
        if ( strlen(a2) == n - 1 )
          --n;
        return !strncmp(a1, a2, n);
      }
    }
    else
    {
      sub_89984(2, "src/rule.c", 1015, "category is null or 0");
      return -1;
    }
  }
  else
  {
    sub_89984(2, "src/rule.c", 1014, "a_rule is null or 0");
    return -1;
  }
}
