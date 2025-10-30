int __fastcall sub_25164(int a1, const pthread_attr_t *a2, void *(*a3)(void *), void *a4)
{
  sub_250E8((sem_t *)(a1 + 16), "util.c", "thr_info_create", 1191);
  return pthread_create((pthread_t *)(a1 + 12), a2, a3, a4);
}
