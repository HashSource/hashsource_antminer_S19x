void sub_2A09C()
{
  const char *v0; // r5
  int v1; // r4
  int v2; // r6
  int v3; // r0
  int v4; // r0
  char v5[48]; // [sp+0h] [bp-30h] BYREF

  v0 = (const char *)dword_223680;
  v1 = *(unsigned __int8 *)(dword_223680 + 260);
  if ( *(_BYTE *)(dword_223680 + 260) )
  {
    v2 = (unsigned __int8)byte_5FE894;
    if ( !strncmp((const char *)dword_223680, "SWEEP", 5u) )
    {
      if ( sub_3447C(v2, v1) )
        goto LABEL_4;
    }
    else
    {
      v4 = strncmp(v0, "PT3", 3u);
      if ( sub_3447C(v2, v4 == 0) )
      {
LABEL_4:
        if ( sub_37048() )
        {
          sub_1E938(v5, 0x30u);
          printf("%s ", v5);
          printf("%s : submit result ok\n", "submit_test_result_to_mes");
          strcpy(byte_60F8D4, "submit result ok");
          sub_3CC5C(byte_60F8D4, v5);
        }
        else
        {
          sub_1E938(v5, 0x30u);
          printf("%s ", v5);
          printf("%s : save result into SD card\n", "submit_test_result_to_mes");
          strcpy(byte_60F9D4, "save result into SD card");
          v3 = sub_3CC5C(byte_60F9D4, v5);
          if ( sub_37308(v3) )
          {
            sub_1E938(v5, 0x30u);
            printf("%s ", v5);
            printf("%s : save result into SD card success\n", "submit_test_result_to_mes");
            strcpy(byte_60FAD4, "save result into SD card success");
            sub_3CC5C(byte_60FAD4, v5);
          }
          else
          {
            sub_1E938(v5, 0x30u);
            printf("%s ", v5);
            printf("%s : save result into SD card fail\n", "submit_test_result_to_mes");
            strcpy(byte_60FBD4, "save result into SD card fail");
            sub_3CC5C(byte_60FBD4, v5);
          }
        }
        return;
      }
    }
    sub_1E938(v5, 0x30u);
    printf("%s ", v5);
    printf("%s : prepare submit result information fail\n", "submit_test_result_to_mes");
    strcpy(byte_60FCD4, "prepare submit result information fail");
    sub_3CC5C(byte_60FCD4, v5);
  }
}
