char *__fastcall sub_49770(char *a1, char *s)
{
  size_t v4; // r0

  v4 = strlen(s);
  if ( v4 <= 0x4F )
    return strncpy(a1 + 12, s, v4 + 1);
  *((_WORD *)a1 + 6) = 11822;
  a1[14] = 46;
  return strncpy(a1 + 15, &s[v4 - 76], 0x4Du);
}
