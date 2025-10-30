int sub_25A5C()
{
  puts("bmminer_socket_init");
  while ( sub_76964(&off_9C3B8, 3) )
    sleep(3u);
  sleep(3u);
  puts("regist ..");
  while ( 1 )
  {
    sub_76C60(aBitmainSubmitN);
    if ( !sub_76C60(aBitmainApiStat) )
      break;
    sleep(3u);
  }
  puts("regist done!");
  return 0;
}
