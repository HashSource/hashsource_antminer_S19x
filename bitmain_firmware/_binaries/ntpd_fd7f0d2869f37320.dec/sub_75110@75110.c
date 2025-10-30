int sub_75110()
{
  if ( pthread_once(&dword_108288, (void (*)(void))sub_74D38) )
    sub_705AC("./../lib/isc/unix/net.c", 317, "((pthread_once((&once_ipv6only), (try_ipv6only)) == 0) ? 0 : 34) == 0");
  return dword_B8DDC;
}
