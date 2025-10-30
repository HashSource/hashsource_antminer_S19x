int sub_5CA6C()
{
  int v0; // r6
  bool v1; // cc
  int v2; // r6
  int v3; // r4
  int v4; // r3
  pthread_t v5; // r0
  char v7[48]; // [sp+0h] [bp-30h] BYREF

  v0 = *(_DWORD *)(dword_223680 + 264);
  v1 = v0 <= 0;
  if ( v0 )
  {
    v2 = v0 - 1;
    if ( !v1 )
    {
      do
      {
        v3 = 10;
        do
        {
          usleep((__useconds_t)&loc_186A0);
          --v3;
        }
        while ( v3 );
        sub_1E938(v7, 0x30u);
        printf("%s ", v7);
        printf("%s : PT1 board power on left %d\n", "pt1_board_protect_func", v2);
        v4 = v2--;
        snprintf(byte_648E38, 0x100u, "PT1 board power on left %d", v4);
        sub_3CC5C((int)byte_648E38, v7);
      }
      while ( v2 != -1 );
    }
    sub_2B420("board protect");
  }
  sub_1E938(v7, 0x30u);
  printf("%s ", v7);
  printf("%s : Have not cfg max board poweron time.\n", "pt1_board_protect_func");
  strcpy(byte_648F38, "Have not cfg max board poweron time.");
  sub_3CC5C((int)byte_648F38, v7);
  v5 = pthread_self();
  pthread_detach(v5);
  return 0;
}
