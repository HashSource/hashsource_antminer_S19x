bool __fastcall sub_10C5BC(pthread_key_t *a1, const void *a2)
{
  return pthread_setspecific(*a1, a2) == 0;
}
