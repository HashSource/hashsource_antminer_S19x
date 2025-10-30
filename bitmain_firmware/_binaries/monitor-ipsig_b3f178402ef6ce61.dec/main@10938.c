void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0

  v3 = printf("monitor-ipsig compile %s--%s\n", "Feb  5 2025", "17:07:50");
  v4 = sub_11018(v3);
  while ( 1 )
  {
    if ( sub_11514(v4) != 1 )
    {
      do
        v5 = usleep(0x61A80u);
      while ( sub_11514(v5) != 1 );
    }
    do
    {
      v6 = puts("Key Down!!!!!");
      v7 = sub_1111C(v6);
      v4 = sub_112CC(v7);
    }
    while ( v4 != 1 );
  }
}
