char *__fastcall sub_14D30(char *result, char *s)
{
  bool v2; // zf
  char *v4; // r4
  size_t v5; // r0

  v2 = result == 0;
  if ( result )
    v2 = s == 0;
  v4 = result;
  if ( !v2 )
  {
    v5 = strlen(s);
    if ( v5 <= 0x4F )
    {
      return j_strncpy(v4 + 12, s, v5 + 1);
    }
    else
    {
      *((_WORD *)v4 + 6) = 11822;
      v4[14] = 46;
      return j_strncpy(v4 + 15, &s[v5 - 76], 0x4Du);
    }
  }
  return result;
}
