int sub_7C0C8()
{
  int result; // r0

  result = pthread_once(&dword_1072BC, sub_7C06C);
  if ( result )
    sub_6F61C("./../lib/isc/random.c", 60, "((pthread_once((&once), (initialize_rand)) == 0) ? 0 : 34) == 0");
  return result;
}
