int __fastcall sub_11770(_BYTE *a1, size_t n)
{
  _BYTE *v4; // r6
  int v5; // r4
  int v6; // r5
  ssize_t v7; // r0

  v4 = a1;
  memset(a1, 0, n);
  v5 = 61;
  v6 = 0;
  *a1 = 10;
  do
  {
    v7 = recv(dword_270F4, v4, n - v6, 0);
    if ( v7 )
    {
      if ( v7 < 0 )
      {
        printf("Receive message fail: %d\n", v7);
      }
      else
      {
        v6 += v7;
        v4 = &a1[v6];
      }
      if ( *(v4 - 1) == 10 )
      {
LABEL_9:
        puts("Receive all message from MES system");
        return v6;
      }
    }
    else
    {
      puts("MES system close the socket");
      if ( *(v4 - 1) == 10 )
        goto LABEL_9;
    }
    usleep(0x1F4u);
    --v5;
  }
  while ( v5 );
  puts("Not receive all message for 30 seconds");
  return 0;
}
