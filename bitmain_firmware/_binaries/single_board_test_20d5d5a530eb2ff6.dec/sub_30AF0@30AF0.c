int sub_30AF0()
{
  _DWORD *v0; // r0
  _DWORD *v1; // r6
  int v2; // r7
  unsigned int *v3; // r3
  unsigned int v4; // r2
  unsigned int v5; // r2
  _DWORD *v7; // r0
  _DWORD *v8; // r5
  const char *v9; // r5
  _DWORD *v10; // r4
  int v11; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r3
  _DWORD *v15; // r5
  _DWORD *v16; // r4
  int v17; // r1
  int v18; // r2
  const char *v19; // r0
  const char *v20; // r0
  const char *v21; // r0
  _DWORD *v22; // r0
  _DWORD *v23; // r5
  const char *v24; // r0
  const char *v25; // r0
  char v26[48]; // [sp+0h] [bp-30h] BYREF

  v0 = (_DWORD *)sub_7B2D0(dword_61BD18, "result");
  v1 = v0;
  if ( !v0 )
  {
    sub_6FBF4(0);
    v2 = 0;
    sub_1F650(0, (const char *)(dword_223680 + 32));
    sub_1F650(1, "Don't find");
    sub_1F650(2, "result in MES");
    sub_1F650(3, "system response");
    sub_1E938(v26, 0x30u);
    printf("%s ", v26);
    printf("%s : Don't find result in MES system responce\n", "check_whether_MES_system_response_is_correct");
    strcpy(byte_61C41C, "Don't find result in MES system responce");
    sub_3CC5C(byte_61C41C, v26);
    return v2;
  }
  if ( *v0 )
  {
    sub_6FBF4(v0);
    v2 = 0;
    sub_1F650(0, (const char *)(dword_223680 + 32));
    sub_1F650(1, "Don't find");
    sub_1F650(2, "result in MES");
    sub_1F650(3, "system response");
    sub_1E938(v26, 0x30u);
    printf("%s ", v26);
    printf("%s : Don't find result in MES system responce\n", "check_whether_MES_system_response_is_correct");
    strcpy(byte_61C41C, "Don't find result in MES system responce");
    sub_3CC5C(byte_61C41C, v26);
  }
  else
  {
    v7 = (_DWORD *)sub_7B2D0(v0, "code");
    v8 = v7;
    if ( v7 && *v7 == 2 )
    {
      v19 = (const char *)sub_7B4A8(v7);
      if ( !strcmp(v19, "000000") )
      {
        sub_1E938(v26, 0x30u);
        printf("%s ", v26);
        printf("%s : Get MES system config information success\n", "check_whether_MES_system_response_is_correct");
        v2 = 1;
        strcpy(byte_61C01C, "Get MES system config information success");
        sub_3CC5C(byte_61C01C, v26);
        goto LABEL_4;
      }
      sub_1E938(v26, 0x30u);
      printf("%s ", v26);
      v20 = (const char *)sub_7B4A8(v8);
      printf(
        "%s : Get MES system config information fail. code: %s\n",
        "check_whether_MES_system_response_is_correct",
        v20);
      v21 = (const char *)sub_7B4A8(v8);
      snprintf(byte_61C11C, 0x100u, "Get MES system config information fail. code: %s", v21);
      sub_3CC5C(byte_61C11C, v26);
      v22 = (_DWORD *)sub_7B2D0(v1, "msg");
      v23 = v22;
      if ( v22 && *v22 == 2 )
      {
        sub_6FBF4(v22);
        v2 = 0;
        sub_1F650(0, (const char *)(dword_223680 + 32));
        sub_1F650(1, "MES system");
        sub_1F650(2, "return error");
        sub_1F650(3, "response");
        sub_1E938(v26, 0x30u);
        printf("%s ", v26);
        v24 = (const char *)sub_7B4A8(v23);
        printf(
          "%s : Get MES system config information fail. msg: %s\n",
          "check_whether_MES_system_response_is_correct",
          v24);
        v25 = (const char *)sub_7B4A8(v23);
        snprintf(byte_61C31C, 0x100u, "Get MES system config information fail. msg: %s", v25);
        sub_3CC5C(byte_61C31C, v26);
        goto LABEL_4;
      }
      sub_6FBF4(v22);
      v2 = 0;
      v9 = "Don't get msg in result\n";
      v10 = &unk_61C21C;
      sub_1F650(0, (const char *)(dword_223680 + 32));
      sub_1F650(1, "Don't find");
      sub_1F650(2, "msg in MES");
      sub_1F650(3, "system response");
      sub_1E938(v26, 0x30u);
      printf("%s ", v26);
      printf("%s : Don't get msg in result\n\n", "check_whether_MES_system_response_is_correct");
    }
    else
    {
      sub_6FBF4(v7);
      v2 = 0;
      v9 = "Don't get code in result";
      v10 = &unk_61BF1C;
      sub_1F650(0, (const char *)(dword_223680 + 32));
      sub_1F650(1, "Don't find");
      sub_1F650(2, "code in MES");
      sub_1F650(3, "system response");
      sub_1E938(v26, 0x30u);
      printf("%s ", v26);
      printf("%s : Don't get code in result\n", "check_whether_MES_system_response_is_correct");
    }
    v11 = *(_DWORD *)v9;
    v12 = *((_DWORD *)v9 + 1);
    v13 = *((_DWORD *)v9 + 2);
    v14 = *((_DWORD *)v9 + 3);
    v15 = v9 + 16;
    *v10 = v11;
    v10[1] = v12;
    v10[2] = v13;
    v10[3] = v14;
    v16 = v10 + 4;
    v17 = v15[1];
    v18 = v15[2];
    *v16 = *v15;
    v16[1] = v17;
    v16 += 2;
    *(_BYTE *)v16 = v18;
    sub_3CC5C(v16 - 6, v26);
  }
LABEL_4:
  if ( v1[1] == -1 )
    return v2;
  v3 = v1 + 1;
  __dmb(0xBu);
  do
  {
    v4 = __ldrex(v3);
    v5 = v4 - 1;
  }
  while ( __strex(v5, v3) );
  if ( v5 )
    return v2;
  sub_7B714(v1);
  return v2;
}
