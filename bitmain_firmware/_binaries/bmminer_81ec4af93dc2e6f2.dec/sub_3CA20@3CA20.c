void *__fastcall sub_3CA20(void *a1, size_t a2, const char *a3, const char *a4, int a5)
{
  size_t v5; // r4
  void *result; // r0
  int v9; // r3
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  v5 = a2;
  if ( (a2 & 3) != 0 )
    v5 = (a2 & 0xFFFFFFFC) + 4;
  result = realloc(a1, v5);
  if ( !result )
  {
    snprintf(s, 0x800u, "Failed to realloc size %d from %s %s:%d", v5, a3, a4, a5);
    sub_3AF5C(3, s, 1, v9);
    nullsub_1();
    return 0;
  }
  return result;
}
