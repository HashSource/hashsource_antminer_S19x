char *__fastcall sub_7C1C8(char *result, char *s)
{
  bool v2; // zf
  int v4; // r4
  size_t v5; // r0

  v2 = result == 0;
  if ( result )
    v2 = s == 0;
  v4 = (int)result;
  if ( !v2 )
  {
    v5 = strlen(s);
    if ( v5 <= 0x4F )
    {
      return j_strncpy((char *)(v4 + 12), s, v5 + 1);
    }
    else
    {
      qmemcpy((void *)(v4 + 12), "...", 3);
      return j_strncpy((char *)(v4 + 15), &s[v5 - 76], 0x4Du);
    }
  }
  return result;
}
