void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0

  v3 = printf("monitor-ipsig compile %s--%s\n", "Feb  5 2025", "17:22:05");
  v4 = sub_10FE8(v3);
  while ( 1 )
  {
    if ( sub_114A8(v4) != 1 )
    {
      do
        v5 = usleep(0x61A80u);
      while ( sub_114A8(v5) != 1 );
    }
    do
    {
      v6 = puts("Key Down!!!!!");
      v7 = sub_110EC(v6);
      v4 = sub_11274(v7);
    }
    while ( v4 != 1 );
  }
}
