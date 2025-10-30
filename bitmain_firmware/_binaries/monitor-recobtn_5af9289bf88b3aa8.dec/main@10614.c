void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  struct timezone *v4; // r1
  __pid_t v5; // r0
  int v6; // r4
  struct timeval tv; // [sp+8h] [bp-14h] BYREF
  struct timeval v9; // [sp+10h] [bp-Ch] BYREF

  printf("monitor-recobtn compile %s--%s\n", "Jan 14 2020", "18:22:32");
  while ( 1 )
  {
    v4 = (struct timezone *)sub_1097C(0);
    if ( v4 )
      goto LABEL_15;
    do
    {
      gettimeofday(&tv, v4);
      system("echo low >/sys/class/gpio/gpio941/direction");
      system("echo low >/sys/class/gpio/gpio942/direction");
      puts("Detect recovery button push off");
      while ( sub_1097C(0) != 1 )
      {
LABEL_5:
        gettimeofday(&v9, 0);
        if ( v9.tv_usec + 1000000 * (v9.tv_sec - tv.tv_sec) - tv.tv_usec <= 3000000 )
        {
          usleep(0x7A120u);
        }
        else
        {
          puts("recovery button off over 3S, wait push on");
          while ( !sub_1097C(0) )
          {
            system("echo low >/sys/class/gpio/gpio941/direction");
            system("echo low >/sys/class/gpio/gpio942/direction");
            sleep(1u);
            system("echo high >/sys/class/gpio/gpio941/direction");
            system("echo high >/sys/class/gpio/gpio942/direction");
            sleep(1u);
          }
          puts("recovery button on");
          v5 = fork();
          if ( v5 >= 0 )
          {
            if ( !v5 )
            {
              system("echo high >/sys/class/gpio/gpio941/direction");
              system("echo high >/sys/class/gpio/gpio942/direction");
              if ( a1 <= 1 )
                sleep(1u);
              else
                execvp(a2[1], a2 + 1);
              exit(0);
            }
            wait(0);
            v6 = 100;
            puts("child complete");
            do
            {
              system("echo low >/sys/class/gpio/gpio941/direction");
              system("echo low >/sys/class/gpio/gpio942/direction");
              usleep(0x186A0u);
              system("echo high >/sys/class/gpio/gpio941/direction");
              system("echo high >/sys/class/gpio/gpio942/direction");
              usleep(0x186A0u);
              --v6;
            }
            while ( v6 );
            puts("recovery factory complete");
            if ( sub_1097C(0) == 1 )
              break;
            goto LABEL_5;
          }
          puts("error occured.");
        }
      }
      system("echo high >/sys/class/gpio/gpio941/direction");
      system("echo high >/sys/class/gpio/gpio942/direction");
      v4 = (struct timezone *)sub_1097C(0);
    }
    while ( !v4 );
LABEL_15:
    sleep(1u);
  }
}
