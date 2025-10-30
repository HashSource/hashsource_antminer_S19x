int __fastcall sub_219A8(int a1, const pthread_attr_t *a2, void *(*a3)(void *), void *a4)
{
  sub_2B9B4(a1 + 16, "util.c", "thr_info_create", 1189);
  return pthread_create((pthread_t *)(a1 + 12), a2, a3, a4);
}
