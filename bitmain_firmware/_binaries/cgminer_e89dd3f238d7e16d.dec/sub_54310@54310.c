char *__fastcall sub_54310(const char *a1, const char *a2)
{
  size_t v2; // r4
  size_t v3; // r0
  char *v7; // [sp+Ch] [bp-10h]

  v2 = strlen(a1);
  v3 = strlen(a2);
  v7 = (char *)malloc(v2 + v3);
  sprintf(v7, a1, a2);
  return v7;
}
