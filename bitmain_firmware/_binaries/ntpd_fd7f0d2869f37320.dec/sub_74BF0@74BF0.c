int sub_74BF0()
{
  int result; // r0

  result = pthread_once(&dword_108284, (void (*)(void))sub_74B88);
  if ( result )
    sub_705AC("./../lib/isc/unix/net.c", 221, "((pthread_once((&once), (initialize_action)) == 0) ? 0 : 34) == 0");
  return result;
}
