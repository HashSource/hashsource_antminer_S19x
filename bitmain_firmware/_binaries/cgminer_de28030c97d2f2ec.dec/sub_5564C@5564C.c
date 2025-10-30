char *__fastcall sub_5564C(_BYTE *a1, const char **a2)
{
  char *result; // r0
  size_t n; // [sp+Ch] [bp-8h]

  n = strlen(*a2);
  *a1 = 34;
  if ( n > 0x4E )
    n = 78;
  result = strncpy(a1 + 1, *a2, n);
  a1[n + 1] = 34;
  if ( n <= 0x4D )
    a1[n + 2] = 0;
  return result;
}
