int sub_1143C()
{
  int v0; // r4
  struct sockaddr v2; // [sp+0h] [bp-10h] BYREF

  dword_270F4 = socket(2, 1, 0);
  if ( dword_270F4 < 0 )
  {
    puts("Creat socket fail");
    return 0;
  }
  else
  {
    puts("Creat socket success");
    *(_DWORD *)&v2.sa_family = -1709244414;
    v0 = 30;
    *(_DWORD *)&v2.sa_data[2] = inet_addr("39.107.255.133");
    do
    {
      --v0;
      if ( !connect(dword_270F4, &v2, 0x10u) )
      {
        puts("Creat socket connection to MES system succeed");
        return sub_112BC(dword_270F4);
      }
      sleep(1u);
      printf("timeout_counter = %d\n", v0);
    }
    while ( v0 );
    puts("Creat socket connection to MES system fail");
    return 0;
  }
}
