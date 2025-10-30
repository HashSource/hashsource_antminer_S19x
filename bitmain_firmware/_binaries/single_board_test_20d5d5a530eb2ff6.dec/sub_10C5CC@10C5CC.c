bool __fastcall sub_10C5CC(pthread_key_t *a1)
{
  return pthread_key_delete(*a1) == 0;
}
