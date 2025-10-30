int __fastcall sub_3EEE8(pthread_rwlock_t *a1)
{
  int v2; // r1
  int v3; // r3
  int v4; // r1
  int v5; // r2
  int nr_writers_queued; // r3
  int result; // r0

  a1[1].__lock = 0;
  if ( pthread_rwlock_wrlock(&stru_7680C) )
    sub_2EF84("enable_device", 11236);
  v2 = dword_7346C;
  v3 = dword_6A738;
  a1->__lock = dword_6A738;
  *(_DWORD *)(v2 + 4 * v3) = a1;
  dword_6A738 = v3 + 1;
  if ( pthread_rwlock_unlock(&stru_7680C) )
    sub_2FB24("enable_device", 11238);
  off_67ED8();
  if ( byte_7347C )
    nr_writers_queued = a1[4].__nr_writers_queued;
  else
    nr_writers_queued = 21896;
  if ( byte_7347C )
    v5 = dword_6A73C;
  else
    HIWORD(nr_writers_queued) = 7;
  if ( byte_7347C )
  {
    nr_writers_queued += v5;
    dword_6A73C = nr_writers_queued;
  }
  else
  {
    v4 = *(_DWORD *)nr_writers_queued;
    v5 = a1[4].__nr_writers_queued;
  }
  if ( !byte_7347C )
    *(_DWORD *)nr_writers_queued = v5 + v4;
  result = pthread_rwlock_init(a1 + 10, 0);
  if ( result )
    sub_2EEB8("enable_device", 11249);
  a1[11].__lock = 0;
  return result;
}
