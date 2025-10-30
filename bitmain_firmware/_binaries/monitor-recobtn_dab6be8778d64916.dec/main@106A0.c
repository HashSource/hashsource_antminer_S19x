void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  struct timezone *v5; // r1
  __pid_t v6; // r0
  int v7; // r4
  struct timeval v8; // [sp+0h] [bp-14h] BYREF
  struct timeval tv; // [sp+8h] [bp-Ch] BYREF

  printf("monitor-recobtn compile %s--%s\n", "Feb  5 2025", "17:22:12");
  while ( 1 )
  {
    v5 = (struct timezone *)sub_109C0(0);
    if ( v5 )
      goto LABEL_15;
    do
    {
      gettimeofday(&v8, v5);
      sub_10940(1);
      puts("Detect recovery button push off");
      while ( sub_109C0(0) != 1 )
      {
LABEL_5:
        gettimeofday(&tv, 0);
        if ( tv.tv_usec + 1000000 * (tv.tv_sec - v8.tv_sec) - v8.tv_usec <= 3000000 )
        {
          usleep(0x7A120u);
        }
        else
        {
          puts("recovery button off over 3S, wait push on");
          while ( !sub_109C0(0) )
          {
            sub_10940(1);
            sleep(1u);
            sub_10940(0);
            sleep(1u);
          }
          puts("recovery button on");
          v6 = fork();
          if ( v6 >= 0 )
          {
            if ( !v6 )
            {
              sub_10940(0);
              if ( a1 <= 1 )
                sleep(1u);
              else
                execvp(a2[1], a2 + 1);
              exit(0);
            }
            wait(0);
            v7 = 100;
            puts("child complete");
            do
            {
              sub_10940(1);
              usleep(0x186A0u);
              sub_10940(0);
              usleep(0x186A0u);
              --v7;
            }
            while ( v7 );
            puts("recovery factory complete");
            if ( sub_109C0(0) == 1 )
              break;
            goto LABEL_5;
          }
          puts("error occured.");
        }
      }
      sub_10940(0);
      v5 = (struct timezone *)sub_109C0(0);
    }
    while ( !v5 );
LABEL_15:
    sleep(1u);
  }
}
