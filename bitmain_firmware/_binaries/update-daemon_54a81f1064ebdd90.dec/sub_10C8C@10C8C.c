void __fastcall __noreturn sub_10C8C(int *a1)
{
  int v2; // r6
  int v3; // r4
  const unsigned __int16 *v4; // r1
  _DWORD *v5; // r2
  int v6; // t1
  int v7; // r4
  size_t v8; // r0
  char v9[16]; // [sp+0h] [bp-810h] BYREF
  _DWORD buf[256]; // [sp+10h] [bp-800h] BYREF
  char command[1024]; // [sp+410h] [bp-400h] BYREF

  puts("New Thread!\r");
  memset(buf, 0, sizeof(buf));
  v2 = *a1;
  read(*a1, buf, 0x400u);
  printf("Recv:'%s'\r\n", (const char *)buf);
  if ( !access((const char *)buf, 0) )
  {
    v3 = LOBYTE(buf[0]);
    if ( LOBYTE(buf[0]) )
    {
      v4 = *_ctype_b_loc();
      v5 = buf;
      do
      {
        if ( (v4[v3] & 8) == 0 && v3 != 95 && (unsigned int)(v3 - 45) > 2 )
        {
          puts("Invalid client content.");
          close(v2);
          pthread_exit(0);
        }
        v6 = *((unsigned __int8 *)v5 + 1);
        v5 = (_DWORD *)((char *)v5 + 1);
        v3 = v6;
      }
      while ( v6 );
    }
    strcpy(command, "/usr/sbin/updateporc.sh ");
    memset(&command[25], 0, 0x3E7u);
    strcpy(&command[24], (const char *)buf);
    strcpy(v9, "Come On WUHAN");
    v7 = system(command);
    if ( v7 == -1 )
    {
      puts("system err!\r");
      strcpy(v9, "500");
    }
    else
    {
      printf("system status:[%d]\r\n", v7);
      if ( (v7 & 0x7F) != 0 )
      {
        printf("Other Exit Ret[%d]\r\n", BYTE1(v7));
        sprintf(v9, "6%d", BYTE1(v7));
      }
      else if ( BYTE1(v7) )
      {
        printf("Shell Execute Failed, Ret[%d]\r\n", BYTE1(v7));
        sprintf(v9, "%d", BYTE1(v7));
      }
      else
      {
        puts("Shell Exec Successfully!\r");
        strcpy(v9, "200");
      }
    }
    v8 = strlen(v9);
    write(v2, v9, v8 + 1);
    close(v2);
    pthread_exit(0);
  }
  printf("File does not exist: %s\n", (const char *)buf);
  close(v2);
  pthread_exit(0);
}
