void *__fastcall sub_70914(void **a1, const void *a2, size_t a3)
{
  void *v6; // r0

  free(*a1);
  v6 = malloc(a3);
  *a1 = v6;
  return j_memcpy(v6, a2, a3);
}
