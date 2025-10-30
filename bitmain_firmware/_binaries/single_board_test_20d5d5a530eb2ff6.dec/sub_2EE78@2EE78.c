int sub_2EE78()
{
  int v0; // r4
  struct sockaddr v2; // [sp+0h] [bp-40h] BYREF
  char v3[48]; // [sp+10h] [bp-30h] BYREF

  dword_21B5EC = socket(2, 1, 0);
  if ( dword_21B5EC < 0 )
  {
    sub_1E938(v3, 0x30u);
    printf("%s ", v3);
    printf("%s : Creat socket fail\n", "create_connection_to_MES_system_by_ip");
    strcpy(&byte_61840C[256], "Creat socket fail");
    sub_3CC5C(&byte_61840C[256], v3);
    return 0;
  }
  else
  {
    sub_1E938(v3, 0x30u);
    printf("%s ", v3);
    printf("%s : Creat socket success\n", "create_connection_to_MES_system_by_ip");
    v0 = 30;
    strcpy(&byte_61840C[512], "Creat socket success");
    sub_3CC5C(&byte_61840C[512], v3);
    v2.sa_family = 2;
    *(_WORD *)v2.sa_data = -26081;
    *(_DWORD *)&v2.sa_data[2] = inet_addr("8.135.46.51");
    do
    {
      --v0;
      if ( !connect(dword_21B5EC, &v2, 0x10u) )
      {
        sub_1E938(v3, 0x30u);
        printf("%s ", v3);
        printf("%s : Creat socket connection to MES system succeed\n", "create_connection_to_MES_system_by_ip");
        strcpy(&byte_61840C[768], "Creat socket connection to MES system succeed");
        sub_3CC5C(&byte_61840C[768], v3);
        return sub_2EAC0(dword_21B5EC);
      }
      sleep(1u);
      sub_1E938(v3, 0x30u);
      printf("%s ", v3);
      printf("%s : timeout_counter = %d\n", "create_connection_to_MES_system_by_ip", v0);
      snprintf(&byte_61840C[1024], 0x100u, "timeout_counter = %d", v0);
      sub_3CC5C(&byte_61840C[1024], v3);
    }
    while ( v0 );
    sub_1E938(v3, 0x30u);
    printf("%s ", v3);
    printf("%s : Creat socket connection to MES system fail\n", "create_connection_to_MES_system_by_ip");
    strcpy(&byte_61840C[1280], "Creat socket connection to MES system fail");
    sub_3CC5C(&byte_61840C[1280], v3);
    return 0;
  }
}
