int __fastcall sub_69BC0(const char *a1)
{
  int result; // r0

  result = strcmp(a1, "0");
  if ( result )
  {
    result = strcmp(a1, "--no-values");
    if ( result )
    {
      if ( !strcmp(a1, "1") || !strcmp(a1, "--all-values") )
      {
        return 1;
      }
      else
      {
        if ( strcmp(a1, "2") )
        {
          if ( strcmp(a1, "--simple-values") )
            sub_946E0(
              "Unknown value for PRINT_VALUES: must be: 0 or \"%s\", 1 or \"%s\", 2 or \"%s\"",
              "--no-values",
              "--all-values",
              "--simple-values");
        }
        return 2;
      }
    }
  }
  return result;
}
