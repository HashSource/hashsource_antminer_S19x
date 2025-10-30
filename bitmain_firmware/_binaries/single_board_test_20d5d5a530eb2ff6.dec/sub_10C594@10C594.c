bool __fastcall sub_10C594(pthread_once_t *a1, void (*a2)(void))
{
  return pthread_once(a1, a2) == 0;
}
