int __fastcall sub_20FE8(int a1, const struct timespec *a2)
{
  int *ptr; // [sp+Ch] [bp-10h]
  int v6; // [sp+10h] [bp-Ch]
  int v7; // [sp+14h] [bp-8h]

  v7 = 0;
  sub_1F44C((pthread_mutex_t *)(a1 + 12), "util.c", "tq_pop", 1156);
  if ( !sub_1F1B0((_DWORD *)a1)
    || (!a2
      ? (v6 = pthread_cond_wait((pthread_cond_t *)(a1 + 40), (pthread_mutex_t *)(a1 + 12)))
      : (v6 = pthread_cond_timedwait((pthread_cond_t *)(a1 + 40), (pthread_mutex_t *)(a1 + 12), a2)),
        !v6 && !sub_1F1B0((_DWORD *)a1)) )
  {
    ptr = (int *)(*(_DWORD *)a1 - 4);
    v7 = *ptr;
    sub_1F160(*(_DWORD *)a1);
    free(ptr);
  }
  sub_1F584((pthread_mutex_t *)(a1 + 12), "util.c", "tq_pop", 1182);
  return v7;
}
