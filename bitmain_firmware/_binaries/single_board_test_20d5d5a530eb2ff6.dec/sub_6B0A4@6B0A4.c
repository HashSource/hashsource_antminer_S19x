int sub_6B0A4()
{
  int v0; // r5
  int v1; // r4
  struct sockaddr v3; // [sp+0h] [bp-40h] BYREF
  char v4[48]; // [sp+10h] [bp-30h] BYREF

  v0 = socket(2, 1, 0);
  if ( v0 < 0 )
  {
    sub_1E938(v4, 0x30u);
    printf("%s ", v4);
    printf("%s : Creat socket fail\n", "create_socket");
    strcpy(byte_65CE44, "Creat socket fail");
    sub_3CC5C((int)byte_65CE44, v4);
    return -1;
  }
  else
  {
    sub_1E938(v4, 0x30u);
    printf("%s ", v4);
    printf("%s : Creat socket success\n", "create_socket");
    v1 = 30;
    strcpy(byte_65CF44, "Creat socket success");
    sub_3CC5C((int)byte_65CF44, v4);
    v3.sa_family = 2;
    *(_WORD *)v3.sa_data = -10479;
    *(_DWORD *)&v3.sa_data[2] = inet_addr("10.76.16.200");
    while ( 1 )
    {
      --v1;
      if ( !connect(v0, &v3, 0x10u) )
        break;
      sleep(1u);
      sub_1E938(v4, 0x30u);
      printf("%s ", v4);
      printf("%s : timeout_counter = %d\n", "create_socket", v1);
      snprintf(byte_65D144, 0x100u, "timeout_counter = %d", v1);
      sub_3CC5C((int)byte_65D144, v4);
      if ( !v1 )
      {
        sub_1E938(v4, 0x30u);
        printf("%s ", v4);
        printf("%s : Creat socket connection to  pattern svr fail\n", "create_socket");
        strcpy(byte_65D244, "Creat socket connection to  pattern svr fail");
        sub_3CC5C((int)byte_65D244, v4);
        return -1;
      }
    }
    sub_1E938(v4, 0x30u);
    printf("%s ", v4);
    printf("%s : Creat socket connection to pattern svr succeed\n", "create_socket");
    strcpy(byte_65D044, "Creat socket connection to pattern svr succeed");
    sub_3CC5C((int)byte_65D044, v4);
    if ( sub_6AD88(v0) )
      return v0;
    else
      return -1;
  }
}
