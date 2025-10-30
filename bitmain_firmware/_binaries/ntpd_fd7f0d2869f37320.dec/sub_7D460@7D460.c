int sub_7D460()
{
  int result; // r0

  result = pthread_once(&dword_1082E0, sub_7D404);
  if ( result )
    sub_705AC("./../lib/isc/random.c", 60, "((pthread_once((&once), (initialize_rand)) == 0) ? 0 : 34) == 0");
  return result;
}
