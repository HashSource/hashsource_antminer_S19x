int __fastcall sub_22D88(unsigned int a1)
{
  int v1; // r6
  int v2; // r5
  int v3; // r0
  double v4; // d8
  int v5; // r0
  int v6; // r0
  int v7; // r0
  _DWORD *v9; // r4
  int *v10; // r3
  int v11; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int v15; // r4
  const char *v16; // r1
  char v18[48]; // [sp+10h] [bp-30h] BYREF

  sub_1E938(v18, 0x30u);
  printf("%s ", v18);
  printf("%s : %s\n", "APW_power_on", "APW_power_on");
  strcpy(byte_604DC4, "APW_power_on");
  sub_3CC5C(byte_604DC4, v18);
  sub_1E938(v18, 0x30u);
  printf("%s ", v18);
  printf("%s : voltage:%d\n", "APW_power_on", a1);
  snprintf(byte_604EC4, 0x100u, "voltage:%d", a1);
  sub_3CC5C(byte_604EC4, v18);
  v1 = dword_6E3304;
  v2 = sub_22A2C(dword_6E3304);
  if ( !v2 )
  {
    byte_5FE775 = 0;
    byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 1038] = 0;
    sub_6FBF4(&loc_40A50);
    sub_1F650(0, (const char *)(dword_223680 + 32));
    sub_1F650(1, "APW version");
    sub_1F650(2, "error");
    sub_1E938(v18, 0x30u);
    printf("%s ", v18);
    printf("%s : Can't match APW version: %d\n", "APW_power_on", v1);
    snprintf(&byte_604EC4[256], 0x100u, "Can't match APW version: %d", v1);
    sub_3CC5C(&byte_604EC4[256], v18);
    return 0;
  }
  sub_1E938(v18, 0x30u);
  printf("%s ", v18);
  printf("%s : Read out APW versions is 0x%02x\n", "APW_power_on", v1);
  snprintf(byte_6050C4, 0x100u, "Read out APW versions is 0x%02x", v1);
  sub_3CC5C(byte_6050C4, v18);
  v3 = sub_75570(0);
  v4 = (double)a1 / 100.0;
  v5 = sub_75B90(v3);
  if ( v5 < 0 )
  {
    v15 = sub_75B90(v5);
    if ( v15 >= 0 )
    {
      sub_1E938(v18, 0x30u);
      printf("%s ", v18);
      printf("%s : APW set voltage ok, voltage is %02f\n", "APW_power_on", v4);
      snprintf(byte_6052C4, 0x100u, "APW set voltage ok, voltage is %02f", v4);
      v6 = sub_3CC5C(byte_6052C4, v18);
      goto LABEL_4;
    }
    v16 = (const char *)(dword_223680 + 32);
    byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 1038] = 0;
    sub_1F650(0, v16);
    sub_1F650(1, "APW set voltage");
    sub_1F650(2, "error");
    sub_1E938(v18, 0x30u);
    printf("%s ", v18);
    printf("%s : APW set voltage error ret=0x%x!!!\n", "APW_power_on", v15);
    snprintf(byte_6051C4, 0x100u, "APW set voltage error ret=0x%x!!!", v15);
    sub_3CC5C(byte_6051C4, v18);
    return 0;
  }
  sub_1E938(v18, 0x30u);
  printf("%s ", v18);
  printf("%s : APW set voltage ok, voltage is %02f\n", "APW_power_on", v4);
  snprintf(byte_6053C4, 0x100u, "APW set voltage ok, voltage is %02f", v4);
  v6 = sub_3CC5C(byte_6053C4, v18);
LABEL_4:
  v7 = sub_6F464(v6);
  if ( v7 )
  {
    if ( sub_6F464(v7) )
    {
      byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 1038] = 0;
      sub_6FBF4(&loc_40A50);
      sub_1F650(0, (const char *)(dword_223680 + 32));
      sub_1F650(1, "APW Power on");
      sub_1F650(2, "fail");
      sub_1E938(v18, 0x30u);
      printf("%s ", v18);
      printf("%s : APW power on fail\n", "APW_power_on");
      strcpy(byte_6054C4, "APW power on fail");
      sub_3CC5C(byte_6054C4, v18);
      return 0;
    }
    sub_1E938(v18, 0x30u);
    v9 = &unk_6055C4;
    printf("%s ", v18);
    printf("%s : APW power on ok\n", "APW_power_on");
    LOWORD(v10) = 4416;
  }
  else
  {
    sub_1E938(v18, 0x30u);
    v9 = &unk_6056C4;
    printf("%s ", v18);
    printf("%s : APW power on ok\n", "APW_power_on");
    LOWORD(v10) = (unsigned __int16)"APW power on ok";
  }
  HIWORD(v10) = (unsigned int)"APW power on ok" >> 16;
  v11 = *v10;
  v12 = v10[1];
  v13 = v10[2];
  v14 = v10[3];
  *v9 = v11;
  v9[1] = v12;
  v9[2] = v13;
  v9[3] = v14;
  sub_3CC5C(v9, v18);
  return v2;
}
