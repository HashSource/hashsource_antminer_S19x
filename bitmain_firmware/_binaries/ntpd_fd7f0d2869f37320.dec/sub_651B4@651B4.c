void sub_651B4()
{
  if ( !lib_inited )
  {
    ipv4_works = sub_74C88() == 0;
    ipv6_works = sub_74CE0() == 0;
    sub_60518();
    lib_inited = 1;
  }
}
