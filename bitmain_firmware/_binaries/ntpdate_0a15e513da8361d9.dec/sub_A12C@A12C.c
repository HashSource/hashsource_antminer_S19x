void sub_A12C()
{
  if ( !lib_inited )
  {
    ipv4_works = sub_11940() == 0;
    ipv6_works = sub_11998() == 0;
    sub_6810();
    lib_inited = 1;
  }
}
