void sub_64244()
{
  if ( !lib_inited )
  {
    ipv4_works = sub_73C50() == 0;
    ipv6_works = sub_73CA8() == 0;
    sub_5F6E0();
    lib_inited = 1;
  }
}
