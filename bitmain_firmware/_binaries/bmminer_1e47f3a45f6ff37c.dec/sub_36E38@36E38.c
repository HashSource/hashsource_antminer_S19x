int __fastcall sub_36E38(int *a1, int *a2, int a3, int a4, double a5, int a6)
{
  pthread_mutex_t *v10; // r10
  int v11; // r8
  unsigned int v12; // r2
  int v14; // r1
  int _8; // [sp+8h] [bp+0h]

  v10 = (pthread_mutex_t *)(a3 + 212);
  *a2 = sub_35CDC();
  v11 = *a1;
  if ( pthread_mutex_lock(v10) )
    sub_35C80("get_work_by_nonce2", 1444);
  sub_35A40((pthread_rwlock_t *)(a3 + 236), "get_work_by_nonce2", 1444);
  v12 = a6;
  *(double *)(a3 + 640) = a5;
  a6 = bswap32(v12);
  sub_3EA8C(a3 + 1596, &a6, 4, "bmminer.c", "get_work_by_nonce2", 1447, _8);
  if ( pthread_rwlock_unlock((pthread_rwlock_t *)(a3 + 236)) )
  {
    sub_35C24("get_work_by_nonce2", 1448);
    if ( !pthread_mutex_unlock(v10) )
      goto LABEL_5;
LABEL_7:
    sub_35AB4("get_work_by_nonce2", 1448);
    goto LABEL_5;
  }
  if ( pthread_mutex_unlock(v10) )
    goto LABEL_7;
LABEL_5:
  off_B31B8();
  sub_36354(a3, *a2);
  v14 = a6;
  *(_DWORD *)(*a2 + 260) = a4;
  *(_DWORD *)(*a2 + 256) = v11;
  *(_DWORD *)(*a2 + 336) = 0;
  ++*(_DWORD *)(*(_DWORD *)(*a2 + 260) + 68);
  *(_BYTE *)(*a2 + 272) = 1;
  *(_DWORD *)(*a2 + 444) = v14;
  return 1;
}
