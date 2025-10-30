void *__fastcall sub_5A0F4(void **a1, const void *a2, size_t a3)
{
  free(*a1);
  *a1 = malloc(a3);
  return memcpy(*a1, a2, a3);
}
