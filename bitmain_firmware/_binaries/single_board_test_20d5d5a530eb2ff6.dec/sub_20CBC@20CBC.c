int sub_20CBC()
{
  int v0; // r6
  int v2; // r0
  int v3; // r1
  int v4; // r9
  _DWORD *v5; // r5
  int v6; // r0
  int v7; // r0
  const char *v8; // r2
  const char *v9; // r3
  char v10[48]; // [sp+4h] [bp-154h] BYREF
  _DWORD v11[73]; // [sp+34h] [bp-124h] BYREF

  sub_1E938((char *)v11, 0x30u);
  printf("%s ", (const char *)v11);
  printf("%s :  \n", "check_chain");
  word_600CBC = 32;
  sub_3CC5C(&word_600CBC, v11);
  sub_6DD44(v11);
  if ( dword_21B3A0 != 255 )
    return sub_1E8E8(dword_21B3A0);
  if ( v11[0] )
  {
    sub_1E938(v10, 0x30u);
    printf("%s ", v10);
    printf("%s : info.board_num = %d\n", "check_chain", v11[0]);
    snprintf(byte_600DBC, 0x100u, "info.board_num = %d", v11[0]);
    v2 = sub_3CC5C(byte_600DBC, v10);
    v3 = dword_223680;
    v0 = *(unsigned __int8 *)(dword_223680 + 261);
    if ( *(_BYTE *)(dword_223680 + 261) )
    {
      v4 = v11[0] - 1;
      if ( v11[0] - 1 < 0 )
      {
LABEL_18:
        sub_1F650(0, (const char *)(v3 + 32));
        v0 = 0;
        sub_1F650(1, "check chain fail");
        sub_1F650(2, "no Hashboard");
        byte_2333A8[0] = 0;
        sub_1E938(v10, 0x30u);
        printf("%s ", v10);
        if ( v11[0] )
          v8 = "J4 used as scan gun";
        else
          v8 = "no chain connnected";
        printf("%s : not found hashboard, %s\n", "check_chain", v8);
        if ( v11[0] )
          v9 = "J4 used as scan gun";
        else
          v9 = "no chain connnected";
        snprintf(byte_6011BC, 0x100u, "not found hashboard, %s", v9);
        sub_3CC5C(byte_6011BC, v10);
      }
      else
      {
        v5 = &v11[18 * v11[0]];
        while ( 1 )
        {
          sub_1E938(v10, 0x30u);
          printf("%s ", v10);
          printf("%s : boardID %d\n", "check_chain", *(v5 - 17));
          snprintf(&byte_600DBC[256], 0x100u, "boardID %d", *(v5 - 17));
          v6 = sub_3CC5C(&byte_600DBC[256], v10);
          if ( *(v5 - 17) != 3 )
            break;
          --v4;
          v5 -= 18;
          if ( v4 == -1 )
          {
            v3 = dword_223680;
            goto LABEL_18;
          }
        }
        if ( v4 )
        {
          sub_6FBF4(v6);
          sub_1F650(0, (const char *)(dword_223680 + 32));
          sub_1F650(1, "Only support");
          sub_1F650(2, "one Hashboard");
          byte_2333A8[0] = 0;
          sub_1E938(v10, 0x30u);
          printf("%s ", v10);
          printf("%s : Only support one Hashboard\n", "check_chain");
          strcpy(byte_600FBC, "Only support one Hashboard");
          sub_3CC5C(byte_600FBC, v10);
          return 0;
        }
        dword_21B3A4 = *(v5 - 17);
        byte_2333A8[0] = 1;
        sub_1E938(v10, 0x30u);
        printf("%s ", v10);
        printf("%s : gChain = %d\n", "check_chain", dword_21B3A4);
        snprintf(byte_6010BC, 0x100u, "gChain = %d", dword_21B3A4);
        sub_3CC5C(byte_6010BC, v10);
      }
    }
    else if ( v11[0] == 2 )
    {
      dword_21B3A4 = v11[1];
      byte_2333A8[0] = 1;
      sub_1E938(v10, 0x30u);
      printf("%s ", v10);
      printf("%s : gChain = %d\n", "check_chain", dword_21B3A4);
      snprintf(byte_6013BC, 0x100u, "gChain = %d", dword_21B3A4);
      v7 = sub_3CC5C(byte_6013BC, v10);
      dword_21B3A8 = v11[18 * v11[0] - 17];
      if ( dword_21B3A8 == 3 )
      {
        sub_1E938(v10, 0x30u);
        v0 = 1;
        printf("%s ", v10);
        printf("%s : gCode_gun_chain = %d\n", "check_chain", dword_21B3A8);
        snprintf(byte_6015BC, 0x100u, "gCode_gun_chain = %d", dword_21B3A8);
        sub_3CC5C(byte_6015BC, v10);
      }
      else
      {
        sub_6FBF4(v7);
        sub_1F650(v0, (const char *)(dword_223680 + 32));
        sub_1F650(1, "Scan code gun");
        sub_1F650(2, "don't plug on");
        sub_1F650(3, "J4");
        sub_1E938(v10, 0x30u);
        printf("%s ", v10);
        printf("%s : Scan code gun don't plug on J4\n", "check_chain");
        strcpy(byte_6014BC, "Scan code gun don't plug on J4");
        sub_3CC5C(byte_6014BC, v10);
        byte_2333A8[0] = v0;
      }
    }
    else
    {
      sub_6FBF4(v2);
      sub_1F650(v0, (const char *)(dword_223680 + 32));
      sub_1F650(1, "Only support");
      sub_1F650(2, "one Hashboard");
      sub_1F650(2, "one Code gun");
      sub_1E938(v10, 0x30u);
      printf("%s ", v10);
      printf("%s : Only support one Hashboard and one Code gun\n", "check_chain");
      strcpy(byte_6012BC, "Only support one Hashboard and one Code gun");
      sub_3CC5C(byte_6012BC, v10);
      byte_2333A8[0] = v0;
    }
  }
  else
  {
    sub_6FBF4(255);
    v0 = 0;
    sub_1F650(0, (const char *)(dword_223680 + 32));
    sub_1F650(1, "No Hashboard");
    sub_1F650(2, "No Scan code gun");
    sub_1E938(v10, 0x30u);
    printf("%s ", v10);
    printf("%s : Don't detect hashboard and scan code gun\n", "check_chain");
    strcpy(byte_6016BC, "Don't detect hashboard and scan code gun");
    sub_3CC5C(byte_6016BC, v10);
    byte_2333A8[0] = 0;
  }
  return v0;
}
