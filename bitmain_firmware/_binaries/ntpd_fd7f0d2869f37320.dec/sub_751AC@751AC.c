int sub_751AC()
{
  if ( pthread_once(&dword_10828C, (void (*)(void))sub_74F6C) )
    sub_705AC(
      "./../lib/isc/unix/net.c",
      370,
      "((pthread_once((&once_ipv6pktinfo), (try_ipv6pktinfo)) == 0) ? 0 : 34) == 0");
  return dword_B8DE0;
}
