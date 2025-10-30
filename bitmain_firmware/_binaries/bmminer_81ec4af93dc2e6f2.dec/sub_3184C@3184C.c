void __noreturn sub_3184C()
{
  int i; // r0

  for ( i = prctl(15, "chk_status", 0); sub_3F36C(i) != 3; i = sub_3D9D4(1000) )
    ;
  while ( 1 )
  {
    sub_2F568();
    sub_31298();
    sub_3D9D4(1000);
    sub_2F568();
    sub_31298();
    sub_3D9D4(1000);
  }
}
