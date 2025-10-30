int __fastcall sub_5AFA8(int *a1, int *a2, int a3, int a4, __int64 a5, unsigned int a6)
{
  pthread_mutex_t *v8; // r6
  unsigned int v11; // r2
  int v12; // r2
  unsigned int v14; // r1
  int v15; // [sp+Ch] [bp-8h]

  v8 = (pthread_mutex_t *)(a3 + 212);
  *a2 = (int)sub_55E38();
  v15 = *a1;
  if ( pthread_mutex_lock(v8) )
    sub_550B8("get_work_by_nonce2", 8324);
  if ( pthread_rwlock_wrlock((pthread_rwlock_t *)(a3 + 236)) )
    sub_5505C("get_work_by_nonce2", 8324);
  v11 = bswap32(a6);
  *(_QWORD *)(a3 + 624) = a5;
  a6 = v11;
  sub_4C150((void *)(a3 + 1580), &a6, 4u, (int)"cgminer.c", (int)"get_work_by_nonce2", 8327);
  if ( pthread_rwlock_unlock((pthread_rwlock_t *)(a3 + 236)) )
    sub_55C08("get_work_by_nonce2", 8328);
  if ( pthread_mutex_unlock(v8) )
    sub_55114("get_work_by_nonce2", 8328);
  off_9E444();
  sub_5A7E8(a3, *a2);
  v12 = dword_1AF224;
  *(_DWORD *)(*a2 + 260) = a4;
  v14 = a6;
  *(_DWORD *)(*a2 + 256) = v15;
  *(_DWORD *)(*a2 + 336) = v12;
  ++*(_DWORD *)(*(_DWORD *)(*a2 + 260) + 68);
  *(_BYTE *)(*a2 + 272) = 1;
  *(_DWORD *)(*a2 + 444) = v14;
  return 1;
}
