int sub_1BB30()
{
  int result; // r0

  result = pthread_once(dword_333BC, sub_1BAD4);
  if ( result )
    sub_150D0("./../lib/isc/random.c", 60, "((pthread_once((&once), (initialize_rand)) == 0) ? 0 : 34) == 0");
  return result;
}
