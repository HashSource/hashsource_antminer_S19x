int sub_73BB8()
{
  int result; // r0

  result = pthread_once(&dword_107260, (void (*)(void))sub_73B50);
  if ( result )
    sub_6F61C("./../lib/isc/unix/net.c", 221, "((pthread_once((&once), (initialize_action)) == 0) ? 0 : 34) == 0");
  return result;
}
