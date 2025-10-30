int __fastcall sub_4BED0(pthread_rwlock_t *a1)
{
  int v1; // r1
  int v2; // r2
  int result; // r0

  a1[1].__lock = 0;
  sub_2D480(&stru_92FF0, "cgminer.c", "enable_device", 11328);
  v1 = dword_92F98;
  v2 = dword_88734++;
  a1->__lock = v2;
  *(_DWORD *)(v1 + 4 * a1->__lock) = a1;
  sub_2D714(&stru_92FF0, "cgminer.c", "enable_device", 11330);
  if ( byte_93040 )
    dword_86E48 += a1[4].__nr_writers_queued;
  else
    dword_94258 += a1[4].__nr_writers_queued;
  result = sub_2D800(a1 + 10, "cgminer.c", "enable_device", 11341);
  a1[11].__lock = 0;
  return result;
}
