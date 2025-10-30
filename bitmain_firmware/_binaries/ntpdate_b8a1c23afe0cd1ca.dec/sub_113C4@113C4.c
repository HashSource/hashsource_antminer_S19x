int sub_113C4()
{
  int result; // r0

  result = pthread_once(&dword_3334C, (void (*)(void))sub_1135C);
  if ( result )
    sub_150D0(
      "./../lib/isc/unix/net.c",
      221,
      "((pthread_once((&once), (initialize_action)) == 0) ? 0 : 34) == 0",
      _stack_chk_guard);
  return result;
}
