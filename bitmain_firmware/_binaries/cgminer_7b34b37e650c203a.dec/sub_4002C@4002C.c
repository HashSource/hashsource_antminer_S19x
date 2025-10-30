char *__fastcall sub_4002C(const char *a1, const char *a2)
{
  size_t v4; // r5
  size_t v5; // r0
  char *v6; // r5

  v4 = strlen(a1);
  v5 = strlen(a2);
  v6 = (char *)malloc(v4 + v5);
  sprintf(v6, a1, a2);
  return v6;
}
