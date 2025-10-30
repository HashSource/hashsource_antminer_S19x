void __noreturn sub_30074()
{
  int i; // r4

  while ( 1 )
  {
    for ( i = 0; i != 4; ++i )
    {
      if ( !sub_40708(i) )
        sub_405D4(i);
    }
    usleep(0x2710u);
  }
}
