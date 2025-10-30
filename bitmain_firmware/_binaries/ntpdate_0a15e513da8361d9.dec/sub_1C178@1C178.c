int sub_1C178()
{
  int result; // r0

  result = pthread_once(dword_333C0, sub_1C11C);
  if ( result )
    sub_15644("./../lib/isc/random.c", 60, "((pthread_once((&once), (initialize_rand)) == 0) ? 0 : 34) == 0");
  return result;
}
