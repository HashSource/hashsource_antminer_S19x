unsigned __int8 *__fastcall sub_30548(size_t *a1)
{
  unsigned __int8 *v1; // r4
  unsigned int v3; // r7
  size_t v4; // r5
  ssize_t v5; // r0
  size_t v6; // r6
  unsigned __int8 *v7; // r0
  unsigned __int8 *v8; // r0
  unsigned __int8 *v9; // r6
  unsigned __int8 *v10; // r5
  int v11; // t1
  int v12; // r0
  unsigned __int8 *v14; // r0
  int v15; // r2
  char v16[48]; // [sp+8h] [bp-2834h] BYREF
  _BYTE s[10244]; // [sp+38h] [bp-2804h] BYREF

  v1 = 0;
  v3 = 0;
  v4 = 0;
  do
  {
    while ( 1 )
    {
      memset(s, 0, 0x2800u);
      v5 = recv(dword_21B5EC, s, 0x2800u, 0);
      v6 = v5;
      if ( !v5 )
        break;
      if ( v5 < 0 )
      {
        sub_1E938(v16, 0x30u);
        printf("%s ", v16);
        printf("%s : Receive message fail: %d\n", "receive_message_from_bitmain_MES_system", v6);
        snprintf(byte_61B410, 0x100u, "Receive message fail: %d", v6);
        sub_3CC5C(byte_61B410, v16);
        return 0;
      }
      if ( v1 )
      {
        v7 = (unsigned __int8 *)realloc(v1, v4 + v5);
        v1 = v7;
        if ( !v7 )
        {
          sub_6FBF4(0);
          sub_1F650(0, (const char *)(dword_223680 + 32));
          sub_1F650(1, "realloc for");
          sub_1F650(2, "MES config");
          sub_1F650(3, "infor fail");
          sub_1E938(v16, 0x30u);
          printf("%s ", v16);
          printf("%s : realloc for MES config infor fail\n", "receive_message_from_bitmain_MES_system");
          strcpy(byte_61B610, "realloc for MES config infor fail");
          sub_3CC5C(byte_61B610, v16);
          return 0;
        }
        v8 = &v7[v4];
        v4 += v6;
        memcpy(v8, s, v6);
        v9 = &v1[v4 - 1];
        if ( *v9 == 10 )
          goto LABEL_16;
      }
      else
      {
        v14 = (unsigned __int8 *)calloc(1u, v5);
        v4 = v6;
        v1 = v14;
        if ( !v14 )
        {
          sub_6FBF4(0);
          sub_1F650(0, (const char *)(dword_223680 + 32));
          sub_1F650(1, "malloc for");
          sub_1F650(2, "MES config");
          sub_1F650(3, "infor fail");
          sub_1E938(v16, 0x30u);
          printf("%s ", v16);
          printf("%s : malloc for MES config infor fail\n", "receive_message_from_bitmain_MES_system");
          strcpy(byte_61B510, "malloc for MES config infor fail");
          sub_3CC5C(byte_61B510, v16);
          return 0;
        }
        memcpy(v14, s, v6);
        v15 = v1[v6 - 1];
        v9 = &v1[v6 - 1];
        if ( v15 == 10 )
        {
LABEL_16:
          sub_1E938(v16, 0x30u);
          printf("%s ", v16);
          printf("%s : Receive total message length: %d\n", "receive_message_from_bitmain_MES_system", v4);
          snprintf(byte_61B710, 0x100u, "Receive total message length: %d", v4);
          sub_3CC5C(byte_61B710, v16);
          *a1 = v4;
          *v9 = 0;
          sub_1E938(v16, 0x30u);
          printf("%s ", v16);
          printf("%s : Receive all message from MES system\n", "receive_message_from_bitmain_MES_system");
          strcpy(byte_61B810, "Receive all message from MES system");
          sub_3CC5C(byte_61B810, v16);
          return v1;
        }
      }
      v3 = 0;
    }
    ++v3;
    sleep(1u);
    v9 = &v1[v4 - 1];
    if ( *v9 == 10 )
      goto LABEL_16;
  }
  while ( v3 <= 6 );
  sub_1E938(v16, 0x30u);
  printf("%s ", v16);
  printf("%s : Only receive %d bytes message during last 6 seconds\n", "receive_message_from_bitmain_MES_system", v4);
  snprintf(byte_61B910, 0x100u, "Only receive %d bytes message during last 6 seconds", v4);
  sub_3CC5C(byte_61B910, v16);
  if ( v4 )
  {
    v10 = &v1[v4];
    do
    {
      v11 = *v1++;
      putchar(v11);
    }
    while ( v1 != v10 );
  }
  v12 = putchar(10);
  sub_6FBF4(v12);
  sub_1F650(0, (const char *)(dword_223680 + 32));
  sub_1F650(1, "Not receive all");
  sub_1F650(2, "MES config");
  sub_1F650(3, "information");
  sub_1E938(v16, 0x30u);
  printf("%s ", v16);
  printf("%s : Not receive all MES config information\n", "receive_message_from_bitmain_MES_system");
  strcpy(byte_61BA10, "Not receive all MES config information");
  sub_3CC5C(byte_61BA10, v16);
  return 0;
}
