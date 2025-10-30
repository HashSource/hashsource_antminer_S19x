char *__fastcall sub_1A324C(int a1, char *s)
{
  size_t v4; // r0
  struct obstack *v5; // r2
  size_t v6; // r5
  void *v8; // r0

  v4 = strlen(s);
  v5 = *(struct obstack **)(a1 + 4);
  v6 = v4 + 1;
  if ( v5 )
    return sub_C1930(s, v4 + 1, v5);
  v8 = sub_93028(v4 + 1);
  return (char *)memcpy(v8, s, v6);
}
