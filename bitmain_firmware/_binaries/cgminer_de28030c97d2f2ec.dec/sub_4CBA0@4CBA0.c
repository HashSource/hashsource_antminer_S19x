int __fastcall sub_4CBA0(pthread_rwlock_t *a1)
{
  int v1; // r1
  int v2; // r2
  int result; // r0

  a1[1].__lock = 0;
  sub_2E4CC(&stru_94188, "cgminer.c", "enable_device", 11328);
  v1 = dword_94130;
  v2 = dword_898CC++;
  a1->__lock = v2;
  *(_DWORD *)(v1 + 4 * a1->__lock) = a1;
  sub_2E74C(&stru_94188, "cgminer.c", "enable_device", 11330);
  if ( byte_941D8 )
    dword_87FE0 += a1[4].__nr_writers_queued;
  else
    dword_953F0 += a1[4].__nr_writers_queued;
  result = sub_2E830(a1 + 10, "cgminer.c", "enable_device", 11341);
  a1[11].__lock = 0;
  return result;
}
