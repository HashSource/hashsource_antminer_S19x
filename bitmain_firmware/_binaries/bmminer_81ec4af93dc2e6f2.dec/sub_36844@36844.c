int __fastcall sub_36844(int *a1, int *a2, int a3, int a4, __int64 a5, unsigned int a6)
{
  pthread_mutex_t *v7; // r7
  int v10; // r9
  unsigned int v11; // r2
  unsigned int v13; // r1
  int v14; // [sp+8h] [bp-Ch]

  v7 = (pthread_mutex_t *)(a3 + 212);
  *a2 = sub_35694();
  v10 = *a1;
  if ( pthread_mutex_lock(v7) )
    sub_355F4("get_work_by_nonce2", 1444);
  sub_354C8((pthread_rwlock_t *)(a3 + 236), "get_work_by_nonce2", 1444);
  v11 = bswap32(a6);
  *(_QWORD *)(a3 + 624) = a5;
  a6 = v11;
  sub_3E3A8(a3 + 1580, &a6, 4, "bmminer.c", "get_work_by_nonce2", 1447, v14);
  if ( pthread_rwlock_unlock((pthread_rwlock_t *)(a3 + 236)) )
  {
    sub_353F8("get_work_by_nonce2", 1448);
    if ( !pthread_mutex_unlock(v7) )
      goto LABEL_5;
LABEL_7:
    sub_3553C("get_work_by_nonce2", 1448);
    goto LABEL_5;
  }
  if ( pthread_mutex_unlock(v7) )
    goto LABEL_7;
LABEL_5:
  off_AFD50();
  sub_35D2C(a3, *a2);
  v13 = a6;
  *(_DWORD *)(*a2 + 260) = a4;
  *(_DWORD *)(*a2 + 256) = v10;
  *(_DWORD *)(*a2 + 336) = 0;
  ++*(_DWORD *)(*(_DWORD *)(*a2 + 260) + 68);
  *(_BYTE *)(*a2 + 272) = 1;
  *(_DWORD *)(*a2 + 444) = v13;
  return 1;
}
