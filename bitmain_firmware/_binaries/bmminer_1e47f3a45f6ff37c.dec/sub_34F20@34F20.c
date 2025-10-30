int sub_34F20()
{
  puts("bmminer_socket_init");
  while ( sub_7B454(&off_B28AC, 4) )
    sleep(3u);
  puts("regist ..");
  while ( 1 )
  {
    sub_7B77C(aBitmainSubmitN);
    if ( !sub_7B77C(aBitmainApiStat) )
      break;
    sleep(3u);
  }
  puts("regist done!");
  return 0;
}
