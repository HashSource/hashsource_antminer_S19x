int __fastcall sub_129C0(int a1, int a2, unsigned int a3)
{
  int v6; // r3
  int v7; // r3
  char *v8; // r3
  int result; // r0

  if ( !a2 )
    sub_1073C();
  if ( pthread_once(&dword_33370, (void (*)(void))sub_12928) )
    sub_150D0("./../lib/isc/unix/strerror.c", 57, "((pthread_once((&once), (init_lock)) == 0) ? 0 : 34) == 0", v6);
  if ( pthread_mutex_lock(&stru_33358) )
    sub_150D0(
      "./../lib/isc/unix/strerror.c",
      59,
      "((pthread_mutex_lock(((&isc_strerror_lock))) == 0) ? 0 : 34) == 0",
      v7);
  v8 = strerror(a1);
  if ( v8 )
    sub_F5F4(a2, a3, "%s", v8);
  else
    sub_F5F4(a2, a3, "Unknown error: %u", a1);
  result = pthread_mutex_unlock(&stru_33358);
  if ( result )
    sub_150D0(
      "./../lib/isc/unix/strerror.c",
      65,
      "((pthread_mutex_unlock(((&isc_strerror_lock))) == 0) ? 0 : 34) == 0",
      _stack_chk_guard);
  return result;
}
