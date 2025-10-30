int sub_34870()
{
  puts("bmminer_socket_init");
  while ( sub_78078(&off_AF444, 4) )
    sleep(3u);
  puts("regist ..");
  while ( 1 )
  {
    sub_7838C(aBitmainSubmitN);
    if ( !sub_7838C(aBitmainApiStat) )
      break;
    sleep(3u);
  }
  puts("regist done!");
  return 0;
}
