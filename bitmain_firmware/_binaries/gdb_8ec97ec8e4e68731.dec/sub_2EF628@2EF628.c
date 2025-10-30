void *__fastcall sub_2EF628(int a1, char *s)
{
  size_t v4; // r5
  void *v5; // r0

  v4 = strlen(s) + 1;
  v5 = (void *)sub_2ACBF4(a1, v4);
  return memcpy(v5, s, v4);
}
