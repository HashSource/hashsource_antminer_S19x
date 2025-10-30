void *__fastcall sub_63D08(const char *a1)
{
  size_t v2; // r5
  void *v3; // r0

  v2 = strlen(a1) + 1;
  v3 = sub_63BA4(0, v2, 0, 0);
  return memcpy(v3, a1, v2);
}
