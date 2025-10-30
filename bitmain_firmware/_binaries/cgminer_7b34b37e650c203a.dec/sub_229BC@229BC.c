void *__fastcall sub_229BC(size_t a1, const char *a2, const char *a3, int a4)
{
  size_t v4; // r4
  void *result; // r0
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  v4 = a1;
  if ( (a1 & 3) != 0 )
    v4 = (a1 & 0xFFFFFFFC) + 4;
  result = malloc(v4);
  if ( !result )
  {
    snprintf(s, 0x800u, "Failed to malloc size %d from %s %s:%d", v4, a2, a3, a4);
    sub_20F58(3, s, 1);
    sub_3EBA0(1);
  }
  return result;
}
