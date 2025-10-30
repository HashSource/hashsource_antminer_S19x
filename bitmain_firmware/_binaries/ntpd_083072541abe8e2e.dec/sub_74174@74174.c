int sub_74174()
{
  if ( pthread_once(&dword_107268, (void (*)(void))sub_73F34) )
    sub_6F61C(
      "./../lib/isc/unix/net.c",
      370,
      "((pthread_once((&once_ipv6pktinfo), (try_ipv6pktinfo)) == 0) ? 0 : 34) == 0");
  return dword_B7DE0;
}
