void __fastcall sub_476E4(pthread_rwlock_t *a1, _DWORD *a2)
{
  _DWORD *v2; // [sp+0h] [bp-Ch] BYREF
  pthread_rwlock_t *v3; // [sp+4h] [bp-8h]

  v3 = a1;
  v2 = a2;
  sub_2D480(a1 + 10, "cgminer.c", "work_completed", 9677);
  sub_472E4((int)v3, v2);
  sub_2D714(v3 + 10, "cgminer.c", "work_completed", 9679);
  sub_30E0C((void **)&v2, "cgminer.c", "work_completed", 9681);
}
