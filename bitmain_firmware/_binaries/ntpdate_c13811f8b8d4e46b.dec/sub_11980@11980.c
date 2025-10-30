int sub_11980()
{
  int v0; // r3

  if ( pthread_once(&dword_33354, (void (*)(void))sub_11740) )
    sub_150D0(
      "./../lib/isc/unix/net.c",
      370,
      "((pthread_once((&once_ipv6pktinfo), (try_ipv6pktinfo)) == 0) ? 0 : 34) == 0",
      v0);
  return dword_310E4;
}
