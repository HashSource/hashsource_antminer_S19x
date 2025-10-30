int __fastcall sub_4834C(pthread_rwlock_t *a1)
{
  int v1; // r3
  int v2; // r3
  __time_t v5[2]; // [sp+14h] [bp-18h] BYREF
  int lock; // [sp+1Ch] [bp-10h]
  int v7; // [sp+20h] [bp-Ch]
  int v8; // [sp+24h] [bp-8h]

  v7 = 0;
  sub_22308(v5);
  sub_2E4CC(a1 + 10, "cgminer.c", "age_queued_work", 9656);
  lock = a1[11].__lock;
  if ( a1[11].__lock )
    v1 = *(_DWORD *)(a1[11].__lock + 352);
  else
    v1 = 0;
  v8 = v1;
  while ( lock )
  {
    sub_226B0();
    lock = v8;
    if ( v8 )
      v2 = *(_DWORD *)(v8 + 352);
    else
      v2 = 0;
    v8 = v2;
  }
  sub_2E74C(a1 + 10, "cgminer.c", "age_queued_work", 9667);
  return v7;
}
