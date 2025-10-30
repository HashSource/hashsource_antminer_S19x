int __fastcall sub_116F4(const void *a1, size_t a2)
{
  int v4; // r4
  ssize_t v5; // r0

  LOBYTE(v4) = -5;
  printf("submit_result: %s", "send_message_to_bitmain_MES_system");
  do
  {
    v5 = send(dword_270F4, a1, a2, 0);
    if ( v5 )
    {
      if ( v5 >= 0 )
      {
        printf("submit_result: %s done\n", "send_message_to_bitmain_MES_system");
        return 1;
      }
      printf("submit_result: Socket return back: %d\n", v5);
    }
    else
    {
      puts("submit_result: Timeout. MES close socket");
    }
    v4 = (unsigned __int8)(v4 - 1);
  }
  while ( v4 );
  return 0;
}
