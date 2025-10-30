void __noreturn sub_31E8C()
{
  int i; // r0

  for ( i = prctl(15, "chk_status", 0); sub_40F54(i) != 3; i = sub_3E0F0(1000) )
    ;
  while ( 1 )
  {
    sub_2FBA0();
    sub_318F4();
    sub_3E0F0(1000);
    sub_2FBA0();
    sub_318F4();
    sub_3E0F0(1000);
  }
}
