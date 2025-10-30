int __fastcall sub_655B4(int result, const char **a2, int a3)
{
  const char *v3; // r4
  const char *v4; // r5

  if ( a3 )
  {
    v3 = (const char *)result;
    if ( a3 != 1 )
      goto LABEL_7;
    v4 = *a2;
    result = strcmp(*a2, "yes");
    if ( result )
    {
      result = strcmp(v4, "no");
      if ( !result )
      {
        dword_474880 = 0;
        return result;
      }
LABEL_7:
      sub_946E0("-enable-timings: Usage: %s {yes|no}", v3);
    }
  }
  dword_474880 = 1;
  return result;
}
