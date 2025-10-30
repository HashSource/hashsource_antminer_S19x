char *__fastcall sub_40BD0(const char *a1)
{
  size_t v2; // r0
  char *v3; // r4

  v2 = strlen(a1);
  v3 = (char *)malloc(v2 + 22);
  sprintf(v3, "Invalid argument '%s'", a1);
  return v3;
}
