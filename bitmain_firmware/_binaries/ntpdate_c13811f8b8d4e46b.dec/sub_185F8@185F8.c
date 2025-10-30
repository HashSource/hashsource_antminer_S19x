int sub_185F8()
{
  int result; // r0

  sub_10DB8();
  result = pthread_once(&dword_333A8, (void (*)(void))sub_184D8);
  if ( result )
    sub_150D0("./../lib/isc/result.c", 168, "((pthread_once((&once), (initialize_action)) == 0) ? 0 : 34) == 0");
  return result;
}
