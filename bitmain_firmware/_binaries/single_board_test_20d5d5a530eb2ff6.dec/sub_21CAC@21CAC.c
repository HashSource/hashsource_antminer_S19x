int sub_21CAC()
{
  unsigned int v0; // r0
  int v1; // r10
  int v2; // r9
  int v3; // r9
  int v4; // r2
  int v5; // r9
  const char *v6; // r2
  char *v7; // r2
  int v8; // r3
  int v9; // r1
  int v10; // t1
  char *v11; // r2
  int v12; // r3
  int v13; // r1
  int v14; // t1
  int v16; // [sp+0h] [bp-44h] BYREF
  int v17; // [sp+4h] [bp-40h]
  int v18; // [sp+8h] [bp-3Ch]
  int v19; // [sp+Ch] [bp-38h]
  char v20[52]; // [sp+10h] [bp-34h] BYREF

  sub_1E938(v20, 0x30u);
  printf("%s ", v20);
  printf("%s : Start %s\n", "PT2_show_status_func", "PT2_show_status_func");
  snprintf(byte_602DBC, 0x100u, "Start %s", "PT2_show_status_func");
  v0 = sub_3CC5C(byte_602DBC, v20);
  for ( dword_5FE784 = 0; byte_5FE775; v0 = sleep(1u) )
  {
    while ( 1 )
    {
      v1 = (unsigned __int8)byte_5FE776;
      if ( byte_5FE777 )
        v2 = 2;
      else
        v2 = 0;
      v3 = v2 | (unsigned __int8)byte_5FE776;
      if ( byte_5FE778 )
        v4 = 4;
      else
        v4 = 0;
      v5 = v4 | v3;
      if ( v5 != dword_602FBC )
      {
        dword_5FE784 = 0;
        sub_1E938(v20, 0x30u);
        printf("%s ", v20);
        printf("%s : State changed,reset time counter.\n", "PT2_show_status_func");
        strcpy(byte_602FC0, "State changed,reset time counter.");
        v0 = sub_3CC5C(byte_602FC0, v20);
        v1 = (unsigned __int8)byte_5FE776;
      }
      dword_602FBC = v5;
      if ( v1 || byte_5FE777 )
      {
        sub_6FBF4(v0);
        sub_1F650(0, (const char *)(dword_223680 + 32));
        v6 = "Heating:%ds";
        if ( byte_5FE776 )
          v6 = "Cooling:%ds";
        snprintf((char *)&v16, 0x10u, v6, dword_5FE784, 0, 0, 0, 0);
        sub_1F650(1, (const char *)&v16);
        v16 = 0;
        v17 = 0;
        v18 = 0;
        v19 = 0;
        if ( (_BYTE)dword_227094 )
        {
          v7 = (char *)&unk_2337B0 + (_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 264773;
          v8 = 127;
          do
          {
            v10 = *++v7;
            v9 = v10;
            if ( v8 >= v10 )
              v8 = v9;
          }
          while ( v7 != (char *)&unk_2337B0
                      + (_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894
                      + (unsigned __int8)(dword_227094 - 1)
                      + 264774 );
        }
        else
        {
          v8 = 127;
        }
        snprintf((char *)&v16, 0x10u, "Temp Min:%d", v8);
        sub_1F650(2, (const char *)&v16);
        v16 = 0;
        v17 = 0;
        v18 = 0;
        v19 = 0;
        if ( (_BYTE)dword_227094 )
        {
          v11 = (char *)&unk_2337B0 + (_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 264773;
          v12 = -128;
          do
          {
            v14 = *++v11;
            v13 = v14;
            if ( v12 < v14 )
              v12 = v13;
          }
          while ( v11 != (char *)&unk_2337B0
                       + (_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894
                       + (unsigned __int8)(dword_227094 - 1)
                       + 264774 );
        }
        else
        {
          v12 = -128;
        }
        snprintf((char *)&v16, 0x10u, "Temp Max:%d", v12);
        sub_1F650(3, (const char *)&v16);
      }
      else if ( byte_5FE778 )
      {
        sub_6FBF4(v0);
        sub_1F650(0, (const char *)(dword_223680 + 32));
        v16 = 0;
        v17 = 0;
        v18 = 0;
        v19 = 0;
        snprintf((char *)&v16, 0x10u, "time:%ds", dword_5FE784);
        sub_1F650(1, (const char *)&v16);
        v17 = 0;
        v18 = 0;
        v19 = 0;
        v16 = 0;
        snprintf(
          (char *)&v16,
          0x10u,
          "nonce=%d",
          *(_DWORD *)&byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 1072]);
        sub_1F650(2, (const char *)&v16);
        v17 = 0;
        v18 = 0;
        v19 = 0;
        v16 = 0;
        snprintf(
          (char *)&v16,
          0x10u,
          "vol:%d",
          dword_6E3300 + *(_DWORD *)&byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 1060]);
        sub_1F650(3, (const char *)&v16);
      }
      ++dword_5FE784;
      if ( dword_5FE784 == 5 * (dword_5FE784 / 5u) )
        break;
      v0 = sleep(1u);
      if ( !byte_5FE775 )
        goto LABEL_31;
    }
    sub_1E938(v20, 0x30u);
    printf("%s ", v20);
    printf("%s : time = %d\n", "PT2_show_status_func", dword_5FE784);
    snprintf(byte_6030C0, 0x100u, "time = %d", dword_5FE784);
    sub_3CC5C(byte_6030C0, v20);
    sub_1E938(v20, 0x30u);
    printf("%s ", v20);
    printf(
      "%s : gValid_Nonce_Num = %d\n",
      "PT2_show_status_func",
      *(_DWORD *)&byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 1072]);
    snprintf(
      byte_6031C0,
      0x100u,
      "gValid_Nonce_Num = %d",
      *(_DWORD *)&byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 1072]);
    sub_3CC5C(byte_6031C0, v20);
  }
LABEL_31:
  sub_1E938(v20, 0x30u);
  printf("%s ", v20);
  printf("%s : %s stop\n", "PT2_show_status_func", "PT2_show_status_func");
  snprintf(byte_602EBC, 0x100u, "%s stop", "PT2_show_status_func");
  sub_3CC5C(byte_602EBC, v20);
  return 0;
}
