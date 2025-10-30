void *__fastcall sub_327254(const char *a1)
{
  size_t v2; // r4
  void *v3; // r0

  v2 = strlen(a1) + 1;
  v3 = sub_93028(v2);
  return memcpy(v3, a1, v2);
}
