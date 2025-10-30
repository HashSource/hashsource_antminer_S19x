void *__fastcall sub_2A3308(char *a1, size_t a2, const char *a3)
{
  size_t v5; // r0
  size_t v7; // r4

  snprintf(src, 0x14u, a3);
  v5 = strlen(src);
  if ( v5 >= a2 )
    return memcpy(a1, src, a2);
  v7 = v5;
  memcpy(a1, src, v5);
  return memset(&a1[v7], 32, a2 - v7);
}
