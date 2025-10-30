int sub_740D8()
{
  if ( pthread_once(&dword_107264, (void (*)(void))sub_73D00) )
    sub_6F61C("./../lib/isc/unix/net.c", 317, "((pthread_once((&once_ipv6only), (try_ipv6only)) == 0) ? 0 : 34) == 0");
  return dword_B7DDC;
}
