void sub_9D2C()
{
  if ( !lib_inited )
  {
    ipv4_works = sub_1145C() == 0;
    ipv6_works = sub_114B4() == 0;
    sub_6568();
    lib_inited = 1;
  }
}
