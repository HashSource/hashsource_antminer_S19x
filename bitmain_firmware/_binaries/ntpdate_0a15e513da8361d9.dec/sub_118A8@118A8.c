int sub_118A8()
{
  int result; // r0

  result = pthread_once(&dword_33350, (void (*)(void))sub_11840);
  if ( result )
    sub_15644(
      "./../lib/isc/unix/net.c",
      221,
      "((pthread_once((&once), (initialize_action)) == 0) ? 0 : 34) == 0",
      _stack_chk_guard);
  return result;
}
