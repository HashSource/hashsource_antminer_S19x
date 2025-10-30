char *__fastcall sub_74778(int a1, char *s)
{
  size_t v4; // r0

  v4 = strlen(s);
  if ( v4 <= 0x4F )
    return (char *)memcpy((void *)(a1 + 12), s, v4 + 1);
  strcpy((char *)(a1 + 12), "...");
  return strcpy((char *)(a1 + 15), &s[v4 - 76]);
}
