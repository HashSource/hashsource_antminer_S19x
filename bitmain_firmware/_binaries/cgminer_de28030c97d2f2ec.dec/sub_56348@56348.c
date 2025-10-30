char *__fastcall sub_56348(const char *a1)
{
  size_t v1; // r0
  char *v4; // [sp+Ch] [bp-8h]

  v1 = strlen(a1);
  v4 = (char *)malloc(v1 + 22);
  sprintf(v4, "Invalid argument '%s'", a1);
  return v4;
}
