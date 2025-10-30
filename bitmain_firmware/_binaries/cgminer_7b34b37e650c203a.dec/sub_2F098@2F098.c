int __fastcall sub_2F098(int a1, _BYTE *a2)
{
  pthread_mutex_t *v2; // r4
  pthread_mutex_t *v4; // r0
  int v5; // r4

  v2 = (pthread_mutex_t *)(a1 + 188);
  if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 188)) )
    sub_2EFE0("pool_tset", 808);
  v4 = v2;
  v5 = (unsigned __int8)*a2;
  *a2 = 1;
  if ( pthread_mutex_unlock(v4) )
    sub_2F03C("pool_tset", 813);
  off_67ED8();
  return v5;
}
