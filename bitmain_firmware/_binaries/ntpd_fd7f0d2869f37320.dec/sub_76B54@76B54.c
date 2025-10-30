int __fastcall sub_76B54(int a1, int a2, unsigned int a3)
{
  char *v6; // r3
  int result; // r0

  if ( !a2 )
    sub_6FC54((int)"./../lib/isc/unix/strerror.c", 55, 0, "buf != ((void *)0)");
  if ( pthread_once(&dword_1082CC, (void (*)(void))sub_76ABC) )
    sub_705AC("./../lib/isc/unix/strerror.c", 57, "((pthread_once((&once), (init_lock)) == 0) ? 0 : 34) == 0");
  if ( pthread_mutex_lock(&stru_1082B4) )
    sub_705AC("./../lib/isc/unix/strerror.c", 59, "((pthread_mutex_lock(((&isc_strerror_lock))) == 0) ? 0 : 34) == 0");
  v6 = strerror(a1);
  if ( v6 )
    sub_6D00C(a2, a3, "%s", v6);
  else
    sub_6D00C(a2, a3, "Unknown error: %u", a1);
  result = pthread_mutex_unlock(&stru_1082B4);
  if ( result )
    sub_705AC("./../lib/isc/unix/strerror.c", 65, "((pthread_mutex_unlock(((&isc_strerror_lock))) == 0) ? 0 : 34) == 0");
  return result;
}
