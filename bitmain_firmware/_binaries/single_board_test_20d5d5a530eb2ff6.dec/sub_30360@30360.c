int __fastcall sub_30360(const void *a1, size_t a2)
{
  int v4; // r4
  ssize_t v5; // r0
  int v7; // r0
  ssize_t v8; // [sp+4h] [bp-38h]
  char v9[52]; // [sp+8h] [bp-34h] BYREF

  sub_1E938(v9, 0x30u);
  printf("%s ", v9);
  printf("%s :  \n", "send_message_to_bitmain_MES_system");
  word_61AF10 = 32;
  LOBYTE(v4) = -5;
  sub_3CC5C(&word_61AF10, v9);
  do
  {
    v5 = send(dword_21B5EC, a1, a2, 0);
    if ( v5 )
    {
      if ( v5 >= 0 )
      {
        sub_1E938(v9, 0x30u);
        printf("%s ", v9);
        printf("%s : done\n", "send_message_to_bitmain_MES_system");
        strcpy((char *)&dword_61B210, "done");
        sub_3CC5C(&dword_61B210, v9);
        return 1;
      }
      v8 = v5;
      sub_1E938(v9, 0x30u);
      printf("%s ", v9);
      printf("%s : Socket return back: %d\n", "send_message_to_bitmain_MES_system", v8);
      snprintf(byte_61B110, 0x100u, "Socket return back: %d", v8);
      v7 = sub_3CC5C(byte_61B110, v9);
    }
    else
    {
      sub_1E938(v9, 0x30u);
      printf("%s ", v9);
      printf("%s : Timeout. MES close socket\n", "send_message_to_bitmain_MES_system");
      strcpy(byte_61B010, "Timeout. MES close socket");
      v7 = sub_3CC5C(byte_61B010, v9);
    }
    v4 = (unsigned __int8)(v4 - 1);
  }
  while ( v4 );
  sub_6FBF4(v7);
  sub_1F650(0, (const char *)(dword_223680 + 32));
  sub_1F650(1, "send message to");
  sub_1F650(2, "MES system");
  sub_1F650(3, "fail");
  sub_1E938(v9, 0x30u);
  printf("%s ", v9);
  printf("%s : send message to MES system fail\n", "send_message_to_bitmain_MES_system");
  strcpy(byte_61B310, "send message to MES system fail");
  sub_3CC5C(byte_61B310, v9);
  return 0;
}
