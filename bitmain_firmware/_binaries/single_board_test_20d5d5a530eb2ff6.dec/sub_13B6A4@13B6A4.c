int __fastcall sub_13B6A4(void **a1, char *s)
{
  int result; // r0
  int v4; // r4

  if ( s )
  {
    result = (int)_strdup(s);
    v4 = result;
    if ( !result )
      return result;
  }
  else
  {
    v4 = 0;
  }
  free(*a1);
  *a1 = (void *)v4;
  return 1;
}
