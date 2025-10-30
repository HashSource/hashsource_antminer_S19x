int sub_18BDC()
{
  int result; // r0

  sub_112B0();
  result = pthread_once(&dword_333AC, (void (*)(void))sub_18ABC);
  if ( result )
    sub_15644("./../lib/isc/result.c", 168, "((pthread_once((&once), (initialize_action)) == 0) ? 0 : 34) == 0");
  return result;
}
