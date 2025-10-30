void __fastcall __noreturn sub_10CAC(int *a1)
{
  int v2; // r6
  int v3; // r5
  const unsigned __int16 **v4; // r0
  _DWORD *v5; // r2
  const unsigned __int16 *v6; // r1
  void *v7; // r4
  int v8; // t1
  int v9; // r4
  bool v10; // zf
  int v11; // r4
  size_t v12; // r0
  char v13[16]; // [sp+0h] [bp-810h] BYREF
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
      v4 = _ctype_b_loc();
      v5 = buf;
      v6 = *v4;
      do
      {
        v7 = (void *)(v6[v3] & 8);
        if ( (v6[v3] & 8) == 0 && v3 != 95 && (unsigned int)(v3 - 45) > 2 )
        {
          puts("Invalid client content.");
          close(v2);
          pthread_exit(v7);
        }
        v8 = *((unsigned __int8 *)v5 + 1);
        v5 = (_DWORD *)((char *)v5 + 1);
        v3 = v8;
      }
      while ( v8 );
    }
    strcpy(command, "/usr/sbin/updateporc.sh ");
    memset(&command[25], 0, 0x3E7u);
    strcpy(&command[24], (const char *)buf);
    strcpy(v13, "Come On WUHAN");
    v9 = system(command);
    if ( v9 == -1 )
    {
      puts("system err!\r");
      strcpy(v13, "500");
    }
    else
    {
      printf("system status:[%d]\r\n", v9);
      v10 = (v9 & 0x7F) == 0;
      v11 = BYTE1(v9);
      if ( v10 )
      {
        if ( v11 )
        {
          printf("Shell Execute Failed, Ret[%d]\r\n", v11);
          sprintf(v13, "%d", v11);
        }
        else
        {
          puts("Shell Exec Successfully!\r");
          strcpy(v13, "200");
        }
      }
      else
      {
        printf("Other Exit Ret[%d]\r\n", v11);
        sprintf(v13, "6%d", v11);
      }
    }
    v12 = strlen(v13);
    write(v2, v13, v12 + 1);
    close(v2);
    pthread_exit(0);
  }
  printf("File does not exist: %s\n", (const char *)buf);
  close(v2);
  pthread_exit(0);
}
