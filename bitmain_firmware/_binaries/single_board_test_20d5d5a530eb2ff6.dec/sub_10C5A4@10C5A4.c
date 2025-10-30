bool __fastcall sub_10C5A4(pthread_key_t *a1, void (*a2)(void *))
{
  return pthread_key_create(a1, a2) == 0;
}
