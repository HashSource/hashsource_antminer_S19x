int sub_76440()
{
  int result; // r0

  sub_713C4();
  result = pthread_once(&dword_1082B0, (void (*)(void))sub_76320);
  if ( result )
    sub_705AC("./../lib/isc/result.c", 168, "((pthread_once((&once), (initialize_action)) == 0) ? 0 : 34) == 0");
  return result;
}
