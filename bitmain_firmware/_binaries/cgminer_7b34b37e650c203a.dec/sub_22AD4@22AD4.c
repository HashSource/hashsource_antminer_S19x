void *__fastcall sub_22AD4(void *a1, size_t a2, const char *a3, const char *a4, int a5)
{
  size_t v5; // r4
  void *result; // r0
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  v5 = a2;
  if ( (a2 & 3) != 0 )
    v5 = (a2 & 0xFFFFFFFC) + 4;
  result = realloc(a1, v5);
  if ( !result )
  {
    snprintf(s, 0x800u, "Failed to realloc size %d from %s %s:%d", v5, a3, a4, a5);
    sub_20F58(3, s, 1);
    sub_3EBA0(1);
  }
  return result;
}
