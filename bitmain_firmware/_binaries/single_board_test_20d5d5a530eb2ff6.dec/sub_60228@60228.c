int sub_60228()
{
  int v0; // r0
  int v1; // r0
  unsigned int v2; // r6
  int v3; // r4
  int v5; // r7
  _BYTE *v6; // r4
  _BYTE v7[16]; // [sp+0h] [bp-44h] BYREF
  char v8[52]; // [sp+10h] [bp-34h] BYREF

  sub_1E938(v8, 0x30u);
  printf("%s ", v8);
  printf("%s : BTC start %s\n", "receive_function", "receive_function");
  snprintf(byte_64D83C, 0x100u, "BTC start %s", "receive_function");
  v0 = sub_3CC5C((int)byte_64D83C, v8);
  sub_71650(v0);
LABEL_3:
  while ( 1 )
  {
    v3 = (unsigned __int8)byte_5FE774;
    if ( !byte_5FE774 )
      break;
    v1 = usleep(5u);
    v2 = (unsigned int)sub_71270(v1) >> 1;
    if ( v2 )
    {
      v5 = 0;
      while ( 1 )
      {
        sub_712AC(v7);
        if ( (v7[3] & 0x80) != 0 )
        {
          v6 = (_BYTE *)dword_223680;
          if ( *(_BYTE *)dword_223680 == 80
            && *(_BYTE *)(dword_223680 + 1) == 84
            && *(_BYTE *)(dword_223680 + 2) == 49
            && !*(_BYTE *)(dword_223680 + 3)
            || !strcmp((const char *)dword_223680, "PT1new") )
          {
            sub_1E938(v8, 0x30u);
            printf("%s ", v8);
            printf("%s : pt1 do not need nonce, aisc no need return nonce,ignore data.\n", "receive_function");
            strcpy(byte_64D93C, "pt1 do not need nonce, aisc no need return nonce,ignore data.");
            sub_3CC5C((int)byte_64D93C, v8);
          }
          else
          {
            if ( !v6[268] )
            {
              if ( !v6[269] )
              {
                if ( v6[271] )
                {
                  sub_6A80C(v7);
                }
                else
                {
                  sub_1E938(v8, 0x30u);
                  printf("%s ", v8);
                  printf("%s : Test_Method error\n", "receive_function");
                  strcpy(byte_64DA3C, "Test_Method error");
                  sub_3CC5C((int)byte_64DA3C, v8);
                }
                goto LABEL_10;
              }
              if ( !v6[276] )
              {
                sub_6B6B4(v7);
                goto LABEL_10;
              }
LABEL_20:
              sub_6B458(v7);
              goto LABEL_10;
            }
            if ( v6[276] )
              goto LABEL_20;
            sub_6A3F4(v7);
          }
        }
        else
        {
          sub_5FF4C(v7);
        }
LABEL_10:
        if ( v2 <= ++v5 )
          goto LABEL_3;
      }
    }
  }
  sub_1E938(v8, 0x30u);
  printf("%s ", v8);
  printf("%s : BTC %s stop\n", "receive_function", "receive_function");
  snprintf(byte_64DB3C, 0x100u, "BTC %s stop", "receive_function");
  sub_3CC5C((int)byte_64DB3C, v8);
  return v3;
}
